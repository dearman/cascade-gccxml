/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "expr.h"
#include "optabs.h"
#include "real.h"
#include "flags.h"
#include "output.h"
#include "insn-config.h"
#include "hard-reg-set.h"
#include "recog.h"
#include "resource.h"
#include "reload.h"
#include "toplev.h"
#include "tm-constrs.h"
#include "ggc.h"

#include "basic-block.h"

#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:555 */
rtx
gen_cmpdi_ccno_1_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	17),
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:584 */
rtx
gen_cmpdi_1_insn_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	17),
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:752 */
rtx
gen_cmpqi_ext_3_insn (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	17),
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_SUBREG (QImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	0),
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:766 */
rtx
gen_cmpqi_ext_3_insn_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	17),
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_SUBREG (QImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	0),
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:946 */
rtx
gen_x86_fnstsw_1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_REG (CCFPmode,
	18)),
	21));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:958 */
rtx
gen_x86_sahf_1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (1,
		operand0),
	22));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1123 */
rtx
gen_popsi1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1783 */
rtx
gen_movsi_insv_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand1);
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1793 */
rtx
gen_movdi_insv_1_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (DImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand1);
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1901 */
rtx
gen_popdi1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2892 */
rtx
gen_swapxf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand0)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2983 */
rtx
gen_zero_extendhisi2_and (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3163 */
rtx
gen_zero_extendsidi2_32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3177 */
rtx
gen_zero_extendsidi2_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3215 */
rtx
gen_zero_extendhidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3223 */
rtx
gen_zero_extendqidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3255 */
rtx
gen_extendsidi2_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3267 */
rtx
gen_extendhidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3275 */
rtx
gen_extendqidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3357 */
rtx
gen_extendhisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3410 */
rtx
gen_extendqihi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3436 */
rtx
gen_extendqisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3891 */
rtx
gen_truncxfsf2_i387_noop (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3989 */
rtx
gen_truncxfdf2_i387_noop (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4140 */
rtx
gen_fix_truncsfdi_sse (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4149 */
rtx
gen_fix_truncdfdi_sse (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4158 */
rtx
gen_fix_truncsfsi_sse (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4167 */
rtx
gen_fix_truncdfsi_sse (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4195 */
rtx
gen_fix_trunchi_fisttp_i387_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4195 */
rtx
gen_fix_truncsi_fisttp_i387_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4195 */
rtx
gen_fix_truncdi_fisttp_i387_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4222 */
rtx
gen_fix_trunchi_i387_fisttp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4222 */
rtx
gen_fix_truncsi_i387_fisttp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4222 */
rtx
gen_fix_truncdi_i387_fisttp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4235 */
rtx
gen_fix_trunchi_i387_fisttp_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4235 */
rtx
gen_fix_truncsi_i387_fisttp_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4235 */
rtx
gen_fix_truncdi_i387_fisttp_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4308 */
rtx
gen_fix_truncdi_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4322 */
rtx
gen_fix_truncdi_i387_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4366 */
rtx
gen_fix_trunchi_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4366 */
rtx
gen_fix_truncsi_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4379 */
rtx
gen_fix_trunchi_i387_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4379 */
rtx
gen_fix_truncsi_i387_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4418 */
rtx
gen_x86_fnstcw_1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_REG (HImode,
	18)),
	23));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4427 */
rtx
gen_x86_fldcw_1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	18),
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand0),
	25));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4664 */
rtx
gen_floathixf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (XFmode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4676 */
rtx
gen_floatsixf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (XFmode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4688 */
rtx
gen_floatdixf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (XFmode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4814 */
rtx
gen_adddi3_carry_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_PLUS (DImode,
	operand3,
	operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4838 */
rtx
gen_addqi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	gen_rtx_PLUS (QImode,
	operand3,
	operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4850 */
rtx
gen_addhi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	gen_rtx_PLUS (HImode,
	operand3,
	operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4862 */
rtx
gen_addsi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	operand3,
	operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4899 */
rtx
gen_addqi3_cc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand1,
		operand2),
	24)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5460 */
rtx
gen_addsi_1_zext (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6357 */
rtx
gen_addqi_ext_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_PLUS (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6543 */
rtx
gen_subdi3_carry_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	gen_rtx_PLUS (DImode,
	operand3,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6591 */
rtx
gen_subqi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	gen_rtx_PLUS (QImode,
	operand3,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6603 */
rtx
gen_subhi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	gen_rtx_PLUS (HImode,
	operand3,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6615 */
rtx
gen_subsi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand3,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6627 */
rtx
gen_subsi3_carry_zext (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_MINUS (SImode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand3,
	operand2)))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7352 */
rtx
gen_divqi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7362 */
rtx
gen_udivqi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7562 */
rtx
gen_divmodhi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (HImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (HImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7575 */
rtx
gen_udivmoddi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7618 */
rtx
gen_udivmodsi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7729 */
rtx
gen_testsi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	17),
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_AND (SImode,
	operand0,
	operand1),
	const0_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8358 */
rtx
gen_andqi_ext_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8764 */
rtx
gen_iorqi_ext_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_IOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9102 */
rtx
gen_xorqi_ext_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9587 */
rtx
gen_copysignsf3_const (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9603 */
rtx
gen_copysignsf3_var (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5),
	50)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V4SFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9683 */
rtx
gen_copysigndf3_const (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9699 */
rtx
gen_copysigndf3_var (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5),
	50)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V2DFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10254 */
rtx
gen_ashlti3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (TImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10292 */
rtx
gen_x86_64_shld (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (DImode,
	gen_rtx_ASHIFT (DImode,
	operand0,
	operand2),
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (64)],
	operand2)))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10506 */
rtx
gen_x86_shld_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	operand0,
	operand2),
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	operand2)))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11229 */
rtx
gen_ashrti3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (TImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11267 */
rtx
gen_x86_64_shrd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (DImode,
	gen_rtx_ASHIFTRT (DImode,
	operand0,
	operand2),
	gen_rtx_ASHIFT (DImode,
	operand1,
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (64)],
	operand2)))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11435 */
rtx
gen_x86_shrd_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFTRT (SImode,
	operand0,
	operand2),
	gen_rtx_ASHIFT (SImode,
	operand1,
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	operand2)))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11479 */
rtx
gen_ashrsi3_31 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11924 */
rtx
gen_lshrti3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (TImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12510 */
rtx
gen_ix86_rotldi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12734 */
rtx
gen_ix86_rotrdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13896 */
rtx
gen_jump (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14241 */
rtx
gen_blockage (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	0);
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14263 */
rtx
gen_return_internal (void)
{
  return gen_rtx_RETURN (VOIDmode);
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14274 */
rtx
gen_return_internal_long (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_RETURN (VOIDmode),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	26)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14284 */
rtx
gen_return_pop_internal (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_RETURN (VOIDmode),
		gen_rtx_USE (VOIDmode,
	operand0)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14293 */
rtx
gen_return_indirect_internal (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_RETURN (VOIDmode),
		gen_rtx_USE (VOIDmode,
	operand0)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14301 */
rtx
gen_nop (void)
{
  return const0_rtx;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14313 */
rtx
gen_align (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	7);
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14334 */
rtx
gen_set_got (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	12)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14343 */
rtx
gen_set_got_labelled (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_LABEL_REF (VOIDmode,
	operand1)),
	12)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14353 */
rtx
gen_set_got_rex64 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		const0_rtx),
	12));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14393 */
rtx
gen_eh_return_si (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand0),
	27));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14403 */
rtx
gen_eh_return_di (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand0),
	27));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14413 */
rtx
gen_leave (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	6),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	6),
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	6))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14421 */
rtx
gen_leave_rex64 (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	6),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	6),
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	6))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14529 */
rtx
gen_ctzsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CTZ (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14537 */
rtx
gen_ctzdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CTZ (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15560 */
rtx
gen_sqrtxf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (XFmode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15589 */
rtx
gen_fpremxf4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	88)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	89)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	18),
	gen_rtx_UNSPEC (CCFPmode,
	gen_rtvec (1,
		const0_rtx),
	38))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15674 */
rtx
gen_fprem1xf4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	90)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	91)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	18),
	gen_rtx_UNSPEC (CCFPmode,
	gen_rtvec (1,
		const0_rtx),
	38))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15847 */
rtx
gen_sincosdf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand2),
	80)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand2),
	81))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15882 */
rtx
gen_sincossf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand2),
	80)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand2),
	81))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15960 */
rtx
gen_sincosxf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	80)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	81))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16124 */
rtx
gen_atan2df3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16165 */
rtx
gen_atan2sf3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16206 */
rtx
gen_atan2xf3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16382 */
rtx
gen_fyl2x_xf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16568 */
rtx
gen_fyl2xp1_xf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	64)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17143 */
rtx
gen_frndintxf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	65));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17221 */
rtx
gen_fistdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	66)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17232 */
rtx
gen_fistdi2_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	66)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17286 */
rtx
gen_fisthi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	66));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17286 */
rtx
gen_fistsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	66));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17296 */
rtx
gen_fisthi2_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	66)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17296 */
rtx
gen_fistsi2_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	66)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17338 */
rtx
gen_frndintxf2_floor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	70)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17363 */
rtx
gen_frndintxf2_floor_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	70)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17452 */
rtx
gen_fistdi2_floor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17466 */
rtx
gen_fistdi2_floor_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17512 */
rtx
gen_fisthi2_floor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17512 */
rtx
gen_fistsi2_floor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17525 */
rtx
gen_fisthi2_floor_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17525 */
rtx
gen_fistsi2_floor_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17579 */
rtx
gen_frndintxf2_ceil (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	71)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17604 */
rtx
gen_frndintxf2_ceil_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	71)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17693 */
rtx
gen_fistdi2_ceil (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17707 */
rtx
gen_fistdi2_ceil_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17753 */
rtx
gen_fisthi2_ceil (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17753 */
rtx
gen_fistsi2_ceil (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17766 */
rtx
gen_fisthi2_ceil_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17766 */
rtx
gen_fistsi2_ceil_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17820 */
rtx
gen_frndintxf2_trunc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	72)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17845 */
rtx
gen_frndintxf2_trunc_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	72)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17903 */
rtx
gen_frndintxf2_mask_pm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	73)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17928 */
rtx
gen_frndintxf2_mask_pm_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	73)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17989 */
rtx
gen_cld (void)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	19),
	const0_rtx);
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18885 */
rtx
gen_x86_movdicc_0_m1_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DImode,
	operand1,
	constm1_rtx,
	const0_rtx)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18928 */
rtx
gen_x86_movsicc_0_m1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand1,
	constm1_rtx,
	const0_rtx)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19119 */
rtx
gen_sminsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (SFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19128 */
rtx
gen_smaxsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (SFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19137 */
rtx
gen_smindf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (DFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19146 */
rtx
gen_smaxdf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (DFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19272 */
rtx
gen_pro_epilogue_adjust_stack_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19313 */
rtx
gen_pro_epilogue_adjust_stack_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19356 */
rtx
gen_pro_epilogue_adjust_stack_rex64_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand3)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19402 */
rtx
gen_allocate_stack_worker_1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19422 */
rtx
gen_allocate_stack_worker_rex64 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand0),
	1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_MINUS (DImode,
	gen_rtx_REG (DImode,
	7),
	operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20654 */
rtx
gen_trap (void)
{
  return gen_rtx_TRAP_IF (VOIDmode,
	const1_rtx,
	const_int_rtx[MAX_SAVED_CONST_INT + (6)]);
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20830 */
rtx
gen_stack_protect_set_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	100)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_SCRATCH (SImode),
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20839 */
rtx
gen_stack_protect_set_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	100)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_SCRATCH (DImode),
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20848 */
rtx
gen_stack_tls_protect_set_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	102)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_SCRATCH (SImode),
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20857 */
rtx
gen_stack_tls_protect_set_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	102)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_SCRATCH (DImode),
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20902 */
rtx
gen_stack_protect_test_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCZmode,
	gen_rtvec (2,
		operand1,
		operand2),
	101)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20912 */
rtx
gen_stack_protect_test_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCZmode,
	gen_rtvec (2,
		operand1,
		operand2),
	101)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20922 */
rtx
gen_stack_tls_protect_test_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCZmode,
	gen_rtvec (2,
		operand1,
		operand2),
	103)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20932 */
rtx
gen_stack_tls_protect_test_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCZmode,
	gen_rtvec (2,
		operand1,
		operand2),
	103)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:198 */
rtx
gen_sse_movups (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	34));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:207 */
rtx
gen_sse2_movupd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	34));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:216 */
rtx
gen_sse2_movdqu (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (1,
		operand1),
	34));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:225 */
rtx
gen_sse_movntv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	33));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:234 */
rtx
gen_sse2_movntv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	33));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:243 */
rtx
gen_sse2_movntv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	33));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:252 */
rtx
gen_sse2_movntsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	33));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:261 */
rtx
gen_sse3_lddqu (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (1,
		operand1),
	47));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:304 */
rtx
gen_sse_vmaddv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_PLUS (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:332 */
rtx
gen_sse_vmsubv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_MINUS (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:360 */
rtx
gen_sse_vmmulv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_MULT (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:388 */
rtx
gen_sse_vmdivv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_DIV (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:400 */
rtx
gen_sse_rcpv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	35));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:409 */
rtx
gen_sse_vmrcpv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	35),
	operand2,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:421 */
rtx
gen_sse_rsqrtv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	36));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:430 */
rtx
gen_sse_vmrsqrtv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	36),
	operand2,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:442 */
rtx
gen_sqrtv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (V4SFmode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:450 */
rtx
gen_sse_vmsqrtv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SQRT (V4SFmode,
	operand1),
	operand2,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:495 */
rtx
gen_sse_vmsmaxv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SMAX (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:537 */
rtx
gen_sse_vmsminv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SMIN (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:595 */
rtx
gen_sse3_addsubv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_PLUS (V4SFmode,
	operand1,
	operand2),
	gen_rtx_MINUS (V4SFmode,
	operand1,
	operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (5)]));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:608 */
rtx
gen_sse3_haddv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SFmode,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:634 */
rtx
gen_sse3_hsubv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SFmode,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:700 */
rtx
gen_sse_maskcmpv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), V4SFmode,
		operand1,
		operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:710 */
rtx
gen_sse_vmmaskcmpv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), V4SFmode,
		operand1,
		operand2),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:723 */
rtx
gen_sse_comi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_COMPARE (CCFPmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:737 */
rtx
gen_sse_ucomi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPUmode,
	17),
	gen_rtx_COMPARE (CCFPUmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:789 */
rtx
gen_sse_nandv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4SFmode,
	gen_rtx_NOT (V4SFmode,
	operand1),
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:877 */
rtx
gen_sse_cvtpi2ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT (V2SFmode,
	operand2)),
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (3)]));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:889 */
rtx
gen_sse_cvtps2pi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	30),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:901 */
rtx
gen_sse_cvttps2pi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_FIX (V4SImode,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:912 */
rtx
gen_sse_cvtsi2ss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT (SFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:925 */
rtx
gen_sse_cvtsi2ssq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT (SFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:938 */
rtx
gen_sse_cvtss2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	30));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:951 */
rtx
gen_sse_cvtss2siq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	30));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:964 */
rtx
gen_sse_cvttss2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:976 */
rtx
gen_sse_cvttss2siq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:988 */
rtx
gen_sse2_cvtdq2ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V4SFmode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:996 */
rtx
gen_sse2_cvtps2dq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	30));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1005 */
rtx
gen_sse2_cvttps2dq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (V4SImode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1019 */
rtx
gen_sse_movhlps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1037 */
rtx
gen_sse_movlhps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1055 */
rtx
gen_sse_unpckhps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1068 */
rtx
gen_sse_unpcklps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1083 */
rtx
gen_sse3_movshdup (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1098 */
rtx
gen_sse3_movsldup (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1129 */
rtx
gen_sse_shufps_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand3,
		operand4,
		operand5,
		operand6))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1153 */
rtx
gen_sse_storehps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1166 */
rtx
gen_sse_loadhps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1181 */
rtx
gen_sse_storelps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1194 */
rtx
gen_sse_loadlps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SFmode,
	operand2,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1209 */
rtx
gen_sse_movss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand2,
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1372 */
rtx
gen_sse2_vmaddv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_PLUS (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1400 */
rtx
gen_sse2_vmsubv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_MINUS (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1428 */
rtx
gen_sse2_vmmulv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_MULT (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1456 */
rtx
gen_sse2_vmdivv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_DIV (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1468 */
rtx
gen_sqrtv2df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (V2DFmode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1476 */
rtx
gen_sse2_vmsqrtv2df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SQRT (V2DFmode,
	operand1),
	operand2,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1521 */
rtx
gen_sse2_vmsmaxv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SMAX (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1563 */
rtx
gen_sse2_vmsminv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SMIN (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1575 */
rtx
gen_sse3_addsubv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_PLUS (V2DFmode,
	operand1,
	operand2),
	gen_rtx_MINUS (V2DFmode,
	operand1,
	operand2),
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1588 */
rtx
gen_sse3_haddv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	gen_rtx_PLUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1606 */
rtx
gen_sse3_hsubv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	gen_rtx_MINUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1639 */
rtx
gen_sse2_maskcmpv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), V2DFmode,
		operand1,
		operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1649 */
rtx
gen_sse2_vmmaskcmpv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), V2DFmode,
		operand1,
		operand2),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1662 */
rtx
gen_sse2_comi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_COMPARE (CCFPmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1676 */
rtx
gen_sse2_ucomi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPUmode,
	17),
	gen_rtx_COMPARE (CCFPUmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1728 */
rtx
gen_sse2_nandv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2DFmode,
	gen_rtx_NOT (V2DFmode,
	operand1),
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1816 */
rtx
gen_sse2_cvtpi2pd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V2DFmode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1825 */
rtx
gen_sse2_cvtpd2pi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (1,
		operand1),
	30));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1835 */
rtx
gen_sse2_cvttpd2pi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (V2SImode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1844 */
rtx
gen_sse2_cvtsi2sd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	gen_rtx_FLOAT (DFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1857 */
rtx
gen_sse2_cvtsi2sdq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	gen_rtx_FLOAT (DFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1870 */
rtx
gen_sse2_cvtsd2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	30));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1883 */
rtx
gen_sse2_cvtsd2siq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	30));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1896 */
rtx
gen_sse2_cvttsd2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1908 */
rtx
gen_sse2_cvttsd2siq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1920 */
rtx
gen_sse2_cvtdq2pd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V2DFmode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1969 */
rtx
gen_sse2_cvtsd2ss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT_TRUNCATE (V2SFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1983 */
rtx
gen_sse2_cvtss2sd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FLOAT_EXTEND (V2DFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2017 */
rtx
gen_sse2_cvtps2pd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (V2DFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2034 */
rtx
gen_sse2_unpckhpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2DFmode,
	gen_rtx_VEC_CONCAT (V4DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2082 */
rtx
gen_sse2_unpcklpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2DFmode,
	gen_rtx_VEC_CONCAT (V4DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2112 */
rtx
gen_sse2_shufpd_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2DFmode,
	gen_rtx_VEC_CONCAT (V4DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		operand3,
		operand4))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2132 */
rtx
gen_sse2_storehpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2156 */
rtx
gen_sse2_storelpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2186 */
rtx
gen_sse2_loadhpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2213 */
rtx
gen_sse2_loadlpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	operand2,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2272 */
rtx
gen_sse2_movsd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	operand2,
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2394 */
rtx
gen_sse2_ssaddv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V16QImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2394 */
rtx
gen_sse2_ssaddv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V8HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2404 */
rtx
gen_sse2_usaddv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V16QImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2404 */
rtx
gen_sse2_usaddv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V8HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2431 */
rtx
gen_sse2_sssubv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V16QImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2431 */
rtx
gen_sse2_sssubv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V8HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2441 */
rtx
gen_sse2_ussubv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V16QImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2441 */
rtx
gen_sse2_ussubv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V8HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2511 */
rtx
gen_sse2_smulv8hi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V8HImode,
	gen_rtx_LSHIFTRT (V8SImode,
	gen_rtx_MULT (V8SImode,
	gen_rtx_SIGN_EXTEND (V8SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V8SImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2526 */
rtx
gen_sse2_umulv8hi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V8HImode,
	gen_rtx_LSHIFTRT (V8SImode,
	gen_rtx_MULT (V8SImode,
	gen_rtx_ZERO_EXTEND (V8SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V8SImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2541 */
rtx
gen_sse2_umulv2siv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2DImode,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2557 */
rtx
gen_sse2_pmaddwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))),
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))))),
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2725 */
rtx
gen_ashrv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V8HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2725 */
rtx
gen_ashrv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V4SImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2735 */
rtx
gen_lshrv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V8HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2735 */
rtx
gen_lshrv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V4SImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2735 */
rtx
gen_lshrv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V2DImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2745 */
rtx
gen_ashlv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V8HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2745 */
rtx
gen_ashlv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V4SImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2745 */
rtx
gen_ashlv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V2DImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2755 */
rtx
gen_sse2_ashlti3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (TImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2779 */
rtx
gen_sse2_lshrti3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (TImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2966 */
rtx
gen_sse2_eqv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V16QImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2966 */
rtx
gen_sse2_eqv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V8HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2966 */
rtx
gen_sse2_eqv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V4SImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2976 */
rtx
gen_sse2_gtv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V16QImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2976 */
rtx
gen_sse2_gtv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V8HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2976 */
rtx
gen_sse2_gtv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V4SImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3056 */
rtx
gen_sse2_nandv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V16QImode,
	gen_rtx_NOT (V16QImode,
	operand1),
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3056 */
rtx
gen_sse2_nandv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V8HImode,
	gen_rtx_NOT (V8HImode,
	operand1),
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3056 */
rtx
gen_sse2_nandv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4SImode,
	gen_rtx_NOT (V4SImode,
	operand1),
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3056 */
rtx
gen_sse2_nandv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2DImode,
	gen_rtx_NOT (V2DImode,
	operand1),
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3106 */
rtx
gen_sse2_packsswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand2)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3118 */
rtx
gen_sse2_packssdw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_SS_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V4HImode,
	operand2)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3130 */
rtx
gen_sse2_packuswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_US_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_US_TRUNCATE (V8QImode,
	operand2)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3142 */
rtx
gen_sse2_punpckhbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V16QImode,
	gen_rtx_VEC_CONCAT (V32QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3161 */
rtx
gen_sse2_punpcklbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V16QImode,
	gen_rtx_VEC_CONCAT (V32QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3180 */
rtx
gen_sse2_punpckhwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3195 */
rtx
gen_sse2_punpcklwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3210 */
rtx
gen_sse2_punpckhdq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3223 */
rtx
gen_sse2_punpckldq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3236 */
rtx
gen_sse2_punpckhqdq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2DImode,
	gen_rtx_VEC_CONCAT (V4DImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3249 */
rtx
gen_sse2_punpcklqdq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2DImode,
	gen_rtx_VEC_CONCAT (V4DImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3290 */
rtx
gen_sse2_pextrw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3316 */
rtx
gen_sse2_pshufd_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3353 */
rtx
gen_sse2_pshuflw_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		operand2,
		operand3,
		operand4,
		operand5,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3394 */
rtx
gen_sse2_pshufhw_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		operand2,
		operand3,
		operand4,
		operand5))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3430 */
rtx
gen_sse2_loadld (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	operand2),
	operand1,
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3447 */
rtx
gen_sse2_stored (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3730 */
rtx
gen_sse2_uavgv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V16QImode,
	gen_rtx_LSHIFTRT (V16HImode,
	gen_rtx_PLUS (V16HImode,
	gen_rtx_PLUS (V16HImode,
	gen_rtx_ZERO_EXTEND (V16HImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V16HImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V16QImode,
	gen_rtvec (16,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3754 */
rtx
gen_sse2_uavgv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V8HImode,
	gen_rtx_LSHIFTRT (V8SImode,
	gen_rtx_PLUS (V8SImode,
	gen_rtx_PLUS (V8SImode,
	gen_rtx_ZERO_EXTEND (V8SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V8SImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V8HImode,
	gen_rtvec (8,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3776 */
rtx
gen_sse2_psadbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	46));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3786 */
rtx
gen_sse_movmskps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	32));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3795 */
rtx
gen_sse2_movmskpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	32));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3804 */
rtx
gen_sse2_pmovmskb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	32));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3846 */
rtx
gen_sse_ldmxcsr (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	3);
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3854 */
rtx
gen_sse_stmxcsr (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	4));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3879 */
rtx
gen_sse2_clflush (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	6);
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3921 */
rtx
gen_sse3_mwait (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (2,
		operand0,
		operand1),
	9);
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3932 */
rtx
gen_sse3_monitor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	8);
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3941 */
rtx
gen_sse3_monitor64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	8);
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:199 */
rtx
gen_sse_movntdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	33));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:214 */
rtx
gen_mmx_addv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:223 */
rtx
gen_mmx_subv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:241 */
rtx
gen_mmx_mulv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2SFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:250 */
rtx
gen_mmx_smaxv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V2SFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:259 */
rtx
gen_mmx_sminv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V2SFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:268 */
rtx
gen_mmx_rcpv2sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	39));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:277 */
rtx
gen_mmx_rcpit1v2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	40));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:287 */
rtx
gen_mmx_rcpit2v2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	41));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:297 */
rtx
gen_mmx_rsqrtv2sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	42));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:306 */
rtx
gen_mmx_rsqit1v2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	43));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:316 */
rtx
gen_mmx_haddv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:334 */
rtx
gen_mmx_hsubv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:352 */
rtx
gen_mmx_addsubv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2SFmode,
	gen_rtx_PLUS (V2SFmode,
	operand1,
	operand2),
	gen_rtx_MINUS (V2SFmode,
	operand1,
	operand2),
	const1_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:371 */
