/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "toplev.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char * const output_0[] = {
  "test{q}\t{%0, %0|%0, %0}",
  "cmp{q}\t{%1, %0|%0, %1}",
};

static const char * const output_3[] = {
  "test{l}\t{%0, %0|%0, %0}",
  "cmp{l}\t{%1, %0|%0, %1}",
};

static const char * const output_6[] = {
  "test{w}\t{%0, %0|%0, %0}",
  "cmp{w}\t{%1, %0|%0, %1}",
};

static const char * const output_9[] = {
  "test{b}\t{%0, %0|%0, %0}",
  "cmp{b}\t{$0, %0|%0, 0}",
};

static const char *
output_18 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 855 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_19 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 874 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_20 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 887 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_21 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 900 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_22 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 915 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 1);
}

static const char *
output_23 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 937 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_24 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 937 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_27 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 976 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 1, 0);
}

static const char *
output_28 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 991 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 1, 0);
}

static const char *
output_29 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1007 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 1, 0);
}

static const char *
output_30 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1025 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 1, 1);
}

static const char *
output_31 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1040 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 1, 1);
}

static const char *
output_32 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1056 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 1, 1);
}

static const char *
output_39 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1150 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[1] = constm1_rtx;
  return "or{l}\t{%1, %0|%0, %1}";
}
}

static const char *
output_40 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1164 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_SSELOG1:
      if (get_attr_mode (insn) == MODE_TI)
        return "pxor\t%0, %0";
      return "xorps\t%0, %0";

    case TYPE_SSEMOV:
      switch (get_attr_mode (insn))
	{
	case MODE_TI:
	  return "movdqa\t{%1, %0|%0, %1}";
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_SI:
          return "movd\t{%1, %0|%0, %1}";
	case MODE_SF:
          return "movss\t{%1, %0|%0, %1}";
	default:
	  gcc_unreachable ();
	}

    case TYPE_MMXADD:
      return "pxor\t%0, %0";

    case TYPE_MMXMOV:
      if (get_attr_mode (insn) == MODE_DI)
	return "movq\t{%1, %0|%0, %1}";
      return "movd\t{%1, %0|%0, %1}";

    case TYPE_LEA:
      return "lea{l}\t{%1, %0|%0, %1}";

    default:
      gcc_assert (!flag_pic || LEGITIMATE_PIC_OPERAND_P (operands[1]));
      return "mov{l}\t{%1, %0|%0, %1}";
    }
}
}

static const char * const output_41[] = {
  "movabs{l}\t{%1, %P0|%P0, %1}",
  "mov{l}\t{%1, %a0|%a0, %1}",
};

static const char * const output_42[] = {
  "movabs{l}\t{%P1, %0|%0, %P1}",
  "mov{l}\t{%a1, %0|%0, %a1}",
};

static const char *
output_46 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1300 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      /* movzwl is faster than movw on p2 due to partial word stalls,
	 though not as fast as an aligned movl.  */
      return "movz{wl|x}\t{%1, %k0|%k0, %1}";
    default:
      if (get_attr_mode (insn) == MODE_SI)
        return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else
        return "mov{w}\t{%1, %0|%0, %1}";
    }
}
}

static const char * const output_47[] = {
  "movabs{w}\t{%1, %P0|%P0, %1}",
  "mov{w}\t{%1, %a0|%a0, %1}",
};

static const char * const output_48[] = {
  "movabs{w}\t{%P1, %0|%0, %P1}",
  "mov{w}\t{%a1, %0|%0, %a1}",
};

static const char *
output_55 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1473 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      gcc_assert (ANY_QI_REG_P (operands[1]) || GET_CODE (operands[1]) == MEM);
      return "movz{bl|x}\t{%1, %k0|%k0, %1}";
    default:
      if (get_attr_mode (insn) == MODE_SI)
        return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else
        return "mov{b}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_62 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1631 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movs{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char *
output_63 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1658 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movs{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char * const output_64[] = {
  "movabs{b}\t{%1, %P0|%P0, %1}",
  "mov{b}\t{%1, %a0|%a0, %1}",
};

static const char * const output_65[] = {
  "movabs{b}\t{%P1, %0|%0, %P1}",
  "mov{b}\t{%a1, %0|%0, %a1}",
};

static const char *
output_68 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1736 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movz{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char *
output_69 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1763 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movz{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char * const output_74[] = {
  "push{q}\t%1",
  "#",
};

static const char *
output_79 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1929 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  operands[1] = constm1_rtx;
  return "or{q}\t{%1, %0|%0, %1}";
}
}

static const char * const output_80[] = {
  "#",
  "#",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movdqa\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movlps\t{%1, %0|%0, %1}",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
};

static const char *
output_81 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1984 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_SSECVT:
      if (which_alternative == 13)
	return "movq2dq\t{%1, %0|%0, %1}";
      else
	return "movdq2q\t{%1, %0|%0, %1}";
    case TYPE_SSEMOV:
      if (get_attr_mode (insn) == MODE_TI)
	  return "movdqa\t{%1, %0|%0, %1}";
      /* FALLTHRU */
    case TYPE_MMXMOV:
      /* Moves from and into integer register is done using movd opcode with
 	 REX prefix.  */
      if (GENERAL_REG_P (operands[0]) || GENERAL_REG_P (operands[1]))
	  return "movd\t{%1, %0|%0, %1}";
      return "movq\t{%1, %0|%0, %1}";
    case TYPE_SSELOG1:
    case TYPE_MMXADD:
      return "pxor\t%0, %0";
    case TYPE_MULTI:
      return "#";
    case TYPE_LEA:
      return "lea{q}\t{%a1, %0|%0, %a1}";
    default:
      gcc_assert (!flag_pic || LEGITIMATE_PIC_OPERAND_P (operands[1]));
      if (get_attr_mode (insn) == MODE_SI)
	return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else if (which_alternative == 2)
	return "movabs{q}\t{%1, %0|%0, %1}";
      else
	return "mov{q}\t{%1, %0|%0, %1}";
    }
}
}

static const char * const output_82[] = {
  "movabs{q}\t{%1, %P0|%P0, %1}",
  "mov{q}\t{%1, %a0|%a0, %1}",
};

static const char * const output_83[] = {
  "movabs{q}\t{%P1, %0|%0, %P1}",
  "mov{q}\t{%a1, %0|%0, %a1}",
};

static const char *
output_85 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2136 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "xorps\t%0, %0";
      else
	return "pxor\t%0, %0";
    case 1:
    case 2:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "movaps\t{%1, %0|%0, %1}";
      else
	return "movdqa\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_86 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2170 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return "#";
    case 2:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "xorps\t%0, %0";
      else
	return "pxor\t%0, %0";
    case 3:
    case 4:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "movaps\t{%1, %0|%0, %1}";
      else
	return "movdqa\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_87 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2227 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  /* Anything else should be already split before reg-stack.  */
  gcc_assert (which_alternative == 1);
  return "push{l}\t%1";
}
}

static const char *
output_88 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2240 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  /* Anything else should be already split before reg-stack.  */
  gcc_assert (which_alternative == 1);
  return "push{q}\t%q1";
}
}

static const char *
output_89 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2285 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    case 1:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0";
      else
        return "fst%z0\t%y0";

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "mov{l}\t{%1, %0|%0, %1}";
    case 5:
      if (get_attr_mode (insn) == MODE_TI)
	return "pxor\t%0, %0";
      else
	return "xorps\t%0, %0";
    case 6:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "movaps\t{%1, %0|%0, %1}";
      else
	return "movss\t{%1, %0|%0, %1}";
    case 7:
    case 8:
      return "movss\t{%1, %0|%0, %1}";

    case 9:
    case 10:
      return "movd\t{%1, %0|%0, %1}";

    case 11:
      return "movq\t{%1, %0|%0, %1}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_90 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2370 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *
output_91 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2394 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_92 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2406 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_93 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2453 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    case 1:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0";
      else
        return "fst%z0\t%y0";

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "#";
    case 5:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "xorps\t%0, %0";
	case MODE_V2DF:
	  return "xorpd\t%0, %0";
	case MODE_TI:
	  return "pxor\t%0, %0";
	default:
	  gcc_unreachable ();
	}
    case 6:
    case 7:
    case 8:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "movapd\t{%1, %0|%0, %1}";
	case MODE_TI:
	  return "movdqa\t{%1, %0|%0, %1}";
	case MODE_DI:
	  return "movq\t{%1, %0|%0, %1}";
	case MODE_DF:
	  return "movsd\t{%1, %0|%0, %1}";
	case MODE_V1DF:
	  return "movlpd\t{%1, %0|%0, %1}";
	case MODE_V2SF:
	  return "movlps\t{%1, %0|%0, %1}";
	default:
	  gcc_unreachable ();
	}

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_94 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2573 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    case 1:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0";
      else
        return "fst%z0\t%y0";

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "#";

    case 5:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "xorps\t%0, %0";
	case MODE_V2DF:
	  return "xorpd\t%0, %0";
	case MODE_TI:
	  return "pxor\t%0, %0";
	default:
	  gcc_unreachable ();
	}
    case 6:
    case 7:
    case 8:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "movapd\t{%1, %0|%0, %1}";
	case MODE_TI:
	  return "movdqa\t{%1, %0|%0, %1}";
	case MODE_DI:
	  return "movq\t{%1, %0|%0, %1}";
	case MODE_DF:
	  return "movsd\t{%1, %0|%0, %1}";
	case MODE_V1DF:
	  return "movlpd\t{%1, %0|%0, %1}";
	case MODE_V2SF:
	  return "movlps\t{%1, %0|%0, %1}";
	default:
	  gcc_unreachable ();
	}

    default:
      gcc_unreachable();
    }
}
}

static const char *
output_95 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2703 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *
output_96 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2729 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_97 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2741 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_98 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2784 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    case 1:
      /* There is no non-popping store to memory for XFmode.  So if
	 we need one, follow the store with a load.  */
      if (! find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0\n\tfld%z0\t%y0";
      else
        return "fstp%z0\t%y0";

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3: case 4:
      return "#";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_99 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2818 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    case 1:
      /* There is no non-popping store to memory for XFmode.  So if
	 we need one, follow the store with a load.  */
      if (! find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0\n\tfld%z0\t%y0";
      else
        return "fstp%z0\t%y0";

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3: case 4:
      return "#";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_100 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2898 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *
output_101 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2921 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return "#";
    case 2:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "xorps\t%0, %0";
      else
	return "pxor\t%0, %0";
    case 3:
    case 4:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "movaps\t{%1, %0|%0, %1}";
      else
	return "movdqa\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_110[] = {
  "#",
  "#",
  "#",
  "movd\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_111[] = {
  "mov\t{%k1, %k0|%k0, %k1}",
  "#",
  "movd\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_115[] = {
  "{cltq|cdqe}",
  "movs{lq|x}\t{%1,%0|%0, %1}",
};

static const char *
output_118 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3361 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cwtl|cwde}";
    default:
      return "movs{wl|x}\t{%1,%0|%0, %1}";
    }
}
}

static const char *
output_119 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3388 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cwtl|cwde}";
    default:
      return "movs{wl|x}\t{%1,%k0|%k0, %1}";
    }
}
}

static const char *
output_120 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3414 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cbtw|cbw}";
    default:
      return "movs{bw|x}\t{%1,%0|%0, %1}";
    }
}
}

static const char *
output_125 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3545 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    case 1:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0";
      else
        return "fst%z0\t%y0";

    case 2:
      return "cvtss2sd\t{%1, %0|%0, %1}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_127 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3581 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    case 1:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0";
      else
        return "fst%z0\t%y0";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_128 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3627 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    case 1:
      /* There is no non-popping store to memory for XFmode.  So if
	 we need one, follow the store with a load.  */
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0";
      else
        return "fstp%z0\t%y0\n\tfld%z0\t%y0";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_129 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3675 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    case 1:
      /* There is no non-popping store to memory for XFmode.  So if
	 we need one, follow the store with a load.  */
      if (! find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0\n\tfld%z0\t%y0";
      else
        return "fstp%z0\t%y0";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_130 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3736 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return "fstp%z0\t%y0";
      else
	return "fst%z0\t%y0";
    case 1:
      return output_387_reg_move (insn, operands);
    case 2:
      return "cvtsd2ss\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_132 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3771 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_133 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3781 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return "fstp%z0\t%y0";
      else
	return "fst%z0\t%y0";
    case 1:
      return "#";
    case 2:
      return "cvtsd2ss\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_134 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3807 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return "fstp%z0\t%y0";
      else
	return "fst%z0\t%y0";
    case 1:
      return "#";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_135 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3832 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "fstp%z0\t%y0";
  else
    return "fst%z0\t%y0";
}
}

static const char *
output_136 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3880 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  gcc_assert (!which_alternative);
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "fstp%z0\t%y0";
  else
    return "fst%z0\t%y0";
}
}

static const char *
output_137 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3895 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  return output_387_reg_move (insn, operands);
}
}

static const char *
output_138 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3907 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  gcc_assert (!which_alternative);
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "fstp%z0\t%y0";
   else
     return "fst%z0\t%y0";
}
}

static const char *
output_139 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3923 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "fstp%z0\t%y0";
  else
    return "fst%z0\t%y0";
}
}

static const char *
output_140 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3978 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  gcc_assert (!which_alternative);
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "fstp%z0\t%y0";
  else
    return "fst%z0\t%y0";
}
}

static const char *
output_141 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3993 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  return output_387_reg_move (insn, operands);
}
}

static const char *
output_142 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4005 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  gcc_assert (!which_alternative);
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "fstp%z0\t%y0";
  else
    return "fst%z0\t%y0";
}
}

static const char *
output_143 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4021 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "fstp%z0\t%y0";
  else
    return "fst%z0\t%y0";
}
}

static const char *
output_151 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4231 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 1);
}

static const char *
output_152 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4231 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 1);
}

static const char *
output_153 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4231 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 1);
}

static const char *
output_160 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4317 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_162 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4374 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_163 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4374 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char * const output_168[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_169[] = {
  "fild%z1\t%1",
  "#",
  "cvtsi2ss\t{%1, %0|%0, %1}",
  "cvtsi2ss\t{%1, %0|%0, %1}",
};

static const char * const output_171[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_172[] = {
  "fild%z1\t%1",
  "#",
  "cvtsi2ss{q}\t{%1, %0|%0, %1}",
  "cvtsi2ss{q}\t{%1, %0|%0, %1}",
};

static const char * const output_174[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_175[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_176[] = {
  "fild%z1\t%1",
  "#",
  "cvtsi2sd\t{%1, %0|%0, %1}",
  "cvtsi2sd\t{%1, %0|%0, %1}",
};

static const char * const output_178[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_179[] = {
  "fild%z1\t%1",
  "#",
  "cvtsi2sd{q}\t{%1, %0|%0, %1}",
  "cvtsi2sd{q}\t{%1, %0|%0, %1}",
};

static const char * const output_181[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_182[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_183[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_184[] = {
  "fild%z1\t%1",
  "#",
};

static const char *
output_205 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5119 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{q}\t{%a2, %0|%0, %a2}";

    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));

      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
	  /* Avoid overflows.  */
	  && ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1)))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{q}\t{%2, %0|%0, %2}";
        }
      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_206 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5193 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* ???? We ought to handle there the 32bit case too
	 - do we need new constraint?  */
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
	  /* Avoid overflows.  */
	  && ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1)))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{q}\t{%2, %0|%0, %2}";
        }
      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_207 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5242 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* ???? We ought to handle there the 32bit case too
	 - do we need new constraint?  */
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
	  /* Avoid overflows.  */
	  && ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1)))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{q}\t{%2, %0|%0, %2}";
        }
      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_208 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5295 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{q}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if ((INTVAL (operands[2]) == -128
	   || (INTVAL (operands[2]) > 0
	       && INTVAL (operands[2]) != 128))
	  /* Avoid overflows.  */
	  && ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1))))
	return "sub{q}\t{%2, %0|%0, %2}";
      operands[2] = GEN_INT (-INTVAL (operands[2]));
      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_209 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5340 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
          gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
	  /* Avoid overflows.  */
	  && ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1)))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{q}\t{%2, %0|%0, %2}";
        }
      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_210 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5383 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{l}\t{%a2, %0|%0, %a2}";

    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
	{
  	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));

      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_211 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5467 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{l}\t{%a2, %k0|%k0, %a2}";

    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%k0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%k0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %k0|%k0, %2}";
        }
      return "add{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *
output_212 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5539 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_213 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5587 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%k0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%k0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %k0|%k0, %2}";
        }
      return "add{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *
output_214 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5629 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_215 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5675 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%k0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%k0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %k0|%k0, %2}";
        }
      return "add{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *
output_216 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5722 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{l}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if ((INTVAL (operands[2]) == -128
	   || (INTVAL (operands[2]) > 0
	       && INTVAL (operands[2]) != 128)))
	return "sub{l}\t{%2, %0|%0, %2}";
      operands[2] = GEN_INT (-INTVAL (operands[2]));
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_217 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5764 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_218 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5817 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_219 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5860 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_220 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5902 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_221 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5941 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_222 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5981 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{w}\t%0";
      else
	{
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{w}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if ((INTVAL (operands[2]) == -128
	   || (INTVAL (operands[2]) > 0
	       && INTVAL (operands[2]) != 128)))
	return "sub{w}\t{%2, %0|%0, %2}";
      operands[2] = GEN_INT (-INTVAL (operands[2]));
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_223 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6021 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_224 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6069 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  int widen = (which_alternative == 2);
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return widen ? "inc{l}\t%k0" : "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return widen ? "dec{l}\t%k0" : "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  if (widen)
	    return "sub{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sub{b}\t{%2, %0|%0, %2}";
	}
      if (widen)
        return "add{l}\t{%k2, %k0|%k0, %k2}";
      else
        return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_225 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6119 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  int widen = (which_alternative == 2);
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return widen ? "inc{l}\t%k0" : "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return widen ? "dec{l}\t%k0" : "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  if (widen)
	    return "sub{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sub{b}\t{%2, %0|%0, %2}";
	}
      if (widen)
        return "add{l}\t{%k2, %k0|%k0, %k2}";
      else
        return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_226 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6165 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[1] == const1_rtx)
	return "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.  */
      if (GET_CODE (operands[1]) == CONST_INT
	  && INTVAL (operands[1]) < 0)
	{
	  operands[1] = GEN_INT (-INTVAL (operands[1]));
	  return "sub{b}\t{%1, %0|%0, %1}";
	}
      return "add{b}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_227 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6208 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx
		      || (GET_CODE (operands[2]) == CONST_INT
		          && INTVAL (operands[2]) == 255));
	  return "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subb $4,%al' rather than `addb $-4, %al'.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && INTVAL (operands[2]) < 0)
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{b}\t{%2, %0|%0, %2}";
	}
      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_228 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6246 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx
		      || (GET_CODE (operands[2]) == CONST_INT
			  && INTVAL (operands[2]) == 255));
	  return "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subb $4,%al' rather than `addb $-4, %al'.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && INTVAL (operands[2]) < 0)
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{b}\t{%2, %0|%0, %2}";
	}
      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_229 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6285 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx
	  || (GET_CODE (operands[2]) == CONST_INT
	      && INTVAL (operands[2]) == 255))
        return "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{b}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (INTVAL (operands[2]) < 0)
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "add{b}\t{%2, %0|%0, %2}";
        }
      return "sub{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_230 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6325 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx
		      || (GET_CODE (operands[2]) == CONST_INT
			  && INTVAL (operands[2]) == 255));
	  return "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subb $4,%al' rather than `addb $-4, %al'.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && INTVAL (operands[2]) < 0)
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{b}\t{%2, %0|%0, %2}";
	}
      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_231 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6369 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%h0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx
		      || (GET_CODE (operands[2]) == CONST_INT
			  && INTVAL (operands[2]) == 255));
          return "dec{b}\t%h0";
	}

    default:
      return "add{b}\t{%2, %h0|%h0, %2}";
    }
}
}

static const char *
output_232 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6405 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%h0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx
		      || (GET_CODE (operands[2]) == CONST_INT
			  && INTVAL (operands[2]) == 255));
          return "dec{b}\t%h0";
        }

    default:
      return "add{b}\t{%2, %h0|%h0, %2}";
    }
}
}

static const char * const output_257[] = {
  "imul{q}\t{%2, %1, %0|%0, %1, %2}",
  "imul{q}\t{%2, %1, %0|%0, %1, %2}",
  "imul{q}\t{%2, %0|%0, %2}",
};

static const char * const output_258[] = {
  "imul{l}\t{%2, %1, %0|%0, %1, %2}",
  "imul{l}\t{%2, %1, %0|%0, %1, %2}",
  "imul{l}\t{%2, %0|%0, %2}",
};

static const char * const output_259[] = {
  "imul{l}\t{%2, %1, %k0|%k0, %1, %2}",
  "imul{l}\t{%2, %1, %k0|%k0, %1, %2}",
  "imul{l}\t{%2, %k0|%k0, %2}",
};

static const char * const output_260[] = {
  "imul{w}\t{%2, %1, %0|%0, %1, %2}",
  "imul{w}\t{%2, %1, %0|%0, %1, %2}",
  "imul{w}\t{%2, %0|%0, %2}",
};

static const char * const output_288[] = {
  "test{l}\t{%k1, %k0|%k0, %k1}",
  "test{l}\t{%k1, %k0|%k0, %k1}",
  "test{q}\t{%1, %0|%0, %1}",
  "test{q}\t{%1, %0|%0, %1}",
  "test{q}\t{%1, %0|%0, %1}",
};

static const char *
output_291 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7784 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (which_alternative == 3)
    {
      if (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) < 0)
	operands[1] = GEN_INT (INTVAL (operands[1]) & 0xff);
      return "test{l}\t{%1, %k0|%k0, %1}";
    }
  return "test{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_299 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8050 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      {
	enum machine_mode mode;

	gcc_assert (GET_CODE (operands[2]) == CONST_INT);
        if (INTVAL (operands[2]) == 0xff)
	  mode = QImode;
	else
	  {
	    gcc_assert (INTVAL (operands[2]) == 0xffff);
	    mode = HImode;
	  }
	
	operands[1] = gen_lowpart (mode, operands[1]);
	if (mode == QImode)
	  return "movz{bq|x}\t{%1,%0|%0, %1}";
	else
	  return "movz{wq|x}\t{%1,%0|%0, %1}";
      }

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (get_attr_mode (insn) == MODE_SI)
	return "and{l}\t{%k2, %k0|%k0, %k2}";
      else
	return "and{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char * const output_300[] = {
  "and{l}\t{%k2, %k0|%k0, %k2}",
  "and{q}\t{%2, %0|%0, %2}",
  "and{q}\t{%2, %0|%0, %2}",
};

static const char *
output_301 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8115 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      {
	enum machine_mode mode;

	gcc_assert (GET_CODE (operands[2]) == CONST_INT);
        if (INTVAL (operands[2]) == 0xff)
	  mode = QImode;
	else
	  {
	    gcc_assert (INTVAL (operands[2]) == 0xffff);
	    mode = HImode;
	  }
	
	operands[1] = gen_lowpart (mode, operands[1]);
	if (mode == QImode)
	  return "movz{bl|x}\t{%1,%0|%0, %1}";
	else
	  return "movz{wl|x}\t{%1,%0|%0, %1}";
      }

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "and{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_305 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8237 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      gcc_assert (GET_CODE (operands[2]) == CONST_INT);
      gcc_assert (INTVAL (operands[2]) == 0xff);
      return "movz{bl|x}\t{%b1, %k0|%k0, %b1}";

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));

      return "and{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char * const output_307[] = {
  "and{b}\t{%2, %0|%0, %2}",
  "and{b}\t{%2, %0|%0, %2}",
  "and{l}\t{%k2, %k0|%k0, %k2}",
};

static const char *
output_309 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8313 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (which_alternative == 2)
    {
      if (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) < 0)
        operands[2] = GEN_INT (INTVAL (operands[2]) & 0xff);
      return "and{l}\t{%2, %k0|%k0, %2}";
    }
  return "and{b}\t{%2, %0|%0, %2}";
}
}

static const char * const output_330[] = {
  "or{b}\t{%2, %0|%0, %2}",
  "or{b}\t{%2, %0|%0, %2}",
  "or{l}\t{%k2, %k0|%k0, %k2}",
};

static const char * const output_339[] = {
  "xor{q}\t{%2, %0|%0, %2}",
  "xor{q}\t{%2, %0|%0, %2}",
};

static const char * const output_340[] = {
  "xor{q}\t{%2, %0|%0, %2}",
  "xor{q}\t{%2, %0|%0, %2}",
};

static const char * const output_352[] = {
  "xor{b}\t{%2, %0|%0, %2}",
  "xor{b}\t{%2, %0|%0, %2}",
  "xor{l}\t{%k2, %k0|%k0, %k2}",
};

static const char * const output_406[] = {
  "not{b}\t%0",
  "not{l}\t%k0",
};

static const char * const output_410[] = {
  "shld{q}\t{%2, %1, %0|%0, %1, %2}",
  "shld{q}\t{%s2%1, %0|%0, %1, %2}",
};

static const char *
output_411 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10337 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "add{q}\t{%0, %0|%0, %0}";

    case TYPE_LEA:
      gcc_assert (GET_CODE (operands[2]) == CONST_INT);
      gcc_assert ((unsigned HOST_WIDE_INT) INTVAL (operands[2]) <= 3);
      operands[1] = gen_rtx_MULT (DImode, operands[1],
				  GEN_INT (1 << INTVAL (operands[2])));
      return "lea{q}\t{%a1, %0|%0, %a1}";

    default:
      if (REG_P (operands[2]))
	return "sal{q}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{q}\t%0";
      else
	return "sal{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_412 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10405 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{q}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{q}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{q}\t%0";
      else
	return "sal{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_413 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10446 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{q}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{q}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{q}\t%0";
      else
	return "sal{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char * const output_415[] = {
  "shld{l}\t{%2, %1, %0|%0, %1, %2}",
  "shld{l}\t{%s2%1, %0|%0, %1, %2}",
};

static const char *
output_416 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10581 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "add{l}\t{%0, %0|%0, %0}";

    case TYPE_LEA:
      return "#";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_417 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10667 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t{%k0, %k0|%k0, %k0}";

    case TYPE_LEA:
      return "#";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %k0|%k0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{l}\t%k0";
      else
	return "sal{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *
output_418 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10732 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_419 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10773 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_420 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10815 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t{%k0, %k0|%k0, %k0}";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %k0|%k0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{l}\t%k0";
      else
	return "sal{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *
output_421 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10856 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{w}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_422 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10894 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{w}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_423 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10939 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{w}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_424 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10980 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{w}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_425 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11024 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      if (REG_P (operands[1]) && !ANY_QI_REG_P (operands[1]))
        return "add{l}\t{%k0, %k0|%k0, %k0}";
      else
        return "add{b}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%b2, %k0|%k0, %b2}";
	  else
	    return "sal{b}\t{%b2, %0|%0, %b2}";
	}
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t%0";
	  else
	    return "sal{b}\t%0";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sal{b}\t{%2, %0|%0, %2}";
	}
    }
}
}

static const char *
output_426 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11080 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      if (REG_P (operands[1]) && !ANY_QI_REG_P (operands[1]))
        return "add{l}\t{%k0, %k0|%k0, %k0}";
      else
        return "add{b}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%b2, %k0|%k0, %b2}";
	  else
	    return "sal{b}\t{%b2, %0|%0, %b2}";
	}
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t%0";
	  else
	    return "sal{b}\t%0";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sal{b}\t{%2, %0|%0, %2}";
	}
    }
}
}

static const char *
output_427 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11143 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{b}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{b}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{b}\t%0";
      else
	return "sal{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_428 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11184 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{b}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{b}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{b}\t%0";
      else
	return "sal{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char * const output_431[] = {
  "shrd{q}\t{%2, %1, %0|%0, %1, %2}",
  "shrd{q}\t{%s2%1, %0|%0, %1, %2}",
};

static const char * const output_432[] = {
  "{cqto|cqo}",
  "sar{q}\t{%2, %0|%0, %2}",
};

static const char * const output_434[] = {
  "sar{q}\t{%2, %0|%0, %2}",
  "sar{q}\t{%b2, %0|%0, %b2}",
};

static const char * const output_440[] = {
  "shrd{l}\t{%2, %1, %0|%0, %1, %2}",
  "shrd{l}\t{%s2%1, %0|%0, %1, %2}",
};

static const char * const output_441[] = {
  "{cltd|cdq}",
  "sar{l}\t{%2, %0|%0, %2}",
};

static const char * const output_442[] = {
  "{cltd|cdq}",
  "sar{l}\t{%2, %k0|%k0, %2}",
};

static const char * const output_445[] = {
  "sar{l}\t{%2, %0|%0, %2}",
  "sar{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_446[] = {
  "sar{l}\t{%2, %k0|%k0, %2}",
  "sar{l}\t{%b2, %k0|%k0, %b2}",
};

static const char * const output_454[] = {
  "sar{w}\t{%2, %0|%0, %2}",
  "sar{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_461[] = {
  "sar{b}\t{%2, %0|%0, %2}",
  "sar{b}\t{%b2, %0|%0, %b2}",
};

static const char * const output_462[] = {
  "sar{b}\t{%1, %0|%0, %1}",
  "sar{b}\t{%b1, %0|%0, %b1}",
};

static const char * const output_470[] = {
  "shr{q}\t{%2, %0|%0, %2}",
  "shr{q}\t{%b2, %0|%0, %b2}",
};

static const char * const output_478[] = {
  "shr{l}\t{%2, %0|%0, %2}",
  "shr{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_479[] = {
  "shr{l}\t{%2, %k0|%k0, %2}",
  "shr{l}\t{%b2, %k0|%k0, %b2}",
};

static const char * const output_487[] = {
  "shr{w}\t{%2, %0|%0, %2}",
  "shr{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_494[] = {
  "shr{b}\t{%2, %0|%0, %2}",
  "shr{b}\t{%b2, %0|%0, %b2}",
};

static const char * const output_495[] = {
  "shr{b}\t{%1, %0|%0, %1}",
  "shr{b}\t{%b1, %0|%0, %b1}",
};

static const char * const output_502[] = {
  "rol{q}\t{%2, %0|%0, %2}",
  "rol{q}\t{%b2, %0|%0, %b2}",
};

static const char * const output_505[] = {
  "rol{l}\t{%2, %0|%0, %2}",
  "rol{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_506[] = {
  "rol{l}\t{%2, %k0|%k0, %2}",
  "rol{l}\t{%b2, %k0|%k0, %b2}",
};

