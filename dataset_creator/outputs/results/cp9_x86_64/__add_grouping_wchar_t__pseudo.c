
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* wchar_t* std::__add_grouping<wchar_t>(wchar_t*, wchar_t, char const*, unsigned long, wchar_t
   const*, wchar_t const*) */

wchar_t * std::__add_grouping<wchar_t>
                    (wchar_t *param_1,wchar_t param_2,char *param_3,ulong param_4,wchar_t *param_5,
                    wchar_t *param_6)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  wchar_t *pwVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar7 = (long)*param_3;
  if ((lVar7 < (long)param_6 - (long)param_5 >> 2) && ((byte)(*param_3 - 1U) < 0x7e)) {
    uVar9 = 0;
    lVar4 = 0;
    do {
      param_6 = param_6 + -lVar7;
      if (uVar9 < param_4 - 1) {
        uVar9 = uVar9 + 1;
      }
      else {
        lVar4 = lVar4 + 1;
      }
      pcVar5 = param_3 + uVar9;
      lVar7 = (long)*pcVar5;
    } while ((lVar7 < (long)param_6 - (long)param_5 >> 2) && ((byte)(*pcVar5 - 1U) < 0x7e));
    lVar7 = lVar4 + -1;
    uVar8 = uVar9 - 1;
    if (param_5 == param_6) goto joined_r0x00699de9;
  }
  else {
    if (param_6 == param_5) {
      return param_1;
    }
    uVar8 = 0xffffffffffffffff;
    lVar4 = 0;
    uVar9 = 0;
    lVar7 = -1;
    pcVar5 = param_3;
  }
  lVar3 = 0;
  do {
    *(undefined4 *)((long)param_1 + lVar3) = *(undefined4 *)((long)param_5 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != (long)param_6 - (long)param_5);
  param_1 = (wchar_t *)((long)param_1 + lVar3);
joined_r0x00699de9:
  while (lVar3 = lVar7, lVar4 != 0) {
    *param_1 = param_2;
    cVar1 = *pcVar5;
    pwVar6 = param_1 + 1;
    if ('\0' < cVar1) {
      lVar7 = 0;
      do {
        *(undefined4 *)((long)param_1 + lVar7 + 4) = *(undefined4 *)((long)param_6 + lVar7);
        lVar7 = lVar7 + 4;
      } while (lVar7 != (long)cVar1 * 4);
      param_6 = (wchar_t *)((long)param_6 + lVar7);
      pwVar6 = (wchar_t *)((long)pwVar6 + lVar7);
    }
    param_1 = pwVar6;
    lVar7 = lVar3 + -1;
    lVar4 = lVar3;
  }
  while (uVar2 = uVar8, uVar9 != 0) {
    *param_1 = param_2;
    cVar1 = param_3[uVar2];
    pwVar6 = param_1 + 1;
    if ('\0' < cVar1) {
      lVar7 = 0;
      do {
        *(undefined4 *)((long)param_1 + lVar7 + 4) = *(undefined4 *)((long)param_6 + lVar7);
        lVar7 = lVar7 + 4;
      } while (lVar7 != (long)cVar1 * 4);
      param_6 = (wchar_t *)((long)param_6 + lVar7);
      pwVar6 = (wchar_t *)((long)pwVar6 + lVar7);
    }
    param_1 = pwVar6;
    uVar8 = uVar2 - 1;
    uVar9 = uVar2;
  }
  return param_1;
}