rtx
gen_mmx_gtv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V2SImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:380 */
rtx
gen_mmx_gev2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (V2SImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:389 */
rtx
gen_mmx_eqv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V2SImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:404 */
rtx
gen_mmx_pf2id (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (V2SImode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:412 */
rtx
gen_mmx_pf2iw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_SS_TRUNCATE (V2HImode,
	gen_rtx_FIX (V2SImode,
	operand1))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:423 */
rtx
gen_mmx_pi2fw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V2SFmode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_TRUNCATE (V2HImode,
	operand1))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:434 */
rtx
gen_mmx_floatv2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V2SFmode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:448 */
rtx
gen_mmx_pswapdv2sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:560 */
rtx
gen_mmx_addv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V8QImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:560 */
rtx
gen_mmx_addv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:560 */
rtx
gen_mmx_addv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:570 */
rtx
gen_mmx_adddi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
	38));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:581 */
rtx
gen_mmx_ssaddv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V8QImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:581 */
rtx
gen_mmx_ssaddv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V4HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:591 */
rtx
gen_mmx_usaddv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V8QImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:591 */
rtx
gen_mmx_usaddv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V4HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:601 */
rtx
gen_mmx_subv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V8QImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:601 */
rtx
gen_mmx_subv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:601 */
rtx
gen_mmx_subv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:611 */
rtx
gen_mmx_subdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MINUS (DImode,
	operand1,
	operand2)),
	38));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:622 */
rtx
gen_mmx_sssubv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V8QImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:622 */
rtx
gen_mmx_sssubv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V4HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:632 */
rtx
gen_mmx_ussubv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V8QImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:632 */
rtx
gen_mmx_ussubv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V4HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:642 */
rtx
gen_mmx_mulv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:651 */
rtx
gen_mmx_smulv4hi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:665 */
rtx
gen_mmx_umulv4hi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:680 */
rtx
gen_mmx_pmaddwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:704 */
rtx
gen_mmx_pmulhrwv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V4SImode,
	gen_rtvec (4,
		GEN_INT (32768L),
		GEN_INT (32768L),
		GEN_INT (32768L),
		GEN_INT (32768L)))),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:722 */
rtx
gen_sse2_umulsidi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:738 */
rtx
gen_mmx_umaxv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V8QImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:748 */
rtx
gen_mmx_smaxv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:758 */
rtx
gen_mmx_uminv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V8QImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:768 */
rtx
gen_mmx_sminv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V4HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:778 */
rtx
gen_mmx_ashrv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V4HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:778 */
rtx
gen_mmx_ashrv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V2SImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:788 */
rtx
gen_mmx_lshrv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V4HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:788 */
rtx
gen_mmx_lshrv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V2SImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:798 */
rtx
gen_mmx_lshrdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)),
	38));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:809 */
rtx
gen_mmx_ashlv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V4HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:809 */
rtx
gen_mmx_ashlv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V2SImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:819 */
rtx
gen_mmx_ashldi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)),
	38));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:836 */
rtx
gen_mmx_eqv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V8QImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:836 */
rtx
gen_mmx_eqv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V4HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:836 */
rtx
gen_mmx_eqv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V2SImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:846 */
rtx
gen_mmx_gtv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V8QImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:846 */
rtx
gen_mmx_gtv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V4HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:846 */
rtx
gen_mmx_gtv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V2SImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:862 */
rtx
gen_mmx_andv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V8QImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:862 */
rtx
gen_mmx_andv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:862 */
rtx
gen_mmx_andv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2SImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:872 */
rtx
gen_mmx_nandv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V8QImode,
	gen_rtx_NOT (V8QImode,
	operand1),
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:872 */
rtx
gen_mmx_nandv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4HImode,
	gen_rtx_NOT (V4HImode,
	operand1),
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:872 */
rtx
gen_mmx_nandv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2SImode,
	gen_rtx_NOT (V2SImode,
	operand1),
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:882 */
rtx
gen_mmx_iorv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V8QImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:882 */
rtx
gen_mmx_iorv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V4HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:882 */
rtx
gen_mmx_iorv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V2SImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:892 */
rtx
gen_mmx_xorv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V8QImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:892 */
rtx
gen_mmx_xorv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V4HImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:892 */
rtx
gen_mmx_xorv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V2SImode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:909 */
rtx
gen_mmx_packsswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8QImode,
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand2)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:921 */
rtx
gen_mmx_packssdw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_SS_TRUNCATE (V2HImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V2HImode,
	operand2)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:933 */
rtx
gen_mmx_packuswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8QImode,
	gen_rtx_US_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_US_TRUNCATE (V4QImode,
	operand2)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:945 */
