/* Generated automatically from machmode.def and config/i386/i386-modes.def
   by genmodes.  */

#ifndef GCC_INSN_MODES_H
#define GCC_INSN_MODES_H

enum machine_mode
{
  VOIDmode,                /* q:\kitware\gccxml\gcc\gcc\machmode.def:150 */
  BLKmode,                 /* q:\kitware\gccxml\gcc\gcc\machmode.def:154 */
  CCmode,                  /* q:\kitware\gccxml\gcc\gcc\machmode.def:182 */
  CCGCmode,                /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:58 */
  CCGOCmode,               /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:59 */
  CCNOmode,                /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:60 */
  CCZmode,                 /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:61 */
  CCFPmode,                /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:62 */
  CCFPUmode,               /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:63 */
  BImode,                  /* q:\kitware\gccxml\gcc\gcc\machmode.def:157 */
  QImode,                  /* q:\kitware\gccxml\gcc\gcc\machmode.def:162 */
  HImode,                  /* q:\kitware\gccxml\gcc\gcc\machmode.def:163 */
  SImode,                  /* q:\kitware\gccxml\gcc\gcc\machmode.def:164 */
  DImode,                  /* q:\kitware\gccxml\gcc\gcc\machmode.def:165 */
  TImode,                  /* q:\kitware\gccxml\gcc\gcc\machmode.def:166 */
  SFmode,                  /* q:\kitware\gccxml\gcc\gcc\machmode.def:177 */
  DFmode,                  /* q:\kitware\gccxml\gcc\gcc\machmode.def:178 */
  XFmode,                  /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:25 */
  TFmode,                  /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:26 */
  SDmode,                  /* q:\kitware\gccxml\gcc\gcc\machmode.def:194 */
  DDmode,                  /* q:\kitware\gccxml\gcc\gcc\machmode.def:195 */
  TDmode,                  /* q:\kitware\gccxml\gcc\gcc\machmode.def:196 */
  CQImode,                 /* q:\kitware\gccxml\gcc\gcc\machmode.def:190 */
  CHImode,                 /* q:\kitware\gccxml\gcc\gcc\machmode.def:190 */
  CSImode,                 /* q:\kitware\gccxml\gcc\gcc\machmode.def:190 */
  CDImode,                 /* q:\kitware\gccxml\gcc\gcc\machmode.def:190 */
  CTImode,                 /* q:\kitware\gccxml\gcc\gcc\machmode.def:190 */
  SCmode,                  /* q:\kitware\gccxml\gcc\gcc\machmode.def:191 */
  DCmode,                  /* q:\kitware\gccxml\gcc\gcc\machmode.def:191 */
  XCmode,                  /* q:\kitware\gccxml\gcc\gcc\machmode.def:191 */
  TCmode,                  /* q:\kitware\gccxml\gcc\gcc\machmode.def:191 */
  V4QImode,                /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:66 */
  V2HImode,                /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:66 */
  V8QImode,                /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:67 */
  V4HImode,                /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:67 */
  V2SImode,                /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:67 */
  V16QImode,               /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:68 */
  V8HImode,                /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:68 */
  V4SImode,                /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:68 */
  V2DImode,                /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:68 */
  V32QImode,               /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:74 */
  V16HImode,               /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:73 */
  V8SImode,                /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:72 */
  V4DImode,                /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:71 */
  V2SFmode,                /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:69 */
  V4SFmode,                /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:70 */
  V2DFmode,                /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:70 */
  V8SFmode,                /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:76 */
  V4DFmode,                /* q:\kitware\gccxml\gcc\gcc\config/i386/i386-modes.def:75 */
  MAX_MACHINE_MODE,

  MIN_MODE_RANDOM = VOIDmode,
  MAX_MODE_RANDOM = BLKmode,

  MIN_MODE_CC = CCmode,
  MAX_MODE_CC = CCFPUmode,

  MIN_MODE_INT = QImode,
  MAX_MODE_INT = TImode,

  MIN_MODE_PARTIAL_INT = VOIDmode,
  MAX_MODE_PARTIAL_INT = VOIDmode,

  MIN_MODE_FLOAT = SFmode,
  MAX_MODE_FLOAT = TFmode,

  MIN_MODE_DECIMAL_FLOAT = SDmode,
  MAX_MODE_DECIMAL_FLOAT = TDmode,

  MIN_MODE_COMPLEX_INT = CQImode,
  MAX_MODE_COMPLEX_INT = CTImode,

  MIN_MODE_COMPLEX_FLOAT = SCmode,
  MAX_MODE_COMPLEX_FLOAT = TCmode,

  MIN_MODE_VECTOR_INT = V4QImode,
  MAX_MODE_VECTOR_INT = V4DImode,

  MIN_MODE_VECTOR_FLOAT = V2SFmode,
  MAX_MODE_VECTOR_FLOAT = V4DFmode,

  NUM_MACHINE_MODES = MAX_MACHINE_MODE
};

#define CONST_MODE_SIZE
#define CONST_MODE_BASE_ALIGN

#endif /* insn-modes.h */
