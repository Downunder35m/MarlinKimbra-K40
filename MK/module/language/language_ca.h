/**
 * Catalan
 *
 * LCD Menu Messages
 * See also documentation/LCDLanguageFont.md
 *
 */
#ifndef LANGUAGE_CA_H
#define LANGUAGE_CA_H

#define MAPPER_C2C3                 // because of "ó"
#define DISPLAY_CHARSET_ISO10646_1


#define WELCOME_MSG                         MACHINE_NAME " preparada."
#define MSG_SD                              "SD"
#define MSG_SD_INSERTED                     MSG_SD " detectada."
#define MSG_SD_REMOVED                      MSG_SD " expulsada."
#define MSG_MAIN                            "Menu principal"
#define MSG_AUTOSTART                       "Inici automatic"
#define MSG_DISABLE_STEPPERS                "Apagar motors"
#define MSG_AUTO_HOME                       "Home global"
#define MSG_MBL_SETTING                     "Manual Bed Leveling"
#define MSG_MBL_BUTTON                      " Press the button   "
#define MSG_MBL_INTRO                       " Leveling bed...    "
#define MSG_MBL_1                           " Adjust first point "
#define MSG_MBL_2                           " Adjust second point"
#define MSG_MBL_3                           " Adjust third point "
#define MSG_MBL_4                           " Adjust fourth point"
#define MSG_MBL_5                           "    Is it ok?       "
#define MSG_MBL_6                           " BED leveled!       "
#define MSG_SET_HOME_OFFSETS                "Set home offsets"
#define MSG_SET_ORIGIN                      "Establir origen"
#define MSG_ONFOR                           "On x:"
#define MSG_PWRCONSUMED                     "P.er:"
#define MSG_FILCONSUMED                     "F:"
#define MSG_PREHEAT                         "Preesc."
#define MSG_PREHEAT_PLA                     MSG_PREHEAT " PLA"
#define MSG_PREHEAT_PLA_ALL                 MSG_PREHEAT_PLA " All"
#define MSG_PREHEAT_PLA_BEDONLY             MSG_PREHEAT_PLA " llit"
#define MSG_PREHEAT_PLA_SETTINGS            "PLA Configuracio"
#define MSG_PREHEAT_ABS                     MSG_PREHEAT " ABS"
#define MSG_PREHEAT_ABS_ALL                 MSG_PREHEAT_ABS " All"
#define MSG_PREHEAT_ABS_BEDONLY             MSG_PREHEAT_ABS " llit"
#define MSG_PREHEAT_ABS_SETTINGS            "ABS Configuracio"
#define MSG_PREHEAT_GUM                     MSG_PREHEAT " GUM"
#define MSG_PREHEAT_GUM_ALL                 MSG_PREHEAT_GUM " All"
#define MSG_PREHEAT_GUM_BEDONLY             MSG_PREHEAT_GUM " Bed"
#define MSG_PREHEAT_GUM_SETTINGS            "GUM Configuracio"
#define MSG_TOO_COLD_FOR_FILAMENTCHANGE     "Hotend too cold to change filament"
#define MSG_COOLDOWN                        "Refredar"
#define MSG_SWITCH_PS_ON                    "Switch power on"
#define MSG_SWITCH_PS_OFF                   "Switch power off"
#define MSG_EXTRUDE                         "Extruir"
#define MSG_RETRACT                         "Refredar"
#define MSG_PURGE                           "Purge"
#define MSG_LEVEL_BED                       "Level bed"
#define MSG_SPEED                           "Velocitat"
#define MSG_NOZZLE                          "Nozzle"
#define MSG_BED                             "Llit"
#define MSG_FAN_SPEED                       "Vel. Ventilador"
#define MSG_FLOW                            "Fluxe"
#define MSG_CONTROL                         "Control"
#define MSG_STATS                           "Statistics"
#define MSG_FIX_LOSE_STEPS                  "Fix axis steps"
#define MSG_MIN                             LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Fact"
#define MSG_IDLEOOZING                      "Anti oozing"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "ON "
#define MSG_OFF                             "OFF"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_H1                              " H1"
#define MSG_H2                              " H2"
#define MSG_H3                              " H3"
#define MSG_ACC                             "Accel"
#define MSG_VXY_JERK                        "Vxy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_X                               "X"
#define MSG_Y                               "Y"
#define MSG_Z                               "Z"
#define MSG_E                               "E"
#define MSG_MOVE                            "Move"
#define MSG_MOVE_AXIS                       MSG_MOVE " eixos"
#define MSG_MOVE_X                          MSG_MOVE " " MSG_X
#define MSG_MOVE_Y                          MSG_MOVE " " MSG_Y
#define MSG_MOVE_Z                          MSG_MOVE " " MSG_Z
#define MSG_MOVE_01MM                       MSG_MOVE " 0.1mm"
#define MSG_MOVE_1MM                        MSG_MOVE " 1mm"
#define MSG_MOVE_10MM                       MSG_MOVE " 10mm"
#define MSG_MOVE_E                          "Extrusor"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_A_TRAVEL                        "A-travel"
#define MSG_XSTEPS                          MSG_X " passos/mm"
#define MSG_YSTEPS                          MSG_Y " passos/mm"
#define MSG_ZSTEPS                          MSG_Z " passos/mm"
#define MSG_E0STEPS                         MSG_E "0 passos/mm"
#define MSG_E1STEPS                         MSG_E "1 passos/mm"
#define MSG_E2STEPS                         MSG_E "2 passos/mm"
#define MSG_E3STEPS                         MSG_E "3 passos/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Moviment"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED              MSG_E " in mm3"
#define MSG_FILAMENT_SIZE_EXTRUDER          "Fil. Dia."
#define MSG_CONTRAST                        "Contrast de LCD"
#define MSG_STORE_EPROM                     "Desar a memoria"
#define MSG_LOAD_EPROM                      "Carregar de mem."
#define MSG_RESTORE_FAILSAFE                "Rest. emergencia"
#define MSG_REFRESH                         "Refrescar"
#define MSG_WATCH                           "Pantalla Info."
#define MSG_PREPARE                         "Preparar"
#define MSG_TUNE                            "Calibrar"
#define MSG_PAUSE_PRINT                     "Pausa imp."
#define MSG_RESUME_PRINT                    "Reprendre imp."
#define MSG_STOP_PRINT                      "Parar inp."
#define MSG_CARD_MENU                       "Imprimir de " MSG_SD
#define MSG_NO_CARD                         "Sense targeta " MSG_SD
#define MSG_DWELL                           "Repos..."
#define MSG_USERWAIT                        "Esperant usuari.."
#define MSG_RESUMING                        "Reprenent imp."
#define MSG_PRINT_ABORTED                   "Print aborted"
#define MSG_NO_MOVE                         "Sense moviment."
#define MSG_KILLED                          "PARADA DE EMERG. "
#define MSG_STOPPED                         "ATURAT. "
#define MSG_CONTROL_RETRACT                 "Retreure mm"
#define MSG_CONTROL_RETRACT_SWAP            "Swap Re. mm"
#define MSG_CONTROL_RETRACTF                "Retreure  F"
#define MSG_CONTROL_RETRACT_ZLIFT           "Aixecar mm"
#define MSG_CONTROL_RETRACT_RECOVER         "DesRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Swap DesRet +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "DesRet  F"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Canviar filament"
#define MSG_INIT_SDCARD                     "Iniciant " MSG_SD
#define MSG_CNG_SDCARD                      "Canviar " MSG_SD
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
#define MSG_POSITION_UNKNOWN                "Home X/Y abans Z"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP                        "Babystep"
#define MSG_BABYSTEP_X                      MSG_BABYSTEP " " MSG_X
#define MSG_BABYSTEP_Y                      MSG_BABYSTEP " " MSG_Y
#define MSG_BABYSTEP_Z                      MSG_BABYSTEP " " MSG_Z
#define MSG_ENDSTOP_ABORT                   "Endstop abort"
#define MSG_HEATING_FAILED_LCD              "Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              "REDUNDANT TEMP ERROR"
#define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
#define MSG_HOTEND_AD595                    "HOTEND AD595 Offset & Gain"
#define MSG_ERR_MAXTEMP                     "MAXTEMP ERROR"
#define MSG_ERR_MINTEMP                     "MINTEMP ERROR"
#define MSG_ERR_MAXTEMP_BED                 "MAXTEMP BED ERROR"
#define MSG_ERR_MINTEMP_BED                 "MINTEMP BED ERROR"
#define MSG_END_DAY                         "days"
#define MSG_END_HOUR                        "hours"
#define MSG_END_MINUTE                      "minutes"