static const char * const output_508[] = {
  "rol{w}\t{%2, %0|%0, %2}",
  "rol{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_511[] = {
  "rol{b}\t{%1, %0|%0, %1}",
  "rol{b}\t{%b1, %0|%0, %b1}",
};

static const char * const output_512[] = {
  "rol{b}\t{%2, %0|%0, %2}",
  "rol{b}\t{%b2, %0|%0, %b2}",
};

static const char * const output_515[] = {
  "ror{q}\t{%2, %0|%0, %2}",
  "ror{q}\t{%b2, %0|%0, %b2}",
};

static const char * const output_518[] = {
  "ror{l}\t{%2, %0|%0, %2}",
  "ror{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_519[] = {
  "ror{l}\t{%2, %k0|%k0, %2}",
  "ror{l}\t{%b2, %k0|%k0, %b2}",
};

static const char * const output_521[] = {
  "ror{w}\t{%2, %0|%0, %2}",
  "ror{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_524[] = {
  "ror{b}\t{%2, %0|%0, %2}",
  "ror{b}\t{%b2, %0|%0, %b2}",
};

static const char * const output_525[] = {
  "ror{b}\t{%1, %0|%0, %1}",
  "ror{b}\t{%b1, %0|%0, %b1}",
};

static const char *
output_553 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14051 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P0";
  else
    return "call\t%P0";
}
}

static const char *
output_554 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14065 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[0], Pmode))
    {
      if (SIBLING_CALL_P (insn))
	return "jmp\t%P0";
      else
	return "call\t%P0";
    }
  if (SIBLING_CALL_P (insn))
    return "jmp\t%A0";
  else
    return "call\t%A0";
}
}

static const char *
output_555 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14104 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P0";
  else
    return "call\t%P0";
}
}

static const char *
output_556 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14116 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[0], Pmode))
    return "call\t%P0";
  return "call\t%A0";
}
}

static const char *
output_557 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14127 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[0], Pmode))
    return "jmp\t%P0";
  return "jmp\t%A0";
}
}

static const char *
output_558 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14138 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[0], Pmode))
    return "call\t%P0";
  return "call\t%A0";
}
}

static const char *
output_567 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14316 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
#ifdef ASM_OUTPUT_MAX_SKIP_ALIGN
  ASM_OUTPUT_MAX_SKIP_ALIGN (asm_out_file, 4, (int)INTVAL (operands[0]));
#else
  /* It is tempting to use ASM_OUTPUT_ALIGN here, but we don't want to do that.
     The align insn is used to avoid 3 jump instructions in the row to improve
     branch prediction and the benefits hardly outweigh the cost of extra 8
     nops on the average inserted by full alignment pseudo operation.  */
#endif
  return "";
}
}

static const char *
output_568 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14339 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{ return output_set_got (operands[0], NULL_RTX); }
}

static const char *
output_569 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14349 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{ return output_set_got (operands[0], operands[1]); }
}

static const char *
output_601 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14977 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_602 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14996 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_603 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15011 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_604 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15026 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_605 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15051 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_606 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15070 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_607 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15087 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_608 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15087 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_609 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15104 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_610 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15104 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_611 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15123 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_612 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15142 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_613 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15157 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_614 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15172 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_615 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15197 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_616 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15216 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_617 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15234 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_618 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15234 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_619 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15252 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_620 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15252 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_621 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15270 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_622 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15287 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_623 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15305 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_624 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15322 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_625 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15336 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_626 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15352 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_627 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15352 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_628 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15369 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_629 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15369 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_630 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15386 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_631 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15403 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_632 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15421 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char * const output_633[] = {
  "fsqrt",
  "sqrtss\t{%1, %0|%0, %1}",
};

static const char * const output_636[] = {
  "fsqrt",
  "sqrtsd\t{%1, %0|%0, %1}",
};

static const char *
output_670 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17228 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_674 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17292 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_675 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17292 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_683 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17461 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_685 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17520 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_686 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17520 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_694 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17702 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_696 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17761 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_697 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17761 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char * const output_736[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_738[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_739[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_741[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_742[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "#",
  "#",
};

static const char * const output_743[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_744[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
};

static const char *
output_753 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 19279 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOV:
      return "mov{l}\t{%1, %0|%0, %1}";

    case TYPE_ALU:
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
	          && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{l}\t{%2, %0|%0, %2}";
	}
      return "add{l}\t{%2, %0|%0, %2}";

    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{l}\t{%a2, %0|%0, %a2}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_754 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 19320 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOV:
      return "mov{q}\t{%1, %0|%0, %1}";

    case TYPE_ALU:
      if (GET_CODE (operands[2]) == CONST_INT
	  /* Avoid overflows.  */
	  && ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1)))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
	          && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{q}\t{%2, %0|%0, %2}";
	}
      return "add{q}\t{%2, %0|%0, %2}";

    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{q}\t{%a2, %0|%0, %a2}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_755 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 19364 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      return "add{q}\t{%2, %0|%0, %2}";

    case TYPE_LEA:
      operands[2] = gen_rtx_PLUS (DImode, operands[1], operands[2]);
      return "lea{q}\t{%a2, %0|%0, %a2}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_758 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20541 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P1";
  else
    return "call\t%P1";
}
}

static const char *
output_759 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20556 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[1], Pmode))
    {
      if (SIBLING_CALL_P (insn))
	return "jmp\t%P1";
      else
	return "call\t%P1";
    }
  if (SIBLING_CALL_P (insn))
    return "jmp\t%A1";
  else
    return "call\t%A1";
}
}

static const char *
output_760 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20576 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P1";
  else
    return "call\t%P1";
}
}

static const char *
output_761 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20589 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P1";
  else
    return "call\t%P1";
}
}

static const char *
output_762 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20602 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[1], Pmode))
    return "call\t%P1";
  return "call\t%A1";
}
}

static const char *
output_763 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20614 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[1], Pmode))
    return "jmp\t%P1";
  return "jmp\t%A1";
}
}

static const char *
output_764 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20626 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[1], Pmode))
    return "call\t%P1";
  return "call\t%A1";
}
}

static const char *
output_767 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20657 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{ return ASM_SHORT "0x0b0f"; }
}

static const char *
output_768 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20693 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"

{
  int i;
  operands[0] = gen_rtx_MEM (Pmode,
			     gen_rtx_PLUS (Pmode, operands[0], operands[4]));
  output_asm_insn ("jmp\t%A1", operands);
  for (i = SSE_REGPARM_MAX - 1; i >= INTVAL (operands[2]); i--)
    {
      operands[4] = adjust_address (operands[0], DImode, i*16);
      operands[5] = gen_rtx_REG (TImode, SSE_REGNO (i));
      PUT_MODE (operands[4], TImode);
      if (GET_CODE (XEXP (operands[0], 0)) != PLUS)
        output_asm_insn ("rex", operands);
      output_asm_insn ("movaps\t{%5, %4|%4, %5}", operands);
    }
  (*targetm.asm_out.internal_label) (asm_out_file, "L",
			     CODE_LABEL_NUMBER (operands[3]));
  RET;
}
  
}

static const char *
output_769 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20750 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  static const char * const patterns[4] = {
   "prefetchnta\t%a0", "prefetcht2\t%a0", "prefetcht1\t%a0", "prefetcht0\t%a0"
  };

  int locality = INTVAL (operands[1]);
  gcc_assert (locality >= 0 && locality <= 3);

  return patterns[locality];  
}
}

static const char *
output_770 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20768 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  static const char * const patterns[4] = {
   "prefetchnta\t%a0", "prefetcht2\t%a0", "prefetcht1\t%a0", "prefetcht0\t%a0"
  };

  int locality = INTVAL (operands[1]);
  gcc_assert (locality >= 0 && locality <= 3);

  return patterns[locality];  
}
}

static const char *
output_771 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20786 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (INTVAL (operands[1]) == 0)
    return "prefetch\t%a0";
  else
    return "prefetchw\t%a0";
}
}

static const char *
output_772 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20800 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
  if (INTVAL (operands[1]) == 0)
    return "prefetch\t%a0";
  else
    return "prefetchw\t%a0";
}
}

static const char *
output_776 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20863 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
     /* The kernel uses a different segment register for performance reasons; a
        system call would not have to trash the userspace segment register,
        which would be expensive */
     if (ix86_cmodel != CM_KERNEL)
        return "mov{q}\t{%%fs:%P1, %2|%2, QWORD PTR %%fs:%P1}\n\tmov{q}\t{%2, %0|%0, %2}\n\txor{l}\t%k2, %k2";
     else
        return "mov{q}\t{%%gs:%P1, %2|%2, QWORD PTR %%gs:%P1}\n\tmov{q}\t{%2, %0|%0, %2}\n\txor{l}\t%k2, %k2";
  }
}

static const char *
output_780 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20939 "Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md"
{
     /* The kernel uses a different segment register for performance reasons; a
        system call would not have to trash the userspace segment register,
        which would be expensive */
     if (ix86_cmodel != CM_KERNEL)
        return "mov{q}\t{%1, %3|%3, %1}\n\txor{q}\t{%%fs:%P2, %3|%3, QWORD PTR %%fs:%P2}";
     else
        return "mov{q}\t{%1, %3|%3, %1}\n\txor{q}\t{%%gs:%P2, %3|%3, QWORD PTR %%gs:%P2}";
  }
}

static const char *
output_781 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 64 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "movaps\t{%1, %0|%0, %1}";
      else
	return "movdqa\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_782 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 64 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "movaps\t{%1, %0|%0, %1}";
      else
	return "movdqa\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_783 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 64 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "movaps\t{%1, %0|%0, %1}";
      else
	return "movdqa\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_784 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 64 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "movaps\t{%1, %0|%0, %1}";
      else
	return "movdqa\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_785 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 103 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      return "movaps\t{%1, %0|%0, %1}";
    default:
      abort();
    }
}
}

static const char *
output_786 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 145 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "movaps\t{%1, %0|%0, %1}";
      else
	return "movapd\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_846[] = {
  "movhlps\t{%2, %0|%0, %2}",
  "movlps\t{%H2, %0|%0, %H2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char * const output_847[] = {
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
  "movlps\t{%2, %H0|%H0, %2}",
};

static const char *
output_852 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1140 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[3]) << 0;
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 4) << 4;
  mask |= (INTVAL (operands[6]) - 4) << 6;
  operands[3] = GEN_INT (mask);

  return "shufps\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char * const output_853[] = {
  "movhps\t{%1, %0|%0, %1}",
  "movhlps\t{%1, %0|%0, %1}",
  "movlps\t{%H1, %0|%0, %H1}",
};

static const char * const output_854[] = {
  "movhps\t{%2, %0|%0, %2}",
  "movlhps\t{%2, %0|%0, %2}",
  "movlps\t{%2, %H0|%H0, %2}",
};

static const char * const output_855[] = {
  "movlps\t{%1, %0|%0, %1}",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
};

static const char * const output_856[] = {
  "shufps\t{$0xe4, %1, %0|%0, %1, 0xe4}",
  "movlps\t{%2, %0|%0, %2}",
  "movlps\t{%2, %0|%0, %2}",
};

static const char * const output_859[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "movss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_860[] = {
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char * const output_861[] = {
  "movss\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "movd\t{%2, %0|%0, %2}",
  "#",
};

static const char * const output_910[] = {
  "unpckhpd\t{%2, %0|%0, %2}",
  "movlpd\t{%H1, %0|%0, %H1}",
  "movhpd\t{%1, %0|%0, %1}",
};

static const char * const output_911[] = {
  "movddup\t{%1, %0|%0, %1}",
  "#",
};

static const char * const output_912[] = {
  "unpcklpd\t{%2, %0|%0, %2}",
  "movhpd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %H0|%H0, %2}",
};

static const char *
output_913 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2121 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 2) << 1;
  operands[3] = GEN_INT (mask);

  return "shufpd\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char * const output_914[] = {
  "movhpd\t{%1, %0|%0, %1}",
  "unpckhpd\t%0, %0",
  "#",
};

static const char * const output_915[] = {
  "movlpd\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_916[] = {
  "movhpd\t{%2, %0|%0, %2}",
  "unpcklpd\t{%2, %0|%0, %2}",
  "shufpd\t{$1, %1, %0|%0, %1, 1}",
  "#",
};

static const char * const output_917[] = {
  "movsd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %0|%0, %2}",
  "movsd\t{%2, %0|%0, %2}",
  "shufpd\t{$2, %2, %0|%0, %2, 2}",
  "movhpd\t{%H1, %0|%0, %H1}",
  "#",
};

static const char * const output_918[] = {
  "movhps\t{%1, %0|%0, %1}",
  "movhlps\t{%1, %0|%0, %1}",
  "movlps\t{%H1, %0|%0, %H1}",
};

static const char * const output_919[] = {
  "movlps\t{%1, %0|%0, %1}",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
};

static const char * const output_920[] = {
  "movsd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %0|%0, %2}",
  "shufpd\t{$2, %2, %0|%0, %2, 2}",
  "movhps\t{%H1, %0|%0, %H1}",
  "movhps\t{%1, %H0|%H0, %1}",
};

static const char * const output_924[] = {
  "unpcklpd\t{%2, %0|%0, %2}",
  "movhpd\t{%2, %0|%0, %2}",
  "movsd\t{%1, %0|%0, %1}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char *
output_954 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2760 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);
  return "pslldq\t{%2, %0|%0, %2}";
}
}

static const char *
output_955 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2784 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);
  return "psrldq\t{%2, %0|%0, %2}";
}
}

static const char *
output_993 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3283 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  return "pinsrw\t{%3, %k2, %0|%0, %k2, %3}";
}
}

static const char *
output_995 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3325 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "pshufd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_996 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3366 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "pshuflw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_997 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3407 "Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= (INTVAL (operands[2]) - 4) << 0;
  mask |= (INTVAL (operands[3]) - 4) << 2;
  mask |= (INTVAL (operands[4]) - 4) << 4;
  mask |= (INTVAL (operands[5]) - 4) << 6;
  operands[2] = GEN_INT (mask);

  return "pshufhw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char * const output_998[] = {
  "movd\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
};

static const char * const output_1001[] = {
  "movhps\t{%1, %0|%0, %1}",
  "psrldq\t{$8, %0|%0, 8}",
  "movq\t{%H1, %0|%0, %H1}",
};

static const char * const output_1002[] = {
  "movhps\t{%1, %0|%0, %1}",
  "movhlps\t{%1, %0|%0, %1}",
  "movlps\t{%H1, %0|%0, %H1}",
};

static const char * const output_1003[] = {
  "pshufd\t{$0, %1, %0|%0, %1, 0}",
  "shufps\t{$0, %0, %0|%0, %0, 0}",
};

static const char * const output_1004[] = {
  "punpcklqdq\t%0, %0",
  "movlhps\t%0, %0",
};

