#include "../../base.h"

#if HAS(BUZZER)
  #include "buzzer.h"

  void buzz(long duration, uint16_t freq) {
    if (freq > 0) {
      #if ENABLED(LCD_USE_I2C_BUZZER)
        lcd_buzz(duration, freq);
      #elif PIN_EXISTS(BEEPER) // on-board buzzers have no further condition
        SET_OUTPUT(BEEPER_PIN);
        #if ENABLED(SPEAKER) // a speaker needs a AC ore a pulsed DC
          //tone(BEEPER_PIN, freq, duration); // needs a PWMable pin
          unsigned int delay = 1000000 / freq / 2;
          int i = duration * freq / 1000;
          while (i--) {
            WRITE(BEEPER_PIN, HIGH);
            HAL::delayMicroseconds(delay);
            WRITE(BEEPER_PIN, LOW);
            HAL::delayMicroseconds(delay);
          }
        #else // buzzer has its own resonator - needs a DC
          tone(BEEPER_PIN, freq, duration);
          HAL::delayMilliseconds(1 + duration);
        #endif
      #else
        HAL::delayMilliseconds(duration);
      #endif
    }
    else {
      HAL::delayMilliseconds(duration);
    }
  }
#endif