#define MSG_ENDSTOPS_HIT                    "endstops hit: "
#define MSG_BABYSTEPPING                    "Babystepping"
#define MSG_BABYSTEPPING_X                  MSG_BABYSTEPPING " " MSG_X
#define MSG_BABYSTEPPING_Y                  MSG_BABYSTEPPING " " MSG_Y
#define MSG_BABYSTEPPING_Z                  MSG_BABYSTEPPING " " MSG_Z

#define MSG_ENDSTOP_XS                      MSG_X
#define MSG_ENDSTOP_YS                      MSG_Y
#define MSG_ENDSTOP_ZS                      MSG_Z
#define MSG_ENDSTOP_ZPS                     MSG_Z "P"
#define MSG_ENDSTOP_ES                      MSG_E

// Calibrate Delta
#if MECH(DELTA)
  #define MSG_DELTA_CALIBRATE               "Delta Calibration"
  #define MSG_DELTA_CALIBRATE_X             "Calibrate " MSG_X
  #define MSG_DELTA_CALIBRATE_Y             "Calibrate " MSG_Y
  #define MSG_DELTA_CALIBRATE_Z             "Calibrate " MSG_Z
  #define MSG_DELTA_CALIBRATE_CENTER        "Calibrate Center"
#endif // DELTA

