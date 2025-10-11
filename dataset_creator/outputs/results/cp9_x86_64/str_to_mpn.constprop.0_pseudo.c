
char * str_to_mpn_constprop_0
                 (char *param_1,int param_2,ulong *param_3,long *param_4,long *param_5,long param_6,
                 char *param_7)

{
  ulong uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  
  *param_4 = 0;
  if (param_2 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("digcnt > 0","../stdlib/strtod_l.c",0x17b,"str_to_mpn");
  }
  uVar8 = 0;
  iVar7 = 0;
LAB_00788820:
  cVar2 = *param_1;
  lVar4 = (long)cVar2;
  if (9 < (byte)(cVar2 - 0x30U)) {
    if ((param_7 == (char *)0x0) || (cVar2 != *param_7)) {
LAB_0078883c:
      param_1 = param_1 + param_6;
      lVar4 = (long)*param_1;
    }
    else {
      lVar4 = 1;
      cVar2 = param_7[1];
      while (cVar2 != '\0') {
        if (param_1[lVar4] != cVar2) goto LAB_0078883c;
        lVar4 = lVar4 + 1;
        cVar2 = param_7[lVar4];
      }
      param_1 = param_1 + lVar4;
      lVar4 = (long)*param_1;
    }
  }
  param_1 = param_1 + 1;
  iVar7 = iVar7 + 1;
  uVar8 = lVar4 + -0x30 + uVar8 * 10;
  param_2 = param_2 + -1;
  if (param_2 != 0) {
    if (iVar7 == 0x13) {
      if (*param_4 == 0) {
        *param_3 = uVar8;
        uVar8 = 0;
        *param_4 = 1;
        iVar7 = 0;
      }
      else {
        uVar5 = __mpn_mul_1(param_3,param_3,*param_4,10000000000000000000);
        lVar4 = *param_4;
        uVar1 = *param_3;
        *param_3 = *param_3 + uVar8;
        if (CARRY8(uVar1,uVar8)) {
          lVar6 = 0;
          do {
            if (lVar4 + -1 == lVar6) {
              uVar5 = uVar5 + 1;
              break;
            }
            uVar8 = param_3[lVar6 + 1];
            param_3[lVar6 + 1] = uVar8 + 1;
            lVar6 = lVar6 + 1;
          } while (uVar8 + 1 == 0);
        }
        if (uVar5 == 0) {
          uVar8 = 0;
          iVar7 = 0;
        }
        else {
          if (0x35d < *param_4) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("*nsize < MPNSIZE","../stdlib/strtod_l.c",0x18c,"str_to_mpn");
          }
          param_3[*param_4] = uVar5;
          uVar8 = 0;
          iVar7 = 0;
          *param_4 = *param_4 + 1;
        }
      }
    }
    goto LAB_00788820;
  }
  lVar4 = *param_5;
  if ((lVar4 < 1) || (0x13 - iVar7 < lVar4)) {
    uVar3 = *(undefined8 *)(_tens_in_limb + (long)iVar7 * 8);
    lVar4 = *param_4;
  }
  else {
    *param_5 = 0;
    uVar8 = uVar8 * *(long *)(_tens_in_limb + lVar4 * 8);
    uVar3 = *(undefined8 *)(_tens_in_limb + (iVar7 + lVar4) * 8);
    lVar4 = *param_4;
  }
  if (lVar4 == 0) {
    *param_3 = uVar8;
    *param_4 = 1;
  }
  else {
    uVar5 = __mpn_mul_1(param_3,param_3,lVar4,uVar3);
    lVar4 = *param_4;
    uVar1 = *param_3;
    *param_3 = *param_3 + uVar8;
    if (CARRY8(uVar1,uVar8)) {
      lVar6 = 0;
      do {
        if (lVar4 + -1 == lVar6) {
          uVar5 = uVar5 + 1;
          break;
        }
        uVar8 = param_3[lVar6 + 1];
        param_3[lVar6 + 1] = uVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (uVar8 + 1 == 0);
    }
    if (uVar5 != 0) {
      lVar4 = *param_4;
      if (0x35d < lVar4) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("*nsize < MPNSIZE","../stdlib/strtod_l.c",0x1c4,"str_to_mpn");
      }
      *param_4 = lVar4 + 1;
      param_3[lVar4] = uVar5;
    }
  }
  return param_1;
}