static const char * const output_1005[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1006[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "movss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1007[] = {
  "punpcklqdq\t{%2, %0|%0, %2}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char * const output_1008[] = {
  "movq\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "punpcklqdq\t{%2, %0|%0, %2}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
  "movlps\t{%1, %0|%0, %1}",
};

static const char * const output_1026[] = {
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1027[] = {
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1028[] = {
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1029[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_1030[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_1031[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_1032[] = {
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1033[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_1036[] = {
  "pfsub\t{%2, %0|%0, %2}",
  "pfsubr\t{%2, %0|%0, %2}",
};

static const char * const output_1057[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1059[] = {
  "punpckhdq\t%0, %0",
  "unpckhps\t%0, %0",
  "#",
};

static const char *
output_1121 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1048 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  return "pinsrw\t{%3, %k2, %0|%0, %k2, %3}";
}
}

static const char *
output_1123 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1090 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "pshufw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char * const output_1127[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1129[] = {
  "punpckhdq\t%0, %0",
  "punpckhdq\t%0, %0",
  "pshufd\t{$85, %1, %0|%0, %1, 85}",
  "unpckhps\t%0, %0",
  "#",
};

static const char *
output_1130 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1307 "Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md"
{
  /* These two instructions have the same operation, but their encoding
     is different.  Prefer the one that is de facto standard.  */
  if (TARGET_SSE || TARGET_3DNOW_A)
    return "pavgb\t{%2, %0|%0, %2}";
  else
    return "pavgusb\t{%2, %0|%0, %2}";
}
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "r,?mr",
    DImode,
    0,
    1
  },
  {
    const0_operand,
    "n,n",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,mr",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "mr,r",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,mr",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,?mr",
    SImode,
    0,
    1
  },
  {
    const0_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,mr",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,?mr",
    HImode,
    0,
    1
  },
  {
    const0_operand,
    "n,n",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "ri,mr",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "q,?mq",
    QImode,
    0,
    1
  },
  {
    const0_operand,
    "n,n",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm,q",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qi,mq",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "Q",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "n",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qmn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Qn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "X",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,x",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,xm",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    VOIDmode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    SImode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "ri*m",
    SImode,
    0,
    1
  },
  {
    push_operand,
    "=X",
    SImode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "ri",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r*m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    const0_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,*y,*y,?rm,?*y,*x,*x,?r,m,?*Y,*x",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rinm,rin,C,*y,*y,rm,C,*x,*Y,*x,r,m",
    SImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "a,er",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a,r",
    SImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    push_operand,
    "=X",
    HImode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "rn",
    HImode,
    0,
    1
  },
  {
    push_operand,
    "=X",
    HImode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "ri",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "r,rn,rm,rn",
    HImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "a,er",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=a,r",
    HImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+rm,r",
    HImode,
    1,
    1
  },
  {
    general_operand,
    "rn,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    1,
    1
  },
  {
    const0_operand,
    "i",
    HImode,
    0,
    1
  },
  {
    push_operand,
    "=X",
    QImode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "rn",
    QImode,
    0,
    1
  },
  {
    push_operand,
    "=X",
    QImode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "qi",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,q,q,r,r,?r,m",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "q,qn,qm,q,rn,qm,qn",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+q",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "*qn,m",
    QImode,
    0,
    1
  },
  {
    q_regs_operand,
    "+q",
    QImode,
    1,
    1
  },
  {
    const0_operand,
    "i",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=R",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=R",
    HImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Qm,?r",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=Q,?R",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "a,er",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=a,r",
    QImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=R",
    DImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Qm,?R",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qmn",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Qn",
    DImode,
    0,
    1
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "Q",
    SImode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    DImode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "riF*m",
    DImode,
    0,
    1
  },
  {
    push_operand,
    "=<,!<",
    DImode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "re*m,n",
    DImode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    DImode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "re*m",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r*m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    const0_operand,
    "i",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o,*y,m*y,*y,*Y,m,*Y,*Y,*x,m,*x,*x",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "riFo,riF,C,*y,m,C,*Y,*Y,m,C,*x,*x,m",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,!m,*y,*y,?rm,?*y,*x,*x,?rm,?*x,?*x,?*y",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "Z,rem,i,re,n,C,*y,*y,rm,C,*x,*x,rm,*y,*x",
    DImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "a,er",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=a,r",
    DImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    TImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,xm,x",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o,x,x,xm",
    TImode,
    0,
    1
  },
  {
    general_operand,
    "riFo,riF,C,xm,x",
    TImode,
    0,
    1
  },
  {
    push_operand,
    "=<,<,<",
    SFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,rFm,x",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "=X,X,X",
    SFmode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "f,rF,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,r,m,x,x,x,m,!*y,!rm,!*y",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,rmF,Fr,C,x,xm,x,rm,*y,*y",
    SFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "+f",
    SFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "+f",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "=<,<,<,<",
    DFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,Fo,*r,Y",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "=<,<,<",
    DFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,rFo,Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,*r,o,Y*x,Y*x,Y*x,m",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,*roF,F*r,C,Y*x,mY*x,Y*x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,r,o,Y*x,Y*x,Y*x,m",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,roF,Fr,C,Y*x,m,Y*x",
    DFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "+f",
    DFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "+f",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "=X,X,X",
    XFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,Fo,*r",
    XFmode,
    0,
    1
  },
  {
    push_operand,
    "=<,<",
    XFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,ro",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,*r,o",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,*roF,F*r",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,r,o",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,roF,Fr",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "+f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "+f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o,x,x,xm",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "riFo,riF,C,xm,x",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,?&q",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm,0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,?&q",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm,0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,?r,?*o,?*y,?*Y",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm,r,rm,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o,?*y,?*Y",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,0,rm,rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*A,r,?r,?*o",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0,r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,X,&r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=*a,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*0,rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=*a,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*0,rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=*a,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*0,rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=*a,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*0,qm",
    QImode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fY",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f,mY",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "mY",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,f,Y",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,f,Ym",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Y",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=fm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?fx*r,Y",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,f,Ym",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,X",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?fx*r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,f",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?r,?x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f,f,f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?r",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f,f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?r,?Y",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f,f,f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?r",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f,f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Y,Ym",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Y,Ym",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f,?f,x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,r,mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,?f,x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,r,mr",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,mr",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f,?f,Y,Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,r,mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=Y,Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,?f,Y,Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,r,mr",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=Y,Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,mr",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    TImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "roe,re",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "roiF,riF",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qi,qm",
    QImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    HImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    SImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rim",
    SImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    no_seg_address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    no_seg_address_operand,
    "p",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    no_seg_address_operand,
    "p",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    index_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "ri",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    index_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    const248_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "ri",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    index_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    const248_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rme,re,le",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rme,re",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    x86_64_general_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rme",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=rm",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    x86_64_immediate_operand,
    "e",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rme",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rmni,rni,lni",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rmni,lni",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rmni,rni",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rmni",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rmni",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=rm",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm,lni",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rmni,rni",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rmni",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=rm",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q,r,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0,r",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qmn,rn,ln",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qmn,rn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "qn,qnm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qmni,qni",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qmni",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=qm",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qmn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Qn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "%0",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    TImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "roe,re",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "roiF,riF",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qi,qm",
    QImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    HImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    SImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    SImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rim",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qmn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "qn,qmn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qi,qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "K,e,mr",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "K,i,mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "K,i,mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "K,i,mr",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%a",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=1",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=1",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=1",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&a,?a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&d,&d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1,0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "3",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&a,?a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d,&d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1,0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "3",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "3",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,r,!*a,r,rm",
    DImode,
    0,
    1
  },
  {
    x86_64_szext_general_operand,
    "Z,Z,e,e,re",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,r,rm",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "in,in,rin",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,r,rm",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "n,n,rn",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,q,qm,r",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "n,n,qn,n",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,q,qm",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "n,n,qn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0,qm",
    DImode,
    0,
    1
  },
  {
    x86_64_szext_general_operand,
    "Z,re,rm,L",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_szext_general_operand,
    "Z,rem,re",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,qm",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm,L",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rim,ri",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,qm",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm,L",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rim,ri",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qi,qmi,ri",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "qi,qmi",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm,*r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qim,qi,i",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qim,qi",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+q,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qmi,qi",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,rme",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rem,re",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rem",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rmi",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rim",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    x86_64_zext_immediate_operand,
    "Z",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    x86_64_zext_immediate_operand,
    "Z",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rim",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rmi,ri",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rim",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,m,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qmi,qi,ri",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+q,m",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "qmi,qi",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+q,qm",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qim,qi",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qim",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    x86_64_zext_immediate_operand,
    "Z",
    DImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "qmn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=ro",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=ro",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,f,rm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,0,X,X",
    V4SFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=x,x,rm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,0,X",
    V4SFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=f,rm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xmC",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=x,x,x,x,x",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "x,0,0,x,x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "1,1,x,1,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "X,xm,xm,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm,1,xm,1",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Y,Y,f,rm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,Y,0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym,0,X,X",
    V2DFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=Y,Y,rm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,Y,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym,0,X",
    V2DFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=f,rm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xmC",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=x,x,x,x,x",
    V2DFmode,
    0,
    0
  },
  {
    register_operand,
    "x,0,0,x,x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "1,1,x,1,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "X,xm,xm,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm,1,xm,1",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,?rm",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    TImode,
    0,
    1
  },
  {
    immediate_operand,
    "O",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+r*m,r*m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "J,c",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,l",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cJ,M",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "e",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "e",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_pm1_operand,
    "n,0",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Jc,Jc",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+r*m,r*m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,l",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,M",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,l",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,M",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,l",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,M",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,r,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,l",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,cI,M",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,cI",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*d,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*a,0",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "J,c",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Jc",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*d,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*a,0",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=*d,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "*a,0",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm",
    QImode,
    1,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,qm",
    QImode,
    1,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const1_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const1_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "e",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "e",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "e,c",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    DImode,
    0,
    1
  },
  {
    const_0_to_63_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "+qm",
    QImode,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=Y",
    DFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f,x",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,xm",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "x",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "X",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a,a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a,a",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    constant_call_address_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "rsm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    constant_call_address_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "rsm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    sibcall_insn_operand,
    "s,c,d,a",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "rsm",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    constant_call_address_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&q",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&a",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    tls_modbase_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&a",
    DImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    tls_modbase_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,Ym",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f,Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,Ym",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=Y",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    VOIDmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    VOIDmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f,Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,Ym",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "1",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "u",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=1",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "u",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=1",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "u",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=1",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "2",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "2",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "2",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "2",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r,0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0,r",
    QImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,r,r",
    SFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "f,0,rm,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,f,0,rm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,&r,&r",
    DFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "f,0,rm,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,f,0,rm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,r,r",
    DFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "f,0,rm,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,f,0,rm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f,0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    x86_64_immediate_operand,
    "e,e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i,i",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=0",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=0",
    DImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "rsm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    constant_call_address_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    sibcall_insn_operand,
    "s,c,d,a",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "rsm",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    constant_call_address_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "R",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    1
  },
  {
    0,
    "X",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    DImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,o,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,o",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,o",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,x,x",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m,x",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,*y,*y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m,0,m",
    SFmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "x,C,*y,C",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,Y,m",
    V4SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "0,C,C,0",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "x,m,*r,x*rfF",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m,fr",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    V2DFmode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "y,m",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,o,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_2_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x*fr",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,0,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x*fr",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,x,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,x,0,x*fr",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,m",
    V2DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,0,0,x,o,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,m,x,0,0,x*fr",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m,x,x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0,x,o,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x,0,0,0",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=Y,Y,Y,x,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,m,0,0",
    DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "Y,m,C,x,m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "xn",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "xn",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "xn",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    TImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    const_pow2_1_to_128_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=Y,x,x",
    V4SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "C,C,0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "mr,m,x",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=mx",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=mx",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,0,o",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=Y,x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "Y,0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=Y,x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=Y,Y,*y,*y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm,0,rm",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "Y,C,*y,C",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,*y,*y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m,0,*rm",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "x,C,*y,C",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=Y,x,x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0,0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Y,x,m",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=Y,?Y,Y,x,x,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,*y,0,0,0,m",
    DImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,C,Y,x,m,0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    0,
    "",
    BLKmode,
    0,
    1
  },
  {
    address_operand,
    "p",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,*y,*y,m,*y,Y,x,x,m,r,x",
    V8QImode,
    0,
    1
  },
  {
    vector_move_operand,
    "Cr,m,C,*ym,*y,Y,*y,C,xm,x,x,r",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,*y,*y,m,*y,Y,x,x,m,r,x",
    V4HImode,
    0,
    1
  },
  {
    vector_move_operand,
    "Cr,m,C,*ym,*y,Y,*y,C,xm,x,x,r",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,*y,*y,m,*y,Y,x,x,m,r,x",
    V2SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "Cr,m,C,*ym,*y,Y,*y,C,xm,x,x,r",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*y,*y,m,*y,*Y,*Y,*Y,m,*x,*x,*x,m,?r,?m",
    V8QImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,*ym,*y,*Y,*y,C,*Ym,*Y,C,*x,m,*x,irm,r",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*y,*y,m,*y,*Y,*Y,*Y,m,*x,*x,*x,m,?r,?m",
    V4HImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,*ym,*y,*Y,*y,C,*Ym,*Y,C,*x,m,*x,irm,r",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*y,*y,m,*y,*Y,*Y,*Y,m,*x,*x,*x,m,?r,?m",
    V2SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,*ym,*y,*Y,*y,C,*Ym,*Y,C,*x,m,*x,irm,r",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,*y,*y,m,*y,Y,x,x,x,m,r,x",
    V2SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "Cr,m,C,*ym,*y,Y,*y,C,x,m,x,x,r",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*y,*y,m,*y,*Y,*x,*x,*x,m,?r,?m",
    V2SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,*ym,*y,*Y,*y,C,*x,m,*x,irm,r",
    V2SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y,y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,ym",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym,0",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y,y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "ym,C",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,y,m,m,frxy",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,y,x,y,m",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,x,frxy",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,o",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "yi",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "yi",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "yi",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    const_pow2_1_to_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "ym,C",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,y,m,m,frxy",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,y,x,y,m",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,Y,Y,x,frxy",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,Y,0,o",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "q",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "A",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    TImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "A",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "A",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "SD",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=q",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "qi",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "ri",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "ri",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "re",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cmpsi_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    0,
    "=m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    push_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    push_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    general_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    any_fp_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    any_fp_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    any_fp_register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    push_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "Y",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "Y",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "x",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "x",
    SFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const248_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const248_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_szext_general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    V4SFmode,
    0,
    1
  },
  {
    0,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    V2DFmode,
    0,
    1
  },
  {
    0,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    1
  },
  {
    ashldi_input_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    1
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const8_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const8_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_0_to_63_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    0
  },
  {
    q_regs_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_modbase_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    tls_modbase_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
     register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_and_not_any_fp_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    aligned_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    promotable_binary_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    aligned_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    aligned_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    push_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    push_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SFmode,
    0,
    0
  },
  {
    push_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0
  },
  {
    push_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "q",
    QImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "q",
    QImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    arith_or_logical_operator,
    "",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    arith_or_logical_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    BLKmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    address_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    zero_extended_scalar_load_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    zero_extended_scalar_load_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_0_to_7_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data insn_data[] = 
{
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:555 */
  {
    "cmpdi_ccno_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_0 },
#else
    { 0, output_0, 0 },
#endif
    (insn_gen_fn) gen_cmpdi_ccno_1_rex64,
    &operand_data[1],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:567 */
  {
    "*cmpdi_minus_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[3],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:584 */
  {
    "cmpdi_1_insn_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cmpdi_1_insn_rex64,
    &operand_data[5],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:594 */
  {
    "*cmpsi_ccno_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_3 },
#else
    { 0, output_3, 0 },
#endif
    0,
    &operand_data[7],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:606 */
  {
    "*cmpsi_minus_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[9],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:623 */
  {
    "*cmpsi_1_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[9],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:633 */
  {
    "*cmphi_ccno_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_6 },
#else
    { 0, output_6, 0 },
#endif
    0,
    &operand_data[11],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:645 */
  {
    "*cmphi_minus_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[13],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:655 */
  {
    "*cmphi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[13],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:665 */
  {
    "*cmpqi_ccno_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_9 },
#else
    { 0, output_9, 0 },
#endif
    0,
    &operand_data[15],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:677 */
  {
    "*cmpqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[17],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:687 */
  {
    "*cmpqi_minus_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[17],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:697 */
  {
    "*cmpqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%h1, %0|%0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[19],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:711 */
  {
    "*cmpqi_ext_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%h1, %0|%0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:725 */
  {
    "*cmpqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t%h0, %h0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[22],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:752 */
  {
    "cmpqi_ext_3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cmpqi_ext_3_insn,
    &operand_data[24],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:766 */
  {
    "cmpqi_ext_3_insn_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cmpqi_ext_3_insn_rex64,
    &operand_data[26],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:780 */
  {
    "*cmpqi_ext_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%h1, %h0|%h0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[28],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:845 */
  {
    "*cmpfp_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_18 },
#else
    { 0, 0, output_18 },
#endif
    0,
    &operand_data[30],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:866 */
  {
    "*cmpfp_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_19 },
#else
    { 0, 0, output_19 },
#endif
    0,
    &operand_data[33],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:879 */
  {
    "*cmpfp_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_20 },
#else
    { 0, 0, output_20 },
#endif
    0,
    &operand_data[36],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:892 */
  {
    "*cmpfp_xf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_21 },
#else
    { 0, 0, output_21 },
#endif
    0,
    &operand_data[39],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:905 */
  {
    "*cmpfp_u",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_22 },
#else
    { 0, 0, output_22 },
#endif
    0,
    &operand_data[42],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:926 */
  {
    "*cmpfp_hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_23 },
#else
    { 0, 0, output_23 },
#endif
    0,
    &operand_data[45],
    4,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:926 */
  {
    "*cmpfp_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_24 },
#else
    { 0, 0, output_24 },
#endif
    0,
    &operand_data[49],
    4,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:946 */
  {
    "x86_fnstsw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnstsw\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_fnstsw_1,
    &operand_data[30],
    1,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:958 */
  {
    "x86_sahf_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sahf",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_sahf_1,
    &operand_data[53],
    1,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:969 */
  {
    "*cmpfp_i_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_27 },
#else
    { 0, 0, output_27 },
#endif
    0,
    &operand_data[54],
    2,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:984 */
  {
    "*cmpfp_i_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_28 },
#else
    { 0, 0, output_28 },
#endif
    0,
    &operand_data[56],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:999 */
  {
    "*cmpfp_i_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_29 },
#else
    { 0, 0, output_29 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1018 */
  {
    "*cmpfp_iu_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_30 },
#else
    { 0, 0, output_30 },
#endif
    0,
    &operand_data[54],
    2,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1033 */
  {
    "*cmpfp_iu_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_31 },
#else
    { 0, 0, output_31 },
#endif
    0,
    &operand_data[56],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1048 */
  {
    "*cmpfp_iu_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_32 },
#else
    { 0, 0, output_32 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1086 */
  {
    "*pushsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1095 */
  {
    "*pushsi2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{q}\t%q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[60],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1103 */
  {
    "*pushsi2_prologue",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1112 */
  {
    "*popsi1_epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[62],
    1,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1123 */
  {
    "popsi1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_popsi1,
    &operand_data[62],
    1,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1133 */
  {
    "*movsi_xor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%0, %0|%0, %0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[63],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1143 */
  {
    "*movsi_or",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_39 },
#else
    { 0, 0, output_39 },
#endif
    0,
    &operand_data[65],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1158 */
  {
    "*movsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_40 },
#else
    { 0, 0, output_40 },
#endif
    0,
    &operand_data[67],
    2,
    0,
    12,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1233 */
  {
    "*movabssi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_41 },
#else
    { 0, output_41, 0 },
#endif
    0,
    &operand_data[69],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1247 */
  {
    "*movabssi_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_42 },
#else
    { 0, output_42, 0 },
#endif
    0,
    &operand_data[71],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1261 */
  {
    "*swapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[73],
    2,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1279 */
  {
    "*pushhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%k1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[75],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1288 */
  {
    "*pushhi2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{q}\t%q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[77],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1296 */
  {
    "*movhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_46 },
#else
    { 0, 0, output_46 },
#endif
    0,
    &operand_data[79],
    2,
    0,
    4,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1350 */
  {
    "*movabshi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_47 },
#else
    { 0, output_47, 0 },
#endif
    0,
    &operand_data[81],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1364 */
  {
    "*movabshi_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_48 },
#else
    { 0, output_48, 0 },
#endif
    0,
    &operand_data[83],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1378 */
  {
    "*swaphi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%k1, %k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[85],
    2,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1390 */
  {
    "*swaphi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{w}\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[85],
    2,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1412 */
  {
    "*movstricthi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[87],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1421 */
  {
    "*movstricthi_xor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t{%0, %0|%0, %0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[89],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1442 */
  {
    "*pushqi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%k1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[91],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1451 */
  {
    "*pushqi2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{q}\t%q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[93],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1469 */
  {
    "*movqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_55 },
#else
    { 0, 0, output_55 },
#endif
    0,
    &operand_data[95],
    2,
    0,
    7,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1552 */
  {
    "*swapqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%k1, %k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[97],
    2,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1564 */
  {
    "*swapqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{b}\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[99],
    2,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1586 */
  {
    "*movstrictqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[101],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1595 */
  {
    "*movstrictqi_xor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%0, %0|%0, %0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[103],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1605 */
  {
    "*movsi_extv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%h1, %0|%0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[105],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1615 */
  {
    "*movhi_extv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%h1, %k0|%k0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[107],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1625 */
  {
    "*movqi_extv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_62 },
#else
    { 0, 0, output_62 },
#endif
    0,
    &operand_data[109],
    2,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1652 */
  {
    "*movqi_extv_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_63 },
#else
    { 0, 0, output_63 },
#endif
    0,
    &operand_data[111],
    2,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1682 */
  {
    "*movabsqi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_64 },
#else
    { 0, output_64, 0 },
#endif
    0,
    &operand_data[113],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1696 */
  {
    "*movabsqi_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_65 },
#else
    { 0, output_65, 0 },
#endif
    0,
    &operand_data[115],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1710 */
  {
    "*movdi_extzv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%h1, %k0|%k0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[117],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1720 */
  {
    "*movsi_extzv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%h1, %0|%0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[105],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1730 */
  {
    "*movqi_extzv_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_68 },
#else
    { 0, 0, output_68 },
#endif
    0,
    &operand_data[119],
    2,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1757 */
  {
    "*movqi_extzv_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_69 },
#else
    { 0, 0, output_69 },
#endif
    0,
    &operand_data[111],
    2,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1783 */
  {
    "movsi_insv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{b}\t{%b1, %h0|%h0, %b1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_movsi_insv_1,
    &operand_data[121],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1793 */
  {
    "movdi_insv_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{b}\t{%b1, %h0|%h0, %b1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_movdi_insv_1_rex64,
    &operand_data[123],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1803 */
  {
    "*movqi_insv_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{b}\t{%h1, %h0|%h0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[125],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1820 */
  {
    "*pushdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[127],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1826 */
  {
    "*pushdi2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_74 },
#else
    { 0, output_74, 0 },
#endif
    0,
    &operand_data[129],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1881 */
  {
    "*pushdi2_prologue_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{q}\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[131],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1890 */
  {
    "*popdi1_epilogue_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[133],
    1,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1901 */
  {
    "popdi1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_popdi1,
    &operand_data[133],
    1,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1911 */
  {
    "*movdi_xor_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%k0, %k0|%k0, %k0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[134],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1922 */
  {
    "*movdi_or_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_79 },
#else
    { 0, 0, output_79 },
#endif
    0,
    &operand_data[136],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1937 */
  {
    "*movdi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_80 },
#else
    { 0, output_80, 0 },
#endif
    0,
    &operand_data[138],
    2,
    0,
    13,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1978 */
  {
    "*movdi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_81 },
#else
    { 0, 0, output_81 },
#endif
    0,
    &operand_data[140],
    2,
    0,
    15,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2043 */
  {
    "*movabsdi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_82 },
#else
    { 0, output_82, 0 },
#endif
    0,
    &operand_data[142],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2057 */
  {
    "*movabsdi_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_83 },
#else
    { 0, output_83, 0 },
#endif
    0,
    &operand_data[144],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2107 */
  {
    "*swapdi_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{q}\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[146],
    2,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2131 */
  {
    "*movti_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_85 },
#else
    { 0, 0, output_85 },
#endif
    0,
    &operand_data[148],
    2,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2165 */
  {
    "*movti_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_86 },
#else
    { 0, 0, output_86 },
#endif
    0,
    &operand_data[150],
    2,
    0,
    5,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2223 */
  {
    "*pushsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_87 },
#else
    { 0, 0, output_87 },
#endif
    0,
    &operand_data[152],
    2,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2236 */
  {
    "*pushsf_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_88 },
#else
    { 0, 0, output_88 },
#endif
    0,
    &operand_data[154],
    2,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2275 */
  {
    "*movsf_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_89 },
#else
    { 0, 0, output_89 },
#endif
    0,
    &operand_data[156],
    2,
    0,
    12,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2364 */
  {
    "*swapsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_90 },
#else
    { 0, 0, output_90 },
#endif
    0,
    &operand_data[158],
    2,
    2,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2390 */
  {
    "*pushdf_nointeger",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_91 },
#else
    { 0, 0, output_91 },
#endif
    0,
    &operand_data[160],
    2,
    0,
    4,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2402 */
  {
    "*pushdf_integer",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_92 },
#else
    { 0, 0, output_92 },
#endif
    0,
    &operand_data[162],
    2,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2442 */
  {
    "*movdf_nointeger",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_93 },
#else
    { 0, 0, output_93 },
#endif
    0,
    &operand_data[164],
    2,
    0,
    9,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2562 */
  {
    "*movdf_integer",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_94 },
#else
    { 0, 0, output_94 },
#endif
    0,
    &operand_data[166],
    2,
    0,
    9,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2697 */
  {
    "*swapdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_95 },
#else
    { 0, 0, output_95 },
#endif
    0,
    &operand_data[168],
    2,
    2,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2725 */
  {
    "*pushxf_nointeger",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_96 },
#else
    { 0, 0, output_96 },
#endif
    0,
    &operand_data[170],
    2,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2737 */
  {
    "*pushxf_integer",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_97 },
#else
    { 0, 0, output_97 },
#endif
    0,
    &operand_data[172],
    2,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2776 */
  {
    "*movxf_nointeger",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_98 },
#else
    { 0, 0, output_98 },
#endif
    0,
    &operand_data[174],
    2,
    0,
    5,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2810 */
  {
    "*movxf_integer",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_99 },
#else
    { 0, 0, output_99 },
#endif
    0,
    &operand_data[176],
    2,
    0,
    5,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2892 */
  {
    "swapxf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_100 },
#else
    { 0, 0, output_100 },
#endif
    (insn_gen_fn) gen_swapxf,
    &operand_data[178],
    2,
    2,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2916 */
  {
    "*movtf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_101 },
#else
    { 0, 0, output_101 },
#endif
    0,
    &operand_data[180],
    2,
    0,
    5,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2983 */
  {
    "zero_extendhisi2_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhisi2_and,
    &operand_data[182],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3001 */
  {
    "*zero_extendhisi2_movzwl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{wl|x}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[184],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3017 */
  {
    "*zero_extendqihi2_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[186],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3026 */
  {
    "*zero_extendqihi2_movzbw_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[188],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3036 */
  {
    "*zero_extendqihi2_movzbl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%1, %k0|%k0, %k1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[190],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3088 */
  {
    "*zero_extendqisi2_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[192],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3097 */
  {
    "*zero_extendqisi2_movzbw_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[194],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3106 */
  {
    "*zero_extendqisi2_movzbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[196],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3163 */
  {
    "zero_extendsidi2_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_110 },
#else
    { 0, output_110, 0 },
#endif
    (insn_gen_fn) gen_zero_extendsidi2_32,
    &operand_data[198],
    2,
    0,
    5,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3177 */
  {
    "zero_extendsidi2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_111 },
#else
    { 0, output_111, 0 },
#endif
    (insn_gen_fn) gen_zero_extendsidi2_rex64,
    &operand_data[200],
    2,
    0,
    4,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3215 */
  {
    "zero_extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{wl|x}\t{%1, %k0|%k0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhidi2,
    &operand_data[202],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3223 */
  {
    "zero_extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%1, %k0|%k0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqidi2,
    &operand_data[204],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3247 */
  {
    "*extendsidi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[206],
    3,
    0,
    4,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3255 */
  {
    "extendsidi2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_115 },
#else
    { 0, output_115, 0 },
#endif
    (insn_gen_fn) gen_extendsidi2_rex64,
    &operand_data[209],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3267 */
  {
    "extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{wq|x}\t{%1,%0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendhidi2,
    &operand_data[202],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3275 */
  {
    "extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bq|x}\t{%1,%0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendqidi2,
    &operand_data[211],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3357 */
  {
    "extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_118 },
#else
    { 0, 0, output_118 },
#endif
    (insn_gen_fn) gen_extendhisi2,
    &operand_data[213],
    2,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3383 */
  {
    "*extendhisi2_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_119 },
#else
    { 0, 0, output_119 },
#endif
    0,
    &operand_data[215],
    2,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3410 */
  {
    "extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_120 },
#else
    { 0, 0, output_120 },
#endif
    (insn_gen_fn) gen_extendqihi2,
    &operand_data[217],
    2,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3436 */
  {
    "extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%1,%0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendqisi2,
    &operand_data[196],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3444 */
  {
    "*extendqisi2_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%1,%k0|%k0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[211],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3459 */
  {
    "*dummy_extendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[219],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3479 */
  {
    "*dummy_extendsfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[221],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3540 */
  {
    "*extendsfdf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_125 },
#else
    { 0, 0, output_125 },
#endif
    0,
    &operand_data[223],
    2,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3567 */
  {
    "*extendsfdf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtss2sd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[225],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3576 */
  {
    "*extendsfdf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_127 },
#else
    { 0, 0, output_127 },
#endif
    0,
    &operand_data[227],
    2,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3622 */
  {
    "*extendsfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_128 },
#else
    { 0, 0, output_128 },
#endif
    0,
    &operand_data[229],
    2,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3670 */
  {
    "*extenddfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_129 },
#else
    { 0, 0, output_129 },
#endif
    0,
    &operand_data[231],
    2,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3731 */
  {
    "*truncdfsf_fast_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_130 },
#else
    { 0, 0, output_130 },
#endif
    0,
    &operand_data[233],
    2,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3757 */
  {
    "*truncdfsf_fast_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsd2ss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[235],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3766 */
  {
    "*truncdfsf_fast_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_132 },
#else
    { 0, 0, output_132 },
#endif
    0,
    &operand_data[237],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3775 */
  {
    "*truncdfsf_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_133 },
#else
    { 0, 0, output_133 },
#endif
    0,
    &operand_data[239],
    3,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3801 */
  {
    "*truncdfsf_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_134 },
#else
    { 0, 0, output_134 },
#endif
    0,
    &operand_data[242],
    3,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3825 */
  {
    "*truncdfsf2_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_135 },
#else
    { 0, 0, output_135 },
#endif
    0,
    &operand_data[245],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3874 */
  {
    "*truncxfsf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_136 },
#else
    { 0, 0, output_136 },
#endif
    0,
    &operand_data[247],
    3,
    0,
    4,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3891 */
  {
    "truncxfsf2_i387_noop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_137 },
#else
    { 0, 0, output_137 },
#endif
    (insn_gen_fn) gen_truncxfsf2_i387_noop,
    &operand_data[250],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3901 */
  {
    "*truncxfsf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_138 },
#else
    { 0, 0, output_138 },
#endif
    0,
    &operand_data[252],
    3,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3918 */
  {
    "*truncxfsf2_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_139 },
#else
    { 0, 0, output_139 },
#endif
    0,
    &operand_data[255],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3972 */
  {
    "*truncxfdf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_140 },
#else
    { 0, 0, output_140 },
#endif
    0,
    &operand_data[257],
    3,
    0,
    4,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3989 */
  {
    "truncxfdf2_i387_noop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_141 },
#else
    { 0, 0, output_141 },
#endif
    (insn_gen_fn) gen_truncxfdf2_i387_noop,
    &operand_data[260],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3999 */
  {
    "*truncxfdf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_142 },
#else
    { 0, 0, output_142 },
#endif
    0,
    &operand_data[262],
    3,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4016 */
  {
    "*truncxfdf2_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_143 },
#else
    { 0, 0, output_143 },
#endif
    0,
    &operand_data[265],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4140 */
  {
    "fix_truncsfdi_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttss2si{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfdi_sse,
    &operand_data[267],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4149 */
  {
    "fix_truncdfdi_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttsd2si{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfdi_sse,
    &operand_data[269],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4158 */
  {
    "fix_truncsfsi_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttss2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi_sse,
    &operand_data[271],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4167 */
  {
    "fix_truncdfsi_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttsd2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi_sse,
    &operand_data[273],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4195 */
  {
    "fix_trunchi_fisttp_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunchi_fisttp_i387_1,
    &operand_data[275],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4195 */
  {
    "fix_truncsi_fisttp_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsi_fisttp_i387_1,
    &operand_data[277],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4195 */
  {
    "fix_truncdi_fisttp_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdi_fisttp_i387_1,
    &operand_data[279],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4222 */
  {
    "fix_trunchi_i387_fisttp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_151 },
#else
    { 0, 0, output_151 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387_fisttp,
    &operand_data[281],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4222 */
  {
    "fix_truncsi_i387_fisttp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_152 },
#else
    { 0, 0, output_152 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387_fisttp,
    &operand_data[284],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4222 */
  {
    "fix_truncdi_i387_fisttp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_153 },
#else
    { 0, 0, output_153 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387_fisttp,
    &operand_data[287],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4235 */
  {
    "fix_trunchi_i387_fisttp_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387_fisttp_with_temp,
    &operand_data[290],
    4,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4235 */
  {
    "fix_truncsi_i387_fisttp_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387_fisttp_with_temp,
    &operand_data[294],
    4,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4235 */
  {
    "fix_truncdi_i387_fisttp_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387_fisttp_with_temp,
    &operand_data[298],
    4,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4275 */
  {
    "*fix_trunchi_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[275],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4275 */
  {
    "*fix_truncsi_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[277],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4275 */
  {
    "*fix_truncdi_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[279],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4308 */
  {
    "fix_truncdi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_160 },
#else
    { 0, 0, output_160 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387,
    &operand_data[302],
    5,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4322 */
  {
    "fix_truncdi_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387_with_temp,
    &operand_data[307],
    6,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4366 */
  {
    "fix_trunchi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_162 },
#else
    { 0, 0, output_162 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387,
    &operand_data[313],
    4,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4366 */
  {
    "fix_truncsi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_163 },
#else
    { 0, 0, output_163 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387,
    &operand_data[317],
    4,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4379 */
  {
    "fix_trunchi_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387_with_temp,
    &operand_data[321],
    5,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4379 */
  {
    "fix_truncsi_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387_with_temp,
    &operand_data[326],
    5,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4418 */
  {
    "x86_fnstcw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnstcw\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_fnstcw_1,
    &operand_data[281],
    1,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4427 */
  {
    "x86_fldcw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_fldcw_1,
    &operand_data[47],
    1,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4455 */
  {
    "*floathisf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_168 },
#else
    { 0, output_168, 0 },
#endif
    0,
    &operand_data[331],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4473 */
  {
    "*floatsisf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_169 },
#else
    { 0, output_169, 0 },
#endif
    0,
    &operand_data[333],
    2,
    0,
    4,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4488 */
  {
    "*floatsisf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2ss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[335],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4498 */
  {
    "*floatsisf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_171 },
#else
    { 0, output_171, 0 },
#endif
    0,
    &operand_data[337],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4516 */
  {
    "*floatdisf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_172 },
#else
    { 0, output_172, 0 },
#endif
    0,
    &operand_data[339],
    2,
    0,
    4,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4531 */
  {
    "*floatdisf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2ss{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[341],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4541 */
  {
    "*floatdisf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_174 },
#else
    { 0, output_174, 0 },
#endif
    0,
    &operand_data[343],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4566 */
  {
    "*floathidf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_175 },
#else
    { 0, output_175, 0 },
#endif
    0,
    &operand_data[345],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4584 */
  {
    "*floatsidf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_176 },
#else
    { 0, output_176, 0 },
#endif
    0,
    &operand_data[347],
    2,
    0,
    4,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4599 */
  {
    "*floatsidf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2sd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[349],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4609 */
  {
    "*floatsidf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_178 },
#else
    { 0, output_178, 0 },
#endif
    0,
    &operand_data[351],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4627 */
  {
    "*floatdidf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_179 },
#else
    { 0, output_179, 0 },
#endif
    0,
    &operand_data[353],
    2,
    0,
    4,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4642 */
  {
    "*floatdidf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2sd{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[355],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4652 */
  {
    "*floatdidf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_181 },
#else
    { 0, output_181, 0 },
#endif
    0,
    &operand_data[357],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4664 */
  {
    "floathixf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_182 },
#else
    { 0, output_182, 0 },
#endif
    (insn_gen_fn) gen_floathixf2,
    &operand_data[359],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4676 */
  {
    "floatsixf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_183 },
#else
    { 0, output_183, 0 },
#endif
    (insn_gen_fn) gen_floatsixf2,
    &operand_data[361],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4688 */
  {
    "floatdixf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_184 },
#else
    { 0, output_184, 0 },
#endif
    (insn_gen_fn) gen_floatdixf2,
    &operand_data[363],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4749 */
  {
    "*addti3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[365],
    3,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4788 */
  {
    "*adddi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[368],
    3,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4814 */
  {
    "adddi3_carry_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_adddi3_carry_rex64,
    &operand_data[371],
    4,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4826 */
  {
    "*adddi3_cc_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[371],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4838 */
  {
    "addqi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addqi3_carry,
    &operand_data[375],
    4,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4850 */
  {
    "addhi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addhi3_carry,
    &operand_data[379],
    4,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4862 */
  {
    "addsi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addsi3_carry,
    &operand_data[383],
    4,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4874 */
  {
    "*addsi3_carry_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[387],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4887 */
  {
    "*addsi3_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[383],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4899 */
  {
    "addqi3_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addqi3_cc,
    &operand_data[375],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4919 */
  {
    "*lea_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a1, %0|%0, %a1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[391],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4927 */
  {
    "*lea_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a1, %0|%0, %a1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[393],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4935 */
  {
    "*lea_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a1, %k0|%k0, %a1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[395],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4944 */
  {
    "*lea_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{q}\t{%a1, %0|%0, %a1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[395],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4955 */
  {
    "*lea_general_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[397],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4986 */
  {
    "*lea_general_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[401],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5007 */
  {
    "*lea_general_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[405],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5036 */
  {
    "*lea_general_2_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[409],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5056 */
  {
    "*lea_general_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[413],
    5,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5089 */
  {
    "*lea_general_3_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[418],
    5,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5113 */
  {
    "*adddi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_205 },
#else
    { 0, 0, output_205 },
#endif
    0,
    &operand_data[423],
    3,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5180 */
  {
    "*adddi_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_206 },
#else
    { 0, 0, output_206 },
#endif
    0,
    &operand_data[426],
    3,
    2,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5231 */
  {
    "*adddi_3_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_207 },
#else
    { 0, 0, output_207 },
#endif
    0,
    &operand_data[429],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5288 */
  {
    "*adddi_4_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_208 },
#else
    { 0, 0, output_208 },
#endif
    0,
    &operand_data[432],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5327 */
  {
    "*adddi_5_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_209 },
#else
    { 0, 0, output_209 },
#endif
    0,
    &operand_data[435],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5377 */
  {
    "*addsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_210 },
#else
    { 0, 0, output_210 },
#endif
    0,
    &operand_data[438],
    3,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5460 */
  {
    "addsi_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_211 },
#else
    { 0, 0, output_211 },
#endif
    (insn_gen_fn) gen_addsi_1_zext,
    &operand_data[441],
    3,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5526 */
  {
    "*addsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_212 },
#else
    { 0, 0, output_212 },
#endif
    0,
    &operand_data[444],
    3,
    2,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5574 */
  {
    "*addsi_2_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_213 },
#else
    { 0, 0, output_213 },
#endif
    0,
    &operand_data[447],
    3,
    2,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5619 */
  {
    "*addsi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_214 },
#else
    { 0, 0, output_214 },
#endif
    0,
    &operand_data[450],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5664 */
  {
    "*addsi_3_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_215 },
#else
    { 0, 0, output_215 },
#endif
    0,
    &operand_data[447],
    3,
    2,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5715 */
  {
    "*addsi_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_216 },
#else
    { 0, 0, output_216 },
#endif
    0,
    &operand_data[453],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5752 */
  {
    "*addsi_5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_217 },
#else
    { 0, 0, output_217 },
#endif
    0,
    &operand_data[450],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5810 */
  {
    "*addhi_1_lea",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_218 },
#else
    { 0, 0, output_218 },
#endif
    0,
    &operand_data[456],
    3,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5853 */
  {
    "*addhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_219 },
#else
    { 0, 0, output_219 },
#endif
    0,
    &operand_data[379],
    3,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5892 */
  {
    "*addhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_220 },
#else
    { 0, 0, output_220 },
#endif
    0,
    &operand_data[459],
    3,
    2,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5934 */
  {
    "*addhi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_221 },
#else
    { 0, 0, output_221 },
#endif
    0,
    &operand_data[462],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5974 */
  {
    "*addhi_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_222 },
#else
    { 0, 0, output_222 },
#endif
    0,
    &operand_data[465],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6012 */
  {
    "*addhi_5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_223 },
#else
    { 0, 0, output_223 },
#endif
    0,
    &operand_data[462],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6062 */
  {
    "*addqi_1_lea",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_224 },
#else
    { 0, 0, output_224 },
#endif
    0,
    &operand_data[468],
    3,
    0,
    4,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6112 */
  {
    "*addqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_225 },
#else
    { 0, 0, output_225 },
#endif
    0,
    &operand_data[471],
    3,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6158 */
  {
    "*addqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_226 },
#else
    { 0, 0, output_226 },
#endif
    0,
    &operand_data[474],
    2,
    1,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6198 */
  {
    "*addqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_227 },
#else
    { 0, 0, output_227 },
#endif
    0,
    &operand_data[476],
    3,
    2,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6239 */
  {
    "*addqi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_228 },
#else
    { 0, 0, output_228 },
#endif
    0,
    &operand_data[479],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6278 */
  {
    "*addqi_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_229 },
#else
    { 0, 0, output_229 },
#endif
    0,
    &operand_data[482],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6316 */
  {
    "*addqi_5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_230 },
#else
    { 0, 0, output_230 },
#endif
    0,
    &operand_data[479],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6357 */
  {
    "addqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_231 },
#else
    { 0, 0, output_231 },
#endif
    (insn_gen_fn) gen_addqi_ext_1,
    &operand_data[485],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6393 */
  {
    "*addqi_ext_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_232 },
#else
    { 0, 0, output_232 },
#endif
    0,
    &operand_data[488],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6429 */
  {
    "*addqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[491],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6483 */
  {
    "*subti3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[494],
    3,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6518 */
  {
    "*subdi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[497],
    3,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6543 */
  {
    "subdi3_carry_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subdi3_carry_rex64,
    &operand_data[500],
    4,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6555 */
  {
    "*subdi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[500],
    3,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6565 */
  {
    "*subdi_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[500],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6579 */
  {
    "*subdi_3_rex63",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[500],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6591 */
  {
    "subqi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subqi3_carry,
    &operand_data[504],
    4,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6603 */
  {
    "subhi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subhi3_carry,
    &operand_data[508],
    4,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6615 */
  {
    "subsi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subsi3_carry,
    &operand_data[512],
    4,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6627 */
  {
    "subsi3_carry_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subsi3_carry_zext,
    &operand_data[516],
    4,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6648 */
  {
    "*subsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[512],
    3,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6658 */
  {
    "*subsi_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[520],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6669 */
  {
    "*subsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[512],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6683 */
  {
    "*subsi_2_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[520],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6699 */
  {
    "*subsi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[512],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6711 */
  {
    "*subsi_3_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %1|%1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[520],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6733 */
  {
    "*subhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[508],
    3,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6743 */
  {
    "*subhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[508],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6757 */
  {
    "*subhi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[508],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6777 */
  {
    "*subqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[523],
    3,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6787 */
  {
    "*subqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[526],
    2,
    1,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6798 */
  {
    "*subqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[528],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6812 */
  {
    "*subqi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[528],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6857 */
  {
    "*muldi3_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_257 },
#else
    { 0, output_257, 0 },
#endif
    0,
    &operand_data[531],
    3,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6889 */
  {
    "*mulsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_258 },
#else
    { 0, output_258, 0 },
#endif
    0,
    &operand_data[534],
    3,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6912 */
  {
    "*mulsi3_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_259 },
#else
    { 0, output_259, 0 },
#endif
    0,
    &operand_data[537],
    3,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6945 */
  {
    "*mulhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_260 },
#else
    { 0, output_260, 0 },
#endif
    0,
    &operand_data[540],
    3,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6973 */
  {
    "*mulqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[543],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6999 */
  {
    "*umulqihi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[546],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7023 */
  {
    "*mulqihi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[546],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7049 */
  {
    "*umulditi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{q}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[549],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7076 */
  {
    "*umulsidi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[552],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7102 */
  {
    "*mulditi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{q}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[549],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7128 */
  {
    "*mulsidi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[552],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7158 */
  {
    "*umuldi3_highpart_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{q}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[555],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7194 */
  {
    "*umulsi3_highpart_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[559],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7215 */
  {
    "*umulsi3_highpart_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[563],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7251 */
  {
    "*smuldi3_highpart_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{q}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[555],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7286 */
  {
    "*smulsi3_highpart_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[559],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7306 */
  {
    "*smulsi3_highpart_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[563],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7352 */
  {
    "divqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "idiv{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divqi3,
    &operand_data[567],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7362 */
  {
    "udivqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "div{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_udivqi3,
    &operand_data[567],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7410 */
  {
    "*divmoddi4_nocltd_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[570],
    4,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7421 */
  {
    "*divmoddi4_cltd_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[574],
    4,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7432 */
  {
    "*divmoddi_noext_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "idiv{q}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[578],
    5,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7493 */
  {
    "*divmodsi4_nocltd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[583],
    4,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7504 */
  {
    "*divmodsi4_cltd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[587],
    4,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7515 */
  {
    "*divmodsi_noext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "idiv{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[591],
    5,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7562 */
  {
    "divmodhi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cwtd\n\tidiv{w}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divmodhi4,
    &operand_data[596],
    4,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7575 */
  {
    "udivmoddi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{q}\t%3, %3\n\tdiv{q}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_udivmoddi4,
    &operand_data[600],
    4,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7588 */
  {
    "*udivmoddi4_noext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "div{q}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[578],
    4,
    3,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7618 */
  {
    "udivmodsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t%3, %3\n\tdiv{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_udivmodsi4,
    &operand_data[604],
    4,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7631 */
  {
    "*udivmodsi4_noext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "div{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[591],
    4,
    3,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7673 */
  {
    "*udivmodhi_noext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "div{w}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[608],
    5,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7710 */
  {
    "*testdi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_288 },
#else
    { 0, output_288, 0 },
#endif
    0,
    &operand_data[613],
    2,
    0,
    5,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7729 */
  {
    "testsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_testsi_1,
    &operand_data[615],
    2,
    0,
    3,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7752 */
  {
    "*testhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[617],
    2,
    0,
    3,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7773 */
  {
    "*testqi_1_maybe_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_291 },
#else
    { 0, 0, output_291 },
#endif
    0,
    &operand_data[619],
    2,
    0,
    4,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7798 */
  {
    "*testqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[621],
    2,
    0,
    3,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7826 */
  {
    "*testqi_ext_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[623],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7843 */
  {
    "*testqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[625],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7860 */
  {
    "*testqi_ext_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[20],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7876 */
  {
    "*testqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%h1, %h0|%h0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[28],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7895 */
  {
    "*testqi_ext_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[627],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7912 */
  {
    "*testqi_ext_3_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[630],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8044 */
  {
    "*anddi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_299 },
#else
    { 0, 0, output_299 },
#endif
    0,
    &operand_data[633],
    3,
    0,
    4,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8085 */
  {
    "*anddi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_300 },
#else
    { 0, output_300, 0 },
#endif
    0,
    &operand_data[636],
    3,
    2,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8109 */
  {
    "*andsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_301 },
#else
    { 0, 0, output_301 },
#endif
    0,
    &operand_data[639],
    3,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8185 */
  {
    "*andsi_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[387],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8196 */
  {
    "*andsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[642],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8210 */
  {
    "*andsi_2_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[387],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8231 */
  {
    "*andhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_305 },
#else
    { 0, 0, output_305 },
#endif
    0,
    &operand_data[645],
    3,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8255 */
  {
    "*andhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[648],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8277 */
  {
    "*andqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_307 },
#else
    { 0, output_307, 0 },
#endif
    0,
    &operand_data[651],
    3,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8290 */
  {
    "*andqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[654],
    2,
    1,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8301 */
  {
    "*andqi_2_maybe_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_309 },
#else
    { 0, 0, output_309 },
#endif
    0,
    &operand_data[656],
    3,
    2,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8325 */
  {
    "*andqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[659],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8339 */
  {
    "*andqi_2_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[662],
    2,
    3,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8358 */
  {
    "andqi_ext_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_andqi_ext_0,
    &operand_data[664],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8378 */
  {
    "*andqi_ext_0_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[664],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8403 */
  {
    "*andqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[667],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8421 */
  {
    "*andqi_ext_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[670],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8439 */
  {
    "*andqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[491],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8517 */
  {
    "*iordi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[673],
    3,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8528 */
  {
    "*iordi_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[676],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8542 */
  {
    "*iordi_3_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[679],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8564 */
  {
    "*iorsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[682],
    3,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8575 */
  {
    "*iorsi_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[685],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8586 */
  {
    "*iorsi_1_zext_imm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[688],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8596 */
  {
    "*iorsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[642],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8611 */
  {
    "*iorsi_2_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[387],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8624 */
  {
    "*iorsi_2_zext_imm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[691],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8637 */
  {
    "*iorsi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[694],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8657 */
  {
    "*iorhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[697],
    3,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8667 */
  {
    "*iorhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[648],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8680 */
  {
    "*iorhi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[700],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8701 */
  {
    "*iorqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_330 },
#else
    { 0, output_330, 0 },
#endif
    0,
    &operand_data[703],
    3,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8714 */
  {
    "*iorqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[706],
    2,
    1,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8725 */
  {
    "*iorqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[659],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8738 */
  {
    "*iorqi_2_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[708],
    2,
    3,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8752 */
  {
    "*iorqi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[710],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8764 */
  {
    "iorqi_ext_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iorqi_ext_0,
    &operand_data[664],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8781 */
  {
    "*iorqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[667],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8800 */
  {
    "*iorqi_ext_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[670],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8819 */
  {
    "*iorqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ior{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[670],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8890 */
  {
    "*xordi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_339 },
#else
    { 0, output_339, 0 },
#endif
    0,
    &operand_data[371],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8903 */
  {
    "*xordi_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_340 },
#else
    { 0, output_340, 0 },
#endif
    0,
    &operand_data[676],
    3,
    2,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8919 */
  {
    "*xordi_3_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[679],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8940 */
  {
    "*xorsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[383],
    3,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8952 */
  {
    "*xorsi_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[387],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8963 */
  {
    "*xorsi_1_zext_imm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[713],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8973 */
  {
    "*xorsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[642],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8988 */
  {
    "*xorsi_2_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[387],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9001 */
  {
    "*xorsi_2_zext_imm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[691],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9014 */
  {
    "*xorsi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[694],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9034 */
  {
    "*xorhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[697],
    3,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9044 */
  {
    "*xorhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[648],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9057 */
  {
    "*xorhi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[700],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9078 */
  {
    "*xorqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_352 },
#else
    { 0, output_352, 0 },
#endif
    0,
    &operand_data[703],
    3,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9091 */
  {
    "*xorqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[654],
    2,
    1,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9102 */
  {
    "xorqi_ext_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xorqi_ext_0,
    &operand_data[664],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9119 */
  {
    "*xorqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[667],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9138 */
  {
    "*xorqi_ext_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[670],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9157 */
  {
    "*xorqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[670],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9175 */
  {
    "*xorqi_cc_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[659],
    3,
    2,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9189 */
  {
    "*xorqi_2_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[708],
    2,
    3,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9203 */
  {
    "*xorqi_cc_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[710],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9216 */
  {
    "*xorqi_cc_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[716],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9237 */
  {
    "*xorqi_cc_ext_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[488],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9327 */
  {
    "*negti2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[719],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9364 */
  {
    "*negdi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[721],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9394 */
  {
    "*negdi2_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[723],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9407 */
  {
    "*negdi2_cmpz_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[723],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9426 */
  {
    "*negsi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[725],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9436 */
  {
    "*negsi2_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{l}\t%k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9451 */
  {
    "*negsi2_cmpz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[725],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9462 */
  {
    "*negsi2_cmpz_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{l}\t%k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9486 */
  {
    "*neghi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[729],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9495 */
  {
    "*neghi2_cmpz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[729],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9513 */
  {
    "*negqi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[731],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9522 */
  {
    "*negqi2_cmpz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[731],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9547 */
  {
    "*absnegsf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[733],
    4,
    0,
    4,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9557 */
  {
    "*absnegsf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[737],
    4,
    0,
    3,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9567 */
  {
    "*absnegsf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[741],
    4,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9587 */
  {
    "copysignsf3_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysignsf3_const,
    &operand_data[745],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9603 */
  {
    "copysignsf3_var",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysignsf3_var,
    &operand_data[749],
    6,
    0,
    5,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9643 */
  {
    "*absnegdf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[755],
    4,
    0,
    4,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9653 */
  {
    "*absnegdf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[759],
    4,
    0,
    3,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9663 */
  {
    "*absnegdf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[763],
    4,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9683 */
  {
    "copysigndf3_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysigndf3_const,
    &operand_data[767],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9699 */
  {
    "copysigndf3_var",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysigndf3_var,
    &operand_data[771],
    6,
    0,
    5,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9739 */
  {
    "*absnegxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[777],
    4,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9905 */
  {
    "*negsf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[781],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9913 */
  {
    "*negdf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[783],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9921 */
  {
    "*negxf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[785],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9929 */
  {
    "*abssf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[781],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9937 */
  {
    "*absdf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[783],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9945 */
  {
    "*absxf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[785],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9953 */
  {
    "*negextendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[787],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9962 */
  {
    "*negextenddfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[789],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9971 */
  {
    "*negextendsfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[791],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9980 */
  {
    "*absextendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[787],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9989 */
  {
    "*absextenddfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[789],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9998 */
  {
    "*absextendsfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[791],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10015 */
  {
    "*one_cmpldi2_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "not{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[723],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10023 */
  {
    "*one_cmpldi2_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[723],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10057 */
  {
    "*one_cmplsi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "not{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[725],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10066 */
  {
    "*one_cmplsi2_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "not{l}\t%k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[520],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10074 */
  {
    "*one_cmplsi2_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[725],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10102 */
  {
    "*one_cmplsi2_2_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[520],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10135 */
  {
    "*one_cmplhi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "not{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[729],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10143 */
  {
    "*one_cmplhi2_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[729],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10177 */
  {
    "*one_cmplqi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_406 },
#else
    { 0, output_406, 0 },
#endif
    0,
    &operand_data[793],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10187 */
  {
    "*one_cmplqi2_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[731],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10254 */
  {
    "ashlti3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlti3_1,
    &operand_data[795],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10264 */
  {
    "*ashlti3_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[799],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10292 */
  {
    "x86_64_shld",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_410 },
#else
    { 0, output_410, 0 },
#endif
    (insn_gen_fn) gen_x86_64_shld,
    &operand_data[802],
    3,
    2,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10331 */
  {
    "*ashldi3_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_411 },
#else
    { 0, 0, output_411 },
#endif
    0,
    &operand_data[805],
    3,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10390 */
  {
    "*ashldi3_cmp_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_412 },
#else
    { 0, 0, output_412 },
#endif
    0,
    &operand_data[808],
    3,
    2,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10432 */
  {
    "*ashldi3_cconly_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_413 },
#else
    { 0, 0, output_413 },
#endif
    0,
    &operand_data[811],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10473 */
  {
    "*ashldi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[814],
    3,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10506 */
  {
    "x86_shld_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_415 },
#else
    { 0, output_415, 0 },
#endif
    (insn_gen_fn) gen_x86_shld_1,
    &operand_data[817],
    3,
    2,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10575 */
  {
    "*ashlsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_416 },
#else
    { 0, 0, output_416 },
#endif
    0,
    &operand_data[820],
    3,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10661 */
  {
    "*ashlsi3_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_417 },
#else
    { 0, 0, output_417 },
#endif
    0,
    &operand_data[823],
    3,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10717 */
  {
    "*ashlsi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_418 },
#else
    { 0, 0, output_418 },
#endif
    0,
    &operand_data[826],
    3,
    2,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10759 */
  {
    "*ashlsi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_419 },
#else
    { 0, 0, output_419 },
#endif
    0,
    &operand_data[829],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10800 */
  {
    "*ashlsi3_cmp_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_420 },
#else
    { 0, 0, output_420 },
#endif
    0,
    &operand_data[832],
    3,
    2,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10849 */
  {
    "*ashlhi3_1_lea",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_421 },
#else
    { 0, 0, output_421 },
#endif
    0,
    &operand_data[835],
    3,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10887 */
  {
    "*ashlhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_422 },
#else
    { 0, 0, output_422 },
#endif
    0,
    &operand_data[838],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10924 */
  {
    "*ashlhi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_423 },
#else
    { 0, 0, output_423 },
#endif
    0,
    &operand_data[841],
    3,
    2,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10966 */
  {
    "*ashlhi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_424 },
#else
    { 0, 0, output_424 },
#endif
    0,
    &operand_data[844],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11017 */
  {
    "*ashlqi3_1_lea",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_425 },
#else
    { 0, 0, output_425 },
#endif
    0,
    &operand_data[847],
    3,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11073 */
  {
    "*ashlqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_426 },
#else
    { 0, 0, output_426 },
#endif
    0,
    &operand_data[850],
    3,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11128 */
  {
    "*ashlqi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_427 },
#else
    { 0, 0, output_427 },
#endif
    0,
    &operand_data[853],
    3,
    2,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11170 */
  {
    "*ashlqi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_428 },
#else
    { 0, 0, output_428 },
#endif
    0,
    &operand_data[856],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11229 */
  {
    "ashrti3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrti3_1,
    &operand_data[795],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11239 */
  {
    "*ashrti3_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[799],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11267 */
  {
    "x86_64_shrd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_431 },
#else
    { 0, output_431, 0 },
#endif
    (insn_gen_fn) gen_x86_64_shrd,
    &operand_data[802],
    3,
    2,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11290 */
  {
    "*ashrdi3_63_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_432 },
#else
    { 0, output_432, 0 },
#endif
    0,
    &operand_data[859],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11307 */
  {
    "*ashrdi3_1_one_bit_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[862],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11321 */
  {
    "*ashrdi3_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_434 },
#else
    { 0, output_434, 0 },
#endif
    0,
    &operand_data[865],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11336 */
  {
    "*ashrdi3_one_bit_cmp_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[862],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11354 */
  {
    "*ashrdi3_one_bit_cconly_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[868],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11371 */
  {
    "*ashrdi3_cmp_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[871],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11387 */
  {
    "*ashrdi3_cconly_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[874],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11402 */
  {
    "*ashrdi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[877],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11435 */
  {
    "x86_shrd_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_440 },
#else
    { 0, output_440, 0 },
#endif
    (insn_gen_fn) gen_x86_shrd_1,
    &operand_data[817],
    3,
    2,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11479 */
  {
    "ashrsi3_31",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_441 },
#else
    { 0, output_441, 0 },
#endif
    (insn_gen_fn) gen_ashrsi3_31,
    &operand_data[880],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11495 */
  {
    "*ashrsi3_31_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_442 },
#else
    { 0, output_442, 0 },
#endif
    0,
    &operand_data[883],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11520 */
  {
    "*ashrsi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[886],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11534 */
  {
    "*ashrsi3_1_one_bit_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t%k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[889],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11545 */
  {
    "*ashrsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_445 },
#else
    { 0, output_445, 0 },
#endif
    0,
    &operand_data[892],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11557 */
  {
    "*ashrsi3_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_446 },
#else
    { 0, output_446, 0 },
#endif
    0,
    &operand_data[895],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11572 */
  {
    "*ashrsi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[886],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11590 */
  {
    "*ashrsi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[898],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11604 */
  {
    "*ashrsi3_one_bit_cmp_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t%k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[889],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11622 */
  {
    "*ashrsi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[826],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11638 */
  {
    "*ashrsi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[829],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11653 */
  {
    "*ashrsi3_cmp_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[832],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11677 */
  {
    "*ashrhi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[901],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11691 */
  {
    "*ashrhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_454 },
#else
    { 0, output_454, 0 },
#endif
    0,
    &operand_data[904],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11706 */
  {
    "*ashrhi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[901],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11724 */
  {
    "*ashrhi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[907],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11741 */
  {
    "*ashrhi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[841],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11757 */
  {
    "*ashrhi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[844],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11780 */
  {
    "*ashrqi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[910],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11794 */
  {
    "*ashrqi3_1_one_bit_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[913],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11809 */
  {
    "*ashrqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_461 },
#else
    { 0, output_461, 0 },
#endif
    0,
    &operand_data[915],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11821 */
  {
    "*ashrqi3_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_462 },
#else
    { 0, output_462, 0 },
#endif
    0,
    &operand_data[918],
    2,
    1,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11837 */
  {
    "*ashrqi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[920],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11855 */
  {
    "*ashrqi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[923],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11872 */
  {
    "*ashrqi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[853],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11888 */
  {
    "*ashrqi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11924 */
  {
    "lshrti3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrti3_1,
    &operand_data[795],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11934 */
  {
    "*lshrti3_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[799],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11969 */
  {
    "*lshrdi3_1_one_bit_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[862],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11983 */
  {
    "*lshrdi3_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_470 },
#else
    { 0, output_470, 0 },
#endif
    0,
    &operand_data[865],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11998 */
  {
    "*lshrdi3_cmp_one_bit_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[862],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12016 */
  {
    "*lshrdi3_cconly_one_bit_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[868],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12033 */
  {
    "*lshrdi3_cmp_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[926],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12049 */
  {
    "*lshrdi3_cconly_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[929],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12064 */
  {
    "*lshrdi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[877],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12105 */
  {
    "*lshrsi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[886],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12119 */
  {
    "*lshrsi3_1_one_bit_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t%k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[889],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12130 */
  {
    "*lshrsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_478 },
#else
    { 0, output_478, 0 },
#endif
    0,
    &operand_data[892],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12142 */
  {
    "*lshrsi3_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_479 },
#else
    { 0, output_479, 0 },
#endif
    0,
    &operand_data[932],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12158 */
  {
    "*lshrsi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[886],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12176 */
  {
    "*lshrsi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[898],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12190 */
  {
    "*lshrsi3_cmp_one_bit_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t%k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[889],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12208 */
  {
    "*lshrsi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[826],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12224 */
  {
    "*lshrsi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[829],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12239 */
  {
    "*lshrsi3_cmp_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[832],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12263 */
  {
    "*lshrhi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[901],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12277 */
  {
    "*lshrhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_487 },
#else
    { 0, output_487, 0 },
#endif
    0,
    &operand_data[904],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12292 */
  {
    "*lshrhi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[901],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12310 */
  {
    "*lshrhi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[907],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12327 */
  {
    "*lshrhi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[841],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12343 */
  {
    "*lshrhi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[844],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12366 */
  {
    "*lshrqi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[910],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12380 */
  {
    "*lshrqi3_1_one_bit_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[913],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12394 */
  {
    "*lshrqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_494 },
#else
    { 0, output_494, 0 },
#endif
    0,
    &operand_data[915],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12406 */
  {
    "*lshrqi3_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_495 },
#else
    { 0, output_495, 0 },
#endif
    0,
    &operand_data[918],
    2,
    1,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12422 */
  {
    "*lshrqi2_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[910],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12440 */
  {
    "*lshrqi2_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[935],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12457 */
  {
    "*lshrqi2_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[853],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12473 */
  {
    "*lshrqi2_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12510 */
  {
    "ix86_rotldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ix86_rotldi3,
    &operand_data[938],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12534 */
  {
    "*rotlsi3_1_one_bit_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[862],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12548 */
  {
    "*rotldi3_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_502 },
#else
    { 0, output_502, 0 },
#endif
    0,
    &operand_data[942],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12568 */
  {
    "*rotlsi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[886],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12582 */
  {
    "*rotlsi3_1_one_bit_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{l}\t%k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[889],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12594 */
  {
    "*rotlsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_505 },
#else
    { 0, output_505, 0 },
#endif
    0,
    &operand_data[892],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12606 */
  {
    "*rotlsi3_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_506 },
#else
    { 0, output_506, 0 },
#endif
    0,
    &operand_data[895],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12627 */
  {
    "*rotlhi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[901],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12641 */
  {
    "*rotlhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_508 },
#else
    { 0, output_508, 0 },
#endif
    0,
    &operand_data[904],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12661 */
  {
    "*rotlqi3_1_one_bit_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[913],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12675 */
  {
    "*rotlqi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[910],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12689 */
  {
    "*rotlqi3_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_511 },
#else
    { 0, output_511, 0 },
#endif
    0,
    &operand_data[918],
    2,
    1,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12702 */
  {
    "*rotlqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_512 },
#else
    { 0, output_512, 0 },
#endif
    0,
    &operand_data[915],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12734 */
  {
    "ix86_rotrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ix86_rotrdi3,
    &operand_data[938],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12758 */
  {
    "*rotrdi3_1_one_bit_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[862],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12772 */
  {
    "*rotrdi3_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_515 },
#else
    { 0, output_515, 0 },
#endif
    0,
    &operand_data[865],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12792 */
  {
    "*rotrsi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[886],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12806 */
  {
    "*rotrsi3_1_one_bit_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{l}\t%k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[889],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12821 */
  {
    "*rotrsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_518 },
#else
    { 0, output_518, 0 },
#endif
    0,
    &operand_data[892],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12833 */
  {
    "*rotrsi3_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_519 },
#else
    { 0, output_519, 0 },
#endif
    0,
    &operand_data[895],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12854 */
  {
    "*rotrhi3_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[901],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12868 */
  {
    "*rotrhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_521 },
#else
    { 0, output_521, 0 },
#endif
    0,
    &operand_data[904],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12888 */
  {
    "*rotrqi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[910],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12902 */
  {
    "*rotrqi3_1_one_bit_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[913],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12916 */
  {
    "*rotrqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_524 },
#else
    { 0, output_524, 0 },
#endif
    0,
    &operand_data[915],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12928 */
  {
    "*rotrqi3_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_525 },
#else
    { 0, output_525, 0 },
#endif
    0,
    &operand_data[918],
    2,
    1,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13014 */
  {
    "*btsq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bts{q} %1,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[945],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13024 */
  {
    "*btrq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "btr{q} %1,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[945],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13034 */
  {
    "*btcq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "btc{q} %1,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[945],
    2,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13260 */
  {
    "*setcc_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "set%C1\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[947],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13269 */
  {
    "*setcc_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "set%C1\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[949],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13353 */
  {
    "*sse_setccsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D1ss\t{%3, %0|%0, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[951],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13363 */
  {
    "*sse_setccdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D1sd\t{%3, %0|%0, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[955],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13523 */
  {
    "*jcc_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%+j%C1\t%l0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[959],
    2,
    0,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13541 */
  {
    "*jcc_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%+j%c1\t%l0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[959],
    2,
    0,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13612 */
  {
    "*fp_jcc_1_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[961],
    4,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13627 */
  {
    "*fp_jcc_1_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[965],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13642 */
  {
    "*fp_jcc_1_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[969],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13657 */
  {
    "*fp_jcc_2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[961],
    4,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13672 */
  {
    "*fp_jcc_2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[965],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13687 */
  {
    "*fp_jcc_2_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[969],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13702 */
  {
    "*fp_jcc_3_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[973],
    5,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13721 */
  {
    "*fp_jcc_4_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[973],
    5,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13740 */
  {
    "*fp_jcc_5_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[978],
    5,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13756 */
  {
    "*fp_jcc_6_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[978],
    5,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13772 */
  {
    "*fp_jcc_7_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[983],
    5,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13796 */
  {
    "*fp_jcc_8hi_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[988],
    6,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13796 */
  {
    "*fp_jcc_8si_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[994],
    6,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13896 */
  {
    "jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%l0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_jump,
    &operand_data[743],
    1,
    0,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13916 */
  {
    "*indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[554],
    1,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13923 */
  {
    "*indirect_jump_rtx64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[551],
    1,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13966 */
  {
    "*tablejump_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1000],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13974 */
  {
    "*tablejump_1_rtx64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1002],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14045 */
  {
    "*call_pop_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_553 },
#else
    { 0, 0, output_553 },
#endif
    0,
    &operand_data[1004],
    3,
    0,
    0,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14059 */
  {
    "*call_pop_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_554 },
#else
    { 0, 0, output_554 },
#endif
    0,
    &operand_data[1007],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14100 */
  {
    "*call_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_555 },
#else
    { 0, 0, output_555 },
#endif
    0,
    &operand_data[1010],
    2,
    0,
    0,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14112 */
  {
    "*call_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_556 },
#else
    { 0, 0, output_556 },
#endif
    0,
    &operand_data[1012],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14123 */
  {
    "*sibcall_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_557 },
#else
    { 0, 0, output_557 },
#endif
    0,
    &operand_data[1014],
    2,
    0,
    4,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14134 */
  {
    "*call_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_558 },
#else
    { 0, 0, output_558 },
#endif
    0,
    &operand_data[1016],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14145 */
  {
    "*sibcall_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%P0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1018],
    2,
    0,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14152 */
  {
    "*sibcall_1_rex64_v",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t*%%r11",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[743],
    1,
    0,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14241 */
  {
    "blockage",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_blockage,
    &operand_data[743],
    1,
    0,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14263 */
  {
    "return_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return_internal,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14274 */
  {
    "return_internal_long",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rep {;} ret",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return_internal_long,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14284 */
  {
    "return_pop_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return_pop_internal,
    &operand_data[628],
    1,
    0,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14293 */
  {
    "return_indirect_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return_indirect_internal,
    &operand_data[403],
    1,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14301 */
  {
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_nop,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14313 */
  {
    "align",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_567 },
#else
    { 0, 0, output_567 },
#endif
    (insn_gen_fn) gen_align,
    &operand_data[743],
    1,
    0,
    0,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14334 */
  {
    "set_got",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_568 },
#else
    { 0, 0, output_568 },
#endif
    (insn_gen_fn) gen_set_got,
    &operand_data[63],
    1,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14343 */
  {
    "set_got_labelled",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_569 },
#else
    { 0, 0, output_569 },
#endif
    (insn_gen_fn) gen_set_got_labelled,
    &operand_data[1020],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14353 */
  {
    "set_got_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{q}\t_GLOBAL_OFFSET_TABLE_(%%rip), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_set_got_rex64,
    &operand_data[134],
    1,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14393 */
  {
    "eh_return_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eh_return_si,
    &operand_data[1022],
    1,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14403 */
  {
    "eh_return_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eh_return_di,
    &operand_data[1023],
    1,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14413 */
  {
    "leave",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "leave",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_leave,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14421 */
  {
    "leave_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "leave",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_leave_rex64,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14438 */
  {
    "*ffs_cmove",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1024],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14457 */
  {
    "*ffs_no_cmove",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1027],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14480 */
  {
    "*ffssi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsf{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1024],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14499 */
  {
    "*ffs_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1030],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14519 */
  {
    "*ffsdi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsf{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1030],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14529 */
  {
    "ctzsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsf{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ctzsi2,
    &operand_data[1024],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14537 */
  {
    "ctzdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsf{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ctzdi2,
    &operand_data[1030],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14557 */
  {
    "*bsr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsr{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1024],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14578 */
  {
    "*bsr_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsr{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1030],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14592 */
  {
    "*tls_global_dynamic_32_gnu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a2@TLSGD(,%1,1), %0|%0, %a2@TLSGD[%1*1]}\n\tcall\t%P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1033],
    6,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14606 */
  {
    "*tls_global_dynamic_32_sun",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a2@DTLNDX(%1), %4|%4, %a2@DTLNDX[%1]}\n\
	push{l}\t%4\n\tcall\t%a2@TLSPLT\n\tpop{l}\t%4\n\tnop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1033],
    6,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14649 */
  {
    "*tls_global_dynamic_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    ".byte\t0x66\n\tlea{q}\t{%a1@TLSGD(%%rip), %%rdi|%%rdi, %a1@TLSGD[%%rip]}\n\t.word\t0x6666\n\trex64\n\tcall\t%P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1039],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14676 */
  {
    "*tls_local_dynamic_base_32_gnu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%&@TLSLDM(%1), %0|%0, %&@TLSLDM[%1]}\n\tcall\t%P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1043],
    5,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14689 */
  {
    "*tls_local_dynamic_base_32_sun",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%&@TMDNX(%1), %3|%3, %&@TMDNX[%1]}\n\
	push{l}\t%3\n\tcall\t%&@TLSPLT\n\tpop{l}\t%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1043],
    5,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14728 */
  {
    "*tls_local_dynamic_base_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{q}\t{%&@TLSLD(%%rip), %%rdi|%%rdi, %&@TLSLD[%%rip]}\n\tcall\t%P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1048],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14756 */
  {
    "*tls_local_dynamic_32_once",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1051],
    6,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14780 */
  {
    "*load_tp_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%%gs:0, %0|%0, DWORD PTR %%gs:0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[63],
    1,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14791 */
  {
    "*add_tp_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%%gs:0, %0|%0, DWORD PTR %%gs:0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1057],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14804 */
  {
    "*load_tp_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{q}\t{%%fs:0, %0|%0, QWORD PTR %%fs:0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[134],
    1,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14815 */
  {
    "*add_tp_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{q}\t{%%fs:0, %0|%0, QWORD PTR %%fs:0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14848 */
  {
    "*tls_dynamic_lea_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a2@TLSDESC(%1), %0|%0, %a2@TLSDESC[%1]}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1059],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14861 */
  {
    "*tls_dynamic_call_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t{*%a1@TLSCALL(%2)|[DWORD PTR [%2+%a1@TLSCALL]]}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1062],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14876 */
  {
    "*tls_dynamic_gnu2_combine_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1066],
    5,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14912 */
  {
    "*tls_dynamic_lea_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{q}\t{%a1@TLSDESC(%%rip), %0|%0, %a1@TLSDESC[%%rip]}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1071],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14923 */
  {
    "*tls_dynamic_call_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t{*%a1@TLSCALL(%2)|[QWORD PTR [%2+%a1@TLSCALL]]}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1073],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14936 */
  {
    "*tls_dynamic_gnu2_combine_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1076],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14969 */
  {
    "*fop_sf_comm_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_601 },
#else
    { 0, 0, output_601 },
#endif
    0,
    &operand_data[1080],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14988 */
  {
    "*fop_sf_comm_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_602 },
#else
    { 0, 0, output_602 },
#endif
    0,
    &operand_data[1084],
    4,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15003 */
  {
    "*fop_sf_comm_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_603 },
#else
    { 0, 0, output_603 },
#endif
    0,
    &operand_data[1088],
    4,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15018 */
  {
    "*fop_sf_1_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_604 },
#else
    { 0, 0, output_604 },
#endif
    0,
    &operand_data[1092],
    4,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15044 */
  {
    "*fop_sf_1_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_605 },
#else
    { 0, 0, output_605 },
#endif
    0,
    &operand_data[1096],
    4,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15062 */
  {
    "*fop_sf_1_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_606 },
#else
    { 0, 0, output_606 },
#endif
    0,
    &operand_data[1100],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15081 */
  {
    "*fop_sf_2hi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_607 },
#else
    { 0, 0, output_607 },
#endif
    0,
    &operand_data[1104],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15081 */
  {
    "*fop_sf_2si_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_608 },
#else
    { 0, 0, output_608 },
#endif
    0,
    &operand_data[1108],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15098 */
  {
    "*fop_sf_3hi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_609 },
#else
    { 0, 0, output_609 },
#endif
    0,
    &operand_data[1112],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15098 */
  {
    "*fop_sf_3si_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_610 },
#else
    { 0, 0, output_610 },
#endif
    0,
    &operand_data[1116],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15115 */
  {
    "*fop_df_comm_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_611 },
#else
    { 0, 0, output_611 },
#endif
    0,
    &operand_data[1120],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15134 */
  {
    "*fop_df_comm_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_612 },
#else
    { 0, 0, output_612 },
#endif
    0,
    &operand_data[1124],
    4,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15149 */
  {
    "*fop_df_comm_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_613 },
#else
    { 0, 0, output_613 },
#endif
    0,
    &operand_data[1128],
    4,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15164 */
  {
    "*fop_df_1_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_614 },
#else
    { 0, 0, output_614 },
#endif
    0,
    &operand_data[1132],
    4,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15190 */
  {
    "*fop_df_1_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_615 },
#else
    { 0, 0, output_615 },
#endif
    0,
    &operand_data[1136],
    4,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15208 */
  {
    "*fop_df_1_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_616 },
#else
    { 0, 0, output_616 },
#endif
    0,
    &operand_data[1140],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15227 */
  {
    "*fop_df_2hi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_617 },
#else
    { 0, 0, output_617 },
#endif
    0,
    &operand_data[1144],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15227 */
  {
    "*fop_df_2si_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_618 },
#else
    { 0, 0, output_618 },
#endif
    0,
    &operand_data[1148],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15245 */
  {
    "*fop_df_3hi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_619 },
#else
    { 0, 0, output_619 },
#endif
    0,
    &operand_data[1152],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15245 */
  {
    "*fop_df_3si_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_620 },
#else
    { 0, 0, output_620 },
#endif
    0,
    &operand_data[1156],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15263 */
  {
    "*fop_df_4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_621 },
#else
    { 0, 0, output_621 },
#endif
    0,
    &operand_data[1160],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15280 */
  {
    "*fop_df_5_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_622 },
#else
    { 0, 0, output_622 },
#endif
    0,
    &operand_data[1164],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15297 */
  {
    "*fop_df_6_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_623 },
#else
    { 0, 0, output_623 },
#endif
    0,
    &operand_data[1168],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15315 */
  {
    "*fop_xf_comm_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_624 },
#else
    { 0, 0, output_624 },
#endif
    0,
    &operand_data[1172],
    4,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15329 */
  {
    "*fop_xf_1_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_625 },
#else
    { 0, 0, output_625 },
#endif
    0,
    &operand_data[1176],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15346 */
  {
    "*fop_xf_2hi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_626 },
#else
    { 0, 0, output_626 },
#endif
    0,
    &operand_data[1180],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15346 */
  {
    "*fop_xf_2si_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_627 },
#else
    { 0, 0, output_627 },
#endif
    0,
    &operand_data[1184],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15363 */
  {
    "*fop_xf_3hi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_628 },
#else
    { 0, 0, output_628 },
#endif
    0,
    &operand_data[1188],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15363 */
  {
    "*fop_xf_3si_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_629 },
#else
    { 0, 0, output_629 },
#endif
    0,
    &operand_data[1192],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15380 */
  {
    "*fop_xf_4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_630 },
#else
    { 0, 0, output_630 },
#endif
    0,
    &operand_data[1196],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15396 */
  {
    "*fop_xf_5_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_631 },
#else
    { 0, 0, output_631 },
#endif
    0,
    &operand_data[1200],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15413 */
  {
    "*fop_xf_6_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_632 },
#else
    { 0, 0, output_632 },
#endif
    0,
    &operand_data[1204],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15482 */
  {
    "*sqrtsf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_633 },
#else
    { 0, output_633, 0 },
#endif
    0,
    &operand_data[1208],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15493 */
  {
    "*sqrtsf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqrtss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1210],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15502 */
  {
    "*sqrtsf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[781],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15520 */
  {
    "*sqrtdf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_636 },
#else
    { 0, output_636, 0 },
#endif
    0,
    &operand_data[1212],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15531 */
  {
    "*sqrtdf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqrtsd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1214],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15540 */
  {
    "*sqrtdf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[783],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15549 */
  {
    "*sqrtextendsfdf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[787],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15560 */
  {
    "sqrtxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrtxf2,
    &operand_data[785],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15569 */
  {
    "*sqrtextendsfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[791],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15579 */
  {
    "*sqrtextenddfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[789],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15589 */
  {
    "fpremxf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fprem",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fpremxf4,
    &operand_data[1216],
    4,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15674 */
  {
    "fprem1xf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fprem1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fprem1xf4,
    &operand_data[1216],
    4,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15759 */
  {
    "*sindf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsin",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[783],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15769 */
  {
    "*sinsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsin",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[781],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15779 */
  {
    "*sinextendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsin",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[787],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15791 */
  {
    "*sinxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsin",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[785],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15800 */
  {
    "*cosdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[783],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15810 */
  {
    "*cossf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[781],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15820 */
  {
    "*cosextendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[787],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15832 */
  {
    "*cosxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[785],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15847 */
  {
    "sincosdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsincos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sincosdf3,
    &operand_data[1220],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15882 */
  {
    "sincossf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsincos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sincossf3,
    &operand_data[1223],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15917 */
  {
    "*sincosextendsfdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsincos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1226],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15960 */
  {
    "sincosxf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsincos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sincosxf3,
    &operand_data[1216],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15994 */
  {
    "*tandf3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fptan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1220],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16038 */
  {
    "*tansf3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fptan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1223],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16082 */
  {
    "*tanxf3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fptan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1216],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16124 */
  {
    "atan2df3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpatan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_atan2df3_1,
    &operand_data[1229],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16165 */
  {
    "atan2sf3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpatan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_atan2sf3_1,
    &operand_data[1233],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16206 */
  {
    "atan2xf3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpatan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_atan2xf3_1,
    &operand_data[1237],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16382 */
  {
    "fyl2x_xf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2x",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2x_xf3,
    &operand_data[1237],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16568 */
  {
    "fyl2xp1_xf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2xp1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2xp1_xf3,
    &operand_data[1237],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16622 */
  {
    "*fxtractxf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxtract",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1216],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16699 */
  {
    "*f2xm1xf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "f2xm1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[785],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16709 */
  {
    "*fscalexf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fscale",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1216],
    4,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17143 */
  {
    "frndintxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "frndint",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2,
    &operand_data[785],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17197 */
  {
    "*fistdi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1241],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17221 */
  {
    "fistdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_670 },
#else
    { 0, 0, output_670 },
#endif
    (insn_gen_fn) gen_fistdi2,
    &operand_data[1243],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17232 */
  {
    "fistdi2_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistdi2_with_temp,
    &operand_data[1246],
    4,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17267 */
  {
    "*fisthi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1250],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17267 */
  {
    "*fistsi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1252],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17286 */
  {
    "fisthi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_674 },
#else
    { 0, 0, output_674 },
#endif
    (insn_gen_fn) gen_fisthi2,
    &operand_data[1254],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17286 */
  {
    "fistsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_675 },
#else
    { 0, 0, output_675 },
#endif
    (insn_gen_fn) gen_fistsi2,
    &operand_data[1256],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17296 */
  {
    "fisthi2_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fisthi2_with_temp,
    &operand_data[1258],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17296 */
  {
    "fistsi2_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistsi2_with_temp,
    &operand_data[1261],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17338 */
  {
    "frndintxf2_floor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_floor,
    &operand_data[785],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17363 */
  {
    "frndintxf2_floor_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfldcw\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_floor_i387,
    &operand_data[1264],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17420 */
  {
    "*fisthi2_floor_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1268],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17420 */
  {
    "*fistsi2_floor_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1270],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17420 */
  {
    "*fistdi2_floor_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1241],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17452 */
  {
    "fistdi2_floor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_683 },
#else
    { 0, 0, output_683 },
#endif
    (insn_gen_fn) gen_fistdi2_floor,
    &operand_data[1272],
    5,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17466 */
  {
    "fistdi2_floor_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistdi2_floor_with_temp,
    &operand_data[1277],
    6,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17512 */
  {
    "fisthi2_floor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_685 },
#else
    { 0, 0, output_685 },
#endif
    (insn_gen_fn) gen_fisthi2_floor,
    &operand_data[1283],
    4,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17512 */
  {
    "fistsi2_floor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_686 },
#else
    { 0, 0, output_686 },
#endif
    (insn_gen_fn) gen_fistsi2_floor,
    &operand_data[1287],
    4,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17525 */
  {
    "fisthi2_floor_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fisthi2_floor_with_temp,
    &operand_data[1291],
    5,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17525 */
  {
    "fistsi2_floor_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistsi2_floor_with_temp,
    &operand_data[1296],
    5,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17579 */
  {
    "frndintxf2_ceil",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_ceil,
    &operand_data[785],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17604 */
  {
    "frndintxf2_ceil_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfldcw\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_ceil_i387,
    &operand_data[1264],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17661 */
  {
    "*fisthi2_ceil_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1268],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17661 */
  {
    "*fistsi2_ceil_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1270],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17661 */
  {
    "*fistdi2_ceil_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1241],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17693 */
  {
    "fistdi2_ceil",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_694 },
#else
    { 0, 0, output_694 },
#endif
    (insn_gen_fn) gen_fistdi2_ceil,
    &operand_data[1272],
    5,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17707 */
  {
    "fistdi2_ceil_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistdi2_ceil_with_temp,
    &operand_data[1277],
    6,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17753 */
  {
    "fisthi2_ceil",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_696 },
#else
    { 0, 0, output_696 },
#endif
    (insn_gen_fn) gen_fisthi2_ceil,
    &operand_data[1283],
    4,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17753 */
  {
    "fistsi2_ceil",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_697 },
#else
    { 0, 0, output_697 },
#endif
    (insn_gen_fn) gen_fistsi2_ceil,
    &operand_data[1287],
    4,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17766 */
  {
    "fisthi2_ceil_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fisthi2_ceil_with_temp,
    &operand_data[1291],
    5,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17766 */
  {
    "fistsi2_ceil_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistsi2_ceil_with_temp,
    &operand_data[1296],
    5,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17820 */
  {
    "frndintxf2_trunc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_trunc,
    &operand_data[785],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17845 */
  {
    "frndintxf2_trunc_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfldcw\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_trunc_i387,
    &operand_data[1264],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17903 */
  {
    "frndintxf2_mask_pm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_mask_pm,
    &operand_data[785],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17928 */
  {
    "frndintxf2_mask_pm_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfclex\n\tfldcw\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_mask_pm_i387,
    &operand_data[1264],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17989 */
  {
    "cld",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cld",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cld,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18062 */
  {
    "*strmovdi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movsq",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1301],
    4,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18078 */
  {
    "*strmovsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{movsl|movsd}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1305],
    4,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18094 */
  {
    "*strmovsi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{movsl|movsd}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1301],
    4,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18110 */
  {
    "*strmovhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movsw",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1305],
    4,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18126 */
  {
    "*strmovhi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movsw",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1301],
    4,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18142 */
  {
    "*strmovqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1305],
    4,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18158 */
  {
    "*strmovqi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1301],
    4,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18187 */
  {
    "*rep_movdi_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tmovsq|rep movsq}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1309],
    6,
    4,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18207 */
  {
    "*rep_movsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tmovsl|rep movsd}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1315],
    6,
    4,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18227 */
  {
    "*rep_movsi_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tmovsl|rep movsd}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1309],
    6,
    4,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18247 */
  {
    "*rep_movqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tmovsb|rep movsb}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1315],
    6,
    4,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18265 */
  {
    "*rep_movqi_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tmovsb|rep movsb}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1309],
    6,
    4,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18353 */
  {
    "*strsetdi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stosq",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1321],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18366 */
  {
    "*strsetsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{stosl|stosd}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1324],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18379 */
  {
    "*strsetsi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{stosl|stosd}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1327],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18392 */
  {
    "*strsethi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stosw",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1330],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18405 */
  {
    "*strsethi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stosw",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1333],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18418 */
  {
    "*strsetqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stosb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1336],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18431 */
  {
    "*strsetqi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stosb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1339],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18455 */
  {
    "*rep_stosdi_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tstosq|rep stosq}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1342],
    5,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18473 */
  {
    "*rep_stossi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tstosl|rep stosd}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1347],
    5,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18491 */
  {
    "*rep_stossi_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tstosl|rep stosd}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1352],
    5,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18509 */
  {
    "*rep_stosqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tstosb|rep stosb}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1357],
    5,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18526 */
  {
    "*rep_stosqi_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tstosb|rep stosb}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1362],
    5,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18638 */
  {
    "*cmpstrnqi_nz_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repz{\n\t| }cmpsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1367],
    7,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18654 */
  {
    "*cmpstrnqi_nz_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repz{\n\t| }cmpsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1374],
    7,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18688 */
  {
    "*cmpstrnqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repz{\n\t| }cmpsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1367],
    7,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18707 */
  {
    "*cmpstrnqi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repz{\n\t| }cmpsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1374],
    7,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18760 */
  {
    "*strlenqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repnz{\n\t| }scasb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1381],
    6,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18775 */
  {
    "*strlenqi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repnz{\n\t| }scasb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1387],
    6,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18885 */
  {
    "x86_movdicc_0_m1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{q}\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_movdicc_0_m1_rex64,
    &operand_data[1393],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18902 */
  {
    "*movdicc_c_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_736 },
#else
    { 0, output_736, 0 },
#endif
    0,
    &operand_data[1395],
    4,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18928 */
  {
    "x86_movsicc_0_m1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{l}\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_movsicc_0_m1,
    &operand_data[1399],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18945 */
  {
    "*movsicc_noc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_738 },
#else
    { 0, output_738, 0 },
#endif
    0,
    &operand_data[1401],
    4,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18967 */
  {
    "*movhicc_noc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_739 },
#else
    { 0, output_739, 0 },
#endif
    0,
    &operand_data[1405],
    4,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18989 */
  {
    "*movqicc_noc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1409],
    5,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19017 */
  {
    "*movsfcc_1_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_741 },
#else
    { 0, output_741, 0 },
#endif
    0,
    &operand_data[1414],
    4,
    0,
    4,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19041 */
  {
    "*movdfcc_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_742 },
#else
    { 0, output_742, 0 },
#endif
    0,
    &operand_data[1418],
    4,
    0,
    4,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19057 */
  {
    "*movdfcc_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_743 },
#else
    { 0, output_743, 0 },
#endif
    0,
    &operand_data[1422],
    4,
    0,
    4,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19101 */
  {
    "*movxfcc_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_744 },
#else
    { 0, output_744, 0 },
#endif
    0,
    &operand_data[1426],
    4,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19119 */
  {
    "sminsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sminsf3,
    &operand_data[1084],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19128 */
  {
    "smaxsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smaxsf3,
    &operand_data[1084],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19137 */
  {
    "smindf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smindf3,
    &operand_data[1430],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19146 */
  {
    "smaxdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smaxdf3,
    &operand_data[1430],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19161 */
  {
    "*ieee_sminsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1096],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19171 */
  {
    "*ieee_smaxsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1096],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19181 */
  {
    "*ieee_smindf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1433],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19191 */
  {
    "*ieee_smaxdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1433],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19272 */
  {
    "pro_epilogue_adjust_stack_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_753 },
#else
    { 0, 0, output_753 },
#endif
    (insn_gen_fn) gen_pro_epilogue_adjust_stack_1,
    &operand_data[1436],
    3,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19313 */
  {
    "pro_epilogue_adjust_stack_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_754 },
#else
    { 0, 0, output_754 },
#endif
    (insn_gen_fn) gen_pro_epilogue_adjust_stack_rex64,
    &operand_data[1439],
    3,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19356 */
  {
    "pro_epilogue_adjust_stack_rex64_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_755 },
#else
    { 0, 0, output_755 },
#endif
    (insn_gen_fn) gen_pro_epilogue_adjust_stack_rex64_2,
    &operand_data[1442],
    4,
    0,
    2,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19402 */
  {
    "allocate_stack_worker_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t__alloca",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_allocate_stack_worker_1,
    &operand_data[1446],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19422 */
  {
    "allocate_stack_worker_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t__alloca",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_allocate_stack_worker_rex64,
    &operand_data[1448],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20534 */
  {
    "*call_value_pop_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_758 },
#else
    { 0, 0, output_758 },
#endif
    0,
    &operand_data[1003],
    4,
    0,
    0,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20549 */
  {
    "*call_value_pop_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_759 },
#else
    { 0, 0, output_759 },
#endif
    0,
    &operand_data[1450],
    4,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20571 */
  {
    "*call_value_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_760 },
#else
    { 0, 0, output_760 },
#endif
    0,
    &operand_data[1003],
    3,
    0,
    0,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20584 */
  {
    "*call_value_0_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_761 },
#else
    { 0, 0, output_761 },
#endif
    0,
    &operand_data[1454],
    3,
    0,
    0,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20597 */
  {
    "*call_value_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_762 },
#else
    { 0, 0, output_762 },
#endif
    0,
    &operand_data[1450],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20609 */
  {
    "*sibcall_value_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_763 },
#else
    { 0, 0, output_763 },
#endif
    0,
    &operand_data[1457],
    3,
    0,
    4,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20621 */
  {
    "*call_value_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_764 },
#else
    { 0, 0, output_764 },
#endif
    0,
    &operand_data[1460],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20633 */
  {
    "*sibcall_value_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1463],
    3,
    0,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20641 */
  {
    "*sibcall_value_1_rex64_v",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t*%%r11",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1466],
    2,
    0,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20654 */
  {
    "trap",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_767 },
#else
    { 0, 0, output_767 },
#endif
    (insn_gen_fn) gen_trap,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20676 */
  {
    "*sse_prologue_save_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_768 },
#else
    { 0, 0, output_768 },
#endif
    0,
    &operand_data[1468],
    5,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20745 */
  {
    "*prefetch_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_769 },
#else
    { 0, 0, output_769 },
#endif
    0,
    &operand_data[1473],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20763 */
  {
    "*prefetch_sse_rex",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_770 },
#else
    { 0, 0, output_770 },
#endif
    0,
    &operand_data[1475],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20781 */
  {
    "*prefetch_3dnow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_771 },
#else
    { 0, 0, output_771 },
#endif
    0,
    &operand_data[1477],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20795 */
  {
    "*prefetch_3dnow_rex",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_772 },
#else
    { 0, 0, output_772 },
#endif
    0,
    &operand_data[1479],
    2,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20830 */
  {
    "stack_protect_set_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%1, %2|%2, %1}\n\tmov{l}\t{%2, %0|%0, %2}\n\txor{l}\t%2, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_set_si,
    &operand_data[1481],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20839 */
  {
    "stack_protect_set_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{q}\t{%1, %2|%2, %1}\n\tmov{q}\t{%2, %0|%0, %2}\n\txor{l}\t%k2, %k2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_set_di,
    &operand_data[1484],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20848 */
  {
    "stack_tls_protect_set_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%%gs:%P1, %2|%2, DWORD PTR %%gs:%P1}\n\tmov{l}\t{%2, %0|%0, %2}\n\txor{l}\t%2, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_tls_protect_set_si,
    &operand_data[1487],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20857 */
  {
    "stack_tls_protect_set_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_776 },
#else
    { 0, 0, output_776 },
#endif
    (insn_gen_fn) gen_stack_tls_protect_set_di,
    &operand_data[1490],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20902 */
  {
    "stack_protect_test_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%1, %3|%3, %1}\n\txor{l}\t{%2, %3|%3, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_test_si,
    &operand_data[1493],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20912 */
  {
    "stack_protect_test_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{q}\t{%1, %3|%3, %1}\n\txor{q}\t{%2, %3|%3, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_test_di,
    &operand_data[1497],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20922 */
  {
    "stack_tls_protect_test_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%1, %3|%3, %1}\n\txor{l}\t{%%gs:%P2, %3|%3, DWORD PTR %%gs:%P2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_tls_protect_test_si,
    &operand_data[1501],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20932 */
  {
    "stack_tls_protect_test_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_780 },
#else
    { 0, 0, output_780 },
#endif
    (insn_gen_fn) gen_stack_tls_protect_test_di,
    &operand_data[1505],
    4,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:60 */
  {
    "*movv16qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_781 },
#else
    { 0, 0, output_781 },
#endif
    0,
    &operand_data[1509],
    2,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:60 */
  {
    "*movv8hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_782 },
#else
    { 0, 0, output_782 },
#endif
    0,
    &operand_data[1511],
    2,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:60 */
  {
    "*movv4si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_783 },
#else
    { 0, 0, output_783 },
#endif
    0,
    &operand_data[1513],
    2,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:60 */
  {
    "*movv2di_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_784 },
#else
    { 0, 0, output_784 },
#endif
    0,
    &operand_data[1515],
    2,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:99 */
  {
    "*movv4sf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_785 },
#else
    { 0, 0, output_785 },
#endif
    0,
    &operand_data[1517],
    2,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:141 */
  {
    "*movv2df_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_786 },
#else
    { 0, 0, output_786 },
#endif
    0,
    &operand_data[1519],
    2,
    0,
    3,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:198 */
  {
    "sse_movups",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movups\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movups,
    &operand_data[1521],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:207 */
  {
    "sse2_movupd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movupd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movupd,
    &operand_data[1523],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:216 */
  {
    "sse2_movdqu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movdqu\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movdqu,
    &operand_data[1525],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:225 */
  {
    "sse_movntv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movntv4sf,
    &operand_data[1527],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:234 */
  {
    "sse2_movntv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movntv2df,
    &operand_data[1529],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:243 */
  {
    "sse2_movntv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movntv2di,
    &operand_data[1531],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:252 */
  {
    "sse2_movntsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movnti\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movntsi,
    &operand_data[1533],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:261 */
  {
    "sse3_lddqu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lddqu\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_lddqu,
    &operand_data[1535],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:295 */
  {
    "*addv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1537],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:304 */
  {
    "sse_vmaddv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmaddv4sf3,
    &operand_data[1540],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:323 */
  {
    "*subv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1540],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:332 */
  {
    "sse_vmsubv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmsubv4sf3,
    &operand_data[1540],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:351 */
  {
    "*mulv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1537],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:360 */
  {
    "sse_vmmulv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmmulv4sf3,
    &operand_data[1540],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:379 */
  {
    "*divv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1540],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:388 */
  {
    "sse_vmdivv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmdivv4sf3,
    &operand_data[1540],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:400 */
  {
    "sse_rcpv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rcpps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_rcpv4sf2,
    &operand_data[1543],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:409 */
  {
    "sse_vmrcpv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rcpss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmrcpv4sf2,
    &operand_data[1543],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:421 */
  {
    "sse_rsqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrtps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_rsqrtv4sf2,
    &operand_data[1543],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:430 */
  {
    "sse_vmrsqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrtss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmrsqrtv4sf2,
    &operand_data[1543],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:442 */
  {
    "sqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqrtps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrtv4sf2,
    &operand_data[1543],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:450 */
  {
    "sse_vmsqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqrtss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmsqrtv4sf2,
    &operand_data[1543],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:476 */
  {
    "*smaxv4sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1537],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:486 */
  {
    "*smaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1540],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:495 */
  {
    "sse_vmsmaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmsmaxv4sf3,
    &operand_data[1540],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:518 */
  {
    "*sminv4sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1537],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:528 */
  {
    "*sminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1540],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:537 */
  {
    "sse_vmsminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmsminv4sf3,
    &operand_data[1540],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:555 */
  {
    "*ieee_sminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1540],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:565 */
  {
    "*ieee_smaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1540],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:575 */
  {
    "*ieee_sminv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1546],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:585 */
  {
    "*ieee_smaxv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1546],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:595 */
  {
    "sse3_addsubv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addsubps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_addsubv4sf3,
    &operand_data[1540],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:608 */
  {
    "sse3_haddv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "haddps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_haddv4sf3,
    &operand_data[1540],
    3,
    6,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:634 */
  {
    "sse3_hsubv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "hsubps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_hsubv4sf3,
    &operand_data[1540],
    3,
    6,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:700 */
  {
    "sse_maskcmpv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3ps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_maskcmpv4sf3,
    &operand_data[1549],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:710 */
  {
    "sse_vmmaskcmpv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3ss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmmaskcmpv4sf3,
    &operand_data[1553],
    4,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:723 */
  {
    "sse_comi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "comiss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_comi,
    &operand_data[1557],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:737 */
  {
    "sse_ucomi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ucomiss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_ucomi,
    &operand_data[1557],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:780 */
  {
    "*andv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1537],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:789 */
  {
    "sse_nandv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_nandv4sf3,
    &operand_data[1540],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:805 */
  {
    "*iorv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1537],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:821 */
  {
    "*xorv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1537],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:835 */
  {
    "*andsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1559],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:844 */
  {
    "*nandsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1559],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:853 */
  {
    "*iorsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1559],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:862 */
  {
    "*xorsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1559],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:877 */
  {
    "sse_cvtpi2ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtpi2ps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtpi2ps,
    &operand_data[1562],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:889 */
  {
    "sse_cvtps2pi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtps2pi\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtps2pi,
    &operand_data[1565],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:901 */
  {
    "sse_cvttps2pi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttps2pi\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvttps2pi,
    &operand_data[1565],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:912 */
  {
    "sse_cvtsi2ss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2ss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtsi2ss,
    &operand_data[1567],
    3,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:925 */
  {
    "sse_cvtsi2ssq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2ssq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtsi2ssq,
    &operand_data[1570],
    3,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:938 */
  {
    "sse_cvtss2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtss2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtss2si,
    &operand_data[1573],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:951 */
  {
    "sse_cvtss2siq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtss2siq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtss2siq,
    &operand_data[1575],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:964 */
  {
    "sse_cvttss2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttss2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvttss2si,
    &operand_data[1573],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:976 */
  {
    "sse_cvttss2siq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttss2siq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvttss2siq,
    &operand_data[1575],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:988 */
  {
    "sse2_cvtdq2ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtdq2ps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtdq2ps,
    &operand_data[1577],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:996 */
  {
    "sse2_cvtps2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtps2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtps2dq,
    &operand_data[1579],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1005 */
  {
    "sse2_cvttps2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttps2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvttps2dq,
    &operand_data[1579],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1019 */
  {
    "sse_movhlps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_846 },
#else
    { 0, output_846, 0 },
#endif
    (insn_gen_fn) gen_sse_movhlps,
    &operand_data[1581],
    3,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1037 */
  {
    "sse_movlhps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_847 },
#else
    { 0, output_847, 0 },
#endif
    (insn_gen_fn) gen_sse_movlhps,
    &operand_data[1584],
    3,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1055 */
  {
    "sse_unpckhps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "unpckhps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_unpckhps,
    &operand_data[1540],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1068 */
  {
    "sse_unpcklps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "unpcklps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_unpcklps,
    &operand_data[1540],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1083 */
  {
    "sse3_movshdup",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movshdup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_movshdup,
    &operand_data[1543],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1098 */
  {
    "sse3_movsldup",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movsldup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_movsldup,
    &operand_data[1543],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1129 */
  {
    "sse_shufps_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_852 },
#else
    { 0, 0, output_852 },
#endif
    (insn_gen_fn) gen_sse_shufps_1,
    &operand_data[1587],
    7,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1153 */
  {
    "sse_storehps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_853 },
#else
    { 0, output_853, 0 },
#endif
    (insn_gen_fn) gen_sse_storehps,
    &operand_data[1594],
    2,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1166 */
  {
    "sse_loadhps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_854 },
#else
    { 0, output_854, 0 },
#endif
    (insn_gen_fn) gen_sse_loadhps,
    &operand_data[1596],
    3,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1181 */
  {
    "sse_storelps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_855 },
#else
    { 0, output_855, 0 },
#endif
    (insn_gen_fn) gen_sse_storelps,
    &operand_data[1599],
    2,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1194 */
  {
    "sse_loadlps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_856 },
#else
    { 0, output_856, 0 },
#endif
    (insn_gen_fn) gen_sse_loadlps,
    &operand_data[1601],
    3,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1209 */
  {
    "sse_movss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movss,
    &operand_data[1553],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1220 */
  {
    "*vec_dupv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shufps\t{$0, %0, %0|%0, %0, 0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1604],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1232 */
  {
    "*sse_concatv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_859 },
#else
    { 0, output_859, 0 },
#endif
    0,
    &operand_data[1606],
    3,
    0,
    4,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1246 */
  {
    "*sse_concatv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_860 },
#else
    { 0, output_860, 0 },
#endif
    0,
    &operand_data[1609],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1267 */
  {
    "*vec_setv4sf_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_861 },
#else
    { 0, output_861, 0 },
#endif
    0,
    &operand_data[1612],
    3,
    0,
    4,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1308 */
  {
    "*vec_extractv4sf_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1615],
    2,
    0,
    3,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1363 */
  {
    "*addv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1617],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1372 */
  {
    "sse2_vmaddv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmaddv2df3,
    &operand_data[1546],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1391 */
  {
    "*subv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1546],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1400 */
  {
    "sse2_vmsubv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmsubv2df3,
    &operand_data[1546],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1419 */
  {
    "*mulv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1617],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1428 */
  {
    "sse2_vmmulv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmmulv2df3,
    &operand_data[1546],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1447 */
  {
    "*divv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1546],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1456 */
  {
    "sse2_vmdivv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmdivv2df3,
    &operand_data[1546],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1468 */
  {
    "sqrtv2df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqrtpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrtv2df2,
    &operand_data[1620],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1476 */
  {
    "sse2_vmsqrtv2df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqrtsd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmsqrtv2df2,
    &operand_data[1622],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1502 */
  {
    "*smaxv2df3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1617],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1512 */
  {
    "*smaxv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1546],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1521 */
  {
    "sse2_vmsmaxv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmsmaxv2df3,
    &operand_data[1546],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1544 */
  {
    "*sminv2df3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1617],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1554 */
  {
    "*sminv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1546],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1563 */
  {
    "sse2_vmsminv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmsminv2df3,
    &operand_data[1546],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1575 */
  {
    "sse3_addsubv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addsubpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_addsubv2df3,
    &operand_data[1546],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1588 */
  {
    "sse3_haddv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "haddpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_haddv2df3,
    &operand_data[1546],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1606 */
  {
    "sse3_hsubv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "hsubpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_hsubv2df3,
    &operand_data[1546],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1639 */
  {
    "sse2_maskcmpv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3pd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_maskcmpv2df3,
    &operand_data[1625],
    4,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1649 */
  {
    "sse2_vmmaskcmpv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3sd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmmaskcmpv2df3,
    &operand_data[1625],
    4,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1662 */
  {
    "sse2_comi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "comisd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_comi,
    &operand_data[1629],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1676 */
  {
    "sse2_ucomi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ucomisd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_ucomi,
    &operand_data[1629],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1719 */
  {
    "*andv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1617],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1728 */
  {
    "sse2_nandv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_nandv2df3,
    &operand_data[1546],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1744 */
  {
    "*iorv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1617],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1760 */
  {
    "*xorv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1617],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1774 */
  {
    "*anddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1631],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1783 */
  {
    "*nanddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1631],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1792 */
  {
    "*iordf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1631],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1801 */
  {
    "*xordf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1631],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1816 */
  {
    "sse2_cvtpi2pd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtpi2pd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtpi2pd,
    &operand_data[1634],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1825 */
  {
    "sse2_cvtpd2pi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtpd2pi\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtpd2pi,
    &operand_data[1636],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1835 */
  {
    "sse2_cvttpd2pi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttpd2pi\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvttpd2pi,
    &operand_data[1636],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1844 */
  {
    "sse2_cvtsi2sd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2sd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtsi2sd,
    &operand_data[1638],
    3,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1857 */
  {
    "sse2_cvtsi2sdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2sdq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtsi2sdq,
    &operand_data[1641],
    3,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1870 */
  {
    "sse2_cvtsd2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsd2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtsd2si,
    &operand_data[1644],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1883 */
  {
    "sse2_cvtsd2siq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsd2siq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtsd2siq,
    &operand_data[1646],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1896 */
  {
    "sse2_cvttsd2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttsd2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvttsd2si,
    &operand_data[1644],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1908 */
  {
    "sse2_cvttsd2siq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttsd2siq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvttsd2siq,
    &operand_data[1646],
    2,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1920 */
  {
    "sse2_cvtdq2pd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtdq2pd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtdq2pd,
    &operand_data[1648],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1940 */
  {
    "*sse2_cvtpd2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtpd2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1650],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1959 */
  {
    "*sse2_cvttpd2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttpd2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1650],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1969 */
  {
    "sse2_cvtsd2ss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsd2ss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtsd2ss,
    &operand_data[1653],
    3,
    0,
    2,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1983 */
  {
    "sse2_cvtss2sd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtss2sd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtss2sd,
    &operand_data[1656],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2006 */
  {
    "*sse2_cvtpd2ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtpd2ps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1659],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2017 */
  {
    "sse2_cvtps2pd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtps2pd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtps2pd,
    &operand_data[1662],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2034 */
  {
    "sse2_unpckhpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_910 },
#else
    { 0, output_910, 0 },
#endif
    (insn_gen_fn) gen_sse2_unpckhpd,
    &operand_data[1664],
    3,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2050 */
  {
    "*sse3_movddup",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_911 },
#else
    { 0, output_911, 0 },
#endif
    0,
    &operand_data[1667],
    2,
    1,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2082 */
  {
    "sse2_unpcklpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_912 },
#else
    { 0, output_912, 0 },
#endif
    (insn_gen_fn) gen_sse2_unpcklpd,
    &operand_data[1669],
    3,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2112 */
  {
    "sse2_shufpd_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_913 },
#else
    { 0, 0, output_913 },
#endif
    (insn_gen_fn) gen_sse2_shufpd_1,
    &operand_data[1672],
    5,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2132 */
  {
    "sse2_storehpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_914 },
#else
    { 0, output_914, 0 },
#endif
    (insn_gen_fn) gen_sse2_storehpd,
    &operand_data[1677],
    2,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2156 */
  {
    "sse2_storelpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_915 },
#else
    { 0, output_915, 0 },
#endif
    (insn_gen_fn) gen_sse2_storelpd,
    &operand_data[1679],
    2,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2186 */
  {
    "sse2_loadhpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_916 },
#else
    { 0, output_916, 0 },
#endif
    (insn_gen_fn) gen_sse2_loadhpd,
    &operand_data[1681],
    3,
    0,
    4,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2213 */
  {
    "sse2_loadlpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_917 },
#else
    { 0, output_917, 0 },
#endif
    (insn_gen_fn) gen_sse2_loadlpd,
    &operand_data[1684],
    3,
    0,
    6,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2244 */
  {
    "*vec_extractv2df_1_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_918 },
#else
    { 0, output_918, 0 },
#endif
    0,
    &operand_data[1687],
    2,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2258 */
  {
    "*vec_extractv2df_0_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_919 },
#else
    { 0, output_919, 0 },
#endif
    0,
    &operand_data[1689],
    2,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2272 */
  {
    "sse2_movsd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_920 },
#else
    { 0, output_920, 0 },
#endif
    (insn_gen_fn) gen_sse2_movsd,
    &operand_data[1691],
    3,
    0,
    6,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2289 */
  {
    "*vec_dupv2df_sse3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movddup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1694],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2298 */
  {
    "*vec_dupv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "unpcklpd\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1696],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2307 */
  {
    "*vec_concatv2df_sse3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movddup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1694],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2317 */
  {
    "*vec_concatv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_924 },
#else
    { 0, output_924, 0 },
#endif
    0,
    &operand_data[1698],
    3,
    0,
    5,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2384 */
  {
    "*addv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1701],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2384 */
  {
    "*addv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1704],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2384 */
  {
    "*addv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1707],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2384 */
  {
    "*addv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1710],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2394 */
  {
    "sse2_ssaddv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_ssaddv16qi3,
    &operand_data[1701],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2394 */
  {
    "sse2_ssaddv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_ssaddv8hi3,
    &operand_data[1704],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2404 */
  {
    "sse2_usaddv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_usaddv16qi3,
    &operand_data[1701],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2404 */
  {
    "sse2_usaddv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_usaddv8hi3,
    &operand_data[1704],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2421 */
  {
    "*subv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1713],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2421 */
  {
    "*subv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1716],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2421 */
  {
    "*subv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1719],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2421 */
  {
    "*subv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1722],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2431 */
  {
    "sse2_sssubv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_sssubv16qi3,
    &operand_data[1713],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2431 */
  {
    "sse2_sssubv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_sssubv8hi3,
    &operand_data[1716],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2441 */
  {
    "sse2_ussubv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_ussubv16qi3,
    &operand_data[1713],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2441 */
  {
    "sse2_ussubv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_ussubv8hi3,
    &operand_data[1716],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2502 */
  {
    "*mulv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmullw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1704],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2511 */
  {
    "sse2_smulv8hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_smulv8hi3_highpart,
    &operand_data[1704],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2526 */
  {
    "sse2_umulv8hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhuw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_umulv8hi3_highpart,
    &operand_data[1704],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2541 */
  {
    "sse2_umulv2siv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmuludq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_umulv2siv2di3,
    &operand_data[1725],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2557 */
  {
    "sse2_pmaddwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaddwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_pmaddwd,
    &operand_data[1728],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2725 */
  {
    "ashrv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psraw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv8hi3,
    &operand_data[1731],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2725 */
  {
    "ashrv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrad\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv4si3,
    &operand_data[1734],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2735 */
  {
    "lshrv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv8hi3,
    &operand_data[1731],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2735 */
  {
    "lshrv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv4si3,
    &operand_data[1734],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2735 */
  {
    "lshrv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv2di3,
    &operand_data[1737],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2745 */
  {
    "ashlv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv8hi3,
    &operand_data[1731],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2745 */
  {
    "ashlv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pslld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv4si3,
    &operand_data[1734],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2745 */
  {
    "ashlv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv2di3,
    &operand_data[1737],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2755 */
  {
    "sse2_ashlti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_954 },
#else
    { 0, 0, output_954 },
#endif
    (insn_gen_fn) gen_sse2_ashlti3,
    &operand_data[1740],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2779 */
  {
    "sse2_lshrti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_955 },
#else
    { 0, 0, output_955 },
#endif
    (insn_gen_fn) gen_sse2_lshrti3,
    &operand_data[1740],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2810 */
  {
    "*umaxv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxub\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1701],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2826 */
  {
    "*smaxv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1704],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2895 */
  {
    "*uminv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminub\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1701],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2911 */
  {
    "*sminv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1704],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2966 */
  {
    "sse2_eqv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_eqv16qi3,
    &operand_data[1701],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2966 */
  {
    "sse2_eqv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_eqv8hi3,
    &operand_data[1704],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2966 */
  {
    "sse2_eqv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_eqv4si3,
    &operand_data[1707],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2976 */
  {
    "sse2_gtv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_gtv16qi3,
    &operand_data[1713],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2976 */
  {
    "sse2_gtv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_gtv8hi3,
    &operand_data[1716],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2976 */
  {
    "sse2_gtv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_gtv4si3,
    &operand_data[1719],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3046 */
  {
    "*andv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1701],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3046 */
  {
    "*andv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1704],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3046 */
  {
    "*andv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1707],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3046 */
  {
    "*andv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1710],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3056 */
  {
    "sse2_nandv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_nandv16qi3,
    &operand_data[1713],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3056 */
  {
    "sse2_nandv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_nandv8hi3,
    &operand_data[1716],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3056 */
  {
    "sse2_nandv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_nandv4si3,
    &operand_data[1719],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3056 */
  {
    "sse2_nandv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_nandv2di3,
    &operand_data[1722],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3073 */
  {
    "*iorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1701],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3073 */
  {
    "*iorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1704],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3073 */
  {
    "*iorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1707],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3073 */
  {
    "*iorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1710],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3090 */
  {
    "*xorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1701],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3090 */
  {
    "*xorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1704],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3090 */
  {
    "*xorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1707],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3090 */
  {
    "*xorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1710],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3106 */
  {
    "sse2_packsswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packsswb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_packsswb,
    &operand_data[1743],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3118 */
  {
    "sse2_packssdw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packssdw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_packssdw,
    &operand_data[1746],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3130 */
  {
    "sse2_packuswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packuswb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_packuswb,
    &operand_data[1743],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3142 */
  {
    "sse2_punpckhbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpckhbw,
    &operand_data[1713],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3161 */
  {
    "sse2_punpcklbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpcklbw,
    &operand_data[1713],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3180 */
  {
    "sse2_punpckhwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpckhwd,
    &operand_data[1716],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3195 */
  {
    "sse2_punpcklwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpcklwd,
    &operand_data[1716],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3210 */
  {
    "sse2_punpckhdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhdq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpckhdq,
    &operand_data[1719],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3223 */
  {
    "sse2_punpckldq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckldq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpckldq,
    &operand_data[1719],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3236 */
  {
    "sse2_punpckhqdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhqdq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpckhqdq,
    &operand_data[1722],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3249 */
  {
    "sse2_punpcklqdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklqdq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpcklqdq,
    &operand_data[1722],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3275 */
  {
    "*sse2_pinsrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_993 },
#else
    { 0, 0, output_993 },
#endif
    0,
    &operand_data[1749],
    4,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3290 */
  {
    "sse2_pextrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pextrw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_pextrw,
    &operand_data[1753],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3316 */
  {
    "sse2_pshufd_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_995 },
#else
    { 0, 0, output_995 },
#endif
    (insn_gen_fn) gen_sse2_pshufd_1,
    &operand_data[1756],
    6,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3353 */
  {
    "sse2_pshuflw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_996 },
#else
    { 0, 0, output_996 },
#endif
    (insn_gen_fn) gen_sse2_pshuflw_1,
    &operand_data[1762],
    6,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3394 */
  {
    "sse2_pshufhw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_997 },
#else
    { 0, 0, output_997 },
#endif
    (insn_gen_fn) gen_sse2_pshufhw_1,
    &operand_data[1768],
    6,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3430 */
  {
    "sse2_loadld",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_998 },
#else
    { 0, output_998, 0 },
#endif
    (insn_gen_fn) gen_sse2_loadld,
    &operand_data[1774],
    3,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3447 */
  {
    "sse2_stored",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_stored,
    &operand_data[1777],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3470 */
  {
    "*sse2_storeq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1779],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3489 */
  {
    "*vec_extractv2di_1_sse2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1001 },
#else
    { 0, output_1001, 0 },
#endif
    0,
    &operand_data[1781],
    2,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3504 */
  {
    "*vec_extractv2di_1_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1002 },
#else
    { 0, output_1002, 0 },
#endif
    0,
    &operand_data[1783],
    2,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3518 */
  {
    "*vec_dupv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1003 },
#else
    { 0, output_1003, 0 },
#endif
    0,
    &operand_data[1785],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3529 */
  {
    "*vec_dupv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1004 },
#else
    { 0, output_1004, 0 },
#endif
    0,
    &operand_data[1787],
    2,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3543 */
  {
    "*sse2_concatv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1005 },
#else
    { 0, output_1005, 0 },
#endif
    0,
    &operand_data[1789],
    3,
    0,
    4,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3557 */
  {
    "*sse1_concatv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1006 },
#else
    { 0, output_1006, 0 },
#endif
    0,
    &operand_data[1792],
    3,
    0,
    4,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3571 */
  {
    "*vec_concatv4si_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1007 },
#else
    { 0, output_1007, 0 },
#endif
    0,
    &operand_data[1795],
    3,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3584 */
  {
    "*vec_concatv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1008 },
#else
    { 0, output_1008, 0 },
#endif
    0,
    &operand_data[1798],
    3,
    0,
    6,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3730 */
  {
    "sse2_uavgv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pavgb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_uavgv16qi3,
    &operand_data[1701],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3754 */
  {
    "sse2_uavgv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pavgw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_uavgv8hi3,
    &operand_data[1704],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3776 */
  {
    "sse2_psadbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psadbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_psadbw,
    &operand_data[1801],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3786 */
  {
    "sse_movmskps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movmskps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movmskps,
    &operand_data[1804],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3795 */
  {
    "sse2_movmskpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movmskpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movmskpd,
    &operand_data[1806],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3804 */
  {
    "sse2_pmovmskb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovmskb\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_pmovmskb,
    &operand_data[1808],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3822 */
  {
    "*sse2_maskmovdqu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maskmovdqu\t{%2, %1|%1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1810],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3834 */
  {
    "*sse2_maskmovdqu_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maskmovdqu\t{%2, %1|%1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1813],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3846 */
  {
    "sse_ldmxcsr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldmxcsr\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_ldmxcsr,
    &operand_data[51],
    1,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3854 */
  {
    "sse_stmxcsr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stmxcsr\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_stmxcsr,
    &operand_data[284],
    1,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3871 */
  {
    "*sse_sfence",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sfence",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1816],
    1,
    1,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3879 */
  {
    "sse2_clflush",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "clflush\t%a0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_clflush,
    &operand_data[1817],
    1,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3896 */
  {
    "*sse2_mfence",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfence",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1816],
    1,
    1,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3913 */
  {
    "*sse2_lfence",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lfence",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1816],
    1,
    1,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3921 */
  {
    "sse3_mwait",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mwait",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_mwait,
    &operand_data[1818],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3932 */
  {
    "sse3_monitor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "monitor\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_monitor,
    &operand_data[1818],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3941 */
  {
    "sse3_monitor64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "monitor",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_monitor64,
    &operand_data[1821],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:65 */
  {
    "*movv8qi_internal_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1026 },
#else
    { 0, output_1026, 0 },
#endif
    0,
    &operand_data[1824],
    2,
    0,
    12,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:65 */
  {
    "*movv4hi_internal_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1027 },
#else
    { 0, output_1027, 0 },
#endif
    0,
    &operand_data[1826],
    2,
    0,
    12,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:65 */
  {
    "*movv2si_internal_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1028 },
#else
    { 0, output_1028, 0 },
#endif
    0,
    &operand_data[1828],
    2,
    0,
    12,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:89 */
  {
    "*movv8qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1029 },
#else
    { 0, output_1029, 0 },
#endif
    0,
    &operand_data[1830],
    2,
    0,
    14,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:89 */
  {
    "*movv4hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1030 },
#else
    { 0, output_1030, 0 },
#endif
    0,
    &operand_data[1832],
    2,
    0,
    14,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:89 */
  {
    "*movv2si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1031 },
#else
    { 0, output_1031, 0 },
#endif
    0,
    &operand_data[1834],
    2,
    0,
    14,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:124 */
  {
    "*movv2sf_internal_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1032 },
#else
    { 0, output_1032, 0 },
#endif
    0,
    &operand_data[1836],
    2,
    0,
    13,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:149 */
  {
    "*movv2sf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1033 },
#else
    { 0, output_1033, 0 },
#endif
    0,
    &operand_data[1838],
    2,
    0,
    11,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:199 */
  {
    "sse_movntdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movntdi,
    &operand_data[1840],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:214 */
  {
    "mmx_addv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfadd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_addv2sf3,
    &operand_data[1842],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:223 */
  {
    "mmx_subv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1036 },
#else
    { 0, output_1036, 0 },
#endif
    (insn_gen_fn) gen_mmx_subv2sf3,
    &operand_data[1845],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:241 */
  {
    "mmx_mulv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmul\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_mulv2sf3,
    &operand_data[1842],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:250 */
  {
    "mmx_smaxv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmax\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_smaxv2sf3,
    &operand_data[1842],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:259 */
  {
    "mmx_sminv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmin\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_sminv2sf3,
    &operand_data[1842],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:268 */
  {
    "mmx_rcpv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrcp\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rcpv2sf2,
    &operand_data[1848],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:277 */
  {
    "mmx_rcpit1v2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrcpit1\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rcpit1v2sf3,
    &operand_data[1850],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:287 */
  {
    "mmx_rcpit2v2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrcpit2\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rcpit2v2sf3,
    &operand_data[1850],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:297 */
  {
    "mmx_rsqrtv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrsqrt\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rsqrtv2sf2,
    &operand_data[1848],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:306 */
  {
    "mmx_rsqit1v2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrsqit1\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rsqit1v2sf3,
    &operand_data[1850],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:316 */
  {
    "mmx_haddv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfacc\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_haddv2sf3,
    &operand_data[1850],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:334 */
  {
    "mmx_hsubv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfnacc\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_hsubv2sf3,
    &operand_data[1850],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:352 */
  {
    "mmx_addsubv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfpnacc\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_addsubv2sf3,
    &operand_data[1850],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:371 */
  {
    "mmx_gtv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfcmpgt\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv2sf3,
    &operand_data[1853],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:380 */
  {
    "mmx_gev2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfcmpge\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gev2sf3,
    &operand_data[1853],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:389 */
  {
    "mmx_eqv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfcmpeq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_eqv2sf3,
    &operand_data[1856],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:404 */
  {
    "mmx_pf2id",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pf2id\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pf2id,
    &operand_data[1859],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:412 */
  {
    "mmx_pf2iw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pf2iw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pf2iw,
    &operand_data[1859],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:423 */
  {
    "mmx_pi2fw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pi2fw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pi2fw,
    &operand_data[1861],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:434 */
  {
    "mmx_floatv2si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pi2fd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_floatv2si2,
    &operand_data[1861],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:448 */
  {
    "mmx_pswapdv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pswapd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pswapdv2sf2,
    &operand_data[1848],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:457 */
  {
    "*vec_dupv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckldq\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1863],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:466 */
  {
    "*mmx_concatv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1057 },
#else
    { 0, output_1057, 0 },
#endif
    0,
    &operand_data[1865],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:489 */
  {
    "*vec_extractv2sf_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1868],
    2,
    0,
    5,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:508 */
  {
    "*vec_extractv2sf_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1059 },
#else
    { 0, output_1059, 0 },
#endif
    0,
    &operand_data[1870],
    2,
    0,
    3,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:560 */
  {
    "mmx_addv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_addv8qi3,
    &operand_data[1872],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:560 */
  {
    "mmx_addv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_addv4hi3,
    &operand_data[1875],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:560 */
  {
    "mmx_addv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_addv2si3,
    &operand_data[1878],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:570 */
  {
    "mmx_adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_adddi3,
    &operand_data[1881],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:581 */
  {
    "mmx_ssaddv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ssaddv8qi3,
    &operand_data[1872],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:581 */
  {
    "mmx_ssaddv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ssaddv4hi3,
    &operand_data[1875],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:591 */
  {
    "mmx_usaddv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_usaddv8qi3,
    &operand_data[1872],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:591 */
  {
    "mmx_usaddv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_usaddv4hi3,
    &operand_data[1875],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:601 */
  {
    "mmx_subv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_subv8qi3,
    &operand_data[1884],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:601 */
  {
    "mmx_subv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_subv4hi3,
    &operand_data[1887],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:601 */
  {
    "mmx_subv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_subv2si3,
    &operand_data[1890],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:611 */
  {
    "mmx_subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_subdi3,
    &operand_data[1893],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:622 */
  {
    "mmx_sssubv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_sssubv8qi3,
    &operand_data[1884],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:622 */
  {
    "mmx_sssubv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_sssubv4hi3,
    &operand_data[1887],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:632 */
  {
    "mmx_ussubv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ussubv8qi3,
    &operand_data[1884],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:632 */
  {
    "mmx_ussubv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ussubv4hi3,
    &operand_data[1887],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:642 */
  {
    "mmx_mulv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmullw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_mulv4hi3,
    &operand_data[1875],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:651 */
  {
    "mmx_smulv4hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_smulv4hi3_highpart,
    &operand_data[1875],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:665 */
  {
    "mmx_umulv4hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhuw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_umulv4hi3_highpart,
    &operand_data[1875],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:680 */
  {
    "mmx_pmaddwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaddwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pmaddwd,
    &operand_data[1896],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:704 */
  {
    "mmx_pmulhrwv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhrw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pmulhrwv4hi3,
    &operand_data[1875],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:722 */
  {
    "sse2_umulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmuludq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_umulsidi3,
    &operand_data[1899],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:738 */
  {
    "mmx_umaxv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxub\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_umaxv8qi3,
    &operand_data[1872],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:748 */
  {
    "mmx_smaxv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_smaxv4hi3,
    &operand_data[1875],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:758 */
  {
    "mmx_uminv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminub\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_uminv8qi3,
    &operand_data[1872],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:768 */
  {
    "mmx_sminv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_sminv4hi3,
    &operand_data[1875],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:778 */
  {
    "mmx_ashrv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psraw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashrv4hi3,
    &operand_data[1902],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:778 */
  {
    "mmx_ashrv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrad\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashrv2si3,
    &operand_data[1905],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:788 */
  {
    "mmx_lshrv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_lshrv4hi3,
    &operand_data[1902],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:788 */
  {
    "mmx_lshrv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_lshrv2si3,
    &operand_data[1905],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:798 */
  {
    "mmx_lshrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_lshrdi3,
    &operand_data[1908],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:809 */
  {
    "mmx_ashlv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashlv4hi3,
    &operand_data[1902],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:809 */
  {
    "mmx_ashlv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pslld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashlv2si3,
    &operand_data[1905],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:819 */
  {
    "mmx_ashldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashldi3,
    &operand_data[1908],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:836 */
  {
    "mmx_eqv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_eqv8qi3,
    &operand_data[1872],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:836 */
  {
    "mmx_eqv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_eqv4hi3,
    &operand_data[1875],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:836 */
  {
    "mmx_eqv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_eqv2si3,
    &operand_data[1878],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:846 */
  {
    "mmx_gtv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv8qi3,
    &operand_data[1884],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:846 */
  {
    "mmx_gtv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv4hi3,
    &operand_data[1887],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:846 */
  {
    "mmx_gtv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv2si3,
    &operand_data[1890],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:862 */
  {
    "mmx_andv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_andv8qi3,
    &operand_data[1872],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:862 */
  {
    "mmx_andv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_andv4hi3,
    &operand_data[1875],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:862 */
  {
    "mmx_andv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_andv2si3,
    &operand_data[1878],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:872 */
  {
    "mmx_nandv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_nandv8qi3,
    &operand_data[1884],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:872 */
  {
    "mmx_nandv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_nandv4hi3,
    &operand_data[1887],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:872 */
  {
    "mmx_nandv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_nandv2si3,
    &operand_data[1890],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:882 */
  {
    "mmx_iorv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_iorv8qi3,
    &operand_data[1872],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:882 */
  {
    "mmx_iorv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_iorv4hi3,
    &operand_data[1875],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:882 */
  {
    "mmx_iorv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_iorv2si3,
    &operand_data[1878],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:892 */
  {
    "mmx_xorv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_xorv8qi3,
    &operand_data[1872],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:892 */
  {
    "mmx_xorv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_xorv4hi3,
    &operand_data[1875],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:892 */
  {
    "mmx_xorv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_xorv2si3,
    &operand_data[1878],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:909 */
  {
    "mmx_packsswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packsswb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_packsswb,
    &operand_data[1911],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:921 */
  {
    "mmx_packssdw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packssdw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_packssdw,
    &operand_data[1914],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:933 */
  {
    "mmx_packuswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packuswb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_packuswb,
    &operand_data[1911],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:945 */
  {
    "mmx_punpckhbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpckhbw,
    &operand_data[1884],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:960 */
  {
    "mmx_punpcklbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpcklbw,
    &operand_data[1884],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:975 */
  {
    "mmx_punpckhwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpckhwd,
    &operand_data[1887],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:988 */
  {
    "mmx_punpcklwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpcklwd,
    &operand_data[1887],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1001 */
  {
    "mmx_punpckhdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhdq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpckhdq,
    &operand_data[1890],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1014 */
  {
    "mmx_punpckldq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckldq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpckldq,
    &operand_data[1890],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1040 */
  {
    "*mmx_pinsrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1121 },
#else
    { 0, 0, output_1121 },
#endif
    0,
    &operand_data[1917],
    4,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1055 */
  {
    "mmx_pextrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pextrw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pextrw,
    &operand_data[1921],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1081 */
  {
    "mmx_pshufw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1123 },
#else
    { 0, 0, output_1123 },
#endif
    (insn_gen_fn) gen_mmx_pshufw_1,
    &operand_data[1924],
    6,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1103 */
  {
    "mmx_pswapdv2si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pswapd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pswapdv2si2,
    &operand_data[1930],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1113 */
  {
    "*vec_dupv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshufw\t{$0, %0, %0|%0, %0, 0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1932],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1123 */
  {
    "*vec_dupv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckldq\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1934],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1132 */
  {
    "*mmx_concatv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1127 },
#else
    { 0, output_1127, 0 },
#endif
    0,
    &operand_data[1936],
    3,
    0,
    2,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1155 */
  {
    "*vec_extractv2si_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1939],
    2,
    0,
    5,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1174 */
  {
    "*vec_extractv2si_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1129 },
#else
    { 0, output_1129, 0 },
#endif
    0,
    &operand_data[1941],
    2,
    0,
    5,
    2
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1290 */
  {
    "mmx_uavgv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1130 },
#else
    { 0, 0, output_1130 },
#endif
    (insn_gen_fn) gen_mmx_uavgv8qi3,
    &operand_data[1872],
    3,
    0,
    1,
    3
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1318 */
  {
    "mmx_uavgv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pavgw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_uavgv4hi3,
    &operand_data[1875],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1337 */
  {
    "mmx_psadbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psadbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_psadbw,
    &operand_data[1943],
    3,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1347 */
  {
    "mmx_pmovmskb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovmskb\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pmovmskb,
    &operand_data[1946],
    2,
    0,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1365 */
  {
    "*mmx_maskmovq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maskmovq\t{%2, %1|%1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1948],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1377 */
  {
    "*mmx_maskmovq_rex",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maskmovq\t{%2, %1|%1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1951],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1389 */
  {
    "mmx_emms",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "emms",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_emms,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1412 */
  {
    "mmx_femms",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "femms",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_femms,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:74 */
  {
    "*sync_compare_and_swapqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg{b}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1954],
    4,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:74 */
  {
    "*sync_compare_and_swaphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg{w}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1958],
    4,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:74 */
  {
    "*sync_compare_and_swapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg{l}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1962],
    4,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:74 */
  {
    "*sync_compare_and_swapdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg{q}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1966],
    4,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:87 */
  {
    "sync_double_compare_and_swapdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg8b\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_double_compare_and_swapdi,
    &operand_data[1970],
    5,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:87 */
  {
    "sync_double_compare_and_swapti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg16b\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_double_compare_and_swapti,
    &operand_data[1975],
    5,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:110 */
  {
    "*sync_double_compare_and_swapdi_pic",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%%ebx, %3\n\tlock\n\tcmpxchg8b\t%1\n\txchg{l}\t%%ebx, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1980],
    5,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:165 */
  {
    "*sync_compare_and_swap_ccqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg{b}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1954],
    4,
    6,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:165 */
  {
    "*sync_compare_and_swap_cchi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg{w}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1958],
    4,
    6,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:165 */
  {
    "*sync_compare_and_swap_ccsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg{l}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1962],
    4,
    6,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:165 */
  {
    "*sync_compare_and_swap_ccdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg{q}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1966],
    4,
    6,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:182 */
  {
    "sync_double_compare_and_swap_ccdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg8b\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_double_compare_and_swap_ccdi,
    &operand_data[1970],
    5,
    7,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:182 */
  {
    "sync_double_compare_and_swap_ccti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg16b\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_double_compare_and_swap_ccti,
    &operand_data[1975],
    5,
    7,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:203 */
  {
    "*sync_double_compare_and_swap_ccdi_pic",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%%ebx, %3\n\tlock\n\tcmpxchg8b\t%1\n\txchg{l}\t%%ebx, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1980],
    5,
    7,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:222 */
  {
    "sync_old_addqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\txadd{b}\t{%0, %1|%1, %0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_addqi,
    &operand_data[1985],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:222 */
  {
    "sync_old_addhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\txadd{w}\t{%0, %1|%1, %0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_addhi,
    &operand_data[1988],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:222 */
  {
    "sync_old_addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\txadd{l}\t{%0, %1|%1, %0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_addsi,
    &operand_data[1991],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:222 */
  {
    "sync_old_adddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\txadd{q}\t{%0, %1|%1, %0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_adddi,
    &operand_data[1994],
    3,
    2,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:234 */
  {
    "sync_lock_test_and_setqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_setqi,
    &operand_data[1985],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:234 */
  {
    "sync_lock_test_and_sethi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_sethi,
    &operand_data[1988],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:234 */
  {
    "sync_lock_test_and_setsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_setsi,
    &operand_data[1991],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:234 */
  {
    "sync_lock_test_and_setdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_setdi,
    &operand_data[1994],
    3,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:243 */
  {
    "sync_addqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tadd{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_addqi,
    &operand_data[1997],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:243 */
  {
    "sync_addhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tadd{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_addhi,
    &operand_data[1999],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:243 */
  {
    "sync_addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tadd{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_addsi,
    &operand_data[2001],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:243 */
  {
    "sync_adddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tadd{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_adddi,
    &operand_data[2003],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:253 */
  {
    "sync_subqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tsub{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_subqi,
    &operand_data[1997],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:253 */
  {
    "sync_subhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tsub{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_subhi,
    &operand_data[1999],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:253 */
  {
    "sync_subsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tsub{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_subsi,
    &operand_data[2001],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:253 */
  {
    "sync_subdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tsub{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_subdi,
    &operand_data[2003],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:263 */
  {
    "sync_iorqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tor{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_iorqi,
    &operand_data[1997],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:263 */
  {
    "sync_iorhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tor{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_iorhi,
    &operand_data[1999],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:263 */
  {
    "sync_iorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tor{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_iorsi,
    &operand_data[2001],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:263 */
  {
    "sync_iordi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tor{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_iordi,
    &operand_data[2003],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:273 */
  {
    "sync_andqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tand{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_andqi,
    &operand_data[1997],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:273 */
  {
    "sync_andhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tand{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_andhi,
    &operand_data[1999],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:273 */
  {
    "sync_andsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tand{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_andsi,
    &operand_data[2001],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:273 */
  {
    "sync_anddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tand{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_anddi,
    &operand_data[2003],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:283 */
  {
    "sync_xorqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\txor{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_xorqi,
    &operand_data[1997],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:283 */
  {
    "sync_xorhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\txor{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_xorhi,
    &operand_data[1999],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:283 */
  {
    "sync_xorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\txor{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_xorsi,
    &operand_data[2001],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:283 */
  {
    "sync_xordi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\txor{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_xordi,
    &operand_data[2003],
    2,
    1,
    1,
    1
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:490 */
  {
    "cmpti",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpti,
    &operand_data[2005],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:503 */
  {
    "cmpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpdi,
    &operand_data[2007],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:516 */
  {
    "cmpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsi,
    &operand_data[2009],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:529 */
  {
    "cmphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmphi,
    &operand_data[2011],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:542 */
  {
    "cmpqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpqi,
    &operand_data[2013],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:577 */
  {
    "cmpdi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpdi_1_rex64,
    &operand_data[2015],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:616 */
  {
    "cmpsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsi_1,
    &operand_data[9],
    2,
    0,
    2,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:740 */
  {
    "cmpqi_ext_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpqi_ext_3,
    &operand_data[2017],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:803 */
  {
    "cmpxf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpxf,
    &operand_data[2019],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:814 */
  {
    "cmpdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpdf,
    &operand_data[2021],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:825 */
  {
    "cmpsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsf,
    &operand_data[2023],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1071 */
  {
    "movsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsi,
    &operand_data[2025],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1273 */
  {
    "movhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movhi,
    &operand_data[2011],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1402 */
  {
    "movstricthi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movstricthi,
    &operand_data[2027],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1432 */
  {
    "movqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movqi,
    &operand_data[2013],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1533 */
  {
    "reload_outqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reload_outqi,
    &operand_data[2029],
    3,
    0,
    1,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1576 */
  {
    "movstrictqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movstrictqi,
    &operand_data[2032],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1814 */
  {
    "movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdi,
    &operand_data[2015],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1840 */
  {
    "movdi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2034],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1853 */
  {
    "movdi+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2034],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1866 */
  {
    "movdi+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2034],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1960 */
  {
    "movdi+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2037],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:1969 */
  {
    "movti-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2015],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2074 */
  {
    "movti-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2039],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2087 */
  {
    "movti-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2039],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2096 */
  {
    "movti-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2039],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2119 */
  {
    "movti",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movti,
    &operand_data[2042],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2209 */
  {
    "movti+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2043],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2217 */
  {
    "movsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsf,
    &operand_data[2045],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2249 */
  {
    "movsf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2047],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2261 */
  {
    "movsf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2049],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2268 */
  {
    "movdf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2049],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2379 */
  {
    "movdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdf,
    &operand_data[2051],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2415 */
  {
    "movdf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2053],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2423 */
  {
    "movdf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2053],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2431 */
  {
    "movxf-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2055],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2683 */
  {
    "movxf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2051],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2712 */
  {
    "movxf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movxf,
    &operand_data[2057],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2749 */
  {
    "movxf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2059],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2759 */
  {
    "movxf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2061],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2767 */
  {
    "movxf+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2061],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2845 */
  {
    "movtf-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2063],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2860 */
  {
    "movtf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2065],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2907 */
  {
    "movtf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movtf,
    &operand_data[2067],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2960 */
  {
    "movtf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2068],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2970 */
  {
    "zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhisi2,
    &operand_data[2070],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:2992 */
  {
    "zero_extendhisi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2072],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3009 */
  {
    "zero_extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqihi2,
    &operand_data[2073],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3045 */
  {
    "zero_extendqihi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2073],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3057 */
  {
    "zero_extendqihi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2073],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3070 */
  {
    "zero_extendqisi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2075],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3080 */
  {
    "zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqisi2,
    &operand_data[2077],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3115 */
  {
    "zero_extendqisi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2077],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3127 */
  {
    "zero_extendqisi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2077],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3141 */
  {
    "zero_extendsidi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2079],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3152 */
  {
    "zero_extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendsidi2,
    &operand_data[2081],
    2,
    0,
    1,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3189 */
  {
    "zero_extendsidi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2039],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3196 */
  {
    "zero_extendsidi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2083],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3205 */
  {
    "extendsidi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2085],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3233 */
  {
    "extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendsidi2,
    &operand_data[2087],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3284 */
  {
    "extendsidi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2090],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3299 */
  {
    "extendsidi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2090],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3329 */
  {
    "extendsidi2+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2087],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3465 */
  {
    "extendsidi2+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2093],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3472 */
  {
    "extendsidi2+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2093],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3485 */
  {
    "extendsfdf2-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2095],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3493 */
  {
    "extendsfdf2-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2095],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3501 */
  {
    "extendsfdf2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2097],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3509 */
  {
    "extendsfdf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2097],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3517 */
  {
    "extendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendsfdf2,
    &operand_data[2099],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3600 */
  {
    "extendsfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendsfxf2,
    &operand_data[2101],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3648 */
  {
    "extenddfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extenddfxf2,
    &operand_data[2103],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3704 */
  {
    "truncdfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_truncdfsf2,
    &operand_data[2105],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3725 */
  {
    "truncdfsf2_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_truncdfsf2_with_temp,
    &operand_data[2107],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3841 */
  {
    "truncdfsf2_with_temp+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2110],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3855 */
  {
    "truncxfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_truncxfsf2,
    &operand_data[2113],
    2,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3932 */
  {
    "truncxfsf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2115],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3942 */
  {
    "truncxfdf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2117],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:3953 */
  {
    "truncxfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_truncxfdf2,
    &operand_data[2120],
    2,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4030 */
  {
    "truncxfdf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2122],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4040 */
  {
    "fix_truncxfdi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2124],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4051 */
  {
    "fix_truncxfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncxfdi2,
    &operand_data[2127],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4064 */
  {
    "fix_truncsfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfdi2,
    &operand_data[2129],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4064 */
  {
    "fix_truncdfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfdi2,
    &operand_data[2131],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4088 */
  {
    "fix_truncxfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncxfsi2,
    &operand_data[2133],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4101 */
  {
    "fix_truncsfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi2,
    &operand_data[2135],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4101 */
  {
    "fix_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi2,
    &operand_data[2137],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4125 */
  {
    "fix_truncsfhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfhi2,
    &operand_data[2139],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4125 */
  {
    "fix_truncdfhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfhi2,
    &operand_data[2141],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4125 */
  {
    "fix_truncxfhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncxfhi2,
    &operand_data[2143],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4177 */
  {
    "fix_truncxfhi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2145],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4177 */
  {
    "fix_truncxfhi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2148],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4186 */
  {
    "fix_truncxfhi2+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2151],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4186 */
  {
    "fix_truncxfhi2+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2154],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4195 */
  {
    "fix_truncxfhi2+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2157],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4195 */
  {
    "fix_truncxfhi2+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2159],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4195 */
  {
    "fix_truncxfhi2+7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2161],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4249 */
  {
    "fix_truncxfhi2+8",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2163],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4249 */
  {
    "fix_truncxfhi2+9",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2167],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4249 */
  {
    "fix_truncxfhi2+10",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2171],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4260 */
  {
    "fix_truncxfhi2+11",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2175],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4260 */
  {
    "floathisf2-11",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2179],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4260 */
  {
    "floathisf2-10",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2183],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4275 */
  {
    "floathisf2-9",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2157],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4275 */
  {
    "floathisf2-8",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2159],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4275 */
  {
    "floathisf2-7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2161],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4337 */
  {
    "floathisf2-6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2187],
    6,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4352 */
  {
    "floathisf2-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2193],
    6,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4393 */
  {
    "floathisf2-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2199],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4393 */
  {
    "floathisf2-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2204],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4406 */
  {
    "floathisf2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2209],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4406 */
  {
    "floathisf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2214],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4442 */
  {
    "floathisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floathisf2,
    &operand_data[2140],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4467 */
  {
    "floatsisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatsisf2,
    &operand_data[2136],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4510 */
  {
    "floatdisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatdisf2,
    &operand_data[2130],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4553 */
  {
    "floathidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floathidf2,
    &operand_data[2138],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4578 */
  {
    "floatsidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatsidf2,
    &operand_data[2132],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4621 */
  {
    "floatdidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatdidf2,
    &operand_data[2219],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4701 */
  {
    "floatdidf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2221],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4716 */
  {
    "floatunssisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatunssisf2,
    &operand_data[2223],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4722 */
  {
    "floatunsdisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatunsdisf2,
    &operand_data[2225],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4728 */
  {
    "floatunsdidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatunsdidf2,
    &operand_data[2227],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4741 */
  {
    "addti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addti3,
    &operand_data[2229],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4757 */
  {
    "addti3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2229],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4780 */
  {
    "adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_adddi3,
    &operand_data[2232],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4796 */
  {
    "adddi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2235],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4911 */
  {
    "addsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addsi3,
    &operand_data[2238],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4955 */
  {
    "addsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2241],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:4986 */
  {
    "addsi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2245],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5007 */
  {
    "addsi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2249],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5036 */
  {
    "addsi3+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2253],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5056 */
  {
    "addsi3+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2257],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5089 */
  {
    "addhi3-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2262],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5168 */
  {
    "addhi3-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2267],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5430 */
  {
    "addhi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2270],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5511 */
  {
    "addhi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2273],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:5798 */
  {
    "addhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addhi3,
    &operand_data[2276],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6053 */
  {
    "addqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addqi3,
    &operand_data[2279],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6450 */
  {
    "addxf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addxf3,
    &operand_data[2282],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6457 */
  {
    "adddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_adddf3,
    &operand_data[2285],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6464 */
  {
    "addsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addsf3,
    &operand_data[2288],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6475 */
  {
    "subti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subti3,
    &operand_data[2229],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6491 */
  {
    "subti3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2229],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6510 */
  {
    "subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subdi3,
    &operand_data[2232],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6526 */
  {
    "subdi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2235],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6640 */
  {
    "subsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subsi3,
    &operand_data[2238],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6725 */
  {
    "subhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subhi3,
    &operand_data[2276],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6769 */
  {
    "subqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subqi3,
    &operand_data[2279],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6826 */
  {
    "subxf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subxf3,
    &operand_data[2282],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6833 */
  {
    "subdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subdf3,
    &operand_data[2285],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6840 */
  {
    "subsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subsf3,
    &operand_data[2288],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6849 */
  {
    "muldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_muldi3,
    &operand_data[2291],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6881 */
  {
    "mulsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsi3,
    &operand_data[2294],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6937 */
  {
    "mulhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulhi3,
    &operand_data[2297],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6965 */
  {
    "mulqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulqi3,
    &operand_data[2300],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:6989 */
  {
    "umulqihi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulqihi3,
    &operand_data[2303],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7015 */
  {
    "mulqihi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulqihi3,
    &operand_data[2303],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7039 */
  {
    "umulditi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulditi3,
    &operand_data[2306],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7066 */
  {
    "umulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulsidi3,
    &operand_data[2308],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7092 */
  {
    "mulditi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulditi3,
    &operand_data[2306],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7118 */
  {
    "mulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsidi3,
    &operand_data[2308],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7144 */
  {
    "umuldi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umuldi3_highpart,
    &operand_data[2311],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7180 */
  {
    "umulsi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulsi3_highpart,
    &operand_data[2315],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7237 */
  {
    "smuldi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_smuldi3_highpart,
    &operand_data[2319],
    4,
    0,
    1,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7272 */
  {
    "smulsi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_smulsi3_highpart,
    &operand_data[2315],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7329 */
  {
    "mulxf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulxf3,
    &operand_data[2282],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7336 */
  {
    "muldf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_muldf3,
    &operand_data[2285],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7343 */
  {
    "mulsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsf3,
    &operand_data[2288],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7374 */
  {
    "divxf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divxf3,
    &operand_data[2282],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7381 */
  {
    "divdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divdf3,
    &operand_data[2285],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7388 */
  {
    "divsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divsf3,
    &operand_data[2288],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7397 */
  {
    "divmoddi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divmoddi4,
    &operand_data[2323],
    4,
    2,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7445 */
  {
    "divmoddi4+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2323],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7480 */
  {
    "divmodsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divmodsi4,
    &operand_data[2327],
    4,
    2,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7528 */
  {
    "divmodsi4+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2327],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7601 */
  {
    "divmodsi4+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2323],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7644 */
  {
    "udivmodhi4-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2327],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7661 */
  {
    "udivmodhi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_udivmodhi4,
    &operand_data[2331],
    4,
    4,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7743 */
  {
    "testsi_ccno_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_testsi_ccno_1,
    &operand_data[2335],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7765 */
  {
    "testqi_ccz_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_testqi_ccz_1,
    &operand_data[2337],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7813 */
  {
    "testqi_ext_ccno_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_testqi_ext_ccno_0,
    &operand_data[2339],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7933 */
  {
    "testqi_ext_ccno_0+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2341],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:7991 */
  {
    "testqi_ext_ccno_0+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2346],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8012 */
  {
    "anddi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2341],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8036 */
  {
    "anddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_anddi3,
    &operand_data[2350],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8101 */
  {
    "andsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andsi3,
    &operand_data[2238],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8147 */
  {
    "andsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2065],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8156 */
  {
    "andsi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2017],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8165 */
  {
    "andhi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2017],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8223 */
  {
    "andhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andhi3,
    &operand_data[2276],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8268 */
  {
    "andqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andqi3,
    &operand_data[2279],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8464 */
  {
    "andqi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2353],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8485 */
  {
    "iordi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2356],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8509 */
  {
    "iordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iordi3,
    &operand_data[2232],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8556 */
  {
    "iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorsi3,
    &operand_data[2238],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8649 */
  {
    "iorhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorhi3,
    &operand_data[2276],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8692 */
  {
    "iorqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorqi3,
    &operand_data[2279],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8837 */
  {
    "iorqi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2353],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8858 */
  {
    "xordi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2356],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8882 */
  {
    "xordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xordi3,
    &operand_data[2232],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:8932 */
  {
    "xorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorsi3,
    &operand_data[2238],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9026 */
  {
    "xorhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorhi3,
    &operand_data[2276],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9069 */
  {
    "xorqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorqi3,
    &operand_data[2279],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9258 */
  {
    "xorqi_cc_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorqi_cc_ext_1,
    &operand_data[2359],
    3,
    2,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9278 */
  {
    "xorqi_cc_ext_1+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2353],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9299 */
  {
    "negti2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2356],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9320 */
  {
    "negti2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negti2,
    &operand_data[2042],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9335 */
  {
    "negti2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2042],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9357 */
  {
    "negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negdi2,
    &operand_data[2232],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9372 */
  {
    "negdi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2015],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9419 */
  {
    "negsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negsi2,
    &operand_data[2238],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9479 */
  {
    "neghi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_neghi2,
    &operand_data[2276],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9506 */
  {
    "negqi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negqi2,
    &operand_data[2279],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9535 */
  {
    "negsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negsf2,
    &operand_data[2362],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9541 */
  {
    "abssf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_abssf2,
    &operand_data[2362],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9577 */
  {
    "copysignsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_copysignsf3,
    &operand_data[2364],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9587 */
  {
    "copysignsf3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2366],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9615 */
  {
    "negdf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2370],
    6,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9631 */
  {
    "negdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negdf2,
    &operand_data[2376],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9637 */
  {
    "absdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_absdf2,
    &operand_data[2376],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9673 */
  {
    "copysigndf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_copysigndf3,
    &operand_data[2378],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9683 */
  {
    "copysigndf3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2380],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9711 */
  {
    "negxf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2384],
    6,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9727 */
  {
    "negxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negxf2,
    &operand_data[2390],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9733 */
  {
    "absxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_absxf2,
    &operand_data[2390],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9751 */
  {
    "absxf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2392],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9759 */
  {
    "absxf2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2395],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9787 */
  {
    "absxf2+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2399],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9811 */
  {
    "one_cmpldi2-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2402],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9849 */
  {
    "one_cmpldi2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2405],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:9875 */
  {
    "one_cmpldi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2408],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10009 */
  {
    "one_cmpldi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmpldi2,
    &operand_data[2232],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10035 */
  {
    "one_cmpldi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2411],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10051 */
  {
    "one_cmplsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplsi2,
    &operand_data[2238],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10086 */
  {
    "one_cmplsi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2415],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10114 */
  {
    "one_cmplhi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2419],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10129 */
  {
    "one_cmplhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplhi2,
    &operand_data[2276],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10155 */
  {
    "one_cmplhi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2423],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10171 */
  {
    "one_cmplqi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplqi2,
    &operand_data[2279],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10199 */
  {
    "one_cmplqi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2427],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10238 */
  {
    "ashlti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashlti3,
    &operand_data[2431],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10273 */
  {
    "ashlti3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2434],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10283 */
  {
    "x86_64_shift_adj-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2438],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10308 */
  {
    "x86_64_shift_adj",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_x86_64_shift_adj,
    &operand_data[2441],
    4,
    3,
    1,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10324 */
  {
    "ashldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashldi3,
    &operand_data[2445],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10375 */
  {
    "ashldi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2448],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10485 */
  {
    "ashldi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2451],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10496 */
  {
    "x86_shift_adj_1-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2451],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10523 */
  {
    "x86_shift_adj_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_x86_shift_adj_1,
    &operand_data[2455],
    4,
    3,
    1,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10539 */
  {
    "x86_shift_adj_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_x86_shift_adj_2,
    &operand_data[2455],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10567 */
  {
    "ashlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashlsi3,
    &operand_data[2459],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10615 */
  {
    "ashlsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2462],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10642 */
  {
    "ashlsi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2465],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10699 */
  {
    "ashlhi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2468],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:10841 */
  {
    "ashlhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashlhi3,
    &operand_data[2471],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11007 */
  {
    "ashlqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashlqi3,
    &operand_data[2474],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11213 */
  {
    "ashrti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrti3,
    &operand_data[2431],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11248 */
  {
    "ashrti3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2477],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11258 */
  {
    "ashrdi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2438],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11283 */
  {
    "ashrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrdi3,
    &operand_data[2481],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11414 */
  {
    "ashrdi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2484],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11425 */
  {
    "x86_shift_adj_3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2484],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11451 */
  {
    "x86_shift_adj_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_x86_shift_adj_3,
    &operand_data[2455],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11512 */
  {
    "ashrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrsi3,
    &operand_data[2459],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11669 */
  {
    "ashrhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrhi3,
    &operand_data[2471],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11772 */
  {
    "ashrqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrqi3,
    &operand_data[2474],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11908 */
  {
    "lshrti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrti3,
    &operand_data[2431],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11943 */
  {
    "lshrti3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2477],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11953 */
  {
    "lshrdi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2438],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:11962 */
  {
    "lshrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrdi3,
    &operand_data[2481],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12076 */
  {
    "lshrdi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2484],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12087 */
  {
    "lshrsi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2484],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12097 */
  {
    "lshrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrsi3,
    &operand_data[2459],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12255 */
  {
    "lshrhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrhi3,
    &operand_data[2471],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12358 */
  {
    "lshrqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrqi3,
    &operand_data[2474],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12490 */
  {
    "rotldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotldi3,
    &operand_data[2481],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12510 */
  {
    "rotldi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2488],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12560 */
  {
    "rotlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotlsi3,
    &operand_data[2459],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12619 */
  {
    "rotlhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotlhi3,
    &operand_data[2471],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12653 */
  {
    "rotlqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotlqi3,
    &operand_data[2474],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12714 */
  {
    "rotrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotrdi3,
    &operand_data[2481],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12734 */
  {
    "rotrdi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2488],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12784 */
  {
    "rotrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotrsi3,
    &operand_data[2459],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12846 */
  {
    "rotrhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotrhi3,
    &operand_data[2471],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12880 */
  {
    "rotrqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotrqi3,
    &operand_data[2474],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12943 */
  {
    "extv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extv,
    &operand_data[2492],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12960 */
  {
    "extzv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extzv,
    &operand_data[2496],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:12977 */
  {
    "insv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_insv,
    &operand_data[2500],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13046 */
  {
    "insv+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2504],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13078 */
  {
    "insv+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2504],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13110 */
  {
    "seq-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2504],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13152 */
  {
    "seq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_seq,
    &operand_data[2076],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13158 */
  {
    "sne",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sne,
    &operand_data[2076],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13164 */
  {
    "sgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgt,
    &operand_data[2076],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13170 */
  {
    "sgtu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgtu,
    &operand_data[2076],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13176 */
  {
    "slt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_slt,
    &operand_data[2076],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13182 */
  {
    "sltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sltu,
    &operand_data[2076],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13188 */
  {
    "sge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sge,
    &operand_data[2076],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13194 */
  {
    "sgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgeu,
    &operand_data[2076],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13200 */
  {
    "sle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sle,
    &operand_data[2076],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13206 */
  {
    "sleu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sleu,
    &operand_data[2076],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13212 */
  {
    "sunordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sunordered,
    &operand_data[2076],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13218 */
  {
    "sordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sordered,
    &operand_data[2076],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13224 */
  {
    "suneq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_suneq,
    &operand_data[2076],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13230 */
  {
    "sunge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sunge,
    &operand_data[2076],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13236 */
  {
    "sungt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sungt,
    &operand_data[2076],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13242 */
  {
    "sunle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sunle,
    &operand_data[2076],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13248 */
  {
    "sunlt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sunlt,
    &operand_data[2076],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13254 */
  {
    "sltgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sltgt,
    &operand_data[2076],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13286 */
  {
    "sltgt+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2507],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13297 */
  {
    "sltgt+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2509],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13308 */
  {
    "beq-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2507],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13328 */
  {
    "beq-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2509],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13379 */
  {
    "beq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_beq,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13387 */
  {
    "bne",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bne,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13395 */
  {
    "bgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgt,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13403 */
  {
    "bgtu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgtu,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13411 */
  {
    "blt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_blt,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13419 */
  {
    "bltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bltu,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13427 */
  {
    "bge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bge,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13435 */
  {
    "bgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgeu,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13443 */
  {
    "ble",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ble,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13451 */
  {
    "bleu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bleu,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13459 */
  {
    "bunordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunordered,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13467 */
  {
    "bordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bordered,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13475 */
  {
    "buneq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_buneq,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13483 */
  {
    "bunge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunge,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13491 */
  {
    "bungt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bungt,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13499 */
  {
    "bunle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunle,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13507 */
  {
    "bunlt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunlt,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13515 */
  {
    "bltgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bltgt,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13567 */
  {
    "bltgt+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2510],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13583 */
  {
    "bltgt+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2510],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13815 */
  {
    "bltgt+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2512],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13832 */
  {
    "bltgt+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2517],
    6,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13850 */
  {
    "indirect_jump-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2523],
    7,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13850 */
  {
    "indirect_jump-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2530],
    7,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13872 */
  {
    "indirect_jump-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2537],
    7,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13872 */
  {
    "indirect_jump-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2544],
    7,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13911 */
  {
    "indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_indirect_jump,
    &operand_data[627],
    1,
    0,
    1,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13930 */
  {
    "tablejump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tablejump,
    &operand_data[2551],
    2,
    0,
    1,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:13984 */
  {
    "tablejump+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2552],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14005 */
  {
    "call_pop-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2552],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14033 */
  {
    "call_pop",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call_pop,
    &operand_data[2556],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14080 */
  {
    "call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call,
    &operand_data[2560],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14090 */
  {
    "sibcall",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall,
    &operand_data[2560],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14162 */
  {
    "call_value_pop",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call_value_pop,
    &operand_data[2562],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14176 */
  {
    "call_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call_value,
    &operand_data[2567],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14188 */
  {
    "sibcall_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall_value,
    &operand_data[2567],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14202 */
  {
    "untyped_call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_untyped_call,
    &operand_data[2571],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14251 */
  {
    "return",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_return,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14329 */
  {
    "prologue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_prologue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14361 */
  {
    "epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14366 */
  {
    "sibcall_epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14371 */
  {
    "eh_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_eh_return,
    &operand_data[2065],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14393 */
  {
    "eh_return+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2070],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14403 */
  {
    "ffssi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2083],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14429 */
  {
    "ffssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ffssi2,
    &operand_data[2574],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14438 */
  {
    "ffssi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2574],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14457 */
  {
    "ffsdi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2577],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14490 */
  {
    "ffsdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ffsdi2,
    &operand_data[2580],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14499 */
  {
    "ffsdi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2580],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14545 */
  {
    "clzsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_clzsi2,
    &operand_data[2315],
    2,
    2,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14566 */
  {
    "clzdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_clzdi2,
    &operand_data[2311],
    2,
    2,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14621 */
  {
    "tls_global_dynamic_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tls_global_dynamic_32,
    &operand_data[2583],
    6,
    2,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14660 */
  {
    "tls_global_dynamic_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tls_global_dynamic_64,
    &operand_data[2589],
    2,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14703 */
  {
    "tls_local_dynamic_base_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tls_local_dynamic_base_32,
    &operand_data[2591],
    5,
    2,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14738 */
  {
    "tls_local_dynamic_base_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tls_local_dynamic_base_64,
    &operand_data[2083],
    1,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14756 */
  {
    "tls_local_dynamic_base_64+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2596],
    6,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14830 */
  {
    "tls_dynamic_gnu2_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tls_dynamic_gnu2_32,
    &operand_data[2602],
    3,
    4,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14876 */
  {
    "tls_dynamic_gnu2_32+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2602],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14897 */
  {
    "tls_dynamic_gnu2_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tls_dynamic_gnu2_64,
    &operand_data[2589],
    2,
    3,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:14936 */
  {
    "tls_dynamic_gnu2_64+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2607],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15431 */
  {
    "tls_dynamic_gnu2_64+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2611],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15431 */
  {
    "tls_dynamic_gnu2_64+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2615],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15451 */
  {
    "sqrtsf2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2619],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15451 */
  {
    "sqrtsf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2623],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15473 */
  {
    "sqrtsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sqrtsf2,
    &operand_data[2289],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15511 */
  {
    "sqrtdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sqrtdf2,
    &operand_data[2286],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15605 */
  {
    "fmodsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fmodsf3,
    &operand_data[2627],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15630 */
  {
    "fmoddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fmoddf3,
    &operand_data[2630],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15655 */
  {
    "fmodxf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fmodxf3,
    &operand_data[2282],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15690 */
  {
    "dremsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_dremsf3,
    &operand_data[2627],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15715 */
  {
    "dremdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_dremdf3,
    &operand_data[2630],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15740 */
  {
    "dremxf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_dremxf3,
    &operand_data[2282],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15860 */
  {
    "dremxf3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2630],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15871 */
  {
    "dremxf3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2630],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15895 */
  {
    "dremxf3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2627],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15906 */
  {
    "dremxf3+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2627],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15932 */
  {
    "dremxf3+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2631],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15946 */
  {
    "tandf2-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2631],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15972 */
  {
    "tandf2-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2282],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:15983 */
  {
    "tandf2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2282],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16012 */
  {
    "tandf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2634],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16025 */
  {
    "tandf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tandf2,
    &operand_data[2285],
    2,
    2,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16056 */
  {
    "tandf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2638],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16069 */
  {
    "tansf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tansf2,
    &operand_data[2288],
    2,
    2,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16099 */
  {
    "tansf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2642],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16112 */
  {
    "tanxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tanxf2,
    &operand_data[2282],
    2,
    2,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16137 */
  {
    "atan2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_atan2df3,
    &operand_data[2630],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16151 */
  {
    "atandf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_atandf2,
    &operand_data[2646],
    4,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16178 */
  {
    "atan2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_atan2sf3,
    &operand_data[2627],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16192 */
  {
    "atansf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_atansf2,
    &operand_data[2650],
    4,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16218 */
  {
    "atan2xf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_atan2xf3,
    &operand_data[2282],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16231 */
  {
    "atanxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_atanxf2,
    &operand_data[2654],
    4,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16244 */
  {
    "asindf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_asindf2,
    &operand_data[2658],
    9,
    13,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16268 */
  {
    "asinsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_asinsf2,
    &operand_data[2667],
    9,
    13,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16292 */
  {
    "asinxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_asinxf2,
    &operand_data[2676],
    7,
    9,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16313 */
  {
    "acosdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_acosdf2,
    &operand_data[2658],
    9,
    13,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16337 */
  {
    "acossf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_acossf2,
    &operand_data[2667],
    9,
    13,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16361 */
  {
    "acosxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_acosxf2,
    &operand_data[2676],
    7,
    9,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16394 */
  {
    "logsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_logsf2,
    &operand_data[2683],
    6,
    5,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16417 */
  {
    "logdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_logdf2,
    &operand_data[2689],
    6,
    5,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16440 */
  {
    "logxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_logxf2,
    &operand_data[2654],
    4,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16455 */
  {
    "log10sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_log10sf2,
    &operand_data[2683],
    6,
    5,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16478 */
  {
    "log10df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_log10df2,
    &operand_data[2689],
    6,
    5,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16501 */
  {
    "log10xf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_log10xf2,
    &operand_data[2654],
    4,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16516 */
  {
    "log2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_log2sf2,
    &operand_data[2683],
    6,
    5,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16536 */
  {
    "log2df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_log2df2,
    &operand_data[2689],
    6,
    5,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16556 */
  {
    "log2xf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_log2xf2,
    &operand_data[2654],
    4,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16580 */
  {
    "log1psf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_log1psf2,
    &operand_data[2288],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16596 */
  {
    "log1pdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_log1pdf2,
    &operand_data[2285],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16612 */
  {
    "log1pxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_log1pxf2,
    &operand_data[2282],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16634 */
  {
    "logbsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_logbsf2,
    &operand_data[2288],
    2,
    6,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16652 */
  {
    "logbdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_logbdf2,
    &operand_data[2285],
    2,
    6,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16670 */
  {
    "logbxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_logbxf2,
    &operand_data[2282],
    2,
    2,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16682 */
  {
    "ilogbsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ilogbsi2,
    &operand_data[2695],
    4,
    3,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16723 */
  {
    "expsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_expsf2,
    &operand_data[2288],
    2,
    21,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16753 */
  {
    "expdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_expdf2,
    &operand_data[2285],
    2,
    21,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16783 */
  {
    "expxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_expxf2,
    &operand_data[2282],
    2,
    17,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16809 */
  {
    "exp10sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_exp10sf2,
    &operand_data[2288],
    2,
    21,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16839 */
  {
    "exp10df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_exp10df2,
    &operand_data[2285],
    2,
    21,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16869 */
  {
    "exp10xf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_exp10xf2,
    &operand_data[2282],
    2,
    17,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16895 */
  {
    "exp2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_exp2sf2,
    &operand_data[2288],
    2,
    18,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16921 */
  {
    "exp2df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_exp2df2,
    &operand_data[2285],
    2,
    18,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16947 */
  {
    "exp2xf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_exp2xf2,
    &operand_data[2282],
    2,
    16,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:16969 */
  {
    "expm1df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_expm1df2,
    &operand_data[2285],
    2,
    30,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17006 */
  {
    "expm1sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_expm1sf2,
    &operand_data[2288],
    2,
    30,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17043 */
  {
    "expm1xf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_expm1xf2,
    &operand_data[2282],
    2,
    26,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17077 */
  {
    "ldexpdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ldexpdf3,
    &operand_data[2699],
    3,
    9,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17100 */
  {
    "ldexpsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ldexpsf3,
    &operand_data[2702],
    3,
    9,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17123 */
  {
    "ldexpxf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ldexpxf3,
    &operand_data[2705],
    3,
    5,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17153 */
  {
    "rintdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rintdf2,
    &operand_data[2285],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17170 */
  {
    "rintsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rintsf2,
    &operand_data[2288],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17187 */
  {
    "rintxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rintxf2,
    &operand_data[2282],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17197 */
  {
    "rintxf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2127],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17244 */
  {
    "rintxf2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2708],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17256 */
  {
    "rintxf2+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2712],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17267 */
  {
    "rintxf2+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2716],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17267 */
  {
    "rintxf2+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2695],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17307 */
  {
    "lrinthi2-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2716],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17307 */
  {
    "lrinthi2-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2719],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17318 */
  {
    "lrinthi2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2722],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17318 */
  {
    "lrinthi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2725],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17328 */
  {
    "lrinthi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lrinthi2,
    &operand_data[2143],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17328 */
  {
    "lrintsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lrintsi2,
    &operand_data[2133],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17328 */
  {
    "lrintdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lrintdi2,
    &operand_data[2127],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17338 */
  {
    "lrintdi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2282],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17376 */
  {
    "floorxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floorxf2,
    &operand_data[2282],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17386 */
  {
    "floordf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floordf2,
    &operand_data[2285],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17403 */
  {
    "floorsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floorsf2,
    &operand_data[2288],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17420 */
  {
    "floorsf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2143],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17420 */
  {
    "floorsf2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2133],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17420 */
  {
    "floorsf2+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2127],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17481 */
  {
    "floorsf2+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2728],
    6,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17497 */
  {
    "floorsf2+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2734],
    6,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17539 */
  {
    "lfloorhi2-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2740],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17539 */
  {
    "lfloorhi2-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2745],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17554 */
  {
    "lfloorhi2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2750],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17554 */
  {
    "lfloorhi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2755],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17568 */
  {
    "lfloorhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lfloorhi2,
    &operand_data[2143],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17568 */
  {
    "lfloorsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lfloorsi2,
    &operand_data[2133],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17568 */
  {
    "lfloordi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lfloordi2,
    &operand_data[2127],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17579 */
  {
    "lfloordi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2282],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17617 */
  {
    "ceilxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ceilxf2,
    &operand_data[2282],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17627 */
  {
    "ceildf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ceildf2,
    &operand_data[2285],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17644 */
  {
    "ceilsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ceilsf2,
    &operand_data[2288],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17661 */
  {
    "ceilsf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2143],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17661 */
  {
    "ceilsf2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2133],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17661 */
  {
    "ceilsf2+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2127],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17722 */
  {
    "ceilsf2+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2728],
    6,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17738 */
  {
    "ceilsf2+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2734],
    6,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17780 */
  {
    "lceilhi2-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2740],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17780 */
  {
    "lceilhi2-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2745],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17795 */
  {
    "lceilhi2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2750],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17795 */
  {
    "lceilhi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2755],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17809 */
  {
    "lceilhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lceilhi2,
    &operand_data[2143],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17809 */
  {
    "lceilsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lceilsi2,
    &operand_data[2133],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17809 */
  {
    "lceildi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lceildi2,
    &operand_data[2127],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17820 */
  {
    "lceildi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2282],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17858 */
  {
    "btruncxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_btruncxf2,
    &operand_data[2282],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17868 */
  {
    "btruncdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_btruncdf2,
    &operand_data[2285],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17885 */
  {
    "btruncsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_btruncsf2,
    &operand_data[2288],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17903 */
  {
    "btruncsf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2282],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17941 */
  {
    "nearbyintxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_nearbyintxf2,
    &operand_data[2282],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17952 */
  {
    "nearbyintdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_nearbyintdf2,
    &operand_data[2285],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17969 */
  {
    "nearbyintsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_nearbyintsf2,
    &operand_data[2288],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:17995 */
  {
    "movmemsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmemsi,
    &operand_data[2760],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18008 */
  {
    "movmemdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmemdi,
    &operand_data[2764],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18024 */
  {
    "strmov",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_strmov,
    &operand_data[2768],
    4,
    4,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18051 */
  {
    "strmov_singleop",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_strmov_singleop,
    &operand_data[2768],
    6,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18174 */
  {
    "rep_mov",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rep_mov,
    &operand_data[2774],
    7,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18283 */
  {
    "setmemsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_setmemsi,
    &operand_data[2781],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18300 */
  {
    "setmemdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_setmemdi,
    &operand_data[2785],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18320 */
  {
    "strset",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_strset,
    &operand_data[2768],
    3,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18344 */
  {
    "strset_singleop",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_strset_singleop,
    &operand_data[2776],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18444 */
  {
    "rep_stos",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rep_stos,
    &operand_data[2789],
    5,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18543 */
  {
    "cmpstrnsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpstrnsi,
    &operand_data[2794],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18609 */
  {
    "cmpintqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpintqi,
    &operand_data[2076],
    1,
    4,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18625 */
  {
    "cmpstrnqi_nz_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpstrnqi_nz_1,
    &operand_data[2799],
    6,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18672 */
  {
    "cmpstrnqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpstrnqi_1,
    &operand_data[2799],
    6,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18726 */
  {
    "strlensi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_strlensi,
    &operand_data[2805],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18739 */
  {
    "strlendi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_strlendi,
    &operand_data[2809],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18752 */
  {
    "strlenqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_strlenqi_1,
    &operand_data[2813],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18804 */
  {
    "strlenqi_1+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2816],
    9,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18836 */
  {
    "movdicc-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2816],
    9,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18877 */
  {
    "movdicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdicc,
    &operand_data[2825],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18916 */
  {
    "movsicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsicc,
    &operand_data[2829],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18959 */
  {
    "movhicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movhicc,
    &operand_data[2833],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18981 */
  {
    "movqicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movqicc,
    &operand_data[2837],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:18989 */
  {
    "movqicc+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2841],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19009 */
  {
    "movsfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsfcc,
    &operand_data[2846],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19033 */
  {
    "movdfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdfcc,
    &operand_data[2850],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19073 */
  {
    "movdfcc+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2854],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19093 */
  {
    "movxfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movxfcc,
    &operand_data[2859],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19207 */
  {
    "movxfcc+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2863],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19228 */
  {
    "addqicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addqicc,
    &operand_data[2867],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19236 */
  {
    "addhicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addhicc,
    &operand_data[2871],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19244 */
  {
    "addsicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addsicc,
    &operand_data[2875],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19252 */
  {
    "adddicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_adddicc,
    &operand_data[2879],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19381 */
  {
    "allocate_stack_worker",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_allocate_stack_worker,
    &operand_data[2070],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19413 */
  {
    "allocate_stack_worker_postreload",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_allocate_stack_worker_postreload,
    &operand_data[589],
    1,
    2,
    1,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19433 */
  {
    "allocate_stack_worker_rex64_postreload",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_allocate_stack_worker_rex64_postreload,
    &operand_data[576],
    1,
    2,
    1,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19442 */
  {
    "allocate_stack",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_allocate_stack,
    &operand_data[2883],
    2,
    1,
    1,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19466 */
  {
    "builtin_setjmp_receiver",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_builtin_setjmp_receiver,
    &operand_data[743],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19490 */
  {
    "builtin_setjmp_receiver+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2885],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19517 */
  {
    "builtin_setjmp_receiver+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2889],
    5,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19548 */
  {
    "builtin_setjmp_receiver+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2894],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19569 */
  {
    "builtin_setjmp_receiver+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2270],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19583 */
  {
    "builtin_setjmp_receiver+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2270],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19595 */
  {
    "builtin_setjmp_receiver+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2898],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19616 */
  {
    "builtin_setjmp_receiver+7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2902],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19626 */
  {
    "builtin_setjmp_receiver+8",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2905],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19638 */
  {
    "builtin_setjmp_receiver+9",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2908],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19648 */
  {
    "builtin_setjmp_receiver+10",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2911],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19658 */
  {
    "builtin_setjmp_receiver+11",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2914],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19670 */
  {
    "builtin_setjmp_receiver+12",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2903],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19684 */
  {
    "builtin_setjmp_receiver+13",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2912],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19698 */
  {
    "builtin_setjmp_receiver+14",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2915],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19712 */
  {
    "builtin_setjmp_receiver+15",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2917],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19723 */
  {
    "builtin_setjmp_receiver+16",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2920],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19733 */
  {
    "builtin_setjmp_receiver+17",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2923],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19744 */
  {
    "builtin_setjmp_receiver+18",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2926],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19766 */
  {
    "builtin_setjmp_receiver+19",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2238],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19780 */
  {
    "builtin_setjmp_receiver+20",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2276],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19794 */
  {
    "builtin_setjmp_receiver+21",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2279],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19815 */
  {
    "builtin_setjmp_receiver+22",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2930],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19836 */
  {
    "builtin_setjmp_receiver+23",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2934],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19854 */
  {
    "builtin_setjmp_receiver+24",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2938],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19889 */
  {
    "builtin_setjmp_receiver+25",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2942],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19903 */
  {
    "builtin_setjmp_receiver+26",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2942],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19923 */
  {
    "builtin_setjmp_receiver+27",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2946],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19938 */
  {
    "builtin_setjmp_receiver+28",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2946],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19954 */
  {
    "builtin_setjmp_receiver+29",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2950],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19967 */
  {
    "builtin_setjmp_receiver+30",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2952],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19978 */
  {
    "builtin_setjmp_receiver+31",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2065],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:19993 */
  {
    "builtin_setjmp_receiver+32",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2274],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20002 */
  {
    "builtin_setjmp_receiver+33",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2953],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20011 */
  {
    "builtin_setjmp_receiver+34",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2292],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20020 */
  {
    "builtin_setjmp_receiver+35",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2877],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20030 */
  {
    "sse_prologue_save-34",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2881],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20040 */
  {
    "sse_prologue_save-33",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2956],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20070 */
  {
    "sse_prologue_save-32",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2454],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20080 */
  {
    "sse_prologue_save-31",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2454],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20092 */
  {
    "sse_prologue_save-30",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2454],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20100 */
  {
    "sse_prologue_save-29",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2454],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20110 */
  {
    "sse_prologue_save-28",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2454],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20123 */
  {
    "sse_prologue_save-27",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2959],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20137 */
  {
    "sse_prologue_save-26",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2454],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20151 */
  {
    "sse_prologue_save-25",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2454],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20162 */
  {
    "sse_prologue_save-24",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2959],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20174 */
  {
    "sse_prologue_save-23",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2454],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20187 */
  {
    "sse_prologue_save-22",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2346],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20202 */
  {
    "sse_prologue_save-21",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2036],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20212 */
  {
    "sse_prologue_save-20",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2036],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20224 */
  {
    "sse_prologue_save-19",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2036],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20232 */
  {
    "sse_prologue_save-18",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2036],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20242 */
  {
    "sse_prologue_save-17",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2036],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20255 */
  {
    "sse_prologue_save-16",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2961],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20269 */
  {
    "sse_prologue_save-15",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2036],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20283 */
  {
    "sse_prologue_save-14",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2036],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20294 */
  {
    "sse_prologue_save-13",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2961],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20306 */
  {
    "sse_prologue_save-12",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2036],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20318 */
  {
    "sse_prologue_save-11",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2963],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20332 */
  {
    "sse_prologue_save-10",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2966],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20348 */
  {
    "sse_prologue_save-9",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2969],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20363 */
  {
    "sse_prologue_save-8",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2972],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20382 */
  {
    "sse_prologue_save-7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2975],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20395 */
  {
    "sse_prologue_save-6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2979],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20408 */
  {
    "sse_prologue_save-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2983],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20426 */
  {
    "sse_prologue_save-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2987],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20442 */
  {
    "sse_prologue_save-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2991],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20458 */
  {
    "sse_prologue_save-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2995],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20485 */
  {
    "sse_prologue_save-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2999],
    8,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20660 */
  {
    "sse_prologue_save",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sse_prologue_save,
    &operand_data[3007],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20721 */
  {
    "prefetch",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_prefetch,
    &operand_data[3011],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20809 */
  {
    "stack_protect_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_set,
    &operand_data[2803],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/i386.md:20874 */
  {
    "stack_protect_test",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_test,
    &operand_data[3014],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:25 */
  {
    "movv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv16qi,
    &operand_data[3017],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:25 */
  {
    "movv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv8hi,
    &operand_data[3019],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:25 */
  {
    "movv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv4si,
    &operand_data[3021],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:25 */
  {
    "movv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2di,
    &operand_data[3023],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:90 */
  {
    "movv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv4sf,
    &operand_data[3025],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:118 */
  {
    "movv4sf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3027],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:132 */
  {
    "movv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2df,
    &operand_data[3029],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:171 */
  {
    "movv2df+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3031],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:181 */
  {
    "pushv16qi1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pushv16qi1,
    &operand_data[3033],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:181 */
  {
    "pushv8hi1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pushv8hi1,
    &operand_data[3034],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:181 */
  {
    "pushv4si1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pushv4si1,
    &operand_data[3035],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:181 */
  {
    "pushv2di1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pushv2di1,
    &operand_data[3036],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:181 */
  {
    "pushv4sf1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pushv4sf1,
    &operand_data[3027],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:181 */
  {
    "pushv2df1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pushv2df1,
    &operand_data[3031],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:189 */
  {
    "movmisalignv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmisalignv16qi,
    &operand_data[3017],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:189 */
  {
    "movmisalignv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmisalignv8hi,
    &operand_data[3019],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:189 */
  {
    "movmisalignv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmisalignv4si,
    &operand_data[3021],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:189 */
  {
    "movmisalignv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmisalignv2di,
    &operand_data[3023],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:189 */
  {
    "movmisalignv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmisalignv4sf,
    &operand_data[3025],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:189 */
  {
    "movmisalignv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmisalignv2df,
    &operand_data[3029],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:276 */
  {
    "negv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negv4sf2,
    &operand_data[3037],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:282 */
  {
    "absv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_absv4sf2,
    &operand_data[3037],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:288 */
  {
    "addv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addv4sf3,
    &operand_data[3037],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:316 */
  {
    "subv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subv4sf3,
    &operand_data[3040],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:344 */
  {
    "mulv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulv4sf3,
    &operand_data[3037],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:372 */
  {
    "divv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divv4sf3,
    &operand_data[3040],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:465 */
  {
    "smaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_smaxv4sf3,
    &operand_data[3037],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:507 */
  {
    "sminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sminv4sf3,
    &operand_data[3037],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:660 */
  {
    "reduc_splus_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reduc_splus_v4sf,
    &operand_data[3040],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:676 */
  {
    "reduc_smax_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reduc_smax_v4sf,
    &operand_data[3040],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:685 */
  {
    "reduc_smin_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reduc_smin_v4sf,
    &operand_data[3040],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:751 */
  {
    "vcondv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vcondv4sf,
    &operand_data[3043],
    6,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:773 */
  {
    "andv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andv4sf3,
    &operand_data[3037],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:798 */
  {
    "iorv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorv4sf3,
    &operand_data[3037],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:814 */
  {
    "xorv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorv4sf3,
    &operand_data[3037],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1113 */
  {
    "sse_shufps",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sse_shufps,
    &operand_data[3049],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1258 */
  {
    "vec_initv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_initv4sf,
    &operand_data[3053],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1283 */
  {
    "vec_initv4sf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3055],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1297 */
  {
    "vec_setv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_setv4sf,
    &operand_data[3057],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1308 */
  {
    "vec_setv4sf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3060],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1327 */
  {
    "vec_extractv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_extractv4sf,
    &operand_data[3062],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1344 */
  {
    "negv2df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negv2df2,
    &operand_data[3065],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1350 */
  {
    "absv2df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_absv2df2,
    &operand_data[3065],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1356 */
  {
    "addv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addv2df3,
    &operand_data[3065],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1384 */
  {
    "subv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subv2df3,
    &operand_data[3065],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1412 */
  {
    "mulv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulv2df3,
    &operand_data[3065],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1440 */
  {
    "divv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divv2df3,
    &operand_data[3068],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1491 */
  {
    "smaxv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_smaxv2df3,
    &operand_data[3065],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1533 */
  {
    "sminv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sminv2df3,
    &operand_data[3065],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1624 */
  {
    "reduc_splus_v2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reduc_splus_v2df,
    &operand_data[3068],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1690 */
  {
    "vcondv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vcondv2df,
    &operand_data[3071],
    6,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1712 */
  {
    "andv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andv2df3,
    &operand_data[3065],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1737 */
  {
    "iorv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorv2df3,
    &operand_data[3065],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1753 */
  {
    "xorv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorv2df3,
    &operand_data[3065],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1931 */
  {
    "sse2_cvtpd2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtpd2dq,
    &operand_data[3077],
    2,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1951 */
  {
    "sse2_cvttpd2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvttpd2dq,
    &operand_data[3077],
    2,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:1997 */
  {
    "sse2_cvtpd2ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtpd2ps,
    &operand_data[3079],
    2,
    1,
    1,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2065 */
  {
    "sse2_cvtpd2ps+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3081],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2098 */
  {
    "sse2_shufpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sse2_shufpd,
    &operand_data[3082],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2145 */
  {
    "sse2_shufpd+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3086],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2169 */
  {
    "sse2_shufpd+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2382],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2202 */
  {
    "vec_setv2df-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3087],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2231 */
  {
    "vec_setv2df-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3087],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2332 */
  {
    "vec_setv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_setv2df,
    &operand_data[3089],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2343 */
  {
    "vec_extractv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_extractv2df,
    &operand_data[3092],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2354 */
  {
    "vec_initv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_initv2df,
    &operand_data[3095],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2369 */
  {
    "negv16qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negv16qi2,
    &operand_data[3097],
    2,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2369 */
  {
    "negv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negv8hi2,
    &operand_data[3099],
    2,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2369 */
  {
    "negv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negv4si2,
    &operand_data[3101],
    2,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2369 */
  {
    "negv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negv2di2,
    &operand_data[3103],
    2,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2377 */
  {
    "addv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addv16qi3,
    &operand_data[3105],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2377 */
  {
    "addv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addv8hi3,
    &operand_data[3108],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2377 */
  {
    "addv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addv4si3,
    &operand_data[3111],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2377 */
  {
    "addv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addv2di3,
    &operand_data[3114],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2414 */
  {
    "subv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subv16qi3,
    &operand_data[3117],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2414 */
  {
    "subv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subv8hi3,
    &operand_data[3120],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2414 */
  {
    "subv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subv4si3,
    &operand_data[3123],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2414 */
  {
    "subv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subv2di3,
    &operand_data[3126],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2451 */
  {
    "mulv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulv16qi3,
    &operand_data[3129],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2495 */
  {
    "mulv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulv8hi3,
    &operand_data[3108],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2593 */
  {
    "mulv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulv4si3,
    &operand_data[3132],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2639 */
  {
    "mulv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulv2di3,
    &operand_data[3135],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2683 */
  {
    "sdot_prodv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sdot_prodv8hi,
    &operand_data[3138],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2696 */
  {
    "udot_prodv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_udot_prodv4si,
    &operand_data[3142],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2767 */
  {
    "vec_shl_v16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_shl_v16qi,
    &operand_data[3146],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2767 */
  {
    "vec_shl_v8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_shl_v8hi,
    &operand_data[3149],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2767 */
  {
    "vec_shl_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_shl_v4si,
    &operand_data[3152],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2767 */
  {
    "vec_shl_v2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_shl_v2di,
    &operand_data[3155],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2791 */
  {
    "vec_shr_v16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_shr_v16qi,
    &operand_data[3146],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2791 */
  {
    "vec_shr_v8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_shr_v8hi,
    &operand_data[3149],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2791 */
  {
    "vec_shr_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_shr_v4si,
    &operand_data[3152],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2791 */
  {
    "vec_shr_v2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_shr_v2di,
    &operand_data[3155],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2803 */
  {
    "umaxv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umaxv16qi3,
    &operand_data[3105],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2819 */
  {
    "smaxv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_smaxv8hi3,
    &operand_data[3108],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2835 */
  {
    "umaxv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umaxv8hi3,
    &operand_data[1716],
    3,
    3,
    1,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2848 */
  {
    "smaxv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_smaxv16qi3,
    &operand_data[3129],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2848 */
  {
    "smaxv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_smaxv4si3,
    &operand_data[3132],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2868 */
  {
    "umaxv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umaxv4si3,
    &operand_data[3132],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2888 */
  {
    "uminv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_uminv16qi3,
    &operand_data[3105],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2904 */
  {
    "sminv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sminv8hi3,
    &operand_data[3108],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2920 */
  {
    "sminv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sminv16qi3,
    &operand_data[3129],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2920 */
  {
    "sminv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sminv4si3,
    &operand_data[3132],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2940 */
  {
    "uminv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_uminv8hi3,
    &operand_data[3158],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2940 */
  {
    "uminv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_uminv4si3,
    &operand_data[3132],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2986 */
  {
    "vcondv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vcondv16qi,
    &operand_data[3161],
    6,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2986 */
  {
    "vcondv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vcondv8hi,
    &operand_data[3167],
    6,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:2986 */
  {
    "vcondv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vcondv4si,
    &operand_data[3173],
    6,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3002 */
  {
    "vconduv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vconduv16qi,
    &operand_data[3161],
    6,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3002 */
  {
    "vconduv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vconduv8hi,
    &operand_data[3167],
    6,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3002 */
  {
    "vconduv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vconduv4si,
    &operand_data[3173],
    6,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3024 */
  {
    "one_cmplv16qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv16qi2,
    &operand_data[3097],
    2,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3024 */
  {
    "one_cmplv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv8hi2,
    &operand_data[3099],
    2,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3024 */
  {
    "one_cmplv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv4si2,
    &operand_data[3101],
    2,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3024 */
  {
    "one_cmplv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv2di2,
    &operand_data[3103],
    2,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3039 */
  {
    "andv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andv16qi3,
    &operand_data[3105],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3039 */
  {
    "andv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andv8hi3,
    &operand_data[3108],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3039 */
  {
    "andv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andv4si3,
    &operand_data[3111],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3039 */
  {
    "andv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andv2di3,
    &operand_data[3114],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3066 */
  {
    "iorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorv16qi3,
    &operand_data[3105],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3066 */
  {
    "iorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorv8hi3,
    &operand_data[3108],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3066 */
  {
    "iorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorv4si3,
    &operand_data[3111],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3066 */
  {
    "iorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorv2di3,
    &operand_data[3114],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3083 */
  {
    "xorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorv16qi3,
    &operand_data[3105],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3083 */
  {
    "xorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorv8hi3,
    &operand_data[3108],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3083 */
  {
    "xorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorv4si3,
    &operand_data[3111],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3083 */
  {
    "xorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorv2di3,
    &operand_data[3114],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3262 */
  {
    "sse2_pinsrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sse2_pinsrw,
    &operand_data[3179],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3301 */
  {
    "sse2_pshufd",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sse2_pshufd,
    &operand_data[3183],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3338 */
  {
    "sse2_pshuflw",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sse2_pshuflw,
    &operand_data[3186],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3379 */
  {
    "sse2_pshufhw",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sse2_pshufhw,
    &operand_data[3186],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3420 */
  {
    "sse2_loadd",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sse2_loadd,
    &operand_data[3189],
    2,
    1,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3447 */
  {
    "sse2_loadd+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3190],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3460 */
  {
    "sse_storeq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sse_storeq,
    &operand_data[3192],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3478 */
  {
    "sse_storeq+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3192],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3600 */
  {
    "vec_setv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_setv2di,
    &operand_data[3193],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3611 */
  {
    "vec_extractv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_extractv2di,
    &operand_data[3196],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3622 */
  {
    "vec_initv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_initv2di,
    &operand_data[3199],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3631 */
  {
    "vec_setv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_setv4si,
    &operand_data[3201],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3642 */
  {
    "vec_extractv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_extractv4si,
    &operand_data[3204],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3653 */
  {
    "vec_initv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_initv4si,
    &operand_data[3207],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3662 */
  {
    "vec_setv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_setv8hi,
    &operand_data[3209],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3673 */
  {
    "vec_extractv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_extractv8hi,
    &operand_data[3212],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3684 */
  {
    "vec_initv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_initv8hi,
    &operand_data[3215],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3693 */
  {
    "vec_setv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_setv16qi,
    &operand_data[3217],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3704 */
  {
    "vec_extractv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_extractv16qi,
    &operand_data[3220],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3715 */
  {
    "vec_initv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_initv16qi,
    &operand_data[3223],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3813 */
  {
    "sse2_maskmovdqu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sse2_maskmovdqu,
    &operand_data[3225],
    3,
    1,
    1,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3862 */
  {
    "sse_sfence",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sse_sfence,
    &operand_data[0],
    0,
    2,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3887 */
  {
    "sse2_mfence",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sse2_mfence,
    &operand_data[0],
    0,
    2,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sse.md:3904 */
  {
    "sse2_lfence",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sse2_lfence,
    &operand_data[0],
    0,
    2,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:35 */
  {
    "movv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv8qi,
    &operand_data[3228],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:35 */
  {
    "movv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv4hi,
    &operand_data[3230],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:35 */
  {
    "movv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2si,
    &operand_data[3232],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:115 */
  {
    "movv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2sf,
    &operand_data[3234],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:173 */
  {
    "movv2sf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3236],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:173 */
  {
    "movv2sf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3238],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:173 */
  {
    "pushv8qi1-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3240],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:173 */
  {
    "pushv8qi1-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3242],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:182 */
  {
    "pushv8qi1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pushv8qi1,
    &operand_data[3244],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:182 */
  {
    "pushv4hi1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pushv4hi1,
    &operand_data[3245],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:182 */
  {
    "pushv2si1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pushv2si1,
    &operand_data[3246],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:182 */
  {
    "pushv2sf1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pushv2sf1,
    &operand_data[3247],
    1,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:190 */
  {
    "movmisalignv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmisalignv8qi,
    &operand_data[3228],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:190 */
  {
    "movmisalignv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmisalignv4hi,
    &operand_data[3230],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:190 */
  {
    "movmisalignv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmisalignv2si,
    &operand_data[3232],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:190 */
  {
    "movmisalignv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmisalignv2sf,
    &operand_data[3234],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:234 */
  {
    "mmx_subrv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mmx_subrv2sf3,
    &operand_data[3247],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:478 */
  {
    "vec_setv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_setv2sf,
    &operand_data[3250],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:489 */
  {
    "vec_setv2sf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3253],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:521 */
  {
    "vec_extractv2sf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3255],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:534 */
  {
    "vec_extractv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_extractv2sf,
    &operand_data[3257],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:545 */
  {
    "vec_initv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_initv2sf,
    &operand_data[3260],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1027 */
  {
    "mmx_pinsrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pinsrw,
    &operand_data[3262],
    4,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1066 */
  {
    "mmx_pshufw",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pshufw,
    &operand_data[3266],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1144 */
  {
    "vec_setv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_setv2si,
    &operand_data[3269],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1155 */
  {
    "vec_setv2si+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3272],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1189 */
  {
    "vec_extractv2si-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3274],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1202 */
  {
    "vec_extractv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_extractv2si,
    &operand_data[3276],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1213 */
  {
    "vec_initv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_initv2si,
    &operand_data[3279],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1222 */
  {
    "vec_setv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_setv4hi,
    &operand_data[3281],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1233 */
  {
    "vec_extractv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_extractv4hi,
    &operand_data[3284],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1244 */
  {
    "vec_initv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_initv4hi,
    &operand_data[3287],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1253 */
  {
    "vec_setv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_setv8qi,
    &operand_data[3289],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1264 */
  {
    "vec_extractv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_extractv8qi,
    &operand_data[3292],
    3,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1275 */
  {
    "vec_initv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_initv8qi,
    &operand_data[3295],
    2,
    0,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/mmx.md:1356 */
  {
    "mmx_maskmovq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mmx_maskmovq,
    &operand_data[3297],
    3,
    1,
    1,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:22 */
  {
    "sync_compare_and_swapqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapqi,
    &operand_data[3300],
    4,
    2,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:22 */
  {
    "sync_compare_and_swaphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swaphi,
    &operand_data[3304],
    4,
    2,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:22 */
  {
    "sync_compare_and_swapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapsi,
    &operand_data[3308],
    4,
    2,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:22 */
  {
    "sync_compare_and_swapdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapdi,
    &operand_data[3312],
    4,
    2,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:22 */
  {
    "sync_compare_and_swapti",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapti,
    &operand_data[3316],
    4,
    2,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:124 */
  {
    "sync_compare_and_swap_ccqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swap_ccqi,
    &operand_data[3300],
    4,
    7,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:124 */
  {
    "sync_compare_and_swap_cchi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swap_cchi,
    &operand_data[3304],
    4,
    7,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:124 */
  {
    "sync_compare_and_swap_ccsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swap_ccsi,
    &operand_data[3308],
    4,
    7,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:124 */
  {
    "sync_compare_and_swap_ccdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swap_ccdi,
    &operand_data[3312],
    4,
    7,
    0,
    0
  },
  /* Q:/Kitware/gccxml/GCC/gcc/config/i386/sync.md:124 */
  {
    "sync_compare_and_swap_ccti",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swap_ccti,
    &operand_data[3316],
    4,
    7,
    0,
    0
  },
};


const char *
get_insn_name (int code)
{
  if (code == NOOP_MOVE_INSN_CODE)
    return "NOOP_MOVE";
  else
    return insn_data[code].name;
}