// Scara
#if MECH(SCARA)
  #define MSG_SCALE                         "Scale"
  #define MSG_XSCALE                        MSG_X " " MSG_SCALE
  #define MSG_YSCALE                        MSG_Y " " MSG_SCALE
#endif

#define MSG_HEATING                         "Heating..."
#define MSG_HEATING_COMPLETE                "Heating done."
#define MSG_BED_HEATING                     "Bed Heating."
#define MSG_BED_DONE                        "Bed done."

// Extra
#define MSG_LASER                           "Laser Preset"
#define MSG_CONFIG                          "Configuration"
#define MSG_E_BOWDEN_LENGTH                 MSG_EXTRUDE " " STRINGIFY(BOWDEN_LENGTH) "mm"
#define MSG_R_BOWDEN_LENGTH                 MSG_RETRACT " " STRINGIFY(BOWDEN_LENGTH) "mm"
#define MSG_PURGE_XMM                       MSG_PURGE " " STRINGIFY(LCD_PURGE_LENGTH) "mm"
#define MSG_RETRACT_XMM                     MSG_RETRACT " " STRINGIFY(LCD_RETRACT_LENGTH) "mm"
#define MSG_SAVED_POS                       "Saved position"
#define MSG_RESTORING_POS                   "Restoring position"
#define MSG_INVALID_POS_SLOT                "Invalid slot, total slots: "

// Rfid module
#if ENABLED(RFID_MODULE)
  #define MSG_RFID_SPOOL                    "Spool on E"
  #define MSG_RFID_BRAND                    "Brand: "
  #define MSG_RFID_COLOR                    "Color: "
  #define MSG_RFID_SIZE                     "Size: "
  #define MSG_RFID_TEMPERATURE              "Temperature: "
  #define MSG_RFID_DENSITY                  "Density: "
  #define MSG_RFID_SPOOL_LENGHT             "Spool Lenght: "
#endif

// Firmware Test
#if ENABLED(FIRMWARE_TEST)
  #define MSG_FWTEST_YES                    "Put the Y command to go next"
  #define MSG_FWTEST_NO                     "Put the N command to go next"
  #define MSG_FWTEST_YES_NO                 "Put the Y or N command to go next"
  #define MSG_FWTEST_ENDSTOP_ERR            "ENDSTOP ERROR! Check wire and connection"
  #define MSG_FWTEST_PRESS                  "Press and hold the endstop "
  #define MSG_FWTEST_INVERT                 "Reverse value of "
  #define MSG_FWTEST_XAXIS                  "Has the nozzle moved to the right?"
  #define MSG_FWTEST_YAXIS                  "Has the nozzle moved forward?"
  #define MSG_FWTEST_ZAXIS                  "Has the nozzle moved up?"
  #define MSG_FWTEST_01                     "Manually move the axes X, Y and Z away from the endstop"
  #define MSG_FWTEST_02                     "Do you want check ENDSTOP?"
  #define MSG_FWTEST_03                     "Start check ENDSTOP"
  #define MSG_FWTEST_04                     "Start check MOTOR"
  #define MSG_FWTEST_ATTENTION              "ATTENTION! Check that the three axes are more than 5 mm from the endstop!"
  #define MSG_FWTEST_END                    "Finish Test. Disable FIRMWARE_TEST and recompile."
  #define MSG_FWTEST_INTO                   "into "
  #define MSG_FWTEST_ERROR                  "ERROR"
  #define MSG_FWTEST_OK                     "OK"
  #define MSG_FWTEST_NDEF                   "not defined"
#endif // FIRMWARE_TEST

#endif // LANGUAGE_CA_H
