/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "toplev.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

#ifdef ENABLE_CHECKING
  memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
#endif

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 1179:  /* sync_xordi */
    case 1178:  /* sync_xorsi */
    case 1177:  /* sync_xorhi */
    case 1176:  /* sync_xorqi */
    case 1175:  /* sync_anddi */
    case 1174:  /* sync_andsi */
    case 1173:  /* sync_andhi */
    case 1172:  /* sync_andqi */
    case 1171:  /* sync_iordi */
    case 1170:  /* sync_iorsi */
    case 1169:  /* sync_iorhi */
    case 1168:  /* sync_iorqi */
    case 1167:  /* sync_subdi */
    case 1166:  /* sync_subsi */
    case 1165:  /* sync_subhi */
    case 1164:  /* sync_subqi */
    case 1163:  /* sync_adddi */
    case 1162:  /* sync_addsi */
    case 1161:  /* sync_addhi */
    case 1160:  /* sync_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1159:  /* sync_lock_test_and_setdi */
    case 1158:  /* sync_lock_test_and_setsi */
    case 1157:  /* sync_lock_test_and_sethi */
    case 1156:  /* sync_lock_test_and_setqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1155:  /* sync_old_adddi */
    case 1154:  /* sync_old_addsi */
    case 1153:  /* sync_old_addhi */
    case 1152:  /* sync_old_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 1151:  /* *sync_double_compare_and_swap_ccdi_pic */
    case 1150:  /* sync_double_compare_and_swap_ccti */
    case 1149:  /* sync_double_compare_and_swap_ccdi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 3);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 2);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 1);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[6] = 1;
      break;

    case 1148:  /* *sync_compare_and_swap_ccdi */
    case 1147:  /* *sync_compare_and_swap_ccsi */
    case 1146:  /* *sync_compare_and_swap_cchi */
    case 1145:  /* *sync_compare_and_swap_ccqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 1;
      break;

    case 1144:  /* *sync_double_compare_and_swapdi_pic */
    case 1143:  /* sync_double_compare_and_swapti */
    case 1142:  /* sync_double_compare_and_swapdi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 1141:  /* *sync_compare_and_swapdi */
    case 1140:  /* *sync_compare_and_swapsi */
    case 1139:  /* *sync_compare_and_swaphi */
    case 1138:  /* *sync_compare_and_swapqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 1053:  /* mmx_pi2fw */
    case 1052:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1025:  /* sse3_monitor64 */
    case 1024:  /* sse3_monitor */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 1023:  /* sse3_mwait */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 1022:  /* *sse2_lfence */
    case 1021:  /* *sse2_mfence */
    case 1019:  /* *sse_sfence */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1135:  /* *mmx_maskmovq_rex */
    case 1134:  /* *mmx_maskmovq */
    case 1016:  /* *sse2_maskmovdqu_rex64 */
    case 1015:  /* *sse2_maskmovdqu */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1131:  /* mmx_uavgv4hi3 */
    case 1130:  /* mmx_uavgv8qi3 */
    case 1080:  /* mmx_pmulhrwv4hi3 */
    case 1010:  /* sse2_uavgv8hi3 */
    case 1009:  /* sse2_uavgv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 997:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 1123:  /* mmx_pshufw_1 */
    case 996:  /* sse2_pshuflw_1 */
    case 995:  /* sse2_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 1122:  /* mmx_pextrw */
    case 994:  /* sse2_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 1121:  /* *mmx_pinsrw */
    case 993:  /* *sse2_pinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1114:  /* mmx_packuswb */
    case 1113:  /* mmx_packssdw */
    case 1112:  /* mmx_packsswb */
    case 984:  /* sse2_packuswb */
    case 983:  /* sse2_packssdw */
    case 982:  /* sse2_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1079:  /* mmx_pmaddwd */
    case 945:  /* sse2_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1081:  /* sse2_umulsidi3 */
    case 944:  /* sse2_umulv2siv2di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1078:  /* mmx_umulv4hi3_highpart */
    case 1077:  /* mmx_smulv4hi3_highpart */
    case 943:  /* sse2_umulv8hi3_highpart */
    case 942:  /* sse2_smulv8hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 923:  /* *vec_concatv2df_sse3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 913:  /* sse2_shufpd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 1046:  /* mmx_hsubv2sf3 */
    case 1045:  /* mmx_haddv2sf3 */
    case 881:  /* sse3_hsubv2df3 */
    case 880:  /* sse3_haddv2df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 998:  /* sse2_loadld */
    case 861:  /* *vec_setv4sf_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 920:  /* sse2_movsd */
    case 857:  /* sse_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 917:  /* sse2_loadlpd */
    case 856:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 852:  /* sse_shufps_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 911:  /* *sse3_movddup */
    case 851:  /* sse3_movsldup */
    case 850:  /* sse3_movshdup */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1120:  /* mmx_punpckldq */
    case 1119:  /* mmx_punpckhdq */
    case 1118:  /* mmx_punpcklwd */
    case 1117:  /* mmx_punpckhwd */
    case 1116:  /* mmx_punpcklbw */
    case 1115:  /* mmx_punpckhbw */
    case 992:  /* sse2_punpcklqdq */
    case 991:  /* sse2_punpckhqdq */
    case 990:  /* sse2_punpckldq */
    case 989:  /* sse2_punpckhdq */
    case 988:  /* sse2_punpcklwd */
    case 987:  /* sse2_punpckhwd */
    case 986:  /* sse2_punpcklbw */
    case 985:  /* sse2_punpckhbw */
    case 912:  /* sse2_unpcklpd */
    case 910:  /* sse2_unpckhpd */
    case 849:  /* sse_unpcklps */
    case 848:  /* sse_unpckhps */
    case 847:  /* sse_movlhps */
    case 846:  /* sse_movhlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 835:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 907:  /* sse2_cvtss2sd */
    case 906:  /* sse2_cvtsd2ss */
    case 898:  /* sse2_cvtsi2sdq */
    case 897:  /* sse2_cvtsi2sd */
    case 838:  /* sse_cvtsi2ssq */
    case 837:  /* sse_cvtsi2ss */
    case 834:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 885:  /* sse2_ucomi */
    case 884:  /* sse2_comi */
    case 825:  /* sse_ucomi */
    case 824:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 883:  /* sse2_vmmaskcmpv2df3 */
    case 823:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 821:  /* sse3_hsubv4sf3 */
    case 820:  /* sse3_haddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1047:  /* mmx_addsubv2sf3 */
    case 879:  /* sse3_addsubv2df3 */
    case 819:  /* sse3_addsubv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 904:  /* *sse2_cvtpd2dq */
    case 806:  /* sse_vmrsqrtv4sf2 */
    case 804:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 878:  /* sse2_vmsminv2df3 */
    case 875:  /* sse2_vmsmaxv2df3 */
    case 870:  /* sse2_vmdivv2df3 */
    case 868:  /* sse2_vmmulv2df3 */
    case 866:  /* sse2_vmsubv2df3 */
    case 864:  /* sse2_vmaddv2df3 */
    case 814:  /* sse_vmsminv4sf3 */
    case 811:  /* sse_vmsmaxv4sf3 */
    case 802:  /* sse_vmdivv4sf3 */
    case 800:  /* sse_vmmulv4sf3 */
    case 798:  /* sse_vmsubv4sf3 */
    case 796:  /* sse_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 780:  /* stack_tls_protect_test_di */
    case 779:  /* stack_tls_protect_test_si */
    case 778:  /* stack_protect_test_di */
    case 777:  /* stack_protect_test_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 770:  /* *prefetch_sse_rex */
    case 769:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 768:  /* *sse_prologue_save_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 1));
      break;

    case 766:  /* *sibcall_value_1_rex64_v */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1105:  /* mmx_nandv2si3 */
    case 1104:  /* mmx_nandv4hi3 */
    case 1103:  /* mmx_nandv8qi3 */
    case 973:  /* sse2_nandv2di3 */
    case 972:  /* sse2_nandv4si3 */
    case 971:  /* sse2_nandv8hi3 */
    case 970:  /* sse2_nandv16qi3 */
    case 916:  /* sse2_loadhpd */
    case 908:  /* *sse2_cvtpd2ps */
    case 905:  /* *sse2_cvttpd2dq */
    case 891:  /* *nanddf3 */
    case 887:  /* sse2_nandv2df3 */
    case 872:  /* sse2_vmsqrtv2df2 */
    case 854:  /* sse_loadhps */
    case 831:  /* *nandsf3 */
    case 827:  /* sse_nandv4sf3 */
    case 808:  /* sse_vmsqrtv4sf2 */
    case 765:  /* *sibcall_value_1_rex64 */
    case 764:  /* *call_value_1_rex64 */
    case 763:  /* *sibcall_value_1 */
    case 762:  /* *call_value_1 */
    case 761:  /* *call_value_0_rex64 */
    case 760:  /* *call_value_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 759:  /* *call_value_pop_1 */
    case 758:  /* *call_value_pop_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 757:  /* allocate_stack_worker_rex64 */
    case 756:  /* allocate_stack_worker_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 755:  /* pro_epilogue_adjust_stack_rex64_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1132:  /* mmx_psadbw */
    case 1044:  /* mmx_rsqit1v2sf3 */
    case 1042:  /* mmx_rcpit2v2sf3 */
    case 1041:  /* mmx_rcpit1v2sf3 */
    case 1011:  /* sse2_psadbw */
    case 818:  /* *ieee_smaxv2df3 */
    case 817:  /* *ieee_sminv2df3 */
    case 816:  /* *ieee_smaxv4sf3 */
    case 815:  /* *ieee_sminv4sf3 */
    case 752:  /* *ieee_smaxdf3 */
    case 751:  /* *ieee_smindf3 */
    case 750:  /* *ieee_smaxsf3 */
    case 749:  /* *ieee_sminsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1127:  /* *mmx_concatv2si */
    case 1111:  /* mmx_xorv2si3 */
    case 1110:  /* mmx_xorv4hi3 */
    case 1109:  /* mmx_xorv8qi3 */
    case 1108:  /* mmx_iorv2si3 */
    case 1107:  /* mmx_iorv4hi3 */
    case 1106:  /* mmx_iorv8qi3 */
    case 1102:  /* mmx_andv2si3 */
    case 1101:  /* mmx_andv4hi3 */
    case 1100:  /* mmx_andv8qi3 */
    case 1099:  /* mmx_gtv2si3 */
    case 1098:  /* mmx_gtv4hi3 */
    case 1097:  /* mmx_gtv8qi3 */
    case 1096:  /* mmx_eqv2si3 */
    case 1095:  /* mmx_eqv4hi3 */
    case 1094:  /* mmx_eqv8qi3 */
    case 1092:  /* mmx_ashlv2si3 */
    case 1091:  /* mmx_ashlv4hi3 */
    case 1089:  /* mmx_lshrv2si3 */
    case 1088:  /* mmx_lshrv4hi3 */
    case 1087:  /* mmx_ashrv2si3 */
    case 1086:  /* mmx_ashrv4hi3 */
    case 1085:  /* mmx_sminv4hi3 */
    case 1084:  /* mmx_uminv8qi3 */
    case 1083:  /* mmx_smaxv4hi3 */
    case 1082:  /* mmx_umaxv8qi3 */
    case 1076:  /* mmx_mulv4hi3 */
    case 1075:  /* mmx_ussubv4hi3 */
    case 1074:  /* mmx_ussubv8qi3 */
    case 1073:  /* mmx_sssubv4hi3 */
    case 1072:  /* mmx_sssubv8qi3 */
    case 1070:  /* mmx_subv2si3 */
    case 1069:  /* mmx_subv4hi3 */
    case 1068:  /* mmx_subv8qi3 */
    case 1067:  /* mmx_usaddv4hi3 */
    case 1066:  /* mmx_usaddv8qi3 */
    case 1065:  /* mmx_ssaddv4hi3 */
    case 1064:  /* mmx_ssaddv8qi3 */
    case 1062:  /* mmx_addv2si3 */
    case 1061:  /* mmx_addv4hi3 */
    case 1060:  /* mmx_addv8qi3 */
    case 1057:  /* *mmx_concatv2sf */
    case 1050:  /* mmx_eqv2sf3 */
    case 1049:  /* mmx_gev2sf3 */
    case 1048:  /* mmx_gtv2sf3 */
    case 1039:  /* mmx_sminv2sf3 */
    case 1038:  /* mmx_smaxv2sf3 */
    case 1037:  /* mmx_mulv2sf3 */
    case 1036:  /* mmx_subv2sf3 */
    case 1035:  /* mmx_addv2sf3 */
    case 1008:  /* *vec_concatv2di */
    case 1007:  /* *vec_concatv4si_1 */
    case 1006:  /* *sse1_concatv2si */
    case 1005:  /* *sse2_concatv2si */
    case 981:  /* *xorv2di3 */
    case 980:  /* *xorv4si3 */
    case 979:  /* *xorv8hi3 */
    case 978:  /* *xorv16qi3 */
    case 977:  /* *iorv2di3 */
    case 976:  /* *iorv4si3 */
    case 975:  /* *iorv8hi3 */
    case 974:  /* *iorv16qi3 */
    case 969:  /* *andv2di3 */
    case 968:  /* *andv4si3 */
    case 967:  /* *andv8hi3 */
    case 966:  /* *andv16qi3 */
    case 965:  /* sse2_gtv4si3 */
    case 964:  /* sse2_gtv8hi3 */
    case 963:  /* sse2_gtv16qi3 */
    case 962:  /* sse2_eqv4si3 */
    case 961:  /* sse2_eqv8hi3 */
    case 960:  /* sse2_eqv16qi3 */
    case 959:  /* *sminv8hi3 */
    case 958:  /* *uminv16qi3 */
    case 957:  /* *smaxv8hi3 */
    case 956:  /* *umaxv16qi3 */
    case 955:  /* sse2_lshrti3 */
    case 954:  /* sse2_ashlti3 */
    case 953:  /* ashlv2di3 */
    case 952:  /* ashlv4si3 */
    case 951:  /* ashlv8hi3 */
    case 950:  /* lshrv2di3 */
    case 949:  /* lshrv4si3 */
    case 948:  /* lshrv8hi3 */
    case 947:  /* ashrv4si3 */
    case 946:  /* ashrv8hi3 */
    case 941:  /* *mulv8hi3 */
    case 940:  /* sse2_ussubv8hi3 */
    case 939:  /* sse2_ussubv16qi3 */
    case 938:  /* sse2_sssubv8hi3 */
    case 937:  /* sse2_sssubv16qi3 */
    case 936:  /* *subv2di3 */
    case 935:  /* *subv4si3 */
    case 934:  /* *subv8hi3 */
    case 933:  /* *subv16qi3 */
    case 932:  /* sse2_usaddv8hi3 */
    case 931:  /* sse2_usaddv16qi3 */
    case 930:  /* sse2_ssaddv8hi3 */
    case 929:  /* sse2_ssaddv16qi3 */
    case 928:  /* *addv2di3 */
    case 927:  /* *addv4si3 */
    case 926:  /* *addv8hi3 */
    case 925:  /* *addv16qi3 */
    case 924:  /* *vec_concatv2df */
    case 893:  /* *xordf3 */
    case 892:  /* *iordf3 */
    case 890:  /* *anddf3 */
    case 889:  /* *xorv2df3 */
    case 888:  /* *iorv2df3 */
    case 886:  /* *andv2df3 */
    case 877:  /* *sminv2df3 */
    case 876:  /* *sminv2df3_finite */
    case 874:  /* *smaxv2df3 */
    case 873:  /* *smaxv2df3_finite */
    case 869:  /* *divv2df3 */
    case 867:  /* *mulv2df3 */
    case 865:  /* *subv2df3 */
    case 863:  /* *addv2df3 */
    case 860:  /* *sse_concatv4sf */
    case 859:  /* *sse_concatv2sf */
    case 833:  /* *xorsf3 */
    case 832:  /* *iorsf3 */
    case 830:  /* *andsf3 */
    case 829:  /* *xorv4sf3 */
    case 828:  /* *iorv4sf3 */
    case 826:  /* *andv4sf3 */
    case 813:  /* *sminv4sf3 */
    case 812:  /* *sminv4sf3_finite */
    case 810:  /* *smaxv4sf3 */
    case 809:  /* *smaxv4sf3_finite */
    case 801:  /* *divv4sf3 */
    case 799:  /* *mulv4sf3 */
    case 797:  /* *subv4sf3 */
    case 795:  /* *addv4sf3 */
    case 748:  /* smaxdf3 */
    case 747:  /* smindf3 */
    case 746:  /* smaxsf3 */
    case 745:  /* sminsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 740:  /* *movqicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 744:  /* *movxfcc_1 */
    case 743:  /* *movdfcc_1_rex64 */
    case 742:  /* *movdfcc_1 */
    case 741:  /* *movsfcc_1_387 */
    case 739:  /* *movhicc_noc */
    case 738:  /* *movsicc_noc */
    case 736:  /* *movdicc_c_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 734:  /* *strlenqi_rex_1 */
    case 733:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 732:  /* *cmpstrnqi_rex_1 */
    case 731:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 730:  /* *cmpstrnqi_nz_rex_1 */
    case 729:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 728:  /* *rep_stosqi_rex64 */
    case 727:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 726:  /* *rep_stossi_rex64 */
    case 725:  /* *rep_stossi */
    case 724:  /* *rep_stosdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 723:  /* *strsetqi_rex_1 */
    case 722:  /* *strsetqi_1 */
    case 721:  /* *strsethi_rex_1 */
    case 720:  /* *strsethi_1 */
    case 719:  /* *strsetsi_rex_1 */
    case 718:  /* *strsetsi_1 */
    case 717:  /* *strsetdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 716:  /* *rep_movqi_rex64 */
    case 715:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 714:  /* *rep_movsi_rex64 */
    case 713:  /* *rep_movsi */
    case 712:  /* *rep_movdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 711:  /* *strmovqi_rex_1 */
    case 710:  /* *strmovqi_1 */
    case 709:  /* *strmovhi_rex_1 */
    case 708:  /* *strmovhi_1 */
    case 707:  /* *strmovsi_rex_1 */
    case 706:  /* *strmovsi_1 */
    case 705:  /* *strmovdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 695:  /* fistdi2_ceil_with_temp */
    case 684:  /* fistdi2_floor_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 699:  /* fistsi2_ceil_with_temp */
    case 698:  /* fisthi2_ceil_with_temp */
    case 694:  /* fistdi2_ceil */
    case 688:  /* fistsi2_floor_with_temp */
    case 687:  /* fisthi2_floor_with_temp */
    case 683:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 702:  /* frndintxf2_mask_pm */
    case 700:  /* frndintxf2_trunc */
    case 693:  /* *fistdi2_ceil_1 */
    case 692:  /* *fistsi2_ceil_1 */
    case 691:  /* *fisthi2_ceil_1 */
    case 689:  /* frndintxf2_ceil */
    case 682:  /* *fistdi2_floor_1 */
    case 681:  /* *fistsi2_floor_1 */
    case 680:  /* *fisthi2_floor_1 */
    case 678:  /* frndintxf2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 703:  /* frndintxf2_mask_pm_i387 */
    case 701:  /* frndintxf2_trunc_i387 */
    case 697:  /* fistsi2_ceil */
    case 696:  /* fisthi2_ceil */
    case 690:  /* frndintxf2_ceil_i387 */
    case 686:  /* fistsi2_floor */
    case 685:  /* fisthi2_floor */
    case 679:  /* frndintxf2_floor_i387 */
    case 671:  /* fistdi2_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 776:  /* stack_tls_protect_set_di */
    case 775:  /* stack_tls_protect_set_si */
    case 774:  /* stack_protect_set_di */
    case 773:  /* stack_protect_set_si */
    case 677:  /* fistsi2_with_temp */
    case 676:  /* fisthi2_with_temp */
    case 670:  /* fistdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 664:  /* fyl2xp1_xf3 */
    case 663:  /* fyl2x_xf3 */
    case 662:  /* atan2xf3_1 */
    case 661:  /* atan2sf3_1 */
    case 660:  /* atan2df3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 655:  /* *sincosextendsfdf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 665:  /* *fxtractxf3 */
    case 659:  /* *tanxf3_1 */
    case 658:  /* *tansf3_1 */
    case 657:  /* *tandf3_1 */
    case 656:  /* sincosxf3 */
    case 654:  /* sincossf3 */
    case 653:  /* sincosdf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 900:  /* sse2_cvtsd2siq */
    case 899:  /* sse2_cvtsd2si */
    case 840:  /* sse_cvtss2siq */
    case 839:  /* sse_cvtss2si */
    case 651:  /* *cosextendsfdf2 */
    case 647:  /* *sinextendsfdf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 667:  /* *fscalexf4 */
    case 644:  /* fprem1xf4 */
    case 643:  /* fpremxf4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 632:  /* *fop_xf_6_i387 */
    case 623:  /* *fop_df_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 631:  /* *fop_xf_5_i387 */
    case 629:  /* *fop_xf_3si_i387 */
    case 628:  /* *fop_xf_3hi_i387 */
    case 622:  /* *fop_df_5_i387 */
    case 620:  /* *fop_df_3si_i387 */
    case 619:  /* *fop_df_3hi_i387 */
    case 610:  /* *fop_sf_3si_i387 */
    case 609:  /* *fop_sf_3hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 630:  /* *fop_xf_4_i387 */
    case 627:  /* *fop_xf_2si_i387 */
    case 626:  /* *fop_xf_2hi_i387 */
    case 621:  /* *fop_df_4_i387 */
    case 618:  /* *fop_df_2si_i387 */
    case 617:  /* *fop_df_2hi_i387 */
    case 608:  /* *fop_sf_2si_i387 */
    case 607:  /* *fop_sf_2hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 882:  /* sse2_maskcmpv2df3 */
    case 822:  /* sse_maskcmpv4sf3 */
    case 625:  /* *fop_xf_1_i387 */
    case 624:  /* *fop_xf_comm_i387 */
    case 616:  /* *fop_df_1_i387 */
    case 615:  /* *fop_df_1_sse */
    case 614:  /* *fop_df_1_mixed */
    case 613:  /* *fop_df_comm_i387 */
    case 612:  /* *fop_df_comm_sse */
    case 611:  /* *fop_df_comm_mixed */
    case 606:  /* *fop_sf_1_i387 */
    case 605:  /* *fop_sf_1_sse */
    case 604:  /* *fop_sf_1_mixed */
    case 603:  /* *fop_sf_comm_i387 */
    case 602:  /* *fop_sf_comm_sse */
    case 601:  /* *fop_sf_comm_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 600:  /* *tls_dynamic_gnu2_combine_64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 599:  /* *tls_dynamic_call_64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 1133:  /* mmx_pmovmskb */
    case 1043:  /* mmx_rsqrtv2sf2 */
    case 1040:  /* mmx_rcpv2sf2 */
    case 1034:  /* sse_movntdi */
    case 1014:  /* sse2_pmovmskb */
    case 1013:  /* sse2_movmskpd */
    case 1012:  /* sse_movmskps */
    case 895:  /* sse2_cvtpd2pi */
    case 844:  /* sse2_cvtps2dq */
    case 805:  /* sse_rsqrtv4sf2 */
    case 803:  /* sse_rcpv4sf2 */
    case 794:  /* sse3_lddqu */
    case 793:  /* sse2_movntsi */
    case 792:  /* sse2_movntv2di */
    case 791:  /* sse2_movntv2df */
    case 790:  /* sse_movntv4sf */
    case 789:  /* sse2_movdqu */
    case 788:  /* sse2_movupd */
    case 787:  /* sse_movups */
    case 675:  /* fistsi2 */
    case 674:  /* fisthi2 */
    case 673:  /* *fistsi2_1 */
    case 672:  /* *fisthi2_1 */
    case 669:  /* *fistdi2_1 */
    case 668:  /* frndintxf2 */
    case 666:  /* *f2xm1xf2 */
    case 652:  /* *cosxf2 */
    case 650:  /* *cossf2 */
    case 649:  /* *cosdf2 */
    case 648:  /* *sinxf2 */
    case 646:  /* *sinsf2 */
    case 645:  /* *sindf2 */
    case 598:  /* *tls_dynamic_lea_64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 597:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 596:  /* *tls_dynamic_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 595:  /* *tls_dynamic_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 594:  /* *add_tp_di */
    case 592:  /* *add_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 590:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 588:  /* *tls_local_dynamic_base_32_sun */
    case 587:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 586:  /* *tls_global_dynamic_64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 585:  /* *tls_global_dynamic_32_sun */
    case 584:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 583:  /* *bsr_rex64 */
    case 582:  /* *bsr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 579:  /* *ffsdi_1 */
    case 577:  /* *ffssi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 569:  /* set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 565:  /* return_indirect_internal */
    case 564:  /* return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1137:  /* mmx_femms */
    case 1136:  /* mmx_emms */
    case 767:  /* trap */
    case 704:  /* cld */
    case 574:  /* leave_rex64 */
    case 573:  /* leave */
    case 566:  /* nop */
    case 563:  /* return_internal_long */
    case 562:  /* return_internal */
      break;

    case 1020:  /* sse2_clflush */
    case 1017:  /* sse_ldmxcsr */
    case 567:  /* align */
    case 561:  /* blockage */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 554:  /* *call_pop_1 */
    case 553:  /* *call_pop_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 552:  /* *tablejump_1_rtx64 */
    case 551:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 560:  /* *sibcall_1_rex64_v */
    case 550:  /* *indirect_jump_rtx64 */
    case 549:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 548:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 547:  /* *fp_jcc_8si_387 */
    case 546:  /* *fp_jcc_8hi_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 544:  /* *fp_jcc_6_387 */
    case 542:  /* *fp_jcc_4_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 545:  /* *fp_jcc_7_387 */
    case 543:  /* *fp_jcc_5_387 */
    case 541:  /* *fp_jcc_3_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 540:  /* *fp_jcc_2_387 */
    case 539:  /* *fp_jcc_2_sse */
    case 538:  /* *fp_jcc_2_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      break;

    case 537:  /* *fp_jcc_1_387 */
    case 536:  /* *fp_jcc_1_sse */
    case 535:  /* *fp_jcc_1_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 534:  /* *jcc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 533:  /* *jcc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 532:  /* *sse_setccdf */
    case 531:  /* *sse_setccsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 528:  /* *btcq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2);
      recog_data.dup_num[1] = 1;
      break;

    case 527:  /* *btrq */
    case 526:  /* *btsq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      break;

    case 513:  /* ix86_rotrdi3 */
    case 500:  /* ix86_rotldi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 440:  /* x86_shrd_1 */
    case 431:  /* x86_64_shrd */
    case 415:  /* x86_shld_1 */
    case 410:  /* x86_64_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 467:  /* lshrti3_1 */
    case 429:  /* ashrti3_1 */
    case 408:  /* ashlti3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 403:  /* *one_cmplsi2_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 384:  /* copysigndf3_var */
    case 379:  /* copysignsf3_var */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      break;

    case 383:  /* copysigndf3_const */
    case 378:  /* copysignsf3_const */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 385:  /* *absnegxf2_i387 */
    case 382:  /* *absnegdf2_i387 */
    case 381:  /* *absnegdf2_sse */
    case 380:  /* *absnegdf2_mixed */
    case 377:  /* *absnegsf2_i387 */
    case 376:  /* *absnegsf2_sse */
    case 375:  /* *absnegsf2_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 370:  /* *negsi2_cmpz_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 368:  /* *negsi2_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 407:  /* *one_cmplqi2_2 */
    case 405:  /* *one_cmplhi2_2 */
    case 402:  /* *one_cmplsi2_2 */
    case 399:  /* *one_cmpldi2_2_rex64 */
    case 374:  /* *negqi2_cmpz */
    case 372:  /* *neghi2_cmpz */
    case 369:  /* *negsi2_cmpz */
    case 366:  /* *negdi2_cmpz_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 485:  /* *lshrsi3_cmp_zext */
    case 482:  /* *lshrsi3_cmp_one_bit_zext */
    case 347:  /* *xorsi_2_zext_imm */
    case 325:  /* *iorsi_2_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 589:  /* *tls_local_dynamic_base_64 */
    case 477:  /* *lshrsi3_1_one_bit_zext */
    case 344:  /* *xorsi_1_zext_imm */
    case 322:  /* *iorsi_1_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 362:  /* *xorqi_cc_ext_1_rex64 */
    case 361:  /* *xorqi_cc_ext_1 */
    case 313:  /* *andqi_ext_0_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 359:  /* *xorqi_2_slp */
    case 333:  /* *iorqi_2_slp */
    case 311:  /* *andqi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 298:  /* *testqi_ext_3_rex64 */
    case 297:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 296:  /* *testqi_ext_2 */
    case 295:  /* *testqi_ext_1_rex64 */
    case 294:  /* *testqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 293:  /* *testqi_ext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 286:  /* *udivmodsi4_noext */
    case 284:  /* *udivmoddi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 285:  /* udivmodsi4 */
    case 283:  /* udivmoddi4 */
    case 282:  /* divmodhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 287:  /* *udivmodhi_noext */
    case 281:  /* *divmodsi_noext */
    case 278:  /* *divmoddi_noext_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 280:  /* *divmodsi4_cltd */
    case 279:  /* *divmodsi4_nocltd */
    case 277:  /* *divmoddi4_cltd_rex64 */
    case 276:  /* *divmoddi4_nocltd_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 273:  /* *smulsi3_highpart_zext */
    case 270:  /* *umulsi3_highpart_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 272:  /* *smulsi3_highpart_insn */
    case 271:  /* *smuldi3_highpart_rex64 */
    case 269:  /* *umulsi3_highpart_insn */
    case 268:  /* *umuldi3_highpart_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 267:  /* *mulsidi3_insn */
    case 266:  /* *mulditi3_insn */
    case 265:  /* *umulsidi3_insn */
    case 264:  /* *umulditi3_insn */
    case 263:  /* *mulqihi3_insn */
    case 262:  /* *umulqihi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 249:  /* *subsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 243:  /* subsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 256:  /* *subqi_3 */
    case 252:  /* *subhi_3 */
    case 248:  /* *subsi_3 */
    case 239:  /* *subdi_3_rex63 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 242:  /* subsi3_carry */
    case 241:  /* subhi3_carry */
    case 240:  /* subqi3_carry */
    case 236:  /* subdi3_carry_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 357:  /* *xorqi_ext_2 */
    case 356:  /* *xorqi_ext_1_rex64 */
    case 355:  /* *xorqi_ext_1 */
    case 338:  /* *iorqi_ext_2 */
    case 337:  /* *iorqi_ext_1_rex64 */
    case 336:  /* *iorqi_ext_1 */
    case 316:  /* *andqi_ext_2 */
    case 315:  /* *andqi_ext_1_rex64 */
    case 314:  /* *andqi_ext_1 */
    case 233:  /* *addqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 354:  /* xorqi_ext_0 */
    case 335:  /* iorqi_ext_0 */
    case 312:  /* andqi_ext_0 */
    case 232:  /* *addqi_ext_1_rex64 */
    case 231:  /* addqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 525:  /* *rotrqi3_1_slp */
    case 523:  /* *rotrqi3_1_one_bit_slp */
    case 511:  /* *rotlqi3_1_slp */
    case 509:  /* *rotlqi3_1_one_bit_slp */
    case 495:  /* *lshrqi3_1_slp */
    case 493:  /* *lshrqi3_1_one_bit_slp */
    case 462:  /* *ashrqi3_1_slp */
    case 460:  /* *ashrqi3_1_one_bit_slp */
    case 353:  /* *xorqi_1_slp */
    case 331:  /* *iorqi_1_slp */
    case 308:  /* *andqi_1_slp */
    case 254:  /* *subqi_1_slp */
    case 226:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 215:  /* *addsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 452:  /* *ashrsi3_cmp_zext */
    case 449:  /* *ashrsi3_one_bit_cmp_zext */
    case 420:  /* *ashlsi3_cmp_zext */
    case 346:  /* *xorsi_2_zext */
    case 324:  /* *iorsi_2_zext */
    case 304:  /* *andsi_2_zext */
    case 247:  /* *subsi_2_zext */
    case 213:  /* *addsi_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 519:  /* *rotrsi3_1_zext */
    case 517:  /* *rotrsi3_1_one_bit_zext */
    case 506:  /* *rotlsi3_1_zext */
    case 504:  /* *rotlsi3_1_one_bit_zext */
    case 479:  /* *lshrsi3_1_zext */
    case 446:  /* *ashrsi3_1_zext */
    case 444:  /* *ashrsi3_1_one_bit_zext */
    case 442:  /* *ashrsi3_31_zext */
    case 417:  /* *ashlsi3_1_zext */
    case 343:  /* *xorsi_1_zext */
    case 321:  /* *iorsi_1_zext */
    case 302:  /* *andsi_1_zext */
    case 259:  /* *mulsi3_1_zext */
    case 245:  /* *subsi_1_zext */
    case 211:  /* addsi_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 499:  /* *lshrqi2_cconly */
    case 497:  /* *lshrqi2_one_bit_cconly */
    case 491:  /* *lshrhi3_cconly */
    case 489:  /* *lshrhi3_one_bit_cconly */
    case 484:  /* *lshrsi3_cconly */
    case 481:  /* *lshrsi3_one_bit_cconly */
    case 474:  /* *lshrdi3_cconly_rex64 */
    case 472:  /* *lshrdi3_cconly_one_bit_rex64 */
    case 466:  /* *ashrqi3_cconly */
    case 464:  /* *ashrqi3_one_bit_cconly */
    case 458:  /* *ashrhi3_cconly */
    case 456:  /* *ashrhi3_one_bit_cconly */
    case 451:  /* *ashrsi3_cconly */
    case 448:  /* *ashrsi3_one_bit_cconly */
    case 438:  /* *ashrdi3_cconly_rex64 */
    case 436:  /* *ashrdi3_one_bit_cconly_rex64 */
    case 428:  /* *ashlqi3_cconly */
    case 424:  /* *ashlhi3_cconly */
    case 419:  /* *ashlsi3_cconly */
    case 413:  /* *ashldi3_cconly_rex64 */
    case 360:  /* *xorqi_cc_2 */
    case 351:  /* *xorhi_3 */
    case 348:  /* *xorsi_3 */
    case 341:  /* *xordi_3_rex64 */
    case 334:  /* *iorqi_3 */
    case 329:  /* *iorhi_3 */
    case 326:  /* *iorsi_3 */
    case 319:  /* *iordi_3_rex64 */
    case 230:  /* *addqi_5 */
    case 223:  /* *addhi_5 */
    case 217:  /* *addsi_5 */
    case 209:  /* *adddi_5_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 229:  /* *addqi_4 */
    case 222:  /* *addhi_4 */
    case 216:  /* *addsi_4 */
    case 208:  /* *adddi_4_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 228:  /* *addqi_3 */
    case 221:  /* *addhi_3 */
    case 214:  /* *addsi_3 */
    case 207:  /* *adddi_3_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 498:  /* *lshrqi2_cmp */
    case 496:  /* *lshrqi2_one_bit_cmp */
    case 490:  /* *lshrhi3_cmp */
    case 488:  /* *lshrhi3_one_bit_cmp */
    case 483:  /* *lshrsi3_cmp */
    case 480:  /* *lshrsi3_one_bit_cmp */
    case 473:  /* *lshrdi3_cmp_rex64 */
    case 471:  /* *lshrdi3_cmp_one_bit_rex64 */
    case 465:  /* *ashrqi3_cmp */
    case 463:  /* *ashrqi3_one_bit_cmp */
    case 457:  /* *ashrhi3_cmp */
    case 455:  /* *ashrhi3_one_bit_cmp */
    case 450:  /* *ashrsi3_cmp */
    case 447:  /* *ashrsi3_one_bit_cmp */
    case 437:  /* *ashrdi3_cmp_rex64 */
    case 435:  /* *ashrdi3_one_bit_cmp_rex64 */
    case 427:  /* *ashlqi3_cmp */
    case 423:  /* *ashlhi3_cmp */
    case 418:  /* *ashlsi3_cmp */
    case 412:  /* *ashldi3_cmp_rex64 */
    case 358:  /* *xorqi_cc_1 */
    case 350:  /* *xorhi_2 */
    case 345:  /* *xorsi_2 */
    case 340:  /* *xordi_2_rex64 */
    case 332:  /* *iorqi_2 */
    case 328:  /* *iorhi_2 */
    case 323:  /* *iorsi_2 */
    case 318:  /* *iordi_2_rex64 */
    case 310:  /* *andqi_2 */
    case 309:  /* *andqi_2_maybe_si */
    case 306:  /* *andhi_2 */
    case 303:  /* *andsi_2 */
    case 300:  /* *anddi_2 */
    case 255:  /* *subqi_2 */
    case 251:  /* *subhi_2 */
    case 246:  /* *subsi_2 */
    case 238:  /* *subdi_2_rex64 */
    case 227:  /* *addqi_2 */
    case 220:  /* *addhi_2 */
    case 212:  /* *addsi_2 */
    case 206:  /* *adddi_2_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 204:  /* *lea_general_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 203:  /* *lea_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 202:  /* *lea_general_2_zext */
    case 200:  /* *lea_general_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 201:  /* *lea_general_2 */
    case 199:  /* *lea_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 192:  /* *addsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 194:  /* addqi3_cc */
    case 193:  /* *addsi3_cc */
    case 188:  /* *adddi3_cc_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 191:  /* addsi3_carry */
    case 190:  /* addhi3_carry */
    case 189:  /* addqi3_carry */
    case 187:  /* adddi3_carry_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 754:  /* pro_epilogue_adjust_stack_rex64 */
    case 753:  /* pro_epilogue_adjust_stack_1 */
    case 524:  /* *rotrqi3_1 */
    case 522:  /* *rotrqi3_1_one_bit */
    case 521:  /* *rotrhi3 */
    case 520:  /* *rotrhi3_one_bit */
    case 518:  /* *rotrsi3_1 */
    case 516:  /* *rotrsi3_1_one_bit */
    case 515:  /* *rotrdi3_1_rex64 */
    case 514:  /* *rotrdi3_1_one_bit_rex64 */
    case 512:  /* *rotlqi3_1 */
    case 510:  /* *rotlqi3_1_one_bit */
    case 508:  /* *rotlhi3_1 */
    case 507:  /* *rotlhi3_1_one_bit */
    case 505:  /* *rotlsi3_1 */
    case 503:  /* *rotlsi3_1_one_bit */
    case 502:  /* *rotldi3_1_rex64 */
    case 501:  /* *rotlsi3_1_one_bit_rex64 */
    case 494:  /* *lshrqi3_1 */
    case 492:  /* *lshrqi3_1_one_bit */
    case 487:  /* *lshrhi3_1 */
    case 486:  /* *lshrhi3_1_one_bit */
    case 478:  /* *lshrsi3_1 */
    case 476:  /* *lshrsi3_1_one_bit */
    case 475:  /* *lshrdi3_1 */
    case 470:  /* *lshrdi3_1_rex64 */
    case 469:  /* *lshrdi3_1_one_bit_rex64 */
    case 468:  /* *lshrti3_2 */
    case 461:  /* *ashrqi3_1 */
    case 459:  /* *ashrqi3_1_one_bit */
    case 454:  /* *ashrhi3_1 */
    case 453:  /* *ashrhi3_1_one_bit */
    case 445:  /* *ashrsi3_1 */
    case 443:  /* *ashrsi3_1_one_bit */
    case 441:  /* ashrsi3_31 */
    case 439:  /* *ashrdi3_1 */
    case 434:  /* *ashrdi3_1_rex64 */
    case 433:  /* *ashrdi3_1_one_bit_rex64 */
    case 432:  /* *ashrdi3_63_rex64 */
    case 430:  /* *ashrti3_2 */
    case 426:  /* *ashlqi3_1 */
    case 425:  /* *ashlqi3_1_lea */
    case 422:  /* *ashlhi3_1 */
    case 421:  /* *ashlhi3_1_lea */
    case 416:  /* *ashlsi3_1 */
    case 414:  /* *ashldi3_1 */
    case 411:  /* *ashldi3_1_rex64 */
    case 409:  /* *ashlti3_2 */
    case 352:  /* *xorqi_1 */
    case 349:  /* *xorhi_1 */
    case 342:  /* *xorsi_1 */
    case 339:  /* *xordi_1_rex64 */
    case 330:  /* *iorqi_1 */
    case 327:  /* *iorhi_1 */
    case 320:  /* *iorsi_1 */
    case 317:  /* *iordi_1_rex64 */
    case 307:  /* *andqi_1 */
    case 305:  /* *andhi_1 */
    case 301:  /* *andsi_1 */
    case 299:  /* *anddi_1_rex64 */
    case 275:  /* udivqi3 */
    case 274:  /* divqi3 */
    case 261:  /* *mulqi3_1 */
    case 260:  /* *mulhi3_1 */
    case 258:  /* *mulsi3_1 */
    case 257:  /* *muldi3_1_rex64 */
    case 253:  /* *subqi_1 */
    case 250:  /* *subhi_1 */
    case 244:  /* *subsi_1 */
    case 237:  /* *subdi_1_rex64 */
    case 235:  /* *subdi3_1 */
    case 234:  /* *subti3_1 */
    case 225:  /* *addqi_1 */
    case 224:  /* *addqi_1_lea */
    case 219:  /* *addhi_1 */
    case 218:  /* *addhi_1_lea */
    case 210:  /* *addsi_1 */
    case 205:  /* *adddi_1_rex64 */
    case 186:  /* *adddi3_1 */
    case 185:  /* *addti3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 161:  /* fix_truncdi_i387_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 165:  /* fix_truncsi_i387_with_temp */
    case 164:  /* fix_trunchi_i387_with_temp */
    case 160:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 163:  /* fix_truncsi_i387 */
    case 162:  /* fix_trunchi_i387 */
    case 156:  /* fix_truncdi_i387_fisttp_with_temp */
    case 155:  /* fix_truncsi_i387_fisttp_with_temp */
    case 154:  /* fix_trunchi_i387_fisttp_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 578:  /* *ffs_rex64 */
    case 576:  /* *ffs_no_cmove */
    case 575:  /* *ffs_cmove */
    case 153:  /* fix_truncdi_i387_fisttp */
    case 152:  /* fix_truncsi_i387_fisttp */
    case 151:  /* fix_trunchi_i387_fisttp */
    case 142:  /* *truncxfdf2_i387 */
    case 140:  /* *truncxfdf2_mixed */
    case 138:  /* *truncxfsf2_i387 */
    case 136:  /* *truncxfsf2_mixed */
    case 134:  /* *truncdfsf_i387 */
    case 133:  /* *truncdfsf_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 114:  /* *extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 737:  /* x86_movsicc_0_m1 */
    case 735:  /* x86_movdicc_0_m1_rex64 */
    case 581:  /* ctzdi2 */
    case 580:  /* ctzsi2 */
    case 373:  /* *negqi2_1 */
    case 371:  /* *neghi2_1 */
    case 367:  /* *negsi2_1 */
    case 365:  /* *negdi2_1_rex64 */
    case 364:  /* *negdi2_1 */
    case 363:  /* *negti2_1 */
    case 159:  /* *fix_truncdi_i387_1 */
    case 158:  /* *fix_truncsi_i387_1 */
    case 157:  /* *fix_trunchi_i387_1 */
    case 110:  /* zero_extendsidi2_32 */
    case 108:  /* *zero_extendqisi2_movzbw_and */
    case 107:  /* *zero_extendqisi2_and */
    case 105:  /* *zero_extendqihi2_movzbw_and */
    case 104:  /* *zero_extendqihi2_and */
    case 102:  /* zero_extendhisi2_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 72:  /* *movqi_insv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1125:  /* *vec_dupv4hi */
    case 909:  /* sse2_cvtps2pd */
    case 903:  /* sse2_cvtdq2pd */
    case 902:  /* sse2_cvttsd2siq */
    case 901:  /* sse2_cvttsd2si */
    case 842:  /* sse_cvttss2siq */
    case 841:  /* sse_cvttss2si */
    case 836:  /* sse_cvttps2pi */
    case 642:  /* *sqrtextenddfxf2_i387 */
    case 641:  /* *sqrtextendsfxf2_i387 */
    case 639:  /* *sqrtextendsfdf2_i387 */
    case 401:  /* *one_cmplsi2_1_zext */
    case 397:  /* *absextendsfxf2 */
    case 396:  /* *absextenddfxf2 */
    case 395:  /* *absextendsfdf2 */
    case 394:  /* *negextendsfxf2 */
    case 393:  /* *negextenddfxf2 */
    case 392:  /* *negextendsfdf2 */
    case 197:  /* *lea_1_zext */
    case 122:  /* *extendqisi2_zext */
    case 119:  /* *extendhisi2_zext */
    case 69:  /* *movqi_extzv_2_rex64 */
    case 68:  /* *movqi_extzv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 59:  /* *movstrictqi_xor */
    case 52:  /* *movstricthi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 100:  /* swapxf */
    case 95:  /* *swapdf */
    case 90:  /* *swapsf */
    case 84:  /* *swapdi_rex64 */
    case 57:  /* *swapqi_2 */
    case 56:  /* *swapqi_1 */
    case 50:  /* *swaphi_2 */
    case 49:  /* *swaphi_1 */
    case 43:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 1129:  /* *vec_extractv2si_1 */
    case 1128:  /* *vec_extractv2si_0 */
    case 1126:  /* *vec_dupv2si */
    case 1124:  /* mmx_pswapdv2si2 */
    case 1059:  /* *vec_extractv2sf_1 */
    case 1058:  /* *vec_extractv2sf_0 */
    case 1056:  /* *vec_dupv2sf */
    case 1055:  /* mmx_pswapdv2sf2 */
    case 1054:  /* mmx_floatv2si2 */
    case 1051:  /* mmx_pf2id */
    case 1004:  /* *vec_dupv2di */
    case 1003:  /* *vec_dupv4si */
    case 1002:  /* *vec_extractv2di_1_sse */
    case 1001:  /* *vec_extractv2di_1_sse2 */
    case 1000:  /* *sse2_storeq */
    case 999:  /* sse2_stored */
    case 922:  /* *vec_dupv2df */
    case 921:  /* *vec_dupv2df_sse3 */
    case 919:  /* *vec_extractv2df_0_sse */
    case 918:  /* *vec_extractv2df_1_sse */
    case 915:  /* sse2_storelpd */
    case 914:  /* sse2_storehpd */
    case 896:  /* sse2_cvttpd2pi */
    case 894:  /* sse2_cvtpi2pd */
    case 871:  /* sqrtv2df2 */
    case 862:  /* *vec_extractv4sf_0 */
    case 858:  /* *vec_dupv4sf */
    case 855:  /* sse_storelps */
    case 853:  /* sse_storehps */
    case 845:  /* sse2_cvttps2dq */
    case 843:  /* sse2_cvtdq2ps */
    case 807:  /* sqrtv4sf2 */
    case 640:  /* sqrtxf2 */
    case 638:  /* *sqrtdf2_i387 */
    case 637:  /* *sqrtdf2_sse */
    case 636:  /* *sqrtdf2_mixed */
    case 635:  /* *sqrtsf2_i387 */
    case 634:  /* *sqrtsf2_sse */
    case 633:  /* *sqrtsf2_mixed */
    case 406:  /* *one_cmplqi2_1 */
    case 404:  /* *one_cmplhi2_1 */
    case 400:  /* *one_cmplsi2_1 */
    case 398:  /* *one_cmpldi2_1_rex64 */
    case 391:  /* *absxf2_1 */
    case 390:  /* *absdf2_1 */
    case 389:  /* *abssf2_1 */
    case 388:  /* *negxf2_1 */
    case 387:  /* *negdf2_1 */
    case 386:  /* *negsf2_1 */
    case 196:  /* *lea_1_rex64 */
    case 184:  /* floatdixf2 */
    case 183:  /* floatsixf2 */
    case 182:  /* floathixf2 */
    case 181:  /* *floatdidf2_i387 */
    case 180:  /* *floatdidf2_sse */
    case 179:  /* *floatdidf2_mixed */
    case 178:  /* *floatsidf2_i387 */
    case 177:  /* *floatsidf2_sse */
    case 176:  /* *floatsidf2_mixed */
    case 175:  /* *floathidf2_i387 */
    case 174:  /* *floatdisf2_i387 */
    case 173:  /* *floatdisf2_sse */
    case 172:  /* *floatdisf2_mixed */
    case 171:  /* *floatsisf2_i387 */
    case 170:  /* *floatsisf2_sse */
    case 169:  /* *floatsisf2_mixed */
    case 168:  /* *floathisf2_i387 */
    case 150:  /* fix_truncdi_fisttp_i387_1 */
    case 149:  /* fix_truncsi_fisttp_i387_1 */
    case 148:  /* fix_trunchi_fisttp_i387_1 */
    case 147:  /* fix_truncdfsi_sse */
    case 146:  /* fix_truncsfsi_sse */
    case 145:  /* fix_truncdfdi_sse */
    case 144:  /* fix_truncsfdi_sse */
    case 143:  /* *truncxfdf2_i387_1 */
    case 141:  /* truncxfdf2_i387_noop */
    case 139:  /* *truncxfsf2_i387_1 */
    case 137:  /* truncxfsf2_i387_noop */
    case 135:  /* *truncdfsf2_i387_1 */
    case 132:  /* *truncdfsf_fast_i387 */
    case 131:  /* *truncdfsf_fast_sse */
    case 130:  /* *truncdfsf_fast_mixed */
    case 129:  /* *extenddfxf2_i387 */
    case 128:  /* *extendsfxf2_i387 */
    case 127:  /* *extendsfdf2_i387 */
    case 126:  /* *extendsfdf2_sse */
    case 125:  /* *extendsfdf2_mixed */
    case 124:  /* *dummy_extendsfxf2 */
    case 123:  /* *dummy_extendsfdf2 */
    case 121:  /* extendqisi2 */
    case 120:  /* extendqihi2 */
    case 118:  /* extendhisi2 */
    case 117:  /* extendqidi2 */
    case 116:  /* extendhidi2 */
    case 115:  /* extendsidi2_rex64 */
    case 113:  /* zero_extendqidi2 */
    case 112:  /* zero_extendhidi2 */
    case 111:  /* zero_extendsidi2_rex64 */
    case 109:  /* *zero_extendqisi2_movzbw */
    case 106:  /* *zero_extendqihi2_movzbl */
    case 103:  /* *zero_extendhisi2_movzwl */
    case 83:  /* *movabsdi_2_rex64 */
    case 67:  /* *movsi_extzv_1 */
    case 66:  /* *movdi_extzv_1 */
    case 65:  /* *movabsqi_2_rex64 */
    case 63:  /* *movqi_extv_1_rex64 */
    case 62:  /* *movqi_extv_1 */
    case 61:  /* *movhi_extv_1 */
    case 60:  /* *movsi_extv_1 */
    case 48:  /* *movabshi_2_rex64 */
    case 42:  /* *movabssi_2_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 559:  /* *sibcall_1_rex64 */
    case 558:  /* *call_1_rex64 */
    case 557:  /* *sibcall_1 */
    case 556:  /* *call_1 */
    case 555:  /* *call_0 */
    case 530:  /* *setcc_2 */
    case 82:  /* *movabsdi_1_rex64 */
    case 71:  /* movdi_insv_1_rex64 */
    case 70:  /* movsi_insv_1 */
    case 64:  /* *movabsqi_1_rex64 */
    case 58:  /* *movstrictqi_1 */
    case 51:  /* *movstricthi_1 */
    case 47:  /* *movabshi_1_rex64 */
    case 41:  /* *movabssi_1_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 568:  /* set_got */
    case 77:  /* popdi1 */
    case 76:  /* *popdi1_epilogue_rex64 */
    case 37:  /* popsi1 */
    case 36:  /* *popsi1_epilogue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 79:  /* *movdi_or_rex64 */
    case 78:  /* *movdi_xor_rex64 */
    case 75:  /* *pushdi2_prologue_rex64 */
    case 39:  /* *movsi_or */
    case 38:  /* *movsi_xor */
    case 35:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 1033:  /* *movv2sf_internal */
    case 1032:  /* *movv2sf_internal_rex64 */
    case 1031:  /* *movv2si_internal */
    case 1030:  /* *movv4hi_internal */
    case 1029:  /* *movv8qi_internal */
    case 1028:  /* *movv2si_internal_rex64 */
    case 1027:  /* *movv4hi_internal_rex64 */
    case 1026:  /* *movv8qi_internal_rex64 */
    case 786:  /* *movv2df_internal */
    case 785:  /* *movv4sf_internal */
    case 784:  /* *movv2di_internal */
    case 783:  /* *movv4si_internal */
    case 782:  /* *movv8hi_internal */
    case 781:  /* *movv16qi_internal */
    case 772:  /* *prefetch_3dnow_rex */
    case 771:  /* *prefetch_3dnow */
    case 529:  /* *setcc_1 */
    case 198:  /* *lea_2_rex64 */
    case 195:  /* *lea_1 */
    case 101:  /* *movtf_internal */
    case 99:  /* *movxf_integer */
    case 98:  /* *movxf_nointeger */
    case 97:  /* *pushxf_integer */
    case 96:  /* *pushxf_nointeger */
    case 94:  /* *movdf_integer */
    case 93:  /* *movdf_nointeger */
    case 92:  /* *pushdf_integer */
    case 91:  /* *pushdf_nointeger */
    case 89:  /* *movsf_1 */
    case 88:  /* *pushsf_rex64 */
    case 87:  /* *pushsf */
    case 86:  /* *movti_rex64 */
    case 85:  /* *movti_internal */
    case 81:  /* *movdi_1_rex64 */
    case 80:  /* *movdi_2 */
    case 74:  /* *pushdi2_rex64 */
    case 73:  /* *pushdi */
    case 55:  /* *movqi_1 */
    case 54:  /* *pushqi2_rex64 */
    case 53:  /* *pushqi2 */
    case 46:  /* *movhi_1 */
    case 45:  /* *pushhi2_rex64 */
    case 44:  /* *pushhi2 */
    case 40:  /* *movsi_1 */
    case 34:  /* *pushsi2_rex64 */
    case 33:  /* *pushsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 572:  /* eh_return_di */
    case 571:  /* eh_return_si */
    case 167:  /* x86_fldcw_1 */
    case 26:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1018:  /* sse_stmxcsr */
    case 593:  /* *load_tp_di */
    case 591:  /* *load_tp_si */
    case 570:  /* set_got_rex64 */
    case 166:  /* x86_fnstcw_1 */
    case 25:  /* x86_fnstsw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 24:  /* *cmpfp_si */
    case 23:  /* *cmpfp_hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 1093:  /* mmx_ashldi3 */
    case 1090:  /* mmx_lshrdi3 */
    case 1071:  /* mmx_subdi3 */
    case 1063:  /* mmx_adddi3 */
    case 22:  /* *cmpfp_u */
    case 21:  /* *cmpfp_xf */
    case 20:  /* *cmpfp_df */
    case 19:  /* *cmpfp_sf */
    case 18:  /* *cmpfp_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 17:  /* *cmpqi_ext_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 16:  /* cmpqi_ext_3_insn_rex64 */
    case 15:  /* cmpqi_ext_3_insn */
    case 14:  /* *cmpqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 13:  /* *cmpqi_ext_1_rex64 */
    case 12:  /* *cmpqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 292:  /* *testqi_1 */
    case 291:  /* *testqi_1_maybe_si */
    case 290:  /* *testhi_1 */
    case 289:  /* testsi_1 */
    case 288:  /* *testdi_1_rex64 */
    case 11:  /* *cmpqi_minus_1 */
    case 7:  /* *cmphi_minus_1 */
    case 4:  /* *cmpsi_minus_1 */
    case 1:  /* *cmpdi_minus_1_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 32:  /* *cmpfp_iu_387 */
    case 31:  /* *cmpfp_iu_sse */
    case 30:  /* *cmpfp_iu_mixed */
    case 29:  /* *cmpfp_i_i387 */
    case 28:  /* *cmpfp_i_sse */
    case 27:  /* *cmpfp_i_mixed */
    case 10:  /* *cmpqi_1 */
    case 9:  /* *cmpqi_ccno_1 */
    case 8:  /* *cmphi_1 */
    case 6:  /* *cmphi_ccno_1 */
    case 5:  /* *cmpsi_1_insn */
    case 3:  /* *cmpsi_ccno_1 */
    case 2:  /* cmpdi_1_insn_rex64 */
    case 0:  /* cmpdi_ccno_1_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