rtx
gen_mmx_punpckhbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_VEC_CONCAT (V16QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:960 */
rtx
gen_mmx_punpcklbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_VEC_CONCAT (V16QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:975 */
rtx
gen_mmx_punpckhwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:988 */
rtx
gen_mmx_punpcklwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1001 */
rtx
gen_mmx_punpckhdq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_VEC_CONCAT (V4SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1014 */
rtx
gen_mmx_punpckldq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_VEC_CONCAT (V4SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1055 */
rtx
gen_mmx_pextrw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1081 */
rtx
gen_mmx_pshufw_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1103 */
rtx
gen_mmx_pswapdv2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1290 */
rtx
gen_mmx_uavgv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V8QImode,
	gen_rtx_LSHIFTRT (V8HImode,
	gen_rtx_PLUS (V8HImode,
	gen_rtx_PLUS (V8HImode,
	gen_rtx_ZERO_EXTEND (V8HImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V8HImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V8HImode,
	gen_rtvec (8,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1318 */
rtx
gen_mmx_uavgv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V4SImode,
	gen_rtvec (4,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1337 */
rtx
gen_mmx_psadbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	46));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1347 */
rtx
gen_mmx_pmovmskb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	32));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1389 */
rtx
gen_mmx_emms (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (17,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	2),
		gen_hard_reg_clobber (XFmode, 8),
		gen_hard_reg_clobber (XFmode, 9),
		gen_hard_reg_clobber (XFmode, 10),
		gen_hard_reg_clobber (XFmode, 11),
		gen_hard_reg_clobber (XFmode, 12),
		gen_hard_reg_clobber (XFmode, 13),
		gen_hard_reg_clobber (XFmode, 14),
		gen_hard_reg_clobber (XFmode, 15),
		gen_hard_reg_clobber (DImode, 29),
		gen_hard_reg_clobber (DImode, 30),
		gen_hard_reg_clobber (DImode, 31),
		gen_hard_reg_clobber (DImode, 32),
		gen_hard_reg_clobber (DImode, 33),
		gen_hard_reg_clobber (DImode, 34),
		gen_hard_reg_clobber (DImode, 35),
		gen_hard_reg_clobber (DImode, 36)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1412 */
rtx
gen_mmx_femms (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (17,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	5),
		gen_hard_reg_clobber (XFmode, 8),
		gen_hard_reg_clobber (XFmode, 9),
		gen_hard_reg_clobber (XFmode, 10),
		gen_hard_reg_clobber (XFmode, 11),
		gen_hard_reg_clobber (XFmode, 12),
		gen_hard_reg_clobber (XFmode, 13),
		gen_hard_reg_clobber (XFmode, 14),
		gen_hard_reg_clobber (XFmode, 15),
		gen_hard_reg_clobber (DImode, 29),
		gen_hard_reg_clobber (DImode, 30),
		gen_hard_reg_clobber (DImode, 31),
		gen_hard_reg_clobber (DImode, 32),
		gen_hard_reg_clobber (DImode, 33),
		gen_hard_reg_clobber (DImode, 34),
		gen_hard_reg_clobber (DImode, 35),
		gen_hard_reg_clobber (DImode, 36)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:87 */
rtx
gen_sync_double_compare_and_swapdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	10)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:87 */
rtx
gen_sync_double_compare_and_swapti (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (TImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	10)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:182 */
rtx
gen_sync_double_compare_and_swap_ccdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	10)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	11),
	operand2))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:182 */
rtx
gen_sync_double_compare_and_swap_ccti (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (TImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	10)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_UNSPEC_VOLATILE (TImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	11),
	operand2))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:222 */
rtx
gen_sync_old_addqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:222 */
rtx
gen_sync_old_addhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:222 */
rtx
gen_sync_old_addsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:222 */
rtx
gen_sync_old_adddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:234 */
rtx
gen_sync_lock_test_and_setqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand2)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:234 */
rtx
gen_sync_lock_test_and_sethi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand2)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:234 */
rtx
gen_sync_lock_test_and_setsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand2)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:234 */
rtx
gen_sync_lock_test_and_setdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand2)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:243 */
rtx
gen_sync_addqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_PLUS (QImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:243 */
rtx
gen_sync_addhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_PLUS (HImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:243 */
rtx
gen_sync_addsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_PLUS (SImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:243 */
rtx
gen_sync_adddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_PLUS (DImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:253 */
rtx
gen_sync_subqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_MINUS (QImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:253 */
rtx
gen_sync_subhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_MINUS (HImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:253 */
rtx
gen_sync_subsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_MINUS (SImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:253 */
rtx
gen_sync_subdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_MINUS (DImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:263 */
rtx
gen_sync_iorqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_IOR (QImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:263 */
rtx
gen_sync_iorhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_IOR (HImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:263 */
rtx
gen_sync_iorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_IOR (SImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:263 */
rtx
gen_sync_iordi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_IOR (DImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:273 */
rtx
gen_sync_andqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_AND (QImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:273 */
rtx
gen_sync_andhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_AND (HImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:273 */
rtx
gen_sync_andsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_AND (SImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:273 */
rtx
gen_sync_anddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_AND (DImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:283 */
rtx
gen_sync_xorqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_XOR (QImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:283 */
rtx
gen_sync_xorhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_XOR (HImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:283 */
rtx
gen_sync_xorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_XOR (SImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:283 */
rtx
gen_sync_xordi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_XOR (DImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:490 */
rtx
gen_cmpti (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 495 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (TImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:503 */
rtx
gen_cmpdi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 508 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (DImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:516 */
rtx
gen_cmpsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 521 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (SImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:529 */
rtx
gen_cmphi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 534 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (HImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:542 */
rtx
gen_cmpqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 547 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (QImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:577 */
rtx
gen_cmpdi_1_rex64 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:616 */
rtx
gen_cmpsi_1 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:740 */
rtx
gen_cmpqi_ext_3 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_SUBREG (QImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	0),
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:803 */
rtx
gen_cmpxf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 808 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:814 */
rtx
gen_cmpdf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 819 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:825 */
rtx
gen_cmpsf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 830 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1071 */
rtx
gen_movsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1075 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_move (SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1273 */
rtx
gen_movhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1277 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_move (HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1402 */
rtx
gen_movstricthi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1406 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  /* Don't generate memory->memory moves, go through a register */
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (HImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1432 */
rtx
gen_movqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1436 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_move (QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1533 */
rtx
gen_reload_outqi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1538 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx op0, op1, op2;
  op0 = operands[0]; op1 = operands[1]; op2 = operands[2];

  gcc_assert (!reg_overlap_mentioned_p (op2, op0));
  if (! q_regs_operand (op1, QImode))
    {
      emit_insn (gen_movqi (op2, op1));
      op1 = op2;
    }
  emit_insn (gen_movqi (op0, op1));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1576 */
rtx
gen_movstrictqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1580 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  /* Don't generate memory->memory moves, go through a register.  */
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (QImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1814 */
rtx
gen_movdi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1818 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_move (DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1840 */
extern rtx gen_peephole2_1198 (rtx, rtx *);
rtx
gen_peephole2_1198 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 1848 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1853 */
extern rtx gen_peephole2_1199 (rtx, rtx *);
rtx
gen_peephole2_1199 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 1860 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
split_di (operands + 1, 1, operands + 2, operands + 3);
   operands[1] = gen_lowpart (DImode, operands[2]);
   operands[2] = gen_rtx_MEM (SImode, gen_rtx_PLUS (DImode, stack_pointer_rtx,
						    GEN_INT (4)));
  
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1866 */
extern rtx gen_split_1200 (rtx, rtx *);
rtx
gen_split_1200 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 1875 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
split_di (operands + 1, 1, operands + 2, operands + 3);
   operands[1] = gen_lowpart (DImode, operands[2]);
   operands[2] = gen_rtx_MEM (SImode, gen_rtx_PLUS (DImode, stack_pointer_rtx,
						    GEN_INT (4)));
  
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1960 */
extern rtx gen_split_1201 (rtx, rtx *);
rtx
gen_split_1201 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1966 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1969 */
extern rtx gen_split_1202 (rtx, rtx *);
rtx
gen_split_1202 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1976 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2074 */
extern rtx gen_peephole2_1203 (rtx, rtx *);
rtx
gen_peephole2_1203 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 2082 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2087 */
extern rtx gen_peephole2_1204 (rtx, rtx *);
rtx
gen_peephole2_1204 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 2094 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
split_di (operands, 2, operands + 2, operands + 4);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2096 */
extern rtx gen_split_1205 (rtx, rtx *);
rtx
gen_split_1205 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 2105 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
split_di (operands, 2, operands + 2, operands + 4);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2119 */
rtx
gen_movti (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2123 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (TARGET_64BIT)
    ix86_expand_move (TImode, operands);
  else
    ix86_expand_vector_move (TImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2209 */
extern rtx gen_split_1207 (rtx, rtx *);
rtx
gen_split_1207 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2215 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2217 */
rtx
gen_movsf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2221 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_move (SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2249 */
extern rtx gen_split_1209 (rtx, rtx *);
rtx
gen_split_1209 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2257 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[1] = avoid_constant_pool_reference (operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2261 */
extern rtx gen_split_1210 (rtx, rtx *);
rtx
gen_split_1210 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-4)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2268 */
extern rtx gen_split_1211 (rtx, rtx *);
rtx
gen_split_1211 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SFmode,
	gen_rtx_REG (DImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2379 */
rtx
gen_movdf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2383 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_move (DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2415 */
extern rtx gen_split_1213 (rtx, rtx *);
rtx
gen_split_1213 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2421 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2423 */
extern rtx gen_split_1214 (rtx, rtx *);
rtx
gen_split_1214 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2429 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (DImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2431 */
extern rtx gen_split_1215 (rtx, rtx *);
rtx
gen_split_1215 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2436 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2683 */
extern rtx gen_split_1216 (rtx, rtx *);
rtx
gen_split_1216 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2695 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2712 */
rtx
gen_movxf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2716 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_move (XFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2749 */
extern rtx gen_split_1218 (rtx, rtx *);
rtx
gen_split_1218 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2757 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2759 */
extern rtx gen_split_1219 (rtx, rtx *);
rtx
gen_split_1219 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2765 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[2] = GEN_INT (TARGET_128BIT_LONG_DOUBLE ? -16 : -12);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (XFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2767 */
extern rtx gen_split_1220 (rtx, rtx *);
rtx
gen_split_1220 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2773 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[2] = GEN_INT (TARGET_128BIT_LONG_DOUBLE ? -16 : -12);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (XFmode,
	gen_rtx_REG (DImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2845 */
extern rtx gen_split_1221 (rtx, rtx *);
rtx
gen_split_1221 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2858 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2860 */
extern rtx gen_split_1222 (rtx, rtx *);
rtx
gen_split_1222 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2869 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx c = avoid_constant_pool_reference (operands[1]);
  rtx r = operands[0];

  if (GET_CODE (r) == SUBREG)
    r = SUBREG_REG (r);

  if (SSE_REG_P (r))
    {
      if (!standard_sse_constant_p (c))
	FAIL;
    }
  else if (FP_REG_P (r))
    {
      if (!standard_80387_constant_p (c))
	FAIL;
    }
  else if (MMX_REG_P (r))
    FAIL;

  operands[1] = c;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2907 */
rtx
gen_movtf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2911 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_expand_move (TFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2960 */
extern rtx gen_split_1224 (rtx, rtx *);
rtx
gen_split_1224 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2966 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2970 */
rtx
gen_zero_extendhisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2974 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
    {
      operands[1] = force_reg (HImode, operands[1]);
      emit_insn (gen_zero_extendhisi2_and (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2992 */
extern rtx gen_split_1226 (rtx, rtx *);
rtx
gen_split_1226 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 2999 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (65535L))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3009 */
rtx
gen_zero_extendqihi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3045 */
extern rtx gen_split_1228 (rtx, rtx *);
rtx
gen_split_1228 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3057 */
extern rtx gen_split_1229 (rtx, rtx *);
rtx
gen_split_1229 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3067 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[2] = gen_lowpart (QImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand2),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3070 */
extern rtx gen_split_1230 (rtx, rtx *);
rtx
gen_split_1230 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 3078 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	copy_rtx (operand0),
	GEN_INT (255L))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3080 */
rtx
gen_zero_extendqisi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3115 */
extern rtx gen_split_1232 (rtx, rtx *);
rtx
gen_split_1232 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3127 */
extern rtx gen_split_1233 (rtx, rtx *);
rtx
gen_split_1233 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3138 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[2] = gen_lowpart (QImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand2),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3141 */
extern rtx gen_split_1234 (rtx, rtx *);
rtx
gen_split_1234 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 3149 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (255L))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3152 */
rtx
gen_zero_extendsidi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3156 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (!TARGET_64BIT)
     {
       emit_insn (gen_zero_extendsidi2_32 (operands[0], operands[1]));
       DONE;
     }
  
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3189 */
extern rtx gen_split_1236 (rtx, rtx *);
rtx
gen_split_1236 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3194 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
split_di (&operands[0], 1, &operands[3], &operands[4]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3196 */
extern rtx gen_split_1237 (rtx, rtx *);
rtx
gen_split_1237 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3203 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
split_di (&operands[0], 1, &operands[3], &operands[4]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3205 */
extern rtx gen_split_1238 (rtx, rtx *);
rtx
gen_split_1238 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3213 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
split_di (&operands[0], 1, &operands[3], &operands[4]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3233 */
rtx
gen_extendsidi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3239 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_extendsidi2_rex64 (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3284 */
extern rtx gen_split_1240 (rtx, rtx *);
rtx
gen_split_1240 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3296 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
split_di (&operands[0], 1, &operands[3], &operands[4]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand1),
	const_int_rtx[MAX_SAVED_CONST_INT + (31)])),
		gen_hard_reg_clobber (CCmode, 17))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	copy_rtx (operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3299 */
extern rtx gen_split_1241 (rtx, rtx *);
rtx
gen_split_1241 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 3306 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  split_di (&operands[0], 1, &operands[3], &operands[4]);

  emit_move_insn (operands[3], operands[1]);

  /* Generate a cltd if possible and doing so it profitable.  */
  if (true_regnum (operands[1]) == 0
      && true_regnum (operands[2]) == 1
      && (optimize_size || TARGET_USE_CLTD))
    {
      emit_insn (gen_ashrsi3_31 (operands[2], operands[1], GEN_INT (31)));
    }
  else
    {
      emit_move_insn (operands[2], operands[1]);
      emit_insn (gen_ashrsi3_31 (operands[2], operands[2], GEN_INT (31)));
    }
  emit_move_insn (operands[4], operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3329 */
extern rtx gen_split_1242 (rtx, rtx *);
rtx
gen_split_1242 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 3336 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  split_di (&operands[0], 1, &operands[3], &operands[4]);

  if (true_regnum (operands[3]) != true_regnum (operands[1]))
    emit_move_insn (operands[3], operands[1]);

  /* Generate a cltd if possible and doing so it profitable.  */
  if (true_regnum (operands[3]) == 0
      && (optimize_size || TARGET_USE_CLTD))
    {
      emit_insn (gen_ashrsi3_31 (operands[4], operands[3], GEN_INT (31)));
      DONE;
    }

  if (true_regnum (operands[4]) != true_regnum (operands[1]))
    emit_move_insn (operands[4], operands[1]);

  emit_insn (gen_ashrsi3_31 (operands[4], operands[4], GEN_INT (31)));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3465 */
extern rtx gen_split_1243 (rtx, rtx *);
rtx
gen_split_1243 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (SImode,
	7)),
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3472 */
extern rtx gen_split_1244 (rtx, rtx *);
rtx
gen_split_1244 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (DImode,
	7)),
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3485 */
extern rtx gen_split_1245 (rtx, rtx *);
rtx
gen_split_1245 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3491 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[2] = GEN_INT (TARGET_128BIT_LONG_DOUBLE ? -16 : -12);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (XFmode,
	gen_rtx_REG (SImode,
	7)),
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3493 */
extern rtx gen_split_1246 (rtx, rtx *);
rtx
gen_split_1246 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3499 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[2] = GEN_INT (TARGET_128BIT_LONG_DOUBLE ? -16 : -12);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (DImode,
	7)),
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3501 */
extern rtx gen_split_1247 (rtx, rtx *);
rtx
gen_split_1247 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3507 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[2] = GEN_INT (TARGET_128BIT_LONG_DOUBLE ? -16 : -12);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (SImode,
	7)),
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3509 */
extern rtx gen_split_1248 (rtx, rtx *);
rtx
gen_split_1248 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3515 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[2] = GEN_INT (TARGET_128BIT_LONG_DOUBLE ? -16 : -12);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (XFmode,
	gen_rtx_REG (DImode,
	7)),
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3517 */
rtx
gen_extendsfdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3521 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  /* ??? Needed for compress_float_constant since all fp constants
     are LEGITIMATE_CONSTANT_P.  */
  if (GET_CODE (operands[1]) == CONST_DOUBLE)
    {
      if ((!TARGET_SSE2 || TARGET_MIX_SSE_I387)
	  && standard_80387_constant_p (operands[1]) > 0)
	{
	  operands[1] = simplify_const_unary_operation
	    (FLOAT_EXTEND, DFmode, operands[1], SFmode);
	  emit_move_insn_1 (operands[0], operands[1]);
	  DONE;
	}
      operands[1] = validize_mem (force_const_mem (SFmode, operands[1]));
    }
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3600 */
rtx
gen_extendsfxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3604 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  /* ??? Needed for compress_float_constant since all fp constants
     are LEGITIMATE_CONSTANT_P.  */
  if (GET_CODE (operands[1]) == CONST_DOUBLE)
    {
      if (standard_80387_constant_p (operands[1]) > 0)
	{
	  operands[1] = simplify_const_unary_operation
	    (FLOAT_EXTEND, XFmode, operands[1], SFmode);
	  emit_move_insn_1 (operands[0], operands[1]);
	  DONE;
	}
      operands[1] = validize_mem (force_const_mem (SFmode, operands[1]));
    }
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3648 */
rtx
gen_extenddfxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3652 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  /* ??? Needed for compress_float_constant since all fp constants
     are LEGITIMATE_CONSTANT_P.  */
  if (GET_CODE (operands[1]) == CONST_DOUBLE)
    {
      if (standard_80387_constant_p (operands[1]) > 0)
	{
	  operands[1] = simplify_const_unary_operation
	    (FLOAT_EXTEND, XFmode, operands[1], DFmode);
	  emit_move_insn_1 (operands[0], operands[1]);
	  DONE;
	}
      operands[1] = validize_mem (force_const_mem (DFmode, operands[1]));
    }
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (DFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3704 */
rtx
gen_truncdfsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3709 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (MEM_P (operands[0]) && MEM_P (operands[1]))
    operands[1] = force_reg (DFmode, operands[1]);

  if (TARGET_SSE2 && TARGET_SSE_MATH && !TARGET_MIX_SSE_I387)
    ;
  else if (flag_unsafe_math_optimizations)
    ;
  else
    {
      rtx temp = assign_386_stack_local (SFmode, SLOT_VIRTUAL);
      emit_insn (gen_truncdfsf2_with_temp (operands[0], operands[1], temp));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3725 */
rtx
gen_truncdfsf2_with_temp (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3841 */
extern rtx gen_split_1254 (rtx, rtx *);
rtx
gen_split_1254 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3849 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[1] = gen_rtx_REG (SFmode, true_regnum (operands[1]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3855 */
rtx
gen_truncxfsf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3861 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (flag_unsafe_math_optimizations)
    {
      rtx reg = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (SFmode);
      emit_insn (gen_truncxfsf2_i387_noop (reg, operands[1]));
      if (reg != operands[0])
	emit_move_insn (operands[0], reg);
      DONE;
    }
  else
    operands[2] = assign_386_stack_local (SFmode, SLOT_VIRTUAL);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3932 */
extern rtx gen_split_1256 (rtx, rtx *);
rtx
gen_split_1256 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3940 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3942 */
extern rtx gen_split_1257 (rtx, rtx *);
rtx
gen_split_1257 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 3949 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3953 */
rtx
gen_truncxfdf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3959 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (flag_unsafe_math_optimizations)
    {
      rtx reg = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (DFmode);
      emit_insn (gen_truncxfdf2_i387_noop (reg, operands[1]));
      if (reg != operands[0])
	emit_move_insn (operands[0], reg);
      DONE;
    }
  else
    operands[2] = assign_386_stack_local (DFmode, SLOT_VIRTUAL);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4030 */
extern rtx gen_split_1259 (rtx, rtx *);
rtx
gen_split_1259 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4038 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4040 */
extern rtx gen_split_1260 (rtx, rtx *);
rtx
gen_split_1260 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 4047 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4051 */
rtx
gen_fix_truncxfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4056 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP)
   {
     emit_insn (gen_fix_truncdi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4064 */
rtx
gen_fix_truncsfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4069 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP
      && !(TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
   {
     emit_insn (gen_fix_truncdi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
  if (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode))
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (DImode);
     emit_insn (gen_fix_truncsfdi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4064 */
rtx
gen_fix_truncdfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4069 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP
      && !(TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
   {
     emit_insn (gen_fix_truncdi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
  if (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode))
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (DImode);
     emit_insn (gen_fix_truncdfdi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4088 */
rtx
gen_fix_truncxfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4093 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP)
   {
     emit_insn (gen_fix_truncsi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4101 */
rtx
gen_fix_truncsfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4106 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP
      && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
   {
     emit_insn (gen_fix_truncsi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
  if (SSE_FLOAT_MODE_P (SFmode))
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (SImode);
     emit_insn (gen_fix_truncsfsi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4101 */
rtx
gen_fix_truncdfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4106 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP
      && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
   {
     emit_insn (gen_fix_truncsi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
  if (SSE_FLOAT_MODE_P (DFmode))
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (SImode);
     emit_insn (gen_fix_truncdfsi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4125 */
rtx
gen_fix_truncsfhi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4131 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP)
   {
     emit_insn (gen_fix_trunchi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4125 */
rtx
gen_fix_truncdfhi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4131 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP)
   {
     emit_insn (gen_fix_trunchi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4125 */
rtx
gen_fix_truncxfhi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4131 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP)
   {
     emit_insn (gen_fix_trunchi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4177 */
extern rtx gen_peephole2_1270 (rtx, rtx *);
rtx
gen_peephole2_1270 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "Y", DFmode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 4184 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4177 */
extern rtx gen_peephole2_1271 (rtx, rtx *);
rtx
gen_peephole2_1271 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "Y", DFmode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 4184 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4186 */
extern rtx gen_peephole2_1272 (rtx, rtx *);
rtx
gen_peephole2_1272 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "x", SFmode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 4193 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4186 */
extern rtx gen_peephole2_1273 (rtx, rtx *);
rtx
gen_peephole2_1273 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "x", SFmode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 4193 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4195 */
extern rtx gen_split_1274 (rtx, rtx *);
rtx
gen_split_1274 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4207 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_trunchi_i387_fisttp (operands[0], operands[1]));
  else
    {
      operands[2] = assign_386_stack_local (HImode, SLOT_TEMP);
      emit_insn (gen_fix_trunchi_i387_fisttp_with_temp (operands[0],
							    operands[1],
							    operands[2]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4195 */
extern rtx gen_split_1275 (rtx, rtx *);
rtx
gen_split_1275 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4207 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_truncsi_i387_fisttp (operands[0], operands[1]));
  else
    {
      operands[2] = assign_386_stack_local (SImode, SLOT_TEMP);
      emit_insn (gen_fix_truncsi_i387_fisttp_with_temp (operands[0],
							    operands[1],
							    operands[2]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4195 */
extern rtx gen_split_1276 (rtx, rtx *);
rtx
gen_split_1276 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4207 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_truncdi_i387_fisttp (operands[0], operands[1]));
  else
    {
      operands[2] = assign_386_stack_local (DImode, SLOT_TEMP);
      emit_insn (gen_fix_truncdi_i387_fisttp_with_temp (operands[0],
							    operands[1],
							    operands[2]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4249 */
extern rtx gen_split_1277 (rtx, rtx *);
rtx
gen_split_1277 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4258 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4249 */
extern rtx gen_split_1278 (rtx, rtx *);
rtx
gen_split_1278 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4258 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4249 */
extern rtx gen_split_1279 (rtx, rtx *);
rtx
gen_split_1279 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4258 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4260 */
extern rtx gen_split_1280 (rtx, rtx *);
rtx
gen_split_1280 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4268 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4260 */
extern rtx gen_split_1281 (rtx, rtx *);
rtx
gen_split_1281 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4268 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4260 */
extern rtx gen_split_1282 (rtx, rtx *);
rtx
gen_split_1282 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4268 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4275 */
extern rtx gen_split_1283 (rtx, rtx *);
rtx
gen_split_1283 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4287 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_TRUNC] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_TRUNC);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_trunchi_i387 (operands[0], operands[1],
					 operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (HImode, SLOT_TEMP);
      emit_insn (gen_fix_trunchi_i387_with_temp (operands[0], operands[1],
						     operands[2], operands[3],
						     operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4275 */
extern rtx gen_split_1284 (rtx, rtx *);
rtx
gen_split_1284 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4287 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_TRUNC] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_TRUNC);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_truncsi_i387 (operands[0], operands[1],
					 operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (SImode, SLOT_TEMP);
      emit_insn (gen_fix_truncsi_i387_with_temp (operands[0], operands[1],
						     operands[2], operands[3],
						     operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4275 */
extern rtx gen_split_1285 (rtx, rtx *);
rtx
gen_split_1285 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4287 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_TRUNC] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_TRUNC);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_truncdi_i387 (operands[0], operands[1],
					 operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (DImode, SLOT_TEMP);
      emit_insn (gen_fix_truncdi_i387_with_temp (operands[0], operands[1],
						     operands[2], operands[3],
						     operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4337 */
extern rtx gen_split_1286 (rtx, rtx *);
rtx
gen_split_1286 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 4350 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4352 */
extern rtx gen_split_1287 (rtx, rtx *);
rtx
gen_split_1287 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 4364 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4393 */
extern rtx gen_split_1288 (rtx, rtx *);
rtx
gen_split_1288 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 4404 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4393 */
extern rtx gen_split_1289 (rtx, rtx *);
rtx
gen_split_1289 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 4404 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4406 */
extern rtx gen_split_1290 (rtx, rtx *);
rtx
gen_split_1290 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4416 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4406 */
extern rtx gen_split_1291 (rtx, rtx *);
rtx
gen_split_1291 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4416 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4442 */
rtx
gen_floathisf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4446 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (TARGET_SSE_MATH)
    {
      emit_insn (gen_floatsisf2 (operands[0],
				 convert_to_mode (SImode, operands[1], 0)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4467 */
rtx
gen_floatsisf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4510 */
rtx
gen_floatdisf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4553 */
rtx
gen_floathidf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4557 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (TARGET_SSE2 && TARGET_SSE_MATH)
    {
      emit_insn (gen_floatsidf2 (operands[0],
				 convert_to_mode (SImode, operands[1], 0)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4578 */
rtx
gen_floatsidf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4621 */
rtx
gen_floatdidf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4701 */
extern rtx gen_split_1298 (rtx, rtx *);
rtx
gen_split_1298 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4708 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[2] = ix86_force_to_memory (GET_MODE (operands[1]), operands[1]);
  operands[2] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[2]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], operands[2]));
  ix86_free_from_memory (GET_MODE (operands[1]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4716 */
rtx
gen_floatunssisf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4720 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
x86_emit_floatuns (operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4722 */
rtx
gen_floatunsdisf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4726 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
x86_emit_floatuns (operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4728 */
rtx
gen_floatunsdidf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4732 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
x86_emit_floatuns (operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4741 */
rtx
gen_addti3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4747 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (PLUS, TImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (TImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4757 */
extern rtx gen_split_1303 (rtx, rtx *);
rtx
gen_split_1303 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 4771 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
split_ti (operands+0, 1, operands+0, operands+3);
   split_ti (operands+1, 1, operands+1, operands+4);
   split_ti (operands+2, 1, operands+2, operands+5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand1,
		operand2),
	24)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_LTU (DImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand4),
	operand5)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4780 */
rtx
gen_adddi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4786 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (PLUS, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4796 */
extern rtx gen_split_1305 (rtx, rtx *);
rtx
gen_split_1305 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 4810 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
split_di (operands+0, 1, operands+0, operands+3);
   split_di (operands+1, 1, operands+1, operands+4);
   split_di (operands+2, 1, operands+2, operands+5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand1,
		operand2),
	24)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand4),
	operand5)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4911 */
rtx
gen_addsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4917 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (PLUS, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4955 */
extern rtx gen_split_1307 (rtx, rtx *);
rtx
gen_split_1307 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4970 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx pat;
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = gen_lowpart (Pmode, operands[2]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
  pat = gen_rtx_PLUS (Pmode, gen_rtx_PLUS (Pmode, operands[1], operands[2]),
  		      operands[3]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4986 */
extern rtx gen_split_1308 (rtx, rtx *);
rtx
gen_split_1308 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4999 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = gen_lowpart (Pmode, operands[2]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (SImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2),
	operand3),
	0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5007 */
extern rtx gen_split_1309 (rtx, rtx *);
rtx
gen_split_1309 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 5021 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx pat;
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
  pat = gen_rtx_PLUS (Pmode, gen_rtx_MULT (Pmode, operands[1], operands[2]),
  		      operands[3]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5036 */
extern rtx gen_split_1310 (rtx, rtx *);
rtx
gen_split_1310 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 5049 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (SImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	operand1,
	operand2),
	operand3),
	0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5056 */
extern rtx gen_split_1311 (rtx, rtx *);
rtx
gen_split_1311 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 5070 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx pat;
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
  operands[4] = gen_lowpart (Pmode, operands[4]);
  pat = gen_rtx_PLUS (Pmode,
  		      gen_rtx_PLUS (Pmode, gen_rtx_MULT (Pmode, operands[1],
		      					 operands[2]),
				    operands[3]),
  		      operands[4]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5089 */
extern rtx gen_split_1312 (rtx, rtx *);
rtx
gen_split_1312 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 5105 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
  operands[4] = gen_lowpart (Pmode, operands[4]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (SImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	operand1,
	operand2),
	operand3),
	operand4),
	0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5168 */
extern rtx gen_split_1313 (rtx, rtx *);
rtx
gen_split_1313 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 5178 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5430 */
extern rtx gen_split_1314 (rtx, rtx *);
rtx
gen_split_1314 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 5438 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx pat;
  /* In -fPIC mode the constructs like (const (unspec [symbol_ref]))
     may confuse gen_lowpart.  */
  if (GET_MODE (operands[0]) != Pmode)
    {
      operands[1] = gen_lowpart (Pmode, operands[1]);
      operands[2] = gen_lowpart (Pmode, operands[2]);
    }
  operands[0] = gen_lowpart (SImode, operands[0]);
  pat = gen_rtx_PLUS (Pmode, operands[1], operands[2]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5511 */
extern rtx gen_split_1315 (rtx, rtx *);
rtx
gen_split_1315 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 5521 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = gen_lowpart (Pmode, operands[2]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (SImode,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2),
	0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5798 */
rtx
gen_addhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5804 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (PLUS, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6053 */
rtx
gen_addqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6059 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (PLUS, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6450 */
rtx
gen_addxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (XFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6457 */
rtx
gen_adddf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6464 */
rtx
gen_addsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6475 */
rtx
gen_subti3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6481 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (MINUS, TImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (TImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6491 */
extern rtx gen_split_1322 (rtx, rtx *);
rtx
gen_split_1322 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 6504 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
split_ti (operands+0, 1, operands+0, operands+3);
   split_ti (operands+1, 1, operands+1, operands+4);
   split_ti (operands+2, 1, operands+2, operands+5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MINUS (DImode,
	operand4,
	gen_rtx_PLUS (DImode,
	gen_rtx_LTU (DImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand5))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6510 */
rtx
gen_subdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6516 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (MINUS, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6526 */
extern rtx gen_split_1324 (rtx, rtx *);
rtx
gen_split_1324 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 6539 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
split_di (operands+0, 1, operands+0, operands+3);
   split_di (operands+1, 1, operands+1, operands+4);
   split_di (operands+2, 1, operands+2, operands+5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MINUS (SImode,
	operand4,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand5))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6640 */
rtx
gen_subsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6646 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (MINUS, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6725 */
rtx
gen_subhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6731 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (MINUS, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6769 */
rtx
gen_subqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6775 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (MINUS, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6826 */
rtx
gen_subxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (XFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6833 */
rtx
gen_subdf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6840 */
rtx
gen_subsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6849 */
rtx
gen_muldi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6881 */
rtx
gen_mulsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6937 */
rtx
gen_mulhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6965 */
rtx
gen_mulqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6989 */
rtx
gen_umulqihi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1),
	gen_rtx_ZERO_EXTEND (HImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7015 */
rtx
gen_mulqihi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1),
	gen_rtx_SIGN_EXTEND (HImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7039 */
rtx
gen_umulditi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7066 */
rtx
gen_umulsidi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7092 */
rtx
gen_mulditi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7118 */
rtx
gen_mulsidi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7144 */
rtx
gen_umuldi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (64)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7180 */
rtx
gen_umulsi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7237 */
rtx
gen_smuldi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (64)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7272 */
rtx
gen_smulsi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7329 */
rtx
gen_mulxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (XFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7336 */
rtx
gen_muldf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7343 */
rtx
gen_mulsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7374 */
rtx
gen_divxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (XFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7381 */
rtx
gen_divdf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7388 */
rtx
gen_divsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SFmode,
	operand1,
	operand2));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7397 */
rtx
gen_divmoddi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7445 */
extern rtx gen_split_1352 (rtx, rtx *);
rtx
gen_split_1352 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 7462 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  /* Avoid use of cltd in favor of a mov+shift.  */
  if (!TARGET_USE_CLTD && !optimize_size)
    {
      if (true_regnum (operands[1]))
        emit_move_insn (operands[0], operands[1]);
      else
	emit_move_insn (operands[3], operands[1]);
      operands[4] = operands[3];
    }
  else
    {
      gcc_assert (!true_regnum (operands[1]));
      operands[4] = operands[1];
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFTRT (DImode,
	operand4,
	const_int_rtx[MAX_SAVED_CONST_INT + (63)])),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DImode,
	gen_rtx_REG (DImode,
	0),
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_MOD (DImode,
	gen_rtx_REG (DImode,
	0),
	copy_rtx (operand2))),
		gen_rtx_USE (VOIDmode,
	copy_rtx (operand3)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7480 */
rtx
gen_divmodsi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7528 */
extern rtx gen_split_1354 (rtx, rtx *);
rtx
gen_split_1354 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 7545 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  /* Avoid use of cltd in favor of a mov+shift.  */
  if (!TARGET_USE_CLTD && !optimize_size)
    {
      if (true_regnum (operands[1]))
        emit_move_insn (operands[0], operands[1]);
      else
	emit_move_insn (operands[3], operands[1]);
      operands[4] = operands[3];
    }
  else
    {
      gcc_assert (!true_regnum (operands[1]));
      operands[4] = operands[1];
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFTRT (SImode,
	operand4,
	const_int_rtx[MAX_SAVED_CONST_INT + (31)])),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	gen_rtx_REG (SImode,
	0),
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_MOD (SImode,
	gen_rtx_REG (SImode,
	0),
	copy_rtx (operand2))),
		gen_rtx_USE (VOIDmode,
	copy_rtx (operand3)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7601 */
extern rtx gen_split_1355 (rtx, rtx *);
rtx
gen_split_1355 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 7616 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	const0_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_UMOD (DImode,
	copy_rtx (operand1),
	copy_rtx (operand2))),
		gen_rtx_USE (VOIDmode,
	copy_rtx (operand3)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7644 */
extern rtx gen_split_1356 (rtx, rtx *);
rtx
gen_split_1356 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 7659 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	const0_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_UMOD (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))),
		gen_rtx_USE (VOIDmode,
	copy_rtx (operand3)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7661 */
rtx
gen_udivmodhi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 7671 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[4] = gen_reg_rtx (HImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (HImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (HImode,
	operand1,
	operand2)),
		gen_rtx_USE (VOIDmode,
	operand4),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7743 */
rtx
gen_testsi_ccno_1 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	operand0,
	operand1),
	const0_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7765 */
rtx
gen_testqi_ccz_1 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_AND (QImode,
	operand0,
	operand1),
	const0_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7813 */
rtx
gen_testqi_ext_ccno_0 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand1),
	const0_rtx));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7933 */
extern rtx gen_split_1361 (rtx, rtx *);
rtx
gen_split_1361 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 7943 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx val = operands[2];
  HOST_WIDE_INT len = INTVAL (operands[3]);
  HOST_WIDE_INT pos = INTVAL (operands[4]);
  HOST_WIDE_INT mask;
  enum machine_mode mode, submode;

  mode = GET_MODE (val);
  if (GET_CODE (val) == MEM)
    {
      /* ??? Combine likes to put non-volatile mem extractions in QImode
	 no matter the size of the test.  So find a mode that works.  */
      if (! MEM_VOLATILE_P (val))
	{
	  mode = smallest_mode_for_size (pos + len, MODE_INT);
	  val = adjust_address (val, mode, 0);
	}
    }
  else if (GET_CODE (val) == SUBREG
	   && (submode = GET_MODE (SUBREG_REG (val)),
	       GET_MODE_BITSIZE (mode) > GET_MODE_BITSIZE (submode))
	   && pos + len <= GET_MODE_BITSIZE (submode))
    {
      /* Narrow a paradoxical subreg to prevent partial register stalls.  */
      mode = submode;
      val = SUBREG_REG (val);
    }
  else if (mode == HImode && pos + len <= 8)
    {
      /* Small HImode tests can be converted to QImode.  */
      mode = QImode;
      val = gen_lowpart (QImode, val);
    }

  if (len == HOST_BITS_PER_WIDE_INT)
    mask = -1;
  else
    mask = ((HOST_WIDE_INT)1 << len) - 1;
  mask <<= pos;

  operands[2] = gen_rtx_AND (mode, val, gen_int_mode (mask, mode));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		operand2,
		const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7991 */
extern rtx gen_split_1362 (rtx, rtx *);
rtx
gen_split_1362 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 8009 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[2] = gen_lowpart (SImode, operands[2]);
   operands[3] = gen_int_mode (INTVAL (operands[3]) >> 8, SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand2,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand3),
		const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8012 */
extern rtx gen_split_1363 (rtx, rtx *);
rtx
gen_split_1363 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 8028 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[2] = gen_lowpart (QImode, operands[2]);
   operands[3] = gen_lowpart (QImode, operands[3]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_AND (QImode,
	operand2,
	operand3),
		const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8036 */
rtx
gen_anddi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8042 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (AND, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8101 */
rtx
gen_andsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8107 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (AND, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8147 */
extern rtx gen_split_1366 (rtx, rtx *);
rtx
gen_split_1366 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 8154 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[1] = gen_lowpart (HImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand1),
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8156 */
extern rtx gen_split_1367 (rtx, rtx *);
rtx
gen_split_1367 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 8163 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[1] = gen_lowpart (QImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand1),
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8165 */
extern rtx gen_split_1368 (rtx, rtx *);
rtx
gen_split_1368 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 8182 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8223 */
rtx
gen_andhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8229 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (AND, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8268 */
rtx
gen_andqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8274 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (AND, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8464 */
extern rtx gen_split_1371 (rtx, rtx *);
rtx
gen_split_1371 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 8479 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
   operands[2] = gen_int_mode ((INTVAL (operands[2]) >> 8) & 0xff, SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8485 */
extern rtx gen_split_1372 (rtx, rtx *);
rtx
gen_split_1372 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 8500 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (QImode, operands[0]);
   operands[1] = gen_lowpart (QImode, operands[1]);
   operands[2] = gen_lowpart (QImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	gen_rtx_AND (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8509 */
rtx
gen_iordi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8515 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (IOR, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (DImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8556 */
rtx
gen_iorsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8562 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (IOR, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8649 */
rtx
gen_iorhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8655 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (IOR, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8692 */
rtx
gen_iorqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8698 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (IOR, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8837 */
extern rtx gen_split_1377 (rtx, rtx *);
rtx
gen_split_1377 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 8852 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
   operands[2] = gen_int_mode ((INTVAL (operands[2]) >> 8) & 0xff, SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_IOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8858 */
extern rtx gen_split_1378 (rtx, rtx *);
rtx
gen_split_1378 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 8873 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (QImode, operands[0]);
   operands[1] = gen_lowpart (QImode, operands[1]);
   operands[2] = gen_lowpart (QImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	gen_rtx_IOR (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8882 */
rtx
gen_xordi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8888 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (XOR, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (DImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8932 */
rtx
gen_xorsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8938 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (XOR, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9026 */
rtx
gen_xorhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 9032 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (XOR, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9069 */
rtx
gen_xorqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 9075 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (XOR, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9258 */
rtx
gen_xorqi_cc_ext_1 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9278 */
extern rtx gen_split_1384 (rtx, rtx *);
rtx
gen_split_1384 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 9293 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
   operands[2] = gen_int_mode ((INTVAL (operands[2]) >> 8) & 0xff, SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9299 */
extern rtx gen_split_1385 (rtx, rtx *);
rtx
gen_split_1385 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 9314 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (QImode, operands[0]);
   operands[1] = gen_lowpart (QImode, operands[1]);
   operands[2] = gen_lowpart (QImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	gen_rtx_XOR (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9320 */
rtx
gen_negti2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9325 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_unary_operator (NEG, TImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (TImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9335 */
extern rtx gen_split_1387 (rtx, rtx *);
rtx
gen_split_1387 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 9354 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
split_ti (operands+1, 1, operands+2, operands+3);
   split_ti (operands+0, 1, operands+0, operands+1);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_NEG (DImode,
	operand2),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_LTU (DImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand3),
	const0_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_NEG (DImode,
	copy_rtx (operand1))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9357 */
rtx
gen_negdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9362 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_unary_operator (NEG, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9372 */
extern rtx gen_split_1389 (rtx, rtx *);
rtx
gen_split_1389 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 9391 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
split_di (operands+1, 1, operands+2, operands+3);
   split_di (operands+0, 1, operands+0, operands+1);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_NEG (SImode,
	operand2),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand3),
	const0_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_NEG (SImode,
	copy_rtx (operand1))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9419 */
rtx
gen_negsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9424 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_unary_operator (NEG, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9479 */
rtx
gen_neghi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9484 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_unary_operator (NEG, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (HImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9506 */
rtx
gen_negqi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9511 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_unary_operator (NEG, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (QImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9535 */
rtx
gen_negsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9539 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (NEG, SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9541 */
rtx
gen_abssf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9545 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (ABS, SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9577 */
rtx
gen_copysignsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 9582 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_expand_copysign (operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9587 */
extern rtx gen_split_1396 (rtx, rtx *);
rtx
gen_split_1396 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 9598 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_split_copysign_const (operands);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9615 */
extern rtx gen_split_1397 (rtx, rtx *);
rtx
gen_split_1397 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 9626 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_split_copysign_var (operands);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9631 */
rtx
gen_negdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9635 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (NEG, DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9637 */
rtx
gen_absdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9641 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (ABS, DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9673 */
rtx
gen_copysigndf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 9678 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_expand_copysign (operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9683 */
extern rtx gen_split_1401 (rtx, rtx *);
rtx
gen_split_1401 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 9694 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_split_copysign_const (operands);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9711 */
extern rtx gen_split_1402 (rtx, rtx *);
rtx
gen_split_1402 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 9722 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_split_copysign_var (operands);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9727 */
rtx
gen_negxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9731 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (NEG, XFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9733 */
rtx
gen_absxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9737 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (ABS, XFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9751 */
extern rtx gen_split_1405 (rtx, rtx *);
rtx
gen_split_1405 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_e (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9759 */
extern rtx gen_split_1406 (rtx, rtx *);
rtx
gen_split_1406 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 9767 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  enum machine_mode mode = GET_MODE (operands[0]);
  enum machine_mode vmode = GET_MODE (operands[2]);
  rtx tmp;
  
  operands[0] = simplify_gen_subreg (vmode, operands[0], mode, 0);
  operands[1] = simplify_gen_subreg (vmode, operands[1], mode, 0);
  if (operands_match_p (operands[0], operands[2]))
    {
      tmp = operands[1];
      operands[1] = operands[2];
      operands[2] = tmp;
    }
  if (GET_CODE (operands[3]) == ABS)
    tmp = gen_rtx_AND (vmode, operands[1], operands[2]);
  else
    tmp = gen_rtx_XOR (vmode, operands[1], operands[2]);
  operands[3] = tmp;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9787 */
extern rtx gen_split_1407 (rtx, rtx *);
rtx
gen_split_1407 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 9795 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{ 
  rtx tmp;
  operands[0] = gen_lowpart (SImode, operands[0]);
  if (GET_CODE (operands[1]) == ABS)
    {
      tmp = gen_int_mode (0x7fffffff, SImode);
      tmp = gen_rtx_AND (SImode, operands[0], tmp);
    }
  else
    {
      tmp = gen_int_mode (0x80000000, SImode);
      tmp = gen_rtx_XOR (SImode, operands[0], tmp);
    }
  operands[1] = tmp;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9811 */
extern rtx gen_split_1408 (rtx, rtx *);
rtx
gen_split_1408 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 9819 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx tmp;
  if (TARGET_64BIT)
    {
      tmp = gen_lowpart (DImode, operands[0]);
      tmp = gen_rtx_ZERO_EXTRACT (DImode, tmp, const1_rtx, GEN_INT (63));
      operands[0] = tmp;

      if (GET_CODE (operands[1]) == ABS)
	tmp = const0_rtx;
      else
	tmp = gen_rtx_NOT (DImode, tmp);
    }
  else
    {
      operands[0] = gen_highpart (SImode, operands[0]);
      if (GET_CODE (operands[1]) == ABS)
	{
	  tmp = gen_int_mode (0x7fffffff, SImode);
	  tmp = gen_rtx_AND (SImode, operands[0], tmp);
	}
      else
	{
	  tmp = gen_int_mode (0x80000000, SImode);
	  tmp = gen_rtx_XOR (SImode, operands[0], tmp);
	}
    }
  operands[1] = tmp;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9849 */
extern rtx gen_split_1409 (rtx, rtx *);
rtx
gen_split_1409 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 9857 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx tmp;
  operands[0] = gen_rtx_REG (SImode,
			     true_regnum (operands[0])
			     + (TARGET_64BIT ? 1 : 2));
  if (GET_CODE (operands[1]) == ABS)
    {
      tmp = GEN_INT (0x7fff);
      tmp = gen_rtx_AND (SImode, operands[0], tmp);
    }
  else
    {
      tmp = GEN_INT (0x8000);
      tmp = gen_rtx_XOR (SImode, operands[0], tmp);
    }
  operands[1] = tmp;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9875 */
extern rtx gen_split_1410 (rtx, rtx *);
rtx
gen_split_1410 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 9883 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  enum machine_mode mode = GET_MODE (operands[0]);
  int size = mode == XFmode ? 10 : GET_MODE_SIZE (mode);
  rtx tmp;

  operands[0] = adjust_address (operands[0], QImode, size - 1);
  if (GET_CODE (operands[1]) == ABS)
    {
      tmp = gen_int_mode (0x7f, QImode);
      tmp = gen_rtx_AND (QImode, operands[0], tmp);
    }
  else
    {
      tmp = gen_int_mode (0x80, QImode);
      tmp = gen_rtx_XOR (QImode, operands[0], tmp);
    }
  operands[1] = tmp;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10009 */
rtx
gen_one_cmpldi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 10013 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_unary_operator (NOT, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10035 */
extern rtx gen_split_1412 (rtx, rtx *);
rtx
gen_split_1412 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 10049 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand2), GET_MODE (operand2),
		gen_rtx_XOR (DImode,
	operand3,
	constm1_rtx),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_XOR (DImode,
	copy_rtx (operand3),
	constm1_rtx)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10051 */
rtx
gen_one_cmplsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 10055 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_unary_operator (NOT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10086 */
extern rtx gen_split_1414 (rtx, rtx *);
rtx
gen_split_1414 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 10099 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand2), GET_MODE (operand2),
		gen_rtx_XOR (SImode,
	operand3,
	constm1_rtx),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_XOR (SImode,
	copy_rtx (operand3),
	constm1_rtx)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10114 */
extern rtx gen_split_1415 (rtx, rtx *);
rtx
gen_split_1415 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 10127 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand2), GET_MODE (operand2),
		gen_rtx_XOR (SImode,
	operand3,
	constm1_rtx),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_XOR (SImode,
	copy_rtx (operand3),
	constm1_rtx))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10129 */
rtx
gen_one_cmplhi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 10133 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_unary_operator (NOT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (HImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10155 */
extern rtx gen_split_1417 (rtx, rtx *);
rtx
gen_split_1417 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 10168 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand2), GET_MODE (operand2),
		gen_rtx_XOR (HImode,
	operand3,
	constm1_rtx),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_XOR (HImode,
	copy_rtx (operand3),
	constm1_rtx)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10171 */
rtx
gen_one_cmplqi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 10175 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_unary_operator (NOT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (QImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10199 */
extern rtx gen_split_1419 (rtx, rtx *);
rtx
gen_split_1419 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 10212 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand2), GET_MODE (operand2),
		gen_rtx_XOR (QImode,
	operand3,
	constm1_rtx),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_XOR (QImode,
	copy_rtx (operand3),
	constm1_rtx)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10238 */
rtx
gen_ashlti3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 10244 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (! immediate_operand (operands[2], QImode))
    {
      emit_insn (gen_ashlti3_1 (operands[0], operands[1], operands[2]));
      DONE;
    }
  ix86_expand_binary_operator (ASHIFT, TImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (TImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10273 */
extern rtx gen_split_1421 (rtx, rtx *);
rtx
gen_split_1421 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 10281 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_ashl (operands, operands[3], TImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10283 */
extern rtx gen_split_1422 (rtx, rtx *);
rtx
gen_split_1422 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 10290 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_ashl (operands, NULL_RTX, TImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10308 */
rtx
gen_x86_64_shift_adj (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_AND (QImode,
	operand2,
	const_int_rtx[MAX_SAVED_CONST_INT + (64)]),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DImode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	operand1,
	operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_IF_THEN_ELSE (DImode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	operand3,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10324 */
rtx
gen_ashldi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 10329 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFT, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10375 */
extern rtx gen_split_1425 (rtx, rtx *);
rtx
gen_split_1425 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 10385 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[2] = gen_int_mode (1 << INTVAL (operands[2]), DImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10485 */
extern rtx gen_peephole2_1426 (rtx, rtx *);
rtx
gen_peephole2_1426 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 10494 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_ashl (operands, operands[3], DImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10496 */
extern rtx gen_split_1427 (rtx, rtx *);
rtx
gen_split_1427 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 10504 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_ashl (operands, NULL_RTX, DImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10523 */
rtx
gen_x86_shift_adj_1 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_AND (QImode,
	operand2,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	operand1,
	operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	operand3,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10539 */
rtx
gen_x86_shift_adj_2 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 10544 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();
  rtx tmp;

  emit_insn (gen_testqi_ccz_1 (operands[2], GEN_INT (32)));

  tmp = gen_rtx_REG (CCZmode, FLAGS_REG);
  tmp = gen_rtx_EQ (VOIDmode, tmp, const0_rtx);
  tmp = gen_rtx_IF_THEN_ELSE (VOIDmode, tmp,
			      gen_rtx_LABEL_REF (VOIDmode, label),
			      pc_rtx);
  tmp = emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx, tmp));
  JUMP_LABEL (tmp) = label;

  emit_move_insn (operands[0], operands[1]);
  ix86_expand_clear (operands[1]);

  emit_label (label);
  LABEL_NUSES (label) = 1;

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10567 */
rtx
gen_ashlsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 10573 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10615 */
extern rtx gen_split_1431 (rtx, rtx *);
rtx
gen_split_1431 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 10624 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx pat;
  enum machine_mode mode = GET_MODE (operands[0]);

  if (GET_MODE_SIZE (mode) < 4)
    operands[0] = gen_lowpart (SImode, operands[0]);
  if (mode != Pmode)
    operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = gen_int_mode (1 << INTVAL (operands[2]), Pmode);

  pat = gen_rtx_MULT (Pmode, operands[1], operands[2]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10642 */
extern rtx gen_split_1432 (rtx, rtx *);
rtx
gen_split_1432 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 10650 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx pat, clob;
  emit_move_insn (operands[0], operands[1]);
  pat = gen_rtx_SET (VOIDmode, operands[0],
		     gen_rtx_ASHIFT (GET_MODE (operands[0]),
				     operands[0], operands[2]));
  clob = gen_rtx_CLOBBER (VOIDmode, gen_rtx_REG (CCmode, FLAGS_REG));
  emit_insn (gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2, pat, clob)));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10699 */
extern rtx gen_split_1433 (rtx, rtx *);
rtx
gen_split_1433 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 10709 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = gen_int_mode (1 << INTVAL (operands[2]), Pmode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2),
	0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10841 */
rtx
gen_ashlhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 10847 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11007 */
rtx
gen_ashlqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11013 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11213 */
rtx
gen_ashrti3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11219 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (! immediate_operand (operands[2], QImode))
    {
      emit_insn (gen_ashrti3_1 (operands[0], operands[1], operands[2]));
      DONE;
    }
  ix86_expand_binary_operator (ASHIFTRT, TImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (TImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11248 */
extern rtx gen_split_1437 (rtx, rtx *);
rtx
gen_split_1437 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 11256 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_ashr (operands, operands[3], TImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11258 */
extern rtx gen_split_1438 (rtx, rtx *);
rtx
gen_split_1438 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 11265 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_ashr (operands, NULL_RTX, TImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11283 */
rtx
gen_ashrdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11288 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFTRT, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11414 */
extern rtx gen_peephole2_1440 (rtx, rtx *);
rtx
gen_peephole2_1440 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 11423 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_ashr (operands, operands[3], DImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11425 */
extern rtx gen_split_1441 (rtx, rtx *);
rtx
gen_split_1441 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 11433 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_ashr (operands, NULL_RTX, DImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11451 */
rtx
gen_x86_shift_adj_3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11456 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();
  rtx tmp;

  emit_insn (gen_testqi_ccz_1 (operands[2], GEN_INT (32)));

  tmp = gen_rtx_REG (CCZmode, FLAGS_REG);
  tmp = gen_rtx_EQ (VOIDmode, tmp, const0_rtx);
  tmp = gen_rtx_IF_THEN_ELSE (VOIDmode, tmp,
			      gen_rtx_LABEL_REF (VOIDmode, label),
			      pc_rtx);
  tmp = emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx, tmp));
  JUMP_LABEL (tmp) = label;

  emit_move_insn (operands[0], operands[1]);
  emit_insn (gen_ashrsi3_31 (operands[1], operands[1], GEN_INT (31)));

  emit_label (label);
  LABEL_NUSES (label) = 1;

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11512 */
rtx
gen_ashrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11518 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFTRT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11669 */
rtx
gen_ashrhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11675 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFTRT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11772 */
rtx
gen_ashrqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11778 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFTRT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11908 */
rtx
gen_lshrti3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11914 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (! immediate_operand (operands[2], QImode))
    {
      emit_insn (gen_lshrti3_1 (operands[0], operands[1], operands[2]));
      DONE;
    }
  ix86_expand_binary_operator (LSHIFTRT, TImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (TImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11943 */
extern rtx gen_split_1447 (rtx, rtx *);
rtx
gen_split_1447 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 11951 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_lshr (operands, operands[3], TImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11953 */
extern rtx gen_split_1448 (rtx, rtx *);
rtx
gen_split_1448 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 11960 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_lshr (operands, NULL_RTX, TImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11962 */
rtx
gen_lshrdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11967 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (LSHIFTRT, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12076 */
extern rtx gen_peephole2_1450 (rtx, rtx *);
rtx
gen_peephole2_1450 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 12085 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_lshr (operands, operands[3], DImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12087 */
extern rtx gen_split_1451 (rtx, rtx *);
rtx
gen_split_1451 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 12095 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_split_lshr (operands, NULL_RTX, DImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12097 */
rtx
gen_lshrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12103 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (LSHIFTRT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12255 */
rtx
gen_lshrhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12261 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (LSHIFTRT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12358 */
rtx
gen_lshrqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12364 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (LSHIFTRT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12490 */
rtx
gen_rotldi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12496 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (TARGET_64BIT)
    {
      ix86_expand_binary_operator (ROTATE, DImode, operands);
      DONE;
    }
  if (!const_1_to_31_operand (operands[2], VOIDmode))
    FAIL;
  emit_insn (gen_ix86_rotldi3 (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12510 */
extern rtx gen_split_1456 (rtx, rtx *);
rtx
gen_split_1456 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 12532 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
split_di (operands, 1, operands + 4, operands + 5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand4),
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand4),
	operand2),
	gen_rtx_LSHIFTRT (SImode,
	operand5,
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	copy_rtx (operand2))))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand5),
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand5),
	copy_rtx (operand2)),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand3),
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	copy_rtx (operand2))))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12560 */
rtx
gen_rotlsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12566 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ROTATE, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12619 */
rtx
gen_rotlhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12625 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ROTATE, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12653 */
rtx
gen_rotlqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12659 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ROTATE, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12714 */
rtx
gen_rotrdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12720 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (TARGET_64BIT)
    {
      ix86_expand_binary_operator (ROTATERT, DImode, operands);
      DONE;
    }
  if (!const_1_to_31_operand (operands[2], VOIDmode))
    FAIL;
  emit_insn (gen_ix86_rotrdi3 (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12734 */
extern rtx gen_split_1461 (rtx, rtx *);
rtx
gen_split_1461 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 12756 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
split_di (operands, 1, operands + 4, operands + 5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand4),
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand4),
	operand2),
	gen_rtx_ASHIFT (SImode,
	operand5,
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	copy_rtx (operand2))))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand5),
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand5),
	copy_rtx (operand2)),
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand3),
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	copy_rtx (operand2))))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12784 */
rtx
gen_rotrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12790 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ROTATERT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12846 */
rtx
gen_rotrhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12852 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ROTATERT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12880 */
rtx
gen_rotrqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12886 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ROTATERT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12943 */
rtx
gen_extv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 12949 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  /* Handle extractions from %ah et al.  */
  if (INTVAL (operands[2]) != 8 || INTVAL (operands[3]) != 8)
    FAIL;

  /* From mips.md: extract_bit_field doesn't verify that our source
     matches the predicate, so check it again here.  */
  if (! ext_register_operand (operands[1], VOIDmode))
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12960 */
rtx
gen_extzv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 12966 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  /* Handle extractions from %ah et al.  */
  if (INTVAL (operands[2]) != 8 || INTVAL (operands[3]) != 8)
    FAIL;

  /* From mips.md: extract_bit_field doesn't verify that our source
     matches the predicate, so check it again here.  */
  if (! ext_register_operand (operands[1], VOIDmode))
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12977 */
rtx
gen_insv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 12983 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  /* Handle insertions to %ah et al.  */
  if (INTVAL (operands[1]) != 8 || INTVAL (operands[2]) != 8)
    FAIL;

  /* From mips.md: insert_bit_field doesn't verify that our source
     matches the predicate, so check it again here.  */
  if (! ext_register_operand (operands[0], VOIDmode))
    FAIL;

  if (TARGET_64BIT)
    emit_insn (gen_movdi_insv_1_rex64 (operands[0], operands[3]));
  else
    emit_insn (gen_movsi_insv_1 (operands[0], operands[3]));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (VOIDmode,
	operand0,
	operand1,
	operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13046 */
extern rtx gen_peephole2_1468 (rtx, rtx *);
rtx
gen_peephole2_1468 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 13056 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  HOST_WIDE_INT i = INTVAL (operands[1]), hi, lo;
  rtx op1;

  if (HOST_BITS_PER_WIDE_INT >= 64)
    lo = (HOST_WIDE_INT)1 << i, hi = 0;
  else if (i < HOST_BITS_PER_WIDE_INT)
    lo = (HOST_WIDE_INT)1 << i, hi = 0;
  else
    lo = 0, hi = (HOST_WIDE_INT)1 << (i - HOST_BITS_PER_WIDE_INT);

  op1 = immed_double_const (lo, hi, DImode);
  if (i >= 31)
    {
      emit_move_insn (operands[2], op1);
      op1 = operands[2];
    }

  emit_insn (gen_iordi3 (operands[0], operands[0], op1));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13078 */
extern rtx gen_peephole2_1469 (rtx, rtx *);
rtx
gen_peephole2_1469 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 13088 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  HOST_WIDE_INT i = INTVAL (operands[1]), hi, lo;
  rtx op1;

  if (HOST_BITS_PER_WIDE_INT >= 64)
    lo = (HOST_WIDE_INT)1 << i, hi = 0;
  else if (i < HOST_BITS_PER_WIDE_INT)
    lo = (HOST_WIDE_INT)1 << i, hi = 0;
  else
    lo = 0, hi = (HOST_WIDE_INT)1 << (i - HOST_BITS_PER_WIDE_INT);

  op1 = immed_double_const (~lo, ~hi, DImode);
  if (i >= 32)
    {
      emit_move_insn (operands[2], op1);
      op1 = operands[2];
    }

  emit_insn (gen_anddi3 (operands[0], operands[0], op1));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13110 */
extern rtx gen_peephole2_1470 (rtx, rtx *);
rtx
gen_peephole2_1470 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 13121 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  HOST_WIDE_INT i = INTVAL (operands[1]), hi, lo;
  rtx op1;

  if (HOST_BITS_PER_WIDE_INT >= 64)
    lo = (HOST_WIDE_INT)1 << i, hi = 0;
  else if (i < HOST_BITS_PER_WIDE_INT)
    lo = (HOST_WIDE_INT)1 << i, hi = 0;
  else
    lo = 0, hi = (HOST_WIDE_INT)1 << (i - HOST_BITS_PER_WIDE_INT);

  op1 = immed_double_const (lo, hi, DImode);
  if (i >= 31)
    {
      emit_move_insn (operands[2], op1);
      op1 = operands[2];
    }

  emit_insn (gen_xordi3 (operands[0], operands[0], op1));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13152 */
rtx
gen_seq (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13156 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (ix86_expand_setcc (EQ, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13158 */
rtx
gen_sne (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13162 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (ix86_expand_setcc (NE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13164 */
rtx
gen_sgt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13168 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (ix86_expand_setcc (GT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13170 */
rtx
gen_sgtu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13174 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (ix86_expand_setcc (GTU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13176 */
rtx
gen_slt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13180 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (ix86_expand_setcc (LT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13182 */
rtx
gen_sltu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13186 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (ix86_expand_setcc (LTU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13188 */
rtx
gen_sge (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13192 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (ix86_expand_setcc (GE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13194 */
rtx
gen_sgeu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13198 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (ix86_expand_setcc (GEU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GEU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13200 */
rtx
gen_sle (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13204 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (ix86_expand_setcc (LE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13206 */
rtx
gen_sleu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13210 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (ix86_expand_setcc (LEU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LEU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13212 */
rtx
gen_sunordered (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13216 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (ix86_expand_setcc (UNORDERED, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNORDERED (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13218 */
rtx
gen_sordered (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13222 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (ix86_expand_setcc (ORDERED, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ORDERED (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13224 */
rtx
gen_suneq (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13228 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (ix86_expand_setcc (UNEQ, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNEQ (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13230 */
rtx
gen_sunge (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13234 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (ix86_expand_setcc (UNGE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13236 */
rtx
gen_sungt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13240 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (ix86_expand_setcc (UNGT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13242 */
rtx
gen_sunle (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13246 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (ix86_expand_setcc (UNLE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13248 */
rtx
gen_sunlt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13252 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (ix86_expand_setcc (UNLT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13254 */
rtx
gen_sltgt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13258 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (ix86_expand_setcc (LTGT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LTGT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13286 */
extern rtx gen_split_1489 (rtx, rtx *);
rtx
gen_split_1489 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 13293 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  PUT_MODE (operands[1], QImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13297 */
extern rtx gen_split_1490 (rtx, rtx *);
rtx
gen_split_1490 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 13304 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  PUT_MODE (operands[1], QImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13308 */
extern rtx gen_split_1491 (rtx, rtx *);
rtx
gen_split_1491 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 13315 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx new_op1 = copy_rtx (operands[1]);
  operands[1] = new_op1;
  PUT_MODE (new_op1, QImode);
  PUT_CODE (new_op1, ix86_reverse_condition (GET_CODE (new_op1),
					     GET_MODE (XEXP (new_op1, 0))));

  /* Make sure that (a) the CCmode we have for the flags is strong
     enough for the reversed compare or (b) we have a valid FP compare.  */
  if (! ix86_comparison_operator (new_op1, VOIDmode))
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13328 */
extern rtx gen_split_1492 (rtx, rtx *);
rtx
gen_split_1492 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 13335 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx new_op1 = copy_rtx (operands[1]);
  operands[1] = new_op1;
  PUT_MODE (new_op1, QImode);
  PUT_CODE (new_op1, ix86_reverse_condition (GET_CODE (new_op1),
					     GET_MODE (XEXP (new_op1, 0))));

  /* Make sure that (a) the CCmode we have for the flags is strong
     enough for the reversed compare or (b) we have a valid FP compare.  */
  if (! ix86_comparison_operator (new_op1, VOIDmode))
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13379 */
rtx
gen_beq (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13385 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_branch (EQ, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13387 */
rtx
gen_bne (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13393 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_branch (NE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13395 */
rtx
gen_bgt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13401 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_branch (GT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13403 */
rtx
gen_bgtu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13409 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_branch (GTU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13411 */
rtx
gen_blt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13417 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_branch (LT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13419 */
rtx
gen_bltu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13425 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_branch (LTU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13427 */
rtx
gen_bge (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13433 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_branch (GE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13435 */
rtx
gen_bgeu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13441 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_branch (GEU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13443 */
rtx
gen_ble (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13449 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_branch (LE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13451 */
rtx
gen_bleu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13457 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_branch (LEU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13459 */
rtx
gen_bunordered (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13465 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_branch (UNORDERED, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13467 */
rtx
gen_bordered (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13473 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_branch (ORDERED, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13475 */
rtx
gen_buneq (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13481 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_branch (UNEQ, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13483 */
rtx
gen_bunge (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13489 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_branch (UNGE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13491 */
rtx
gen_bungt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13497 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_branch (UNGT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13499 */
rtx
gen_bunle (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13505 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_branch (UNLE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13507 */
rtx
gen_bunlt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13513 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_branch (UNLT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13515 */
rtx
gen_bltgt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13521 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_branch (LTGT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13567 */
extern rtx gen_split_1511 (rtx, rtx *);
rtx
gen_split_1511 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 13579 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  PUT_MODE (operands[0], VOIDmode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand0,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13583 */
extern rtx gen_split_1512 (rtx, rtx *);
rtx
gen_split_1512 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 13595 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx new_op0 = copy_rtx (operands[0]);
  operands[0] = new_op0;
  PUT_MODE (new_op0, VOIDmode);
  PUT_CODE (new_op0, ix86_reverse_condition (GET_CODE (new_op0),
					     GET_MODE (XEXP (new_op0, 0))));

  /* Make sure that (a) the CCmode we have for the flags is strong
     enough for the reversed compare or (b) we have a valid FP compare.  */
  if (! ix86_comparison_operator (new_op0, VOIDmode))
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand0,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13815 */
extern rtx gen_split_1513 (rtx, rtx *);
rtx
gen_split_1513 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 13826 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_split_fp_branch (GET_CODE (operands[0]), operands[1], operands[2],
	                operands[3], operands[4], NULL_RTX, NULL_RTX);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13832 */
extern rtx gen_split_1514 (rtx, rtx *);
rtx
gen_split_1514 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 13844 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_split_fp_branch (GET_CODE (operands[0]), operands[1], operands[2],
	     		operands[3], operands[4], operands[5], NULL_RTX);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13850 */
extern rtx gen_split_1515 (rtx, rtx *);
rtx
gen_split_1515 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 13863 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[7] = gen_rtx_FLOAT (GET_MODE (operands[1]), operands[2]);
  ix86_split_fp_branch (swap_condition (GET_CODE (operands[0])),
			operands[3], operands[7],
			operands[4], operands[5], operands[6], NULL_RTX);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13850 */
extern rtx gen_split_1516 (rtx, rtx *);
rtx
gen_split_1516 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 13863 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[7] = gen_rtx_FLOAT (GET_MODE (operands[1]), operands[2]);
  ix86_split_fp_branch (swap_condition (GET_CODE (operands[0])),
			operands[3], operands[7],
			operands[4], operands[5], operands[6], NULL_RTX);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13872 */
extern rtx gen_split_1517 (rtx, rtx *);
rtx
gen_split_1517 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 13885 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[7] = ix86_force_to_memory (GET_MODE (operands[2]), operands[2]);
  operands[7] = gen_rtx_FLOAT (GET_MODE (operands[1]), operands[7]);
  ix86_split_fp_branch (swap_condition (GET_CODE (operands[0])),
			operands[3], operands[7],
			operands[4], operands[5], operands[6], operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13872 */
extern rtx gen_split_1518 (rtx, rtx *);
rtx
gen_split_1518 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 13885 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[7] = ix86_force_to_memory (GET_MODE (operands[2]), operands[2]);
  operands[7] = gen_rtx_FLOAT (GET_MODE (operands[1]), operands[7]);
  ix86_split_fp_branch (swap_condition (GET_CODE (operands[0])),
			operands[3], operands[7],
			operands[4], operands[5], operands[6], operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13911 */
rtx
gen_indirect_jump (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13930 */
rtx
gen_tablejump (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 13934 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  /* In PIC mode, the table entries are stored GOT (32-bit) or PC (64-bit)
     relative.  Convert the relative address to an absolute address.  */
  if (flag_pic)
    {
      rtx op0, op1;
      enum rtx_code code;

      if (TARGET_64BIT)
	{
	  code = PLUS;
	  op0 = operands[0];
	  op1 = gen_rtx_LABEL_REF (Pmode, operands[1]);
	}
      else if (TARGET_MACHO || HAVE_AS_GOTOFF_IN_DATA)
	{
	  code = PLUS;
	  op0 = operands[0];
	  op1 = pic_offset_table_rtx;
	}
      else
	{
	  code = MINUS;
	  op0 = pic_offset_table_rtx;
	  op1 = operands[0];
	}

      operands[0] = expand_simple_binop (Pmode, code, op0, op1, NULL_RTX, 0,
					 OPTAB_DIRECT);
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13984 */
extern rtx gen_peephole2_1521 (rtx, rtx *);
rtx
gen_peephole2_1521 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 13997 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[4] = gen_rtx_REG (GET_MODE (operands[0]), FLAGS_REG);
  operands[5] = gen_lowpart (QImode, operands[3]);
  ix86_expand_clear (operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand5),
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14005 */
extern rtx gen_peephole2_1522 (rtx, rtx *);
rtx
gen_peephole2_1522 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 14019 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[4] = gen_rtx_REG (GET_MODE (operands[0]), FLAGS_REG);
  operands[5] = gen_lowpart (QImode, operands[3]);
  ix86_expand_clear (operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand5),
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14033 */
rtx
gen_call_pop (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 14040 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_expand_call (NULL, operands[0], operands[1], operands[2], operands[3], 0);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand3)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14080 */
rtx
gen_call (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 14085 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_expand_call (NULL, operands[0], operands[1], operands[2], NULL, 0);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_CALL (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14090 */
rtx
gen_sibcall (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 14095 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_expand_call (NULL, operands[0], operands[1], operands[2], NULL, 1);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_CALL (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14162 */
rtx
gen_call_value_pop (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
#line 14170 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_expand_call (operands[0], operands[1], operands[2],
		    operands[3], operands[4], 0);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand4)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14176 */
rtx
gen_call_value (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 14183 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_expand_call (operands[0], operands[1], operands[2], operands[3], NULL, 0);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14188 */
rtx
gen_sibcall_value (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 14195 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_expand_call (operands[0], operands[1], operands[2], operands[3], NULL, 1);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14202 */
rtx
gen_untyped_call (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 14208 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  int i;

  /* In order to give reg-stack an easier job in validating two
     coprocessor registers as containing a possible return value,
     simply pretend the untyped call returns a complex long double
     value.  */

  ix86_expand_call ((TARGET_FLOAT_RETURNS_IN_80387
		     ? gen_rtx_REG (XCmode, FIRST_FLOAT_REG) : NULL),
		    operands[0], const0_rtx, GEN_INT (SSE_REGPARM_MAX - 1),
		    NULL, 0);

  for (i = 0; i < XVECLEN (operands[2], 0); i++)
    {
      rtx set = XVECEXP (operands[2], 0, i);
      emit_move_insn (SET_DEST (set), SET_SRC (set));
    }

  /* The optimizer does not know that the call sets the function value
     registers we stored in the result block.  We avoid problems by
     claiming that all hard registers are used and clobbered at this
     point.  */
  emit_insn (gen_blockage (const0_rtx));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	const0_rtx),
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14251 */
rtx
gen_return (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 14254 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (current_function_pops_args)
    {
      rtx popc = GEN_INT (current_function_pops_args);
      emit_jump_insn (gen_return_pop_internal (popc));
      DONE;
    }
}
  }
  emit_jump_insn (gen_rtx_RETURN (VOIDmode));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14329 */
rtx
gen_prologue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 14332 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_prologue (); DONE;
  }
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14361 */
rtx
gen_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 14364 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_epilogue (1); DONE;
  }
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14366 */
rtx
gen_sibcall_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 14369 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_epilogue (0); DONE;
  }
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14371 */
rtx
gen_eh_return (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 14374 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx tmp, sa = EH_RETURN_STACKADJ_RTX, ra = operands[0];

  /* Tricky bit: we write the address of the handler to which we will
     be returning into someone else's stack frame, one word below the
     stack address we wish to restore.  */
  tmp = gen_rtx_PLUS (Pmode, arg_pointer_rtx, sa);
  tmp = plus_constant (tmp, -UNITS_PER_WORD);
  tmp = gen_rtx_MEM (Pmode, tmp);
  emit_move_insn (tmp, ra);

  if (Pmode == SImode)
    emit_jump_insn (gen_eh_return_si (sa));
  else
    emit_jump_insn (gen_eh_return_di (sa));
  emit_barrier ();
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14393 */
extern rtx gen_split_1535 (rtx, rtx *);
rtx
gen_split_1535 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 14401 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_epilogue (2); DONE;
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14403 */
extern rtx gen_split_1536 (rtx, rtx *);
rtx
gen_split_1536 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 14411 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
ix86_expand_epilogue (2); DONE;
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14429 */
rtx
gen_ffssi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FFS (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14438 */
extern rtx gen_split_1538 (rtx, rtx *);
rtx
gen_split_1538 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 14455 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	constm1_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	operand1,
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CTZ (SImode,
	copy_rtx (operand1))))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_EQ (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	copy_rtx (operand2),
	copy_rtx (operand0))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	const1_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14457 */
extern rtx gen_split_1539 (rtx, rtx *);
rtx
gen_split_1539 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 14475 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[3] = gen_lowpart (QImode, operands[2]);
  ix86_expand_clear (operands[2]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	operand1,
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CTZ (SImode,
	copy_rtx (operand1))))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand3),
	gen_rtx_EQ (QImode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NEG (SImode,
	copy_rtx (operand2))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IOR (SImode,
	copy_rtx (operand0),
	copy_rtx (operand2))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	const1_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14490 */
rtx
gen_ffsdi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FFS (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14499 */
extern rtx gen_split_1541 (rtx, rtx *);
rtx
gen_split_1541 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 14517 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	constm1_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	operand1,
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CTZ (DImode,
	copy_rtx (operand1))))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IF_THEN_ELSE (DImode,
	gen_rtx_EQ (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	copy_rtx (operand2),
	copy_rtx (operand0))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	const1_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14545 */
rtx
gen_clzsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (31)],
	gen_rtx_CLZ (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (31)])),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14566 */
rtx
gen_clzdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (63)],
	gen_rtx_CLZ (DImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (DImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (63)])),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14621 */
rtx
gen_tls_global_dynamic_32 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 14632 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (flag_pic)
    operands[2] = pic_offset_table_rtx;
  else
    {
      operands[2] = gen_reg_rtx (Pmode);
      emit_insn (gen_set_got (operands[2]));
    }
  if (TARGET_GNU2_TLS)
    {
       emit_insn (gen_tls_dynamic_gnu2_32
		  (operands[0], operands[1], operands[2]));
       DONE;
    }
  operands[3] = ix86_tls_get_addr ();
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand2,
		operand1,
		operand3),
	17)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14660 */
rtx
gen_tls_global_dynamic_64 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 14666 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (TARGET_GNU2_TLS)
    {
       emit_insn (gen_tls_dynamic_gnu2_64
		  (operands[0], operands[1]));
       DONE;
    }
  operands[2] = ix86_tls_get_addr ();
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (DImode,
	gen_rtx_MEM (QImode,
	operand2),
	const0_rtx)),
		gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14703 */
rtx
gen_tls_local_dynamic_base_32 (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
#line 14711 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (flag_pic)
    operands[1] = pic_offset_table_rtx;
  else
    {
      operands[1] = gen_reg_rtx (Pmode);
      emit_insn (gen_set_got (operands[1]));
    }
  if (TARGET_GNU2_TLS)
    {
       emit_insn (gen_tls_dynamic_gnu2_32
		  (operands[0], ix86_tls_module_base (), operands[1]));
       DONE;
    }
  operands[2] = ix86_tls_get_addr ();
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	18)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14738 */
rtx
gen_tls_local_dynamic_base_64 (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 14743 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (TARGET_GNU2_TLS)
    {
       emit_insn (gen_tls_dynamic_gnu2_64
		  (operands[0], ix86_tls_module_base ()));
       DONE;
    }
  operands[1] = ix86_tls_get_addr ();
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (DImode,
	gen_rtx_MEM (QImode,
	operand1),
	const0_rtx)),
		gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		const0_rtx),
	18))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14756 */
extern rtx gen_split_1548 (rtx, rtx *);
rtx
gen_split_1548 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 14776 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand3,
		operand2),
	17)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	operand5),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14830 */
rtx
gen_tls_dynamic_gnu2_32 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 14843 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[3] = no_new_pseudos ? operands[0] : gen_reg_rtx (Pmode);
  ix86_tls_descriptor_calls_expanded_in_cfun = true;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	operand2,
	gen_rtx_CONST (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	19)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (4,
		operand1,
		operand3,
		operand2,
		gen_rtx_REG (SImode,
	7)),
	19)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14876 */
extern rtx gen_split_1550 (rtx, rtx *);
rtx
gen_split_1550 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 14892 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[5] = no_new_pseudos ? operands[0] : gen_reg_rtx (Pmode);
  emit_insn (gen_tls_dynamic_gnu2_32 (operands[5], operands[1], operands[2]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14897 */
rtx
gen_tls_dynamic_gnu2_64 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 14907 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[2] = no_new_pseudos ? operands[0] : gen_reg_rtx (Pmode);
  ix86_tls_descriptor_calls_expanded_in_cfun = true;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	19)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_REG (DImode,
	7)),
	19)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14936 */
extern rtx gen_split_1552 (rtx, rtx *);
rtx
gen_split_1552 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 14951 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[4] = no_new_pseudos ? operands[0] : gen_reg_rtx (Pmode);
  emit_insn (gen_tls_dynamic_gnu2_64 (operands[4], operands[1]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15431 */
extern rtx gen_split_1553 (rtx, rtx *);
rtx
gen_split_1553 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 15439 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{ 
  operands[4] = ix86_force_to_memory (GET_MODE (operands[1]), operands[1]);
  operands[4] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[4]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			  gen_rtx_fmt_ee (GET_CODE (operands[3]),
					  GET_MODE (operands[3]),
					  operands[4],
					  operands[2])));
  ix86_free_from_memory (GET_MODE (operands[1]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15431 */
extern rtx gen_split_1554 (rtx, rtx *);
rtx
gen_split_1554 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 15439 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{ 
  operands[4] = ix86_force_to_memory (GET_MODE (operands[1]), operands[1]);
  operands[4] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[4]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			  gen_rtx_fmt_ee (GET_CODE (operands[3]),
					  GET_MODE (operands[3]),
					  operands[4],
					  operands[2])));
  ix86_free_from_memory (GET_MODE (operands[1]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15451 */
extern rtx gen_split_1555 (rtx, rtx *);
rtx
gen_split_1555 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 15459 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[4] = ix86_force_to_memory (GET_MODE (operands[2]), operands[2]);
  operands[4] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[4]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			  gen_rtx_fmt_ee (GET_CODE (operands[3]),
					  GET_MODE (operands[3]),
					  operands[1],
					  operands[4])));
  ix86_free_from_memory (GET_MODE (operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15451 */
extern rtx gen_split_1556 (rtx, rtx *);
rtx
gen_split_1556 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 15459 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[4] = ix86_force_to_memory (GET_MODE (operands[2]), operands[2]);
  operands[4] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[4]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			  gen_rtx_fmt_ee (GET_CODE (operands[3]),
					  GET_MODE (operands[3]),
					  operands[1],
					  operands[4])));
  ix86_free_from_memory (GET_MODE (operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15473 */
rtx
gen_sqrtsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 15477 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (!TARGET_SSE_MATH)
    operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15511 */
rtx
gen_sqrtdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 15515 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (!(TARGET_SSE2 && TARGET_SSE_MATH))
    operands[1] = force_reg (DFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15605 */
rtx
gen_fmodsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15612 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();

  rtx op1 = gen_reg_rtx (XFmode);
  rtx op2 = gen_reg_rtx (XFmode);

  emit_insn(gen_extendsfxf2 (op1, operands[1]));
  emit_insn(gen_extendsfxf2 (op2, operands[2]));

  emit_label (label);

  emit_insn (gen_fpremxf4 (op1, op2, op1, op2));
  ix86_emit_fp_unordered_jump (label);

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op1));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15630 */
rtx
gen_fmoddf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15637 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();

  rtx op1 = gen_reg_rtx (XFmode);
  rtx op2 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_extenddfxf2 (op2, operands[2]));

  emit_label (label);

  emit_insn (gen_fpremxf4 (op1, op2, op1, op2));
  ix86_emit_fp_unordered_jump (label);

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op1));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15655 */
rtx
gen_fmodxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15661 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();

  emit_label (label);

  emit_insn (gen_fpremxf4 (operands[1], operands[2],
			   operands[1], operands[2]));
  ix86_emit_fp_unordered_jump (label);

  emit_move_insn (operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15690 */
rtx
gen_dremsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15697 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();

  rtx op1 = gen_reg_rtx (XFmode);
  rtx op2 = gen_reg_rtx (XFmode);

  emit_insn(gen_extendsfxf2 (op1, operands[1]));
  emit_insn(gen_extendsfxf2 (op2, operands[2]));

  emit_label (label);

  emit_insn (gen_fprem1xf4 (op1, op2, op1, op2));
  ix86_emit_fp_unordered_jump (label);

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op1));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15715 */
rtx
gen_dremdf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15722 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();

  rtx op1 = gen_reg_rtx (XFmode);
  rtx op2 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_extenddfxf2 (op2, operands[2]));

  emit_label (label);

  emit_insn (gen_fprem1xf4 (op1, op2, op1, op2));
  ix86_emit_fp_unordered_jump (label);

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op1));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15740 */
rtx
gen_dremxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15746 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();

  emit_label (label);

  emit_insn (gen_fprem1xf4 (operands[1], operands[2],
			    operands[1], operands[2]));
  ix86_emit_fp_unordered_jump (label);

  emit_move_insn (operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15860 */
extern rtx gen_split_1565 (rtx, rtx *);
rtx
gen_split_1565 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 15869 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand2),
	60)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15871 */
extern rtx gen_split_1566 (rtx, rtx *);
rtx
gen_split_1566 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 15880 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand2),
	61)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15895 */
extern rtx gen_split_1567 (rtx, rtx *);
rtx
gen_split_1567 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 15904 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand2),
	60)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15906 */
extern rtx gen_split_1568 (rtx, rtx *);
rtx
gen_split_1568 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 15915 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand2),
	61)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15932 */
extern rtx gen_split_1569 (rtx, rtx *);
rtx
gen_split_1569 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 15944 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		gen_rtx_FLOAT_EXTEND (DFmode,
	operand2)),
	60)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15946 */
extern rtx gen_split_1570 (rtx, rtx *);
rtx
gen_split_1570 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 15958 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		gen_rtx_FLOAT_EXTEND (DFmode,
	operand2)),
	61)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15972 */
extern rtx gen_split_1571 (rtx, rtx *);
rtx
gen_split_1571 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 15981 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	60)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15983 */
extern rtx gen_split_1572 (rtx, rtx *);
rtx
gen_split_1572 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 15992 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	61)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16012 */
extern rtx gen_peephole2_1573 (rtx, rtx *);
rtx
gen_peephole2_1573 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 16023 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand2),
	82)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		copy_rtx (operand2)),
	83)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16025 */
rtx
gen_tandf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16034 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (DFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	82)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	83)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16056 */
extern rtx gen_peephole2_1575 (rtx, rtx *);
rtx
gen_peephole2_1575 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 16067 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand2),
	82)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		copy_rtx (operand2)),
	83)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16069 */
rtx
gen_tansf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16078 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (SFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	82)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	83)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16099 */
extern rtx gen_peephole2_1577 (rtx, rtx *);
rtx
gen_peephole2_1577 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 16110 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	82)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		copy_rtx (operand2)),
	83)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16112 */
rtx
gen_tanxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16120 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	82)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	83)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16137 */
rtx
gen_atan2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 16144 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx copy = gen_reg_rtx (DFmode);
  emit_move_insn (copy, operands[1]);
  emit_insn (gen_atan2df3_1 (operands[0], copy, operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16151 */
rtx
gen_atandf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16160 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (DFmode);
  emit_move_insn (operands[2], CONST1_RTX (DFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16178 */
rtx
gen_atan2sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 16185 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx copy = gen_reg_rtx (SFmode);
  emit_move_insn (copy, operands[1]);
  emit_insn (gen_atan2sf3_1 (operands[0], copy, operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16192 */
rtx
gen_atansf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16201 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (SFmode);
  emit_move_insn (operands[2], CONST1_RTX (SFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16218 */
rtx
gen_atan2xf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 16224 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx copy = gen_reg_rtx (XFmode);
  emit_move_insn (copy, operands[1]);
  emit_insn (gen_atan2xf3_1 (operands[0], copy, operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16231 */
rtx
gen_atanxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16239 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  emit_move_insn (operands[2], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16244 */
rtx
gen_asindf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[9];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16259 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<8; i++)
    operands[i] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[4], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand2,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_SQRT (XFmode,
	operand5)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand6,
		operand2),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16268 */
rtx
gen_asinsf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[9];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16283 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<8; i++)
    operands[i] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[4], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand2,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_SQRT (XFmode,
	operand5)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand6,
		operand2),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16292 */
rtx
gen_asinxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16304 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<6; i++)
    operands[i] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[3], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MULT (XFmode,
	operand1,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MINUS (XFmode,
	operand3,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_SQRT (XFmode,
	operand4)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand5,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16313 */
rtx
gen_acosdf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[9];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16328 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<8; i++)
    operands[i] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[4], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand2,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_SQRT (XFmode,
	operand5)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand6),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16337 */
rtx
gen_acossf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[9];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16352 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<8; i++)
    operands[i] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[4], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand2,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_SQRT (XFmode,
	operand5)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand6),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16361 */
rtx
gen_acosxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16373 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<6; i++)
    operands[i] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[3], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MULT (XFmode,
	operand1,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MINUS (XFmode,
	operand3,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_SQRT (XFmode,
	operand4)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand5),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16394 */
rtx
gen_logsf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16406 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx temp;

  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);

  temp = standard_80387_constant_rtx (4); /* fldln2 */
  emit_move_insn (operands[3], temp);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16417 */
rtx
gen_logdf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16429 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx temp;

  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);

  temp = standard_80387_constant_rtx (4); /* fldln2 */
  emit_move_insn (operands[3], temp);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16440 */
rtx
gen_logxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16447 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx temp;

  operands[2] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (4); /* fldln2 */
  emit_move_insn (operands[2], temp);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16455 */
rtx
gen_log10sf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16467 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx temp;

  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);

  temp = standard_80387_constant_rtx (3); /* fldlg2 */
  emit_move_insn (operands[3], temp);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16478 */
rtx
gen_log10df2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16490 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx temp;

  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);

  temp = standard_80387_constant_rtx (3); /* fldlg2 */
  emit_move_insn (operands[3], temp);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16501 */
rtx
gen_log10xf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16508 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx temp;

  operands[2] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (3); /* fldlg2 */
  emit_move_insn (operands[2], temp);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16516 */
rtx
gen_log2sf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16528 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[3], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16536 */
rtx
gen_log2df2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16548 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[3], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16556 */
rtx
gen_log2xf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16563 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  emit_move_insn (operands[2], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16580 */
rtx
gen_log1psf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16586 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extendsfxf2 (op1, operands[1]));
  ix86_emit_i387_log1p (op0, op1);
  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16596 */
rtx
gen_log1pdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16602 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  ix86_emit_i387_log1p (op0, op1);
  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16612 */
rtx
gen_log1pxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16617 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_emit_i387_log1p (operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16634 */
rtx
gen_logbsf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16646 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	84)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	85)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16652 */
rtx
gen_logbdf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16664 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	84)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	85)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16670 */
rtx
gen_logbxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16678 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	84)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	85)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16682 */
rtx
gen_ilogbsi2 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 16694 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	84)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	85)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand3)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16723 */
rtx
gen_expsf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[12];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16742 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<12; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (5); /* fldl2e */
  emit_move_insn (operands[3], temp);
  emit_move_insn (operands[8], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand6),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_PLUS (XFmode,
	operand7,
	operand8)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand10,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	86)),
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand10)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16753 */
rtx
gen_expdf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[12];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16772 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<12; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (5); /* fldl2e */
  emit_move_insn (operands[3], temp);
  emit_move_insn (operands[8], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand6),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_PLUS (XFmode,
	operand7,
	operand8)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand10,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	86)),
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand10)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16783 */
rtx
gen_expxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[10];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16798 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<10; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (5); /* fldl2e */
  emit_move_insn (operands[2], temp);
  emit_move_insn (operands[7], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand3),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand3,
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand5),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_PLUS (XFmode,
	operand6,
	operand7)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand8,
		operand4),
	86)),
		gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand8,
		operand4),
	87)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16809 */
rtx
gen_exp10sf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[12];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16828 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<12; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (6); /* fldl2t */
  emit_move_insn (operands[3], temp);
  emit_move_insn (operands[8], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand6),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_PLUS (XFmode,
	operand7,
	operand8)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand10,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	86)),
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand10)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16839 */
rtx
gen_exp10df2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[12];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16858 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<12; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (6); /* fldl2t */
  emit_move_insn (operands[3], temp);
  emit_move_insn (operands[8], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand6),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_PLUS (XFmode,
	operand7,
	operand8)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand10,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	86)),
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand10)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16869 */
rtx
gen_exp10xf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[10];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16884 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<10; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (6); /* fldl2t */
  emit_move_insn (operands[2], temp);
  emit_move_insn (operands[7], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand3),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand3,
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand5),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_PLUS (XFmode,
	operand6,
	operand7)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand8,
		operand4),
	86)),
		gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand8,
		operand4),
	87)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16895 */
rtx
gen_exp2sf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[10];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16913 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<10; i++)
    operands[i] = gen_reg_rtx (XFmode);
  emit_move_insn (operands[6], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MINUS (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_PLUS (XFmode,
	operand5,
	operand6)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand3),
	86)),
		gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand3),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand8)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16921 */
rtx
gen_exp2df2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[10];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16939 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<10; i++)
    operands[i] = gen_reg_rtx (XFmode);
  emit_move_insn (operands[6], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MINUS (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_PLUS (XFmode,
	operand5,
	operand6)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand3),
	86)),
		gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand3),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand8)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16947 */
rtx
gen_exp2xf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[9];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16961 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<9; i++)
    operands[i] = gen_reg_rtx (XFmode);
  emit_move_insn (operands[6], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MINUS (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_PLUS (XFmode,
	operand5,
	operand6)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand3),
	86)),
		gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand3),
	87)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16969 */
rtx
gen_expm1df2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx operand12;
  rtx operand13;
  rtx operand14;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[15];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16995 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<15; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (5); /* fldl2e */
  emit_move_insn (operands[3], temp);
  emit_move_insn (operands[10], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
    operand12 = operands[12];
    operand13 = operands[13];
    operand14 = operands[14];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand6),
	67)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand5),
	86)),
		gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand5),
	87)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand10,
		operand9),
	86)),
		gen_rtx_SET (VOIDmode,
	operand12,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand10,
		operand9),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand13,
	gen_rtx_MINUS (XFmode,
	operand11,
	operand10)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand14,
	gen_rtx_PLUS (XFmode,
	operand13,
	operand8)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand14)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17006 */
rtx
gen_expm1sf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx operand12;
  rtx operand13;
  rtx operand14;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[15];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17032 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<15; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (5); /* fldl2e */
  emit_move_insn (operands[3], temp);
  emit_move_insn (operands[10], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
    operand12 = operands[12];
    operand13 = operands[13];
    operand14 = operands[14];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand6),
	67)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand5),
	86)),
		gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand5),
	87)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand10,
		operand9),
	86)),
		gen_rtx_SET (VOIDmode,
	operand12,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand10,
		operand9),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand13,
	gen_rtx_MINUS (XFmode,
	operand11,
	operand10)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand14,
	gen_rtx_PLUS (XFmode,
	operand13,
	operand8)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand14)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17043 */
rtx
gen_expm1xf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx operand12;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[13];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17066 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<13; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (5); /* fldl2e */
  emit_move_insn (operands[2], temp);
  emit_move_insn (operands[9], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
    operand12 = operands[12];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand3),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand3,
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand5),
	67)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand6,
		operand4),
	86)),
		gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand6,
		operand4),
	87)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand10,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand8),
	86)),
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand8),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand12,
	gen_rtx_MINUS (XFmode,
	operand10,
	operand9)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (XFmode,
	operand12,
	operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17077 */
rtx
gen_ldexpdf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 17093 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  int i;

  for (i=3; i<7; i++)
    operands[i] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FLOAT (XFmode,
	operand2)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand3,
		operand4),
	86)),
		gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand3,
		operand4),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand5)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17100 */
rtx
gen_ldexpsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 17116 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  int i;

  for (i=3; i<7; i++)
    operands[i] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FLOAT (XFmode,
	operand2)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand3,
		operand4),
	86)),
		gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand3,
		operand4),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand5)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17123 */
rtx
gen_ldexpxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 17135 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  int i;

  for (i=3; i<5; i++)
    operands[i] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_FLOAT (XFmode,
	operand2)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand3),
	86)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand3),
	87)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17153 */
rtx
gen_rintdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17159 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2 (op0, op1));

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17170 */
rtx
gen_rintsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17176 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extendsfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2 (op0, op1));

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17187 */
rtx
gen_rintxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17192 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  emit_insn (gen_frndintxf2 (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17197 */
extern rtx gen_split_1625 (rtx, rtx *);
rtx
gen_split_1625 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17207 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fistdi2 (operands[0], operands[1]));
  else
    {
      operands[2] = assign_386_stack_local (DImode, SLOT_TEMP);
      emit_insn (gen_fistdi2_with_temp (operands[0], operands[1],
					 operands[2]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17244 */
extern rtx gen_split_1626 (rtx, rtx *);
rtx
gen_split_1626 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 17254 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	66)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17256 */
extern rtx gen_split_1627 (rtx, rtx *);
rtx
gen_split_1627 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 17265 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	66)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17267 */
extern rtx gen_split_1628 (rtx, rtx *);
rtx
gen_split_1628 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17277 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[2] = assign_386_stack_local (HImode, SLOT_TEMP);
  emit_insn (gen_fisthi2_with_temp (operands[0], operands[1],
					operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17267 */
extern rtx gen_split_1629 (rtx, rtx *);
rtx
gen_split_1629 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17277 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[2] = assign_386_stack_local (SImode, SLOT_TEMP);
  emit_insn (gen_fistsi2_with_temp (operands[0], operands[1],
					operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17307 */
extern rtx gen_split_1630 (rtx, rtx *);
rtx
gen_split_1630 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 17316 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	66)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17307 */
extern rtx gen_split_1631 (rtx, rtx *);
rtx
gen_split_1631 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 17316 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	66)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17318 */
extern rtx gen_split_1632 (rtx, rtx *);
rtx
gen_split_1632 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 17326 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	66)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17318 */
extern rtx gen_split_1633 (rtx, rtx *);
rtx
gen_split_1633 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 17326 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	66)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17328 */
rtx
gen_lrinthi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	66));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17328 */
rtx
gen_lrintsi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	66));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17328 */
rtx
gen_lrintdi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	66));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17338 */
extern rtx gen_split_1637 (rtx, rtx *);
rtx
gen_split_1637 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17349 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_FLOOR] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_FLOOR);

  emit_insn (gen_frndintxf2_floor_i387 (operands[0], operands[1],
					operands[2], operands[3]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17376 */
rtx
gen_floorxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17381 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  emit_insn (gen_frndintxf2_floor (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17386 */
rtx
gen_floordf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17392 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_floor (op0, op1));

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17403 */
rtx
gen_floorsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17409 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extendsfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_floor (op0, op1));

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17420 */
extern rtx gen_split_1641 (rtx, rtx *);
rtx
gen_split_1641 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17431 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_FLOOR] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_FLOOR);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fisthi2_floor (operands[0], operands[1],
				      operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (HImode, SLOT_TEMP);
      emit_insn (gen_fisthi2_floor_with_temp (operands[0], operands[1],
						  operands[2], operands[3],
						  operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17420 */
extern rtx gen_split_1642 (rtx, rtx *);
rtx
gen_split_1642 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17431 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_FLOOR] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_FLOOR);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fistsi2_floor (operands[0], operands[1],
				      operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (SImode, SLOT_TEMP);
      emit_insn (gen_fistsi2_floor_with_temp (operands[0], operands[1],
						  operands[2], operands[3],
						  operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17420 */
extern rtx gen_split_1643 (rtx, rtx *);
rtx
gen_split_1643 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17431 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_FLOOR] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_FLOOR);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fistdi2_floor (operands[0], operands[1],
				      operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (DImode, SLOT_TEMP);
      emit_insn (gen_fistdi2_floor_with_temp (operands[0], operands[1],
						  operands[2], operands[3],
						  operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17481 */
extern rtx gen_split_1644 (rtx, rtx *);
rtx
gen_split_1644 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 17495 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17497 */
extern rtx gen_split_1645 (rtx, rtx *);
rtx
gen_split_1645 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 17510 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17539 */
extern rtx gen_split_1646 (rtx, rtx *);
rtx
gen_split_1646 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 17552 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17539 */
extern rtx gen_split_1647 (rtx, rtx *);
rtx
gen_split_1647 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 17552 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17554 */
extern rtx gen_split_1648 (rtx, rtx *);
rtx
gen_split_1648 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 17566 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17554 */
extern rtx gen_split_1649 (rtx, rtx *);
rtx
gen_split_1649 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 17566 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17568 */
rtx
gen_lfloorhi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17568 */
rtx
gen_lfloorsi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17568 */
rtx
gen_lfloordi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17579 */
extern rtx gen_split_1653 (rtx, rtx *);
rtx
gen_split_1653 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17590 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_CEIL] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_CEIL);

  emit_insn (gen_frndintxf2_ceil_i387 (operands[0], operands[1],
				       operands[2], operands[3]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17617 */
rtx
gen_ceilxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17622 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  emit_insn (gen_frndintxf2_ceil (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17627 */
rtx
gen_ceildf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17633 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_ceil (op0, op1));

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17644 */
rtx
gen_ceilsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17650 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extendsfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_ceil (op0, op1));

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17661 */
extern rtx gen_split_1657 (rtx, rtx *);
rtx
gen_split_1657 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17672 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_CEIL] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_CEIL);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fisthi2_ceil (operands[0], operands[1],
				     operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (HImode, SLOT_TEMP);
      emit_insn (gen_fisthi2_ceil_with_temp (operands[0], operands[1],
						 operands[2], operands[3],
						 operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17661 */
extern rtx gen_split_1658 (rtx, rtx *);
rtx
gen_split_1658 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17672 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_CEIL] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_CEIL);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fistsi2_ceil (operands[0], operands[1],
				     operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (SImode, SLOT_TEMP);
      emit_insn (gen_fistsi2_ceil_with_temp (operands[0], operands[1],
						 operands[2], operands[3],
						 operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17661 */
extern rtx gen_split_1659 (rtx, rtx *);
rtx
gen_split_1659 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17672 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_CEIL] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_CEIL);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fistdi2_ceil (operands[0], operands[1],
				     operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (DImode, SLOT_TEMP);
      emit_insn (gen_fistdi2_ceil_with_temp (operands[0], operands[1],
						 operands[2], operands[3],
						 operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17722 */
extern rtx gen_split_1660 (rtx, rtx *);
rtx
gen_split_1660 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 17736 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17738 */
extern rtx gen_split_1661 (rtx, rtx *);
rtx
gen_split_1661 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 17751 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17780 */
extern rtx gen_split_1662 (rtx, rtx *);
rtx
gen_split_1662 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 17793 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17780 */
extern rtx gen_split_1663 (rtx, rtx *);
rtx
gen_split_1663 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 17793 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17795 */
extern rtx gen_split_1664 (rtx, rtx *);
rtx
gen_split_1664 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 17807 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17795 */
extern rtx gen_split_1665 (rtx, rtx *);
rtx
gen_split_1665 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 17807 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17809 */
rtx
gen_lceilhi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17809 */
rtx
gen_lceilsi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17809 */
rtx
gen_lceildi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17820 */
extern rtx gen_split_1669 (rtx, rtx *);
rtx
gen_split_1669 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17831 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_TRUNC] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_TRUNC);

  emit_insn (gen_frndintxf2_trunc_i387 (operands[0], operands[1],
					operands[2], operands[3]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17858 */
rtx
gen_btruncxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17863 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  emit_insn (gen_frndintxf2_trunc (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17868 */
rtx
gen_btruncdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17874 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_trunc (op0, op1));

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17885 */
rtx
gen_btruncsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17891 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extendsfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_trunc (op0, op1));

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17903 */
extern rtx gen_split_1673 (rtx, rtx *);
rtx
gen_split_1673 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17914 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_MASK_PM] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_MASK_PM);

  emit_insn (gen_frndintxf2_mask_pm_i387 (operands[0], operands[1],
					  operands[2], operands[3]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17941 */
rtx
gen_nearbyintxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17946 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  emit_insn (gen_frndintxf2_mask_pm (operands[0], operands[1]));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17952 */
rtx
gen_nearbyintdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17958 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_mask_pm (op0, op1));

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17969 */
rtx
gen_nearbyintsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17975 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extendsfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_mask_pm (op0, op1));

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17995 */
rtx
gen_movmemsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18001 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
 if (ix86_expand_movmem (operands[0], operands[1], operands[2], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18008 */
rtx
gen_movmemdi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18014 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
 if (ix86_expand_movmem (operands[0], operands[1], operands[2], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18024 */
rtx
gen_strmov (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18032 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx adjust = GEN_INT (GET_MODE_SIZE (GET_MODE (operands[1])));

  /* If .md ever supports :P for Pmode, these can be directly
     in the pattern above.  */
  operands[5] = gen_rtx_PLUS (Pmode, operands[0], adjust);
  operands[6] = gen_rtx_PLUS (Pmode, operands[2], adjust);

  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strmov_singleop (operands[0], operands[1],
				      operands[2], operands[3],
				      operands[5], operands[6]));
      DONE;
    }

  operands[4] = gen_reg_rtx (GET_MODE (operands[1]));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	operand4));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand5),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	operand6),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18051 */
rtx
gen_strmov_singleop (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand1,
	operand3),
		gen_rtx_SET (VOIDmode,
	operand0,
	operand4),
		gen_rtx_SET (VOIDmode,
	operand2,
	operand5),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18174 */
rtx
gen_rep_mov (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5,
	rtx operand6)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	operand5),
		gen_rtx_SET (VOIDmode,
	operand2,
	operand6),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand3),
		gen_rtx_USE (VOIDmode,
	operand4),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18283 */
rtx
gen_setmemsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18289 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
 /* If value to set is not zero, use the library routine.  */
 if (operands[2] != const0_rtx)
   FAIL;

 if (ix86_expand_clrmem (operands[0], operands[1], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18300 */
rtx
gen_setmemdi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18306 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
 /* If value to set is not zero, use the library routine.  */
 if (operands[2] != const0_rtx)
   FAIL;

 if (ix86_expand_clrmem (operands[0], operands[1], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18320 */
rtx
gen_strset (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 18327 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (GET_MODE (operands[1]) != GET_MODE (operands[2]))
    operands[1] = adjust_address_nv (operands[1], GET_MODE (operands[2]), 0);

  /* If .md ever supports :P for Pmode, this can be directly
     in the pattern above.  */
  operands[3] = gen_rtx_PLUS (Pmode, operands[0],
			      GEN_INT (GET_MODE_SIZE (GET_MODE
						      (operands[2]))));
  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strset_singleop (operands[0], operands[1], operands[2],
				      operands[3]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand3),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18344 */
rtx
gen_strset_singleop (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand1,
	operand2),
		gen_rtx_SET (VOIDmode,
	operand0,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18444 */
rtx
gen_rep_stos (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand1,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	operand4),
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	operand1),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18543 */
rtx
gen_cmpstrnsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
#line 18550 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx addr1, addr2, out, outlow, count, countreg, align;

  /* Can't use this if the user has appropriated esi or edi.  */
  if (global_regs[4] || global_regs[5])
    FAIL;

  out = operands[0];
  if (GET_CODE (out) != REG)
    out = gen_reg_rtx (SImode);

  addr1 = copy_to_mode_reg (Pmode, XEXP (operands[1], 0));
  addr2 = copy_to_mode_reg (Pmode, XEXP (operands[2], 0));
  if (addr1 != XEXP (operands[1], 0))
    operands[1] = replace_equiv_address_nv (operands[1], addr1);
  if (addr2 != XEXP (operands[2], 0))
    operands[2] = replace_equiv_address_nv (operands[2], addr2);

  count = operands[3];
  countreg = ix86_zero_extend_to_Pmode (count);

  /* %%% Iff we are testing strict equality, we can use known alignment
     to good advantage.  This may be possible with combine, particularly
     once cc0 is dead.  */
  align = operands[4];

  emit_insn (gen_cld ());
  if (GET_CODE (count) == CONST_INT)
    {
      if (INTVAL (count) == 0)
	{
	  emit_move_insn (operands[0], const0_rtx);
	  DONE;
	}
      emit_insn (gen_cmpstrnqi_nz_1 (addr1, addr2, countreg, align,
				     operands[1], operands[2]));
    }
  else
    {
      if (TARGET_64BIT)
	emit_insn (gen_cmpdi_1_rex64 (countreg, countreg));
      else
	emit_insn (gen_cmpsi_1 (countreg, countreg));
      emit_insn (gen_cmpstrnqi_1 (addr1, addr2, countreg, align,
				  operands[1], operands[2]));
    }

  outlow = gen_lowpart (QImode, out);
  emit_insn (gen_cmpintqi (outlow));
  emit_move_insn (out, gen_rtx_SIGN_EXTEND (SImode, outlow));

  if (operands[0] != out)
    emit_move_insn (operands[0], out);

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18609 */
rtx
gen_cmpintqi (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
#line 18619 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[1] = gen_reg_rtx (QImode);
   operands[2] = gen_reg_rtx (QImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_GTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_LTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18625 */
rtx
gen_cmpstrnqi_nz_1 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand4,
	operand5)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18672 */
rtx
gen_cmpstrnqi_1 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_IF_THEN_ELSE (CCmode,
	gen_rtx_NE (VOIDmode,
	operand2,
	const0_rtx),
	gen_rtx_COMPARE (CCmode,
	operand4,
	operand5),
	const0_rtx)),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (CCmode,
	17)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18726 */
rtx
gen_strlensi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18732 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
 if (ix86_expand_strlen (operands[0], operands[1], operands[2], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	20)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18739 */
rtx
gen_strlendi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18745 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
 if (ix86_expand_strlen (operands[0], operands[1], operands[2], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	20)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18752 */
rtx
gen_strlenqi_1 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand2),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18804 */
extern rtx gen_peephole2_1694 (rtx, rtx *);
rtx
gen_peephole2_1694 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 18833 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MEM (BLKmode,
	operand4),
	gen_rtx_MEM (BLKmode,
	operand5))),
		gen_rtx_USE (VOIDmode,
	operand6),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18836 */
extern rtx gen_peephole2_1695 (rtx, rtx *);
rtx
gen_peephole2_1695 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 18871 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_IF_THEN_ELSE (CCmode,
	gen_rtx_NE (VOIDmode,
	operand6,
	const0_rtx),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MEM (BLKmode,
	operand4),
	gen_rtx_MEM (BLKmode,
	operand5)),
	const0_rtx)),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (CCmode,
	17)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18877 */
rtx
gen_movdicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18883 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (!ix86_expand_int_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18916 */
rtx
gen_movsicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18922 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (!ix86_expand_int_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18959 */
rtx
gen_movhicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18965 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (!ix86_expand_int_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18981 */
rtx
gen_movqicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18987 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (!ix86_expand_int_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18989 */
extern rtx gen_split_1700 (rtx, rtx *);
rtx
gen_split_1700 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 19003 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[2] = gen_lowpart (SImode, operands[2]);
   operands[3] = gen_lowpart (SImode, operands[3]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		operand4,
		const0_rtx),
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19009 */
rtx
gen_movsfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19015 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (! ix86_expand_fp_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19033 */
rtx
gen_movdfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19039 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (! ix86_expand_fp_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19073 */
extern rtx gen_split_1703 (rtx, rtx *);
rtx
gen_split_1703 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
#line 19089 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
split_di (operands+2, 1, operands+5, operands+6);
   split_di (operands+3, 1, operands+7, operands+8);
   split_di (operands, 1, operands+2, operands+3);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		operand4,
		const0_rtx),
	operand5,
	operand7)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand4),
		const0_rtx),
	operand6,
	operand8)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19093 */
rtx
gen_movxfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19099 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (! ix86_expand_fp_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (XFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19207 */
extern rtx gen_peephole2_1705 (rtx, rtx *);
rtx
gen_peephole2_1705 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19220 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (COMMUTATIVE_ARITH_P (operands[2]))
     operands[4] = gen_rtx_fmt_ee (GET_CODE (operands[2]), GET_MODE (operands[2]),
				 operands[0], operands[1]);
   else
     operands[4] = gen_rtx_fmt_ee (GET_CODE (operands[2]), GET_MODE (operands[2]),
				 operands[1], operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19228 */
rtx
gen_addqicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19234 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (!ix86_expand_int_addcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19236 */
rtx
gen_addhicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19242 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (!ix86_expand_int_addcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19244 */
rtx
gen_addsicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19250 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (!ix86_expand_int_addcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19252 */
rtx
gen_adddicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19258 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
if (!ix86_expand_int_addcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19381 */
rtx
gen_allocate_stack_worker (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 19384 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (reload_completed)
    {
      if (TARGET_64BIT)
	emit_insn (gen_allocate_stack_worker_rex64_postreload (operands[0]));
      else
	emit_insn (gen_allocate_stack_worker_postreload (operands[0]));
    }
  else
    {
      if (TARGET_64BIT)
	emit_insn (gen_allocate_stack_worker_rex64 (operands[0]));
      else
	emit_insn (gen_allocate_stack_worker_1 (operands[0]));
    }
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19413 */
rtx
gen_allocate_stack_worker_postreload (rtx operand0)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19433 */
rtx
gen_allocate_stack_worker_rex64_postreload (rtx operand0)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand0),
	1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_MINUS (DImode,
	gen_rtx_REG (DImode,
	7),
	operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19442 */
rtx
gen_allocate_stack (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 19451 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
#ifdef CHECK_STACK_LIMIT
  if (GET_CODE (operands[1]) == CONST_INT
      && INTVAL (operands[1]) < CHECK_STACK_LIMIT)
    emit_insn (gen_subsi3 (stack_pointer_rtx, stack_pointer_rtx,
			   operands[1]));
  else 
#endif
    emit_insn (gen_allocate_stack_worker (copy_to_mode_reg (SImode,
							    operands[1])));

  emit_move_insn (operands[0], virtual_stack_dynamic_rtx);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19466 */
rtx
gen_builtin_setjmp_receiver (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 19469 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (TARGET_MACHO)
    {
      rtx xops[3];
      rtx picreg = gen_rtx_REG (Pmode, PIC_OFFSET_TABLE_REGNUM);
      rtx label_rtx = gen_label_rtx ();
      emit_insn (gen_set_got_labelled (pic_offset_table_rtx, label_rtx));
      xops[0] = xops[1] = picreg;
      xops[2] = gen_rtx_CONST (SImode,
	          gen_rtx_MINUS (SImode,
		    gen_rtx_LABEL_REF (SImode, label_rtx),
		    gen_rtx_SYMBOL_REF (SImode, GOT_SYMBOL_NAME)));
      ix86_expand_binary_operator (MINUS, SImode, xops);
    }
  else
    emit_insn (gen_set_got (pic_offset_table_rtx));
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_LABEL_REF (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19490 */
extern rtx gen_split_1715 (rtx, rtx *);
rtx
gen_split_1715 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 19507 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
   if (GET_CODE (operands[3]) != ASHIFT)
     operands[2] = gen_lowpart (SImode, operands[2]);
   PUT_MODE (operands[3], SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		operand1,
		operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19517 */
extern rtx gen_split_1716 (rtx, rtx *);
rtx
gen_split_1716 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 19536 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[4]
    = gen_int_mode (INTVAL (operands[4])
		    & GET_MODE_MASK (GET_MODE (operands[1])), SImode);
  operands[1] = gen_lowpart (SImode, operands[1]);
  operands[3] = gen_lowpart (SImode, operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand2), GET_MODE (operand2),
		gen_rtx_AND (SImode,
	operand3,
	operand4),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_AND (SImode,
	copy_rtx (operand3),
	copy_rtx (operand4))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19548 */
extern rtx gen_split_1717 (rtx, rtx *);
rtx
gen_split_1717 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 19562 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[3]
    = gen_int_mode (INTVAL (operands[3])
		    & GET_MODE_MASK (GET_MODE (operands[2])), SImode);
  operands[2] = gen_lowpart (SImode, operands[2]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_AND (SImode,
	operand2,
	operand3),
		const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19569 */
extern rtx gen_split_1718 (rtx, rtx *);
rtx
gen_split_1718 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 19580 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19583 */
extern rtx gen_split_1719 (rtx, rtx *);
rtx
gen_split_1719 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 19592 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19595 */
extern rtx gen_split_1720 (rtx, rtx *);
rtx
gen_split_1720 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 19607 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[2] = gen_lowpart (SImode, operands[2]);
   operands[3] = gen_lowpart (SImode, operands[3]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19616 */
extern rtx gen_peephole2_1721 (rtx, rtx *);
rtx
gen_peephole2_1721 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19624 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19626 */
extern rtx gen_peephole2_1722 (rtx, rtx *);
rtx
gen_peephole2_1722 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19634 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19638 */
extern rtx gen_peephole2_1723 (rtx, rtx *);
rtx
gen_peephole2_1723 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", SFmode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19646 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19648 */
extern rtx gen_peephole2_1724 (rtx, rtx *);
rtx
gen_peephole2_1724 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19656 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19658 */
extern rtx gen_peephole2_1725 (rtx, rtx *);
rtx
gen_peephole2_1725 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "q", QImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19666 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19670 */
extern rtx gen_peephole2_1726 (rtx, rtx *);
rtx
gen_peephole2_1726 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[1] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19682 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19684 */
extern rtx gen_peephole2_1727 (rtx, rtx *);
rtx
gen_peephole2_1727 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[1] = peep2_find_free_register (0, 0, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19696 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[2] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19698 */
extern rtx gen_peephole2_1728 (rtx, rtx *);
rtx
gen_peephole2_1728 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[1] = peep2_find_free_register (0, 0, "q", QImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19710 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[2] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19712 */
extern rtx gen_peephole2_1729 (rtx, rtx *);
rtx
gen_peephole2_1729 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19721 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19723 */
extern rtx gen_peephole2_1730 (rtx, rtx *);
rtx
gen_peephole2_1730 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19731 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19733 */
extern rtx gen_peephole2_1731 (rtx, rtx *);
rtx
gen_peephole2_1731 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "q", QImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19741 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19744 */
extern rtx gen_peephole2_1732 (rtx, rtx *);
rtx
gen_peephole2_1732 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (1, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19753 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand2));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand3),
		const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19766 */
extern rtx gen_peephole2_1733 (rtx, rtx *);
rtx
gen_peephole2_1733 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19778 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	constm1_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19780 */
extern rtx gen_peephole2_1734 (rtx, rtx *);
rtx
gen_peephole2_1734 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19792 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	constm1_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19794 */
extern rtx gen_peephole2_1735 (rtx, rtx *);
rtx
gen_peephole2_1735 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19806 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	constm1_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19815 */
extern rtx gen_peephole2_1736 (rtx, rtx *);
rtx
gen_peephole2_1736 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19831 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_AND (SImode,
	operand2,
	operand3),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_AND (SImode,
	copy_rtx (operand2),
	copy_rtx (operand3))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19836 */
extern rtx gen_peephole2_1737 (rtx, rtx *);
rtx
gen_peephole2_1737 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19852 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_AND (QImode,
	operand2,
	operand3),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_AND (QImode,
	copy_rtx (operand2),
	copy_rtx (operand3))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19854 */
extern rtx gen_peephole2_1738 (rtx, rtx *);
rtx
gen_peephole2_1738 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19886 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand2,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand3),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	copy_rtx (operand3))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19889 */
extern rtx gen_peephole2_1739 (rtx, rtx *);
rtx
gen_peephole2_1739 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19901 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		copy_rtx (operand0),
		copy_rtx (operand2))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19903 */
extern rtx gen_peephole2_1740 (rtx, rtx *);
rtx
gen_peephole2_1740 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19915 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		copy_rtx (operand2),
		copy_rtx (operand0))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19923 */
extern rtx gen_peephole2_1741 (rtx, rtx *);
rtx
gen_peephole2_1741 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19936 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		copy_rtx (operand2),
		operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19938 */
extern rtx gen_peephole2_1742 (rtx, rtx *);
rtx
gen_peephole2_1742 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19951 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		operand1,
		copy_rtx (operand2))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19954 */
extern rtx gen_peephole2_1743 (rtx, rtx *);
rtx
gen_peephole2_1743 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19963 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[0] = gen_lowpart (word_mode, operands[0]);
}
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19967 */
extern rtx gen_peephole2_1744 (rtx, rtx *);
rtx
gen_peephole2_1744 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19978 */
extern rtx gen_peephole2_1745 (rtx, rtx *);
rtx
gen_peephole2_1745 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19988 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (GET_MODE (operands[0]) == DImode ? DImode : SImode,
			      operands[0]);
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	constm1_rtx),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19993 */
extern rtx gen_peephole2_1746 (rtx, rtx *);
rtx
gen_peephole2_1746 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20000 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20002 */
extern rtx gen_peephole2_1747 (rtx, rtx *);
rtx
gen_peephole2_1747 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20009 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[2] = gen_lowpart (SImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20011 */
extern rtx gen_peephole2_1748 (rtx, rtx *);
rtx
gen_peephole2_1748 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20018 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20020 */
extern rtx gen_peephole2_1749 (rtx, rtx *);
rtx
gen_peephole2_1749 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20028 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[2] = GEN_INT (exact_log2 (INTVAL (operands[1])));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20030 */
extern rtx gen_peephole2_1750 (rtx, rtx *);
rtx
gen_peephole2_1750 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20038 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[2] = GEN_INT (exact_log2 (INTVAL (operands[1])));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand0),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20040 */
extern rtx gen_peephole2_1751 (rtx, rtx *);
rtx
gen_peephole2_1751 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20049 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
operands[2] = GEN_INT (exact_log2 (INTVAL (operands[2])));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20070 */
extern rtx gen_peephole2_1752 (rtx, rtx *);
rtx
gen_peephole2_1752 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20080 */
extern rtx gen_peephole2_1753 (rtx, rtx *);
rtx
gen_peephole2_1753 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20092 */
extern rtx gen_peephole2_1754 (rtx, rtx *);
rtx
gen_peephole2_1754 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20100 */
extern rtx gen_peephole2_1755 (rtx, rtx *);
rtx
gen_peephole2_1755 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20110 */
extern rtx gen_peephole2_1756 (rtx, rtx *);
rtx
gen_peephole2_1756 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20119 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20123 */
extern rtx gen_peephole2_1757 (rtx, rtx *);
rtx
gen_peephole2_1757 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20135 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20137 */
extern rtx gen_peephole2_1758 (rtx, rtx *);
rtx
gen_peephole2_1758 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20148 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20151 */
extern rtx gen_peephole2_1759 (rtx, rtx *);
rtx
gen_peephole2_1759 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20158 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20162 */
extern rtx gen_peephole2_1760 (rtx, rtx *);
rtx
gen_peephole2_1760 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20172 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20174 */
extern rtx gen_peephole2_1761 (rtx, rtx *);
rtx
gen_peephole2_1761 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20183 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20187 */
extern rtx gen_peephole2_1762 (rtx, rtx *);
rtx
gen_peephole2_1762 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20200 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		operand2,
		operand3)),
		gen_rtx_CLOBBER (VOIDmode,
	copy_rtx (operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20202 */
extern rtx gen_peephole2_1763 (rtx, rtx *);
rtx
gen_peephole2_1763 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20212 */
extern rtx gen_peephole2_1764 (rtx, rtx *);
rtx
gen_peephole2_1764 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20224 */
extern rtx gen_peephole2_1765 (rtx, rtx *);
rtx
gen_peephole2_1765 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20232 */
extern rtx gen_peephole2_1766 (rtx, rtx *);
rtx
gen_peephole2_1766 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20242 */
extern rtx gen_peephole2_1767 (rtx, rtx *);
rtx
gen_peephole2_1767 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20251 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20255 */
extern rtx gen_peephole2_1768 (rtx, rtx *);
rtx
gen_peephole2_1768 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20267 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20269 */
extern rtx gen_peephole2_1769 (rtx, rtx *);
rtx
gen_peephole2_1769 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20280 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20283 */
extern rtx gen_peephole2_1770 (rtx, rtx *);
rtx
gen_peephole2_1770 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20290 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20294 */
extern rtx gen_peephole2_1771 (rtx, rtx *);
rtx
gen_peephole2_1771 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20304 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20306 */
extern rtx gen_peephole2_1772 (rtx, rtx *);
rtx
gen_peephole2_1772 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20315 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20318 */
extern rtx gen_peephole2_1773 (rtx, rtx *);
rtx
gen_peephole2_1773 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20330 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 1); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2),
	copy_rtx (operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20332 */
extern rtx gen_peephole2_1774 (rtx, rtx *);
rtx
gen_peephole2_1774 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20346 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 1); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	copy_rtx (operand0),
	operand2),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20348 */
extern rtx gen_peephole2_1775 (rtx, rtx *);
rtx
gen_peephole2_1775 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20361 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 1); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	operand1,
	operand2),
	copy_rtx (operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20363 */
extern rtx gen_peephole2_1776 (rtx, rtx *);
rtx
gen_peephole2_1776 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20378 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 1); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	copy_rtx (operand0),
	operand2),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20382 */
extern rtx gen_peephole2_1777 (rtx, rtx *);
rtx
gen_peephole2_1777 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20393 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	copy_rtx (operand3),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20395 */
extern rtx gen_peephole2_1778 (rtx, rtx *);
rtx
gen_peephole2_1778 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20406 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	copy_rtx (operand3),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20408 */
extern rtx gen_peephole2_1779 (rtx, rtx *);
rtx
gen_peephole2_1779 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20420 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_MULT (SImode,
	copy_rtx (operand3),
	operand2))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20426 */
extern rtx gen_peephole2_1780 (rtx, rtx *);
rtx
gen_peephole2_1780 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (1, 1, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20437 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (!rtx_equal_p (operands[0], operands[1]))
    emit_move_insn (operands[0], operands[1]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	copy_rtx (operand0),
	copy_rtx (operand3))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20442 */
extern rtx gen_peephole2_1781 (rtx, rtx *);
rtx
gen_peephole2_1781 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (1, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20453 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (!rtx_equal_p (operands[0], operands[1]))
    emit_move_insn (operands[0], operands[1]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	copy_rtx (operand0),
	copy_rtx (operand3))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20458 */
extern rtx gen_peephole2_1782 (rtx, rtx *);
rtx
gen_peephole2_1782 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (1, 1, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20468 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (!rtx_equal_p (operands[0], operands[1]))
    emit_move_insn (operands[0], operands[1]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	copy_rtx (operand0),
	copy_rtx (operand3))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20485 */
extern rtx gen_peephole2_1783 (rtx, rtx *);
rtx
gen_peephole2_1783 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20517 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  enum machine_mode mode = GET_MODE (operands[5]) == DImode ? DImode : SImode;
  int scale = 1 << INTVAL (operands[2]);
  rtx index = gen_lowpart (Pmode, operands[1]);
  rtx base = gen_lowpart (Pmode, operands[3]);
  rtx dest = gen_lowpart (mode, operands[5]);

  operands[1] = gen_rtx_PLUS (Pmode, base,
  			      gen_rtx_MULT (Pmode, index, GEN_INT (scale)));
  if (mode != Pmode)
    operands[1] = gen_rtx_SUBREG (mode, operands[1], 0);
  operands[0] = dest;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20660 */
rtx
gen_sse_prologue_save (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (8,
		gen_rtx_REG (DImode,
	21),
		gen_rtx_REG (DImode,
	22),
		gen_rtx_REG (DImode,
	23),
		gen_rtx_REG (DImode,
	24),
		gen_rtx_REG (DImode,
	25),
		gen_rtx_REG (DImode,
	26),
		gen_rtx_REG (DImode,
	27),
		gen_rtx_REG (DImode,
	28)),
	13)),
		gen_rtx_USE (VOIDmode,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (DImode,
	operand3))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20721 */
rtx
gen_prefetch (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 20726 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  int rw = INTVAL (operands[1]);
  int locality = INTVAL (operands[2]);

  gcc_assert (rw == 0 || rw == 1);
  gcc_assert (locality >= 0 && locality <= 3);
  gcc_assert (GET_MODE (operands[0]) == Pmode
	      || GET_MODE (operands[0]) == VOIDmode);

  /* Use 3dNOW prefetch in case we are asking for write prefetch not
     supported by SSE counterpart or the SSE prefetch is not available
     (K6 machines).  Otherwise use SSE prefetch as it allows specifying
     of locality.  */
  if (TARGET_3DNOW && (!TARGET_PREFETCH_SSE || rw))
    operands[2] = GEN_INT (3);
  else
    operands[1] = const0_rtx;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_PREFETCH (VOIDmode,
	operand0,
	operand1,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20809 */
rtx
gen_stack_protect_set (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 20813 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
#ifdef TARGET_THREAD_SSP_OFFSET
  if (TARGET_64BIT)
    emit_insn (gen_stack_tls_protect_set_di (operands[0],
					GEN_INT (TARGET_THREAD_SSP_OFFSET)));
  else
    emit_insn (gen_stack_tls_protect_set_si (operands[0],
					GEN_INT (TARGET_THREAD_SSP_OFFSET)));
#else
  if (TARGET_64BIT)
    emit_insn (gen_stack_protect_set_di (operands[0], operands[1]));
  else
    emit_insn (gen_stack_protect_set_si (operands[0], operands[1]));
#endif
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20874 */
rtx
gen_stack_protect_test (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 20879 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  rtx flags = gen_rtx_REG (CCZmode, FLAGS_REG);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  ix86_compare_emitted = flags;

#ifdef TARGET_THREAD_SSP_OFFSET
  if (TARGET_64BIT)
    emit_insn (gen_stack_tls_protect_test_di (flags, operands[0],
					GEN_INT (TARGET_THREAD_SSP_OFFSET)));
  else
    emit_insn (gen_stack_tls_protect_test_si (flags, operands[0],
					GEN_INT (TARGET_THREAD_SSP_OFFSET)));
#else
  if (TARGET_64BIT)
    emit_insn (gen_stack_protect_test_di (flags, operands[0], operands[1]));
  else
    emit_insn (gen_stack_protect_test_si (flags, operands[0], operands[1]));
#endif
  emit_jump_insn (gen_beq (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:25 */
rtx
gen_movv16qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 55 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move (V16QImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:25 */
rtx
gen_movv8hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 55 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move (V8HImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:25 */
rtx
gen_movv4si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 55 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move (V4SImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:25 */
rtx
gen_movv2di (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 55 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move (V2DImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:90 */
rtx
gen_movv4sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 94 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move (V4SFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:118 */
extern rtx gen_split_1793 (rtx, rtx *);
rtx
gen_split_1793 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 127 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  operands[1] = simplify_gen_subreg (SFmode, operands[1], V4SFmode, 0);
  operands[2] = CONST0_RTX (V4SFmode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	operand1),
	operand2,
	const1_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:132 */
rtx
gen_movv2df (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 136 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move (V2DFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:171 */
extern rtx gen_split_1795 (rtx, rtx *);
rtx
gen_split_1795 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 176 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  operands[1] = simplify_gen_subreg (DFmode, operands[1], V2DFmode, 0);
  operands[2] = CONST0_RTX (DFmode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:181 */
rtx
gen_pushv16qi1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 184 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_push (V16QImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:181 */
rtx
gen_pushv8hi1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 184 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_push (V8HImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:181 */
rtx
gen_pushv4si1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 184 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_push (V4SImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:181 */
rtx
gen_pushv2di1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 184 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_push (V2DImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:181 */
rtx
gen_pushv4sf1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 184 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_push (V4SFmode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:181 */
rtx
gen_pushv2df1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 184 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_push (V2DFmode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:189 */
rtx
gen_movmisalignv16qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 193 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move_misalign (V16QImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:189 */
rtx
gen_movmisalignv8hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 193 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move_misalign (V8HImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:189 */
rtx
gen_movmisalignv4si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 193 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move_misalign (V4SImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:189 */
rtx
gen_movmisalignv2di (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 193 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move_misalign (V2DImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:189 */
rtx
gen_movmisalignv4sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 193 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move_misalign (V4SFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:189 */
rtx
gen_movmisalignv2df (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 193 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move_misalign (V2DFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:276 */
rtx
gen_negv4sf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 280 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_expand_fp_absneg_operator (NEG, V4SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (V4SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:282 */
rtx
gen_absv4sf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 286 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_expand_fp_absneg_operator (ABS, V4SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (V4SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:288 */
rtx
gen_addv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 293 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (PLUS, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:316 */
rtx
gen_subv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 321 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MINUS, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:344 */
rtx
gen_mulv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 349 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MULT, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:372 */
rtx
gen_divv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 377 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (DIV, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:465 */
rtx
gen_smaxv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 470 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (!flag_finite_math_only)
    operands[1] = force_reg (V4SFmode, operands[1]);
  ix86_fixup_binary_operands_no_copy (SMAX, V4SFmode, operands);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:507 */
rtx
gen_sminv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 512 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (!flag_finite_math_only)
    operands[1] = force_reg (V4SFmode, operands[1]);
  ix86_fixup_binary_operands_no_copy (SMIN, V4SFmode, operands);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:660 */
rtx
gen_reduc_splus_v4sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 664 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (TARGET_SSE3)
    {
      rtx tmp = gen_reg_rtx (V4SFmode);
      emit_insn (gen_sse3_haddv4sf3 (tmp, operands[1], operands[1]));
      emit_insn (gen_sse3_haddv4sf3 (operands[0], tmp, tmp));
    }
  else
    ix86_expand_reduc_v4sf (gen_addv4sf3, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:676 */
rtx
gen_reduc_smax_v4sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 680 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_reduc_v4sf (gen_smaxv4sf3, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:685 */
rtx
gen_reduc_smin_v4sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 689 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_reduc_v4sf (gen_sminv4sf3, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:751 */
rtx
gen_vcondv4sf (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 760 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (ix86_expand_fp_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V4SFmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:773 */
rtx
gen_andv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 778 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (AND, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:798 */
rtx
gen_iorv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 803 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (IOR, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:814 */
rtx
gen_xorv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 819 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (XOR, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1113 */
rtx
gen_sse_shufps (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 1119 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  int mask = INTVAL (operands[3]);
  emit_insn (gen_sse_shufps_1 (operands[0], operands[1], operands[2],
			       GEN_INT ((mask >> 0) & 3),
			       GEN_INT ((mask >> 2) & 3),
			       GEN_INT (((mask >> 4) & 3) + 4),
			       GEN_INT (((mask >> 6) & 3) + 4)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1258 */
rtx
gen_vec_initv4sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1262 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1283 */
extern rtx gen_split_1825 (rtx, rtx *);
rtx
gen_split_1825 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1292 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  emit_move_insn (adjust_address (operands[0], SFmode, 0), operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1297 */
rtx
gen_vec_setv4sf (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1302 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1308 */
extern rtx gen_split_1827 (rtx, rtx *);
rtx
gen_split_1827 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1317 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  rtx op1 = operands[1];
  if (REG_P (op1))
    op1 = gen_rtx_REG (SFmode, REGNO (op1));
  else
    op1 = gen_lowpart (SFmode, op1);
  emit_move_insn (operands[0], op1);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1327 */
rtx
gen_vec_extractv4sf (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1332 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1344 */
rtx
gen_negv2df2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1348 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_expand_fp_absneg_operator (NEG, V2DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (V2DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1350 */
rtx
gen_absv2df2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1354 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_expand_fp_absneg_operator (ABS, V2DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (V2DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1356 */
rtx
gen_addv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1361 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (PLUS, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1384 */
rtx
gen_subv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1389 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MINUS, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1412 */
rtx
gen_mulv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1417 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MULT, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1440 */
rtx
gen_divv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1445 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (DIV, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1491 */
rtx
gen_smaxv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1496 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (!flag_finite_math_only)
    operands[1] = force_reg (V2DFmode, operands[1]);
  ix86_fixup_binary_operands_no_copy (SMAX, V2DFmode, operands);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1533 */
rtx
gen_sminv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1538 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (!flag_finite_math_only)
    operands[1] = force_reg (V2DFmode, operands[1]);
  ix86_fixup_binary_operands_no_copy (SMIN, V2DFmode, operands);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1624 */
rtx
gen_reduc_splus_v2df (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1628 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  emit_insn (gen_sse3_haddv2df3 (operands[0], operands[1], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1690 */
rtx
gen_vcondv2df (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 1699 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (ix86_expand_fp_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V2DFmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1712 */
rtx
gen_andv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1717 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (AND, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1737 */
rtx
gen_iorv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1742 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (IOR, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1753 */
rtx
gen_xorv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1758 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (XOR, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1931 */
rtx
gen_sse2_cvtpd2dq (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1938 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
operands[2] = CONST0_RTX (V2SImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (1,
		operand1),
	30),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1951 */
rtx
gen_sse2_cvttpd2dq (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1957 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
operands[2] = CONST0_RTX (V2SImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_FIX (V2SImode,
	operand1),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1997 */
rtx
gen_sse2_cvtpd2ps (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2004 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
operands[2] = CONST0_RTX (V2SFmode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SFmode,
	gen_rtx_FLOAT_TRUNCATE (V2SFmode,
	operand1),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2065 */
extern rtx gen_split_1845 (rtx, rtx *);
rtx
gen_split_1845 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2075 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  rtx low = gen_rtx_REG (DFmode, REGNO (operands[1]));
  emit_move_insn (adjust_address (operands[0], DFmode, 0), low);
  emit_move_insn (adjust_address (operands[0], DFmode, 8), low);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2098 */
rtx
gen_sse2_shufpd (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2104 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  int mask = INTVAL (operands[3]);
  emit_insn (gen_sse2_shufpd_1 (operands[0], operands[1], operands[2],
				GEN_INT (mask & 1),
				GEN_INT (mask & 2 ? 3 : 2)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2145 */
extern rtx gen_split_1847 (rtx, rtx *);
rtx
gen_split_1847 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2152 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  operands[1] = adjust_address (operands[1], DFmode, 8);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2169 */
extern rtx gen_split_1848 (rtx, rtx *);
rtx
gen_split_1848 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2176 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  rtx op1 = operands[1];
  if (REG_P (op1))
    op1 = gen_rtx_REG (DFmode, REGNO (op1));
  else
    op1 = gen_lowpart (DFmode, op1);
  emit_move_insn (operands[0], op1);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2202 */
extern rtx gen_split_1849 (rtx, rtx *);
rtx
gen_split_1849 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2209 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  operands[0] = adjust_address (operands[0], DFmode, 8);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2231 */
extern rtx gen_split_1850 (rtx, rtx *);
rtx
gen_split_1850 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2238 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  operands[0] = adjust_address (operands[0], DFmode, 8);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2332 */
rtx
gen_vec_setv2df (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2337 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2343 */
rtx
gen_vec_extractv2df (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2348 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2354 */
rtx
gen_vec_initv2df (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2358 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2369 */
rtx
gen_negv16qi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2375 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
operands[2] = force_reg (V16QImode, CONST0_RTX (V16QImode));
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V16QImode,
	operand2,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2369 */
rtx
gen_negv8hi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2375 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
operands[2] = force_reg (V8HImode, CONST0_RTX (V8HImode));
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V8HImode,
	operand2,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2369 */
rtx
gen_negv4si2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2375 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
operands[2] = force_reg (V4SImode, CONST0_RTX (V4SImode));
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4SImode,
	operand2,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2369 */
rtx
gen_negv2di2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2375 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
operands[2] = force_reg (V2DImode, CONST0_RTX (V2DImode));
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2DImode,
	operand2,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2377 */
rtx
gen_addv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2382 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (PLUS, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2377 */
rtx
gen_addv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2382 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (PLUS, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2377 */
rtx
gen_addv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2382 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (PLUS, V4SImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2377 */
rtx
gen_addv2di3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2382 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (PLUS, V2DImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2414 */
rtx
gen_subv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2419 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MINUS, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2414 */
rtx
gen_subv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2419 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MINUS, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2414 */
rtx
gen_subv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2419 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MINUS, V4SImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2414 */
rtx
gen_subv2di3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2419 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MINUS, V2DImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2451 */
rtx
gen_mulv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2456 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  rtx t[12], op0;
  int i;

  for (i = 0; i < 12; ++i)
    t[i] = gen_reg_rtx (V16QImode);

  /* Unpack data such that we've got a source byte in each low byte of
     each word.  We don't care what goes into the high byte of each word.
     Rather than trying to get zero in there, most convenient is to let
     it be a copy of the low byte.  */
  emit_insn (gen_sse2_punpckhbw (t[0], operands[1], operands[1]));
  emit_insn (gen_sse2_punpckhbw (t[1], operands[2], operands[2]));
  emit_insn (gen_sse2_punpcklbw (t[2], operands[1], operands[1]));
  emit_insn (gen_sse2_punpcklbw (t[3], operands[2], operands[2]));

  /* Multiply words.  The end-of-line annotations here give a picture of what
     the output of that instruction looks like.  Dot means don't care; the 
     letters are the bytes of the result with A being the most significant.  */
  emit_insn (gen_mulv8hi3 (gen_lowpart (V8HImode, t[4]), /* .A.B.C.D.E.F.G.H */
			   gen_lowpart (V8HImode, t[0]),
			   gen_lowpart (V8HImode, t[1])));
  emit_insn (gen_mulv8hi3 (gen_lowpart (V8HImode, t[5]), /* .I.J.K.L.M.N.O.P */
			   gen_lowpart (V8HImode, t[2]),
			   gen_lowpart (V8HImode, t[3])));

  /* Extract the relevant bytes and merge them back together.  */
  emit_insn (gen_sse2_punpckhbw (t[6], t[5], t[4]));	/* ..AI..BJ..CK..DL */
  emit_insn (gen_sse2_punpcklbw (t[7], t[5], t[4]));	/* ..EM..FN..GO..HP */
  emit_insn (gen_sse2_punpckhbw (t[8], t[7], t[6]));	/* ....AEIM....BFJN */
  emit_insn (gen_sse2_punpcklbw (t[9], t[7], t[6]));	/* ....CGKO....DHLP */
  emit_insn (gen_sse2_punpckhbw (t[10], t[9], t[8]));	/* ........ACEGIKMO */
  emit_insn (gen_sse2_punpcklbw (t[11], t[9], t[8]));	/* ........BDFHJLNP */

  op0 = operands[0];
  emit_insn (gen_sse2_punpcklbw (op0, t[11], t[10]));	/* ABCDEFGHIJKLMNOP */
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2495 */
rtx
gen_mulv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2500 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MULT, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2593 */
rtx
gen_mulv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2598 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  rtx t1, t2, t3, t4, t5, t6, thirtytwo;
  rtx op0, op1, op2;

  op0 = operands[0];
  op1 = operands[1];
  op2 = operands[2];
  t1 = gen_reg_rtx (V4SImode);
  t2 = gen_reg_rtx (V4SImode);
  t3 = gen_reg_rtx (V4SImode);
  t4 = gen_reg_rtx (V4SImode);
  t5 = gen_reg_rtx (V4SImode);
  t6 = gen_reg_rtx (V4SImode);
  thirtytwo = GEN_INT (32);

  /* Multiply elements 2 and 0.  */
  emit_insn (gen_sse2_umulv2siv2di3 (gen_lowpart (V2DImode, t1), op1, op2));

  /* Shift both input vectors down one element, so that elements 3 and 1
     are now in the slots for elements 2 and 0.  For K8, at least, this is
     faster than using a shuffle.  */
  emit_insn (gen_sse2_lshrti3 (gen_lowpart (TImode, t2),
			       gen_lowpart (TImode, op1), thirtytwo));
  emit_insn (gen_sse2_lshrti3 (gen_lowpart (TImode, t3),
			       gen_lowpart (TImode, op2), thirtytwo));

  /* Multiply elements 3 and 1.  */
  emit_insn (gen_sse2_umulv2siv2di3 (gen_lowpart (V2DImode, t4), t2, t3));

  /* Move the results in element 2 down to element 1; we don't care what
     goes in elements 2 and 3.  */
  emit_insn (gen_sse2_pshufd_1 (t5, t1, const0_rtx, const2_rtx,
				const0_rtx, const0_rtx));
  emit_insn (gen_sse2_pshufd_1 (t6, t4, const0_rtx, const2_rtx,
				const0_rtx, const0_rtx));

  /* Merge the parts back together.  */
  emit_insn (gen_sse2_punpckldq (op0, t5, t6));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2639 */
rtx
gen_mulv2di3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2644 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  rtx t1, t2, t3, t4, t5, t6, thirtytwo;
  rtx op0, op1, op2;

  op0 = operands[0];
  op1 = operands[1];
  op2 = operands[2];
  t1 = gen_reg_rtx (V2DImode);
  t2 = gen_reg_rtx (V2DImode);
  t3 = gen_reg_rtx (V2DImode);
  t4 = gen_reg_rtx (V2DImode);
  t5 = gen_reg_rtx (V2DImode);
  t6 = gen_reg_rtx (V2DImode);
  thirtytwo = GEN_INT (32);

  /* Multiply low parts.  */
  emit_insn (gen_sse2_umulv2siv2di3 (t1, gen_lowpart (V4SImode, op1),
				     gen_lowpart (V4SImode, op2)));

  /* Shift input vectors left 32 bits so we can multiply high parts.  */
  emit_insn (gen_lshrv2di3 (t2, op1, thirtytwo));
  emit_insn (gen_lshrv2di3 (t3, op2, thirtytwo));

  /* Multiply high parts by low parts.  */
  emit_insn (gen_sse2_umulv2siv2di3 (t4, gen_lowpart (V4SImode, op1),
				     gen_lowpart (V4SImode, t3)));
  emit_insn (gen_sse2_umulv2siv2di3 (t5, gen_lowpart (V4SImode, op2),
				     gen_lowpart (V4SImode, t2)));

  /* Shift them back.  */
  emit_insn (gen_ashlv2di3 (t4, t4, thirtytwo));
  emit_insn (gen_ashlv2di3 (t5, t5, thirtytwo));

  /* Add the three parts together.  */
  emit_insn (gen_addv2di3 (t6, t1, t4));
  emit_insn (gen_addv2di3 (op0, t6, t5));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2683 */
rtx
gen_sdot_prodv8hi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2689 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  rtx t = gen_reg_rtx (V4SImode);
  emit_insn (gen_sse2_pmaddwd (t, operands[1], operands[2]));
  emit_insn (gen_addv4si3 (operands[0], operands[3], t));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2696 */
rtx
gen_udot_prodv4si (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2702 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  rtx t1, t2, t3, t4;

  t1 = gen_reg_rtx (V2DImode);
  emit_insn (gen_sse2_umulv2siv2di3 (t1, operands[1], operands[2]));
  emit_insn (gen_addv2di3 (t1, t1, operands[3]));

  t2 = gen_reg_rtx (V4SImode);
  t3 = gen_reg_rtx (V4SImode);
  emit_insn (gen_sse2_lshrti3 (gen_lowpart (TImode, t2),
                               gen_lowpart (TImode, operands[1]),
                               GEN_INT (32)));
  emit_insn (gen_sse2_lshrti3 (gen_lowpart (TImode, t3),
                               gen_lowpart (TImode, operands[2]),
                               GEN_INT (32)));

  t4 = gen_reg_rtx (V2DImode);
  emit_insn (gen_sse2_umulv2siv2di3 (t4, t2, t3));

  emit_insn (gen_addv2di3 (operands[0], t1, t4));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2767 */
rtx
gen_vec_shl_v16qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2772 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2767 */
rtx
gen_vec_shl_v8hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2772 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2767 */
rtx
gen_vec_shl_v4si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2772 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2767 */
rtx
gen_vec_shl_v2di (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2772 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2791 */
rtx
gen_vec_shr_v16qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2796 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2791 */
rtx
gen_vec_shr_v8hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2796 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2791 */
rtx
gen_vec_shr_v4si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2796 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2791 */
rtx
gen_vec_shr_v2di (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2796 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2803 */
rtx
gen_umaxv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2808 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (UMAX, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2819 */
rtx
gen_smaxv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2824 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (SMAX, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2835 */
rtx
gen_umaxv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2842 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  operands[3] = operands[0];
  if (rtx_equal_p (operands[0], operands[2]))
    operands[0] = gen_reg_rtx (V8HImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V8HImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (V8HImode,
	operand0,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2848 */
rtx
gen_smaxv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2853 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  rtx xops[6];
  bool ok;

  xops[0] = operands[0];
  xops[1] = operands[1];
  xops[2] = operands[2];
  xops[3] = gen_rtx_GT (VOIDmode, operands[1], operands[2]);
  xops[4] = operands[1];
  xops[5] = operands[2];
  ok = ix86_expand_int_vcond (xops);
  gcc_assert (ok);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2848 */
rtx
gen_smaxv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2853 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  rtx xops[6];
  bool ok;

  xops[0] = operands[0];
  xops[1] = operands[1];
  xops[2] = operands[2];
  xops[3] = gen_rtx_GT (VOIDmode, operands[1], operands[2]);
  xops[4] = operands[1];
  xops[5] = operands[2];
  ok = ix86_expand_int_vcond (xops);
  gcc_assert (ok);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2868 */
rtx
gen_umaxv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2873 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  rtx xops[6];
  bool ok;

  xops[0] = operands[0];
  xops[1] = operands[1];
  xops[2] = operands[2];
  xops[3] = gen_rtx_GTU (VOIDmode, operands[1], operands[2]);
  xops[4] = operands[1];
  xops[5] = operands[2];
  ok = ix86_expand_int_vcond (xops);
  gcc_assert (ok);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2888 */
rtx
gen_uminv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2893 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (UMIN, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2904 */
rtx
gen_sminv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2909 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (SMIN, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2920 */
rtx
gen_sminv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2925 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  rtx xops[6];
  bool ok;

  xops[0] = operands[0];
  xops[1] = operands[2];
  xops[2] = operands[1];
  xops[3] = gen_rtx_GT (VOIDmode, operands[1], operands[2]);
  xops[4] = operands[1];
  xops[5] = operands[2];
  ok = ix86_expand_int_vcond (xops);
  gcc_assert (ok);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2920 */
rtx
gen_sminv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2925 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  rtx xops[6];
  bool ok;

  xops[0] = operands[0];
  xops[1] = operands[2];
  xops[2] = operands[1];
  xops[3] = gen_rtx_GT (VOIDmode, operands[1], operands[2]);
  xops[4] = operands[1];
  xops[5] = operands[2];
  ok = ix86_expand_int_vcond (xops);
  gcc_assert (ok);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2940 */
rtx
gen_uminv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2945 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  rtx xops[6];
  bool ok;

  xops[0] = operands[0];
  xops[1] = operands[2];
  xops[2] = operands[1];
  xops[3] = gen_rtx_GTU (VOIDmode, operands[1], operands[2]);
  xops[4] = operands[1];
  xops[5] = operands[2];
  ok = ix86_expand_int_vcond (xops);
  gcc_assert (ok);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2940 */
rtx
gen_uminv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2945 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  rtx xops[6];
  bool ok;

  xops[0] = operands[0];
  xops[1] = operands[2];
  xops[2] = operands[1];
  xops[3] = gen_rtx_GTU (VOIDmode, operands[1], operands[2]);
  xops[4] = operands[1];
  xops[5] = operands[2];
  ok = ix86_expand_int_vcond (xops);
  gcc_assert (ok);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2986 */
rtx
gen_vcondv16qi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 2995 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (ix86_expand_int_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V16QImode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2986 */
rtx
gen_vcondv8hi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 2995 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (ix86_expand_int_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V8HImode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2986 */
rtx
gen_vcondv4si (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 2995 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (ix86_expand_int_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V4SImode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3002 */
rtx
gen_vconduv16qi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 3011 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (ix86_expand_int_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V16QImode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3002 */
rtx
gen_vconduv8hi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 3011 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (ix86_expand_int_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V8HImode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3002 */
rtx
gen_vconduv4si (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 3011 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  if (ix86_expand_int_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V4SImode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3024 */
rtx
gen_one_cmplv16qi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3029 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  int i, n = GET_MODE_NUNITS (V16QImode);
  rtvec v = rtvec_alloc (n);

  for (i = 0; i < n; ++i)
    RTVEC_ELT (v, i) = constm1_rtx;

  operands[2] = force_reg (V16QImode, gen_rtx_CONST_VECTOR (V16QImode, v));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3024 */
rtx
gen_one_cmplv8hi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3029 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  int i, n = GET_MODE_NUNITS (V8HImode);
  rtvec v = rtvec_alloc (n);

  for (i = 0; i < n; ++i)
    RTVEC_ELT (v, i) = constm1_rtx;

  operands[2] = force_reg (V8HImode, gen_rtx_CONST_VECTOR (V8HImode, v));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3024 */
rtx
gen_one_cmplv4si2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3029 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  int i, n = GET_MODE_NUNITS (V4SImode);
  rtvec v = rtvec_alloc (n);

  for (i = 0; i < n; ++i)
    RTVEC_ELT (v, i) = constm1_rtx;

  operands[2] = force_reg (V4SImode, gen_rtx_CONST_VECTOR (V4SImode, v));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3024 */
rtx
gen_one_cmplv2di2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3029 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  int i, n = GET_MODE_NUNITS (V2DImode);
  rtvec v = rtvec_alloc (n);

  for (i = 0; i < n; ++i)
    RTVEC_ELT (v, i) = constm1_rtx;

  operands[2] = force_reg (V2DImode, gen_rtx_CONST_VECTOR (V2DImode, v));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3039 */
rtx
gen_andv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3044 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (AND, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3039 */
rtx
gen_andv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3044 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (AND, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3039 */
rtx
gen_andv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3044 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (AND, V4SImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3039 */
rtx
gen_andv2di3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3044 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (AND, V2DImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3066 */
rtx
gen_iorv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3071 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (IOR, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3066 */
rtx
gen_iorv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3071 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (IOR, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3066 */
rtx
gen_iorv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3071 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (IOR, V4SImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3066 */
rtx
gen_iorv2di3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3071 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (IOR, V2DImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3083 */
rtx
gen_xorv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3088 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (XOR, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3083 */
rtx
gen_xorv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3088 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (XOR, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3083 */
rtx
gen_xorv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3088 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (XOR, V4SImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3083 */
rtx
gen_xorv2di3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3088 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (XOR, V2DImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3262 */
rtx
gen_sse2_pinsrw (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3270 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  operands[2] = gen_lowpart (HImode, operands[2]);
  operands[3] = GEN_INT ((1 << INTVAL (operands[3])));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_VEC_DUPLICATE (V8HImode,
	operand2),
	operand1,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3301 */
rtx
gen_sse2_pshufd (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3306 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  int mask = INTVAL (operands[2]);
  emit_insn (gen_sse2_pshufd_1 (operands[0], operands[1],
				GEN_INT ((mask >> 0) & 3),
				GEN_INT ((mask >> 2) & 3),
				GEN_INT ((mask >> 4) & 3),
				GEN_INT ((mask >> 6) & 3)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3338 */
rtx
gen_sse2_pshuflw (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3343 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  int mask = INTVAL (operands[2]);
  emit_insn (gen_sse2_pshuflw_1 (operands[0], operands[1],
				 GEN_INT ((mask >> 0) & 3),
				 GEN_INT ((mask >> 2) & 3),
				 GEN_INT ((mask >> 4) & 3),
				 GEN_INT ((mask >> 6) & 3)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3379 */
rtx
gen_sse2_pshufhw (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3384 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  int mask = INTVAL (operands[2]);
  emit_insn (gen_sse2_pshufhw_1 (operands[0], operands[1],
				 GEN_INT (((mask >> 0) & 3) + 4),
				 GEN_INT (((mask >> 2) & 3) + 4),
				 GEN_INT (((mask >> 4) & 3) + 4),
				 GEN_INT (((mask >> 6) & 3) + 4)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3420 */
rtx
gen_sse2_loadd (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3428 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
operands[2] = CONST0_RTX (V4SImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	operand1),
	operand2,
	const1_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3447 */
extern rtx gen_split_1919 (rtx, rtx *);
rtx
gen_split_1919 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 3456 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  operands[1] = gen_rtx_REG (SImode, REGNO (operands[1]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3460 */
rtx
gen_sse_storeq (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3478 */
extern rtx gen_split_1921 (rtx, rtx *);
rtx
gen_split_1921 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 3485 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  operands[1] = gen_rtx_REG (DImode, REGNO (operands[1]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3600 */
rtx
gen_vec_setv2di (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3605 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3611 */
rtx
gen_vec_extractv2di (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3616 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3622 */
rtx
gen_vec_initv2di (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3626 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3631 */
rtx
gen_vec_setv4si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3636 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3642 */
rtx
gen_vec_extractv4si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3647 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3653 */
rtx
gen_vec_initv4si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3657 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3662 */
rtx
gen_vec_setv8hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3667 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3673 */
rtx
gen_vec_extractv8hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3678 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3684 */
rtx
gen_vec_initv8hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3688 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3693 */
rtx
gen_vec_setv16qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3698 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3704 */
rtx
gen_vec_extractv16qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3709 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3715 */
rtx
gen_vec_initv16qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3719 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3813 */
rtx
gen_sse2_maskmovdqu (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	31));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3862 */
rtx
gen_sse_sfence (void)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
#line 3866 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  operands[0] = gen_rtx_MEM (BLKmode, gen_rtx_SCRATCH (Pmode));
  MEM_VOLATILE_P (operands[0]) = 1;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		operand0),
	37)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3887 */
rtx
gen_sse2_mfence (void)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
#line 3891 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  operands[0] = gen_rtx_MEM (BLKmode, gen_rtx_SCRATCH (Pmode));
  MEM_VOLATILE_P (operands[0]) = 1;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		operand0),
	44)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3904 */
rtx
gen_sse2_lfence (void)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
#line 3908 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  operands[0] = gen_rtx_MEM (BLKmode, gen_rtx_SCRATCH (Pmode));
  MEM_VOLATILE_P (operands[0]) = 1;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		operand0),
	45)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:35 */
rtx
gen_movv8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 60 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V8QImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:35 */
rtx
gen_movv4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 60 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V4HImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:35 */
rtx
gen_movv2si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 60 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V2SImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:115 */
rtx
gen_movv2sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 119 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V2SFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:173 */
extern rtx gen_split_1942 (rtx, rtx *);
rtx
gen_split_1942 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 180 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:173 */
extern rtx gen_split_1943 (rtx, rtx *);
rtx
gen_split_1943 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 180 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:173 */
extern rtx gen_split_1944 (rtx, rtx *);
rtx
gen_split_1944 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 180 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:173 */
extern rtx gen_split_1945 (rtx, rtx *);
rtx
gen_split_1945 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 180 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:182 */
rtx
gen_pushv8qi1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 185 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_push (V8QImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:182 */
rtx
gen_pushv4hi1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 185 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_push (V4HImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:182 */
rtx
gen_pushv2si1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 185 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_push (V2SImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:182 */
rtx
gen_pushv2sf1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 185 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_push (V2SFmode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:190 */
rtx
gen_movmisalignv8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 194 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V8QImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:190 */
rtx
gen_movmisalignv4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 194 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V4HImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:190 */
rtx
gen_movmisalignv2si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 194 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V2SImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:190 */
rtx
gen_movmisalignv2sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 194 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V2SFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:234 */
rtx
gen_mmx_subrv2sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SFmode,
	operand2,
	operand1));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:478 */
rtx
gen_vec_setv2sf (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 483 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:489 */
extern rtx gen_split_1956 (rtx, rtx *);
rtx
gen_split_1956 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 498 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  rtx op1 = operands[1];
  if (REG_P (op1))
    op1 = gen_rtx_REG (SFmode, REGNO (op1));
  else
    op1 = gen_lowpart (SFmode, op1);
  emit_move_insn (operands[0], op1);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:521 */
extern rtx gen_split_1957 (rtx, rtx *);
rtx
gen_split_1957 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 528 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  operands[1] = adjust_address (operands[1], SFmode, 4);
  emit_move_insn (operands[0], operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:534 */
rtx
gen_vec_extractv2sf (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 539 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:545 */
rtx
gen_vec_initv2sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 549 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1027 */
rtx
gen_mmx_pinsrw (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 1035 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  operands[2] = gen_lowpart (HImode, operands[2]);
  operands[3] = GEN_INT (1 << INTVAL (operands[3]));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_VEC_DUPLICATE (V4HImode,
	operand2),
	operand1,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1066 */
rtx
gen_mmx_pshufw (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1071 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  int mask = INTVAL (operands[2]);
  emit_insn (gen_mmx_pshufw_1 (operands[0], operands[1],
                               GEN_INT ((mask >> 0) & 3),
                               GEN_INT ((mask >> 2) & 3),
                               GEN_INT ((mask >> 4) & 3),
                               GEN_INT ((mask >> 6) & 3)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1144 */
rtx
gen_vec_setv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1149 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1155 */
extern rtx gen_split_1963 (rtx, rtx *);
rtx
gen_split_1963 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1164 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  rtx op1 = operands[1];
  if (REG_P (op1))
    op1 = gen_rtx_REG (SImode, REGNO (op1));
  else
    op1 = gen_lowpart (SImode, op1);
  emit_move_insn (operands[0], op1);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1189 */
extern rtx gen_split_1964 (rtx, rtx *);
rtx
gen_split_1964 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1196 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  operands[1] = adjust_address (operands[1], SImode, 4);
  emit_move_insn (operands[0], operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1202 */
rtx
gen_vec_extractv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1207 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1213 */
rtx
gen_vec_initv2si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1217 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1222 */
rtx
gen_vec_setv4hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1227 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1233 */
rtx
gen_vec_extractv4hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1238 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1244 */
rtx
gen_vec_initv4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1248 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1253 */
rtx
gen_vec_setv8qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1258 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1264 */
rtx
gen_vec_extractv8qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1269 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1275 */
rtx
gen_vec_initv8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1279 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1356 */
rtx
gen_mmx_maskmovq (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	31));
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:22 */
rtx
gen_sync_compare_and_swapqi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 53 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md"
{
  if ((QImode == DImode && !TARGET_64BIT) || QImode == TImode)
    {
      enum machine_mode hmode = QImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], QImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], QImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (QImode == DImode)
	emit_insn (gen_sync_double_compare_and_swapdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (QImode == TImode)
	emit_insn (gen_sync_double_compare_and_swapti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:22 */
rtx
gen_sync_compare_and_swaphi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 53 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md"
{
  if ((HImode == DImode && !TARGET_64BIT) || HImode == TImode)
    {
      enum machine_mode hmode = HImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], HImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], HImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (HImode == DImode)
	emit_insn (gen_sync_double_compare_and_swapdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (HImode == TImode)
	emit_insn (gen_sync_double_compare_and_swapti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:22 */
rtx
gen_sync_compare_and_swapsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 53 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md"
{
  if ((SImode == DImode && !TARGET_64BIT) || SImode == TImode)
    {
      enum machine_mode hmode = SImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], SImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], SImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (SImode == DImode)
	emit_insn (gen_sync_double_compare_and_swapdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (SImode == TImode)
	emit_insn (gen_sync_double_compare_and_swapti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:22 */
rtx
gen_sync_compare_and_swapdi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 53 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md"
{
  if ((DImode == DImode && !TARGET_64BIT) || DImode == TImode)
    {
      enum machine_mode hmode = DImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], DImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], DImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (DImode == DImode)
	emit_insn (gen_sync_double_compare_and_swapdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (DImode == TImode)
	emit_insn (gen_sync_double_compare_and_swapti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:22 */
rtx
gen_sync_compare_and_swapti (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 53 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md"
{
  if ((TImode == DImode && !TARGET_64BIT) || TImode == TImode)
    {
      enum machine_mode hmode = TImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], TImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], TImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (TImode == DImode)
	emit_insn (gen_sync_double_compare_and_swapdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (TImode == TImode)
	emit_insn (gen_sync_double_compare_and_swapti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (TImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:124 */
rtx
gen_sync_compare_and_swap_ccqi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 140 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md"
{
  operands[4] = gen_rtx_REG (CCZmode, FLAGS_REG);
  ix86_compare_op0 = operands[3];
  ix86_compare_op1 = NULL;
  ix86_compare_emitted = operands[4];
  if ((QImode == DImode && !TARGET_64BIT) || QImode == TImode)
    {
      enum machine_mode hmode = QImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], QImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], QImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (QImode == DImode)
	emit_insn (gen_sync_double_compare_and_swap_ccdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (QImode == TImode)
	emit_insn (gen_sync_double_compare_and_swap_ccti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	11),
	operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:124 */
rtx
gen_sync_compare_and_swap_cchi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 140 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md"
{
  operands[4] = gen_rtx_REG (CCZmode, FLAGS_REG);
  ix86_compare_op0 = operands[3];
  ix86_compare_op1 = NULL;
  ix86_compare_emitted = operands[4];
  if ((HImode == DImode && !TARGET_64BIT) || HImode == TImode)
    {
      enum machine_mode hmode = HImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], HImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], HImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (HImode == DImode)
	emit_insn (gen_sync_double_compare_and_swap_ccdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (HImode == TImode)
	emit_insn (gen_sync_double_compare_and_swap_ccti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	11),
	operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:124 */
rtx
gen_sync_compare_and_swap_ccsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 140 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md"
{
  operands[4] = gen_rtx_REG (CCZmode, FLAGS_REG);
  ix86_compare_op0 = operands[3];
  ix86_compare_op1 = NULL;
  ix86_compare_emitted = operands[4];
  if ((SImode == DImode && !TARGET_64BIT) || SImode == TImode)
    {
      enum machine_mode hmode = SImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], SImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], SImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (SImode == DImode)
	emit_insn (gen_sync_double_compare_and_swap_ccdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (SImode == TImode)
	emit_insn (gen_sync_double_compare_and_swap_ccti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	11),
	operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:124 */
rtx
gen_sync_compare_and_swap_ccdi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 140 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md"
{
  operands[4] = gen_rtx_REG (CCZmode, FLAGS_REG);
  ix86_compare_op0 = operands[3];
  ix86_compare_op1 = NULL;
  ix86_compare_emitted = operands[4];
  if ((DImode == DImode && !TARGET_64BIT) || DImode == TImode)
    {
      enum machine_mode hmode = DImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], DImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], DImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (DImode == DImode)
	emit_insn (gen_sync_double_compare_and_swap_ccdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (DImode == TImode)
	emit_insn (gen_sync_double_compare_and_swap_ccti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	11),
	operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:124 */
rtx
gen_sync_compare_and_swap_ccti (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 140 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md"
{
  operands[4] = gen_rtx_REG (CCZmode, FLAGS_REG);
  ix86_compare_op0 = operands[3];
  ix86_compare_op1 = NULL;
  ix86_compare_emitted = operands[4];
  if ((TImode == DImode && !TARGET_64BIT) || TImode == TImode)
    {
      enum machine_mode hmode = TImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], TImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], TImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (TImode == DImode)
	emit_insn (gen_sync_double_compare_and_swap_ccdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (TImode == TImode)
	emit_insn (gen_sync_double_compare_and_swap_ccti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (TImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_UNSPEC_VOLATILE (TImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	11),
	operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}



void
add_clobbers (rtx pattern ATTRIBUTE_UNUSED, int insn_code_number)
{
  switch (insn_code_number)
    {
    case 1137:
    case 1136:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (XFmode, 8);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (XFmode, 9);
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (XFmode, 10);
      XVECEXP (pattern, 0, 4) = gen_hard_reg_clobber (XFmode, 11);
      XVECEXP (pattern, 0, 5) = gen_hard_reg_clobber (XFmode, 12);
      XVECEXP (pattern, 0, 6) = gen_hard_reg_clobber (XFmode, 13);
      XVECEXP (pattern, 0, 7) = gen_hard_reg_clobber (XFmode, 14);
      XVECEXP (pattern, 0, 8) = gen_hard_reg_clobber (XFmode, 15);
      XVECEXP (pattern, 0, 9) = gen_hard_reg_clobber (DImode, 29);
      XVECEXP (pattern, 0, 10) = gen_hard_reg_clobber (DImode, 30);
      XVECEXP (pattern, 0, 11) = gen_hard_reg_clobber (DImode, 31);
      XVECEXP (pattern, 0, 12) = gen_hard_reg_clobber (DImode, 32);
      XVECEXP (pattern, 0, 13) = gen_hard_reg_clobber (DImode, 33);
      XVECEXP (pattern, 0, 14) = gen_hard_reg_clobber (DImode, 34);
      XVECEXP (pattern, 0, 15) = gen_hard_reg_clobber (DImode, 35);
      XVECEXP (pattern, 0, 16) = gen_hard_reg_clobber (DImode, 36);
      break;

    case 757:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (CCmode, 17);
      break;

    case 756:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (CCmode, 17);
      break;

    case 661:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode));
      break;

    case 660:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      break;

    case 590:
    case 588:
    case 587:
    case 585:
    case 584:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (CCmode, 17);
      break;

    case 547:
    case 546:
    case 545:
    case 544:
    case 543:
    case 542:
    case 541:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (CCFPmode, 18);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (CCFPmode, 17);
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode));
      break;

    case 540:
    case 539:
    case 538:
    case 537:
    case 536:
    case 535:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (CCFPmode, 18);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (CCFPmode, 17);
      break;

    case 384:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V2DFmode));
      break;

    case 379:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V4SFmode));
      break;

    case 734:
    case 733:
    case 287:
    case 286:
    case 284:
    case 281:
    case 278:
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (CCmode, 17);
      break;

    case 1155:
    case 1154:
    case 1153:
    case 1152:
    case 1144:
    case 1143:
    case 1142:
    case 1141:
    case 1140:
    case 1139:
    case 1138:
    case 776:
    case 775:
    case 774:
    case 773:
    case 385:
    case 382:
    case 381:
    case 380:
    case 377:
    case 376:
    case 375:
    case 285:
    case 283:
    case 282:
    case 280:
    case 279:
    case 277:
    case 276:
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (CCmode, 17);
      break;

    case 576:
    case 575:
    case 273:
    case 272:
    case 270:
    case 269:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (CCmode, 17);
      break;

    case 578:
    case 467:
    case 429:
    case 408:
    case 271:
    case 268:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (CCmode, 17);
      break;

    case 499:
    case 497:
    case 466:
    case 464:
    case 428:
    case 360:
    case 334:
    case 230:
    case 229:
    case 228:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode));
      break;

    case 491:
    case 489:
    case 458:
    case 456:
    case 424:
    case 351:
    case 329:
    case 223:
    case 222:
    case 221:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode));
      break;

    case 779:
    case 777:
    case 484:
    case 481:
    case 451:
    case 448:
    case 419:
    case 348:
    case 326:
    case 217:
    case 216:
    case 214:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 780:
    case 778:
    case 474:
    case 472:
    case 438:
    case 436:
    case 413:
    case 341:
    case 319:
    case 209:
    case 208:
    case 207:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      break;

    case 695:
    case 684:
    case 161:
      XVECEXP (pattern, 0, 4) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode));
      break;

    case 694:
    case 683:
    case 160:
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode));
      break;

    case 671:
    case 156:
    case 155:
    case 154:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode));
      break;

    case 670:
    case 664:
    case 663:
    case 662:
    case 153:
    case 152:
    case 151:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode));
      break;

    case 513:
    case 500:
    case 114:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (CCmode, 17);
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 1179:
    case 1178:
    case 1177:
    case 1176:
    case 1175:
    case 1174:
    case 1173:
    case 1172:
    case 1171:
    case 1170:
    case 1169:
    case 1168:
    case 1167:
    case 1166:
    case 1165:
    case 1164:
    case 1163:
    case 1162:
    case 1161:
    case 1160:
    case 737:
    case 735:
    case 702:
    case 700:
    case 693:
    case 692:
    case 691:
    case 689:
    case 682:
    case 681:
    case 680:
    case 678:
    case 600:
    case 599:
    case 597:
    case 596:
    case 594:
    case 592:
    case 583:
    case 582:
    case 581:
    case 580:
    case 569:
    case 568:
    case 528:
    case 527:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
    case 507:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 501:
    case 495:
    case 494:
    case 493:
    case 492:
    case 487:
    case 486:
    case 479:
    case 478:
    case 477:
    case 476:
    case 475:
    case 470:
    case 469:
    case 468:
    case 462:
    case 461:
    case 460:
    case 459:
    case 454:
    case 453:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 426:
    case 425:
    case 422:
    case 421:
    case 417:
    case 416:
    case 415:
    case 414:
    case 411:
    case 410:
    case 409:
    case 373:
    case 371:
    case 368:
    case 367:
    case 365:
    case 364:
    case 363:
    case 357:
    case 356:
    case 355:
    case 354:
    case 353:
    case 352:
    case 349:
    case 344:
    case 343:
    case 342:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 331:
    case 330:
    case 327:
    case 322:
    case 321:
    case 320:
    case 317:
    case 316:
    case 315:
    case 314:
    case 312:
    case 308:
    case 307:
    case 305:
    case 302:
    case 301:
    case 299:
    case 275:
    case 274:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
    case 259:
    case 258:
    case 257:
    case 254:
    case 253:
    case 250:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 226:
    case 225:
    case 224:
    case 219:
    case 218:
    case 211:
    case 210:
    case 205:
    case 192:
    case 191:
    case 190:
    case 189:
    case 187:
    case 186:
    case 185:
    case 159:
    case 158:
    case 157:
    case 110:
    case 108:
    case 107:
    case 105:
    case 104:
    case 102:
    case 79:
    case 78:
    case 59:
    case 52:
    case 39:
    case 38:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (CCmode, 17);
      break;

    default:
      gcc_unreachable ();
    }
}


int
added_clobbers_hard_reg_p (int insn_code_number)
{
  switch (insn_code_number)
    {
    case 661:
    case 660:
    case 384:
    case 379:
    case 499:
    case 497:
    case 466:
    case 464:
    case 428:
    case 360:
    case 334:
    case 230:
    case 229:
    case 228:
    case 491:
    case 489:
    case 458:
    case 456:
    case 424:
    case 351:
    case 329:
    case 223:
    case 222:
    case 221:
    case 779:
    case 777:
    case 484:
    case 481:
    case 451:
    case 448:
    case 419:
    case 348:
    case 326:
    case 217:
    case 216:
    case 214:
    case 780:
    case 778:
    case 474:
    case 472:
    case 438:
    case 436:
    case 413:
    case 341:
    case 319:
    case 209:
    case 208:
    case 207:
    case 695:
    case 684:
    case 161:
    case 694:
    case 683:
    case 160:
    case 671:
    case 156:
    case 155:
    case 154:
    case 670:
    case 664:
    case 663:
    case 662:
    case 153:
    case 152:
    case 151:
      return 0;

    case 1137:
    case 1136:
    case 757:
    case 756:
    case 590:
    case 588:
    case 587:
    case 585:
    case 584:
    case 547:
    case 546:
    case 545:
    case 544:
    case 543:
    case 542:
    case 541:
    case 540:
    case 539:
    case 538:
    case 537:
    case 536:
    case 535:
    case 734:
    case 733:
    case 287:
    case 286:
    case 284:
    case 281:
    case 278:
    case 1155:
    case 1154:
    case 1153:
    case 1152:
    case 1144:
    case 1143:
    case 1142:
    case 1141:
    case 1140:
    case 1139:
    case 1138:
    case 776:
    case 775:
    case 774:
    case 773:
    case 385:
    case 382:
    case 381:
    case 380:
    case 377:
    case 376:
    case 375:
    case 285:
    case 283:
    case 282:
    case 280:
    case 279:
    case 277:
    case 276:
    case 576:
    case 575:
    case 273:
    case 272:
    case 270:
    case 269:
    case 578:
    case 467:
    case 429:
    case 408:
    case 271:
    case 268:
    case 513:
    case 500:
    case 114:
    case 1179:
    case 1178:
    case 1177:
    case 1176:
    case 1175:
    case 1174:
    case 1173:
    case 1172:
    case 1171:
    case 1170:
    case 1169:
    case 1168:
    case 1167:
    case 1166:
    case 1165:
    case 1164:
    case 1163:
    case 1162:
    case 1161:
    case 1160:
    case 737:
    case 735:
    case 702:
    case 700:
    case 693:
    case 692:
    case 691:
    case 689:
    case 682:
    case 681:
    case 680:
    case 678:
    case 600:
    case 599:
    case 597:
    case 596:
    case 594:
    case 592:
    case 583:
    case 582:
    case 581:
    case 580:
    case 569:
    case 568:
    case 528:
    case 527:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
    case 507:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 501:
    case 495:
    case 494:
    case 493:
    case 492:
    case 487:
    case 486:
    case 479:
    case 478:
    case 477:
    case 476:
    case 475:
    case 470:
    case 469:
    case 468:
    case 462:
    case 461:
    case 460:
    case 459:
    case 454:
    case 453:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 426:
    case 425:
    case 422:
    case 421:
    case 417:
    case 416:
    case 415:
    case 414:
    case 411:
    case 410:
    case 409:
    case 373:
    case 371:
    case 368:
    case 367:
    case 365:
    case 364:
    case 363:
    case 357:
    case 356:
    case 355:
    case 354:
    case 353:
    case 352:
    case 349:
    case 344:
    case 343:
    case 342:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 331:
    case 330:
    case 327:
    case 322:
    case 321:
    case 320:
    case 317:
    case 316:
    case 315:
    case 314:
    case 312:
    case 308:
    case 307:
    case 305:
    case 302:
    case 301:
    case 299:
    case 275:
    case 274:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
    case 259:
    case 258:
    case 257:
    case 254:
    case 253:
    case 250:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 226:
    case 225:
    case 224:
    case 219:
    case 218:
    case 211:
    case 210:
    case 205:
    case 192:
    case 191:
    case 190:
    case 189:
    case 187:
    case 186:
    case 185:
    case 159:
    case 158:
    case 157:
    case 110:
    case 108:
    case 107:
    case 105:
    case 104:
    case 102:
    case 79:
    case 78:
    case 59:
    case 52:
    case 39:
    case 38:
      return 1;

    default:
      gcc_unreachable ();
    }
}
