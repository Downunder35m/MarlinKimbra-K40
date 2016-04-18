#ifndef COMMUNICATION_H
  #define COMMUNICATION_H

  #define START       "start"               // start for host
  #define OK          "ok "                 // ok answer for host
  #define ER          "Error: "             // error for host
  #define WT          "Wait"                // wait for host
  #define DB          "Echo: "              // message for user
  #define DEB         "Debug: "             // message for debug
  #define CFG         "Config: "            // config for host
  #define INFO        "Info: "              // info for host
  #define RESEND      "Resend: "            // resend for host
  #define WARNING     "Warning: "           // warning for host
  #define TNAN        "NAN"                 // NAN for host
  #define TINF        "INF"                 // INF for host
  #define PAUSE       "//action:pause"      // command for host that support action
  #define RESUME      "//action:resume"     // command for host that support action
  #define DISCONNECT  "//action:disconnect" // command for host that support action

  #define SERIAL_INIT(baud)           MKSERIAL.begin(baud), HAL::delayMilliseconds(1)
  #define SERIAL_WRITE(x)             MKSERIAL.write(x)
  #define SERIAL_PRINT(msg, args...)  MKSERIAL.print(msg, ##args)
  #define SERIAL_ENDL                 MKSERIAL.println()

  FORCE_INLINE void PS_PGM(const char *str) {
    char c;
    while (c = pgm_read_byte(str)) {
      SERIAL_WRITE(c);
      str++;
    }
  }

  #define ECHO_ENDL                         SERIAL_ENDL
  #define ECHO_PGM(message)                 PS_PGM(PSTR(message))

  #define ECHO_S(srt)                       ECHO_PGM(srt)
  #define ECHO_M(msg)                       ECHO_PGM(msg)
  #define ECHO_T                            SERIAL_PRINT
  #define ECHO_V                            SERIAL_PRINT
  #define ECHO_C                            SERIAL_WRITE
  #define ECHO_E                            SERIAL_ENDL

  #define ECHO_MV(msg, val, args...)        ECHO_M(msg),ECHO_V(val, ##args)
  #define ECHO_VM(val, msg, args...)        ECHO_V(val, ##args),ECHO_M(msg)
  #define ECHO_MT(msg, txt)                 ECHO_M(msg),ECHO_T(txt)
  #define ECHO_TM(txt, msg)                 ECHO_T(txt),ECHO_M(msg)

  #define ECHO_SM(srt, msg)                 ECHO_S(srt),ECHO_M(msg)
  #define ECHO_ST(srt, txt)                 ECHO_S(srt),ECHO_T(txt)
  #define ECHO_SV(srt, val, args...)        ECHO_S(srt),ECHO_V(val, ##args)
  #define ECHO_SMV(srt, msg, val, args...)  ECHO_S(srt),ECHO_MV(msg, val, ##args)
  #define ECHO_SMT(srt, msg, txt)           ECHO_S(srt),ECHO_MT(msg, txt)

  #define ECHO_EM(msg)                      ECHO_M(msg),ECHO_E
  #define ECHO_ET(txt)                      ECHO_T(txt),ECHO_E
  #define ECHO_EV(val, args...)             ECHO_V(val, ##args),ECHO_E
  #define ECHO_EMV(msg, val, args...)       ECHO_MV(msg, val, ##args),ECHO_E
  #define ECHO_EVM(val, msg, args...)       ECHO_VM(val, msg, ##args),ECHO_E
  #define ECHO_EMT(msg, txt)                ECHO_MT(msg, txt),ECHO_E

  #define ECHO_L(srt)                       ECHO_S(srt),ECHO_E
  #define ECHO_LM(srt, msg)                 ECHO_S(srt),ECHO_M(msg),ECHO_E
  #define ECHO_LT(srt, txt)                 ECHO_S(srt),ECHO_T(txt),ECHO_E
  #define ECHO_LV(srt, val, args...)        ECHO_S(srt),ECHO_V(val, ##args),ECHO_E
  #define ECHO_LMV(srt, msg, val, args...)  ECHO_S(srt),ECHO_MV(msg, val, ##args),ECHO_E
  #define ECHO_LVM(srt, val, msg, args...)  ECHO_S(srt),ECHO_VM(val, msg, ##args),ECHO_E
  #define ECHO_LMT(srt, msg, txt)           ECHO_S(srt),ECHO_MT(msg, txt),ECHO_E

#endif
