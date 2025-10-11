
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__add_grouping<char>(char*, char, char const*, unsigned long, char const*, char
   const*) */

char * std::__add_grouping<char>
                 (char *param_1,char param_2,char *param_3,ulong param_4,char *param_5,char *param_6
                 )

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (((byte)(*param_3 - 1U) < 0x7e) &&
     (lVar5 = (long)*param_3, lVar5 < (long)param_6 - (long)param_5)) {
    uVar9 = 0;
    lVar4 = 0;
    do {
      param_6 = param_6 + -lVar5;
      if (uVar9 < param_4 - 1) {
        uVar9 = uVar9 + 1;
      }
      else {
        lVar4 = lVar4 + 1;
      }
      pcVar6 = param_3 + uVar9;
      lVar5 = (long)*pcVar6;
    } while ((lVar5 < (long)param_6 - (long)param_5) && ((byte)(*pcVar6 - 1U) < 0x7e));
    lVar5 = lVar4 + -1;
    uVar8 = uVar9 - 1;
    if (param_5 == param_6) goto joined_r0x0067b4aa;
  }
  else {
    if (param_6 == param_5) {
      return param_1;
    }
    uVar8 = 0xffffffffffffffff;
    lVar4 = 0;
    uVar9 = 0;
    lVar5 = -1;
    pcVar6 = param_3;
  }
  lVar3 = 0;
  do {
    param_1[lVar3] = param_5[lVar3];
    lVar3 = lVar3 + 1;
  } while (lVar3 != (long)param_6 - (long)param_5);
  param_1 = param_1 + lVar3;
joined_r0x0067b4aa:
  while (lVar3 = lVar5, lVar4 != 0) {
    *param_1 = param_2;
    cVar1 = *pcVar6;
    pcVar7 = param_1 + 1;
    if ('\0' < cVar1) {
      lVar5 = 0;
      do {
        param_1[lVar5 + 1] = param_6[lVar5];
        lVar5 = lVar5 + 1;
      } while (lVar5 != cVar1);
      param_6 = param_6 + lVar5;
      pcVar7 = pcVar7 + lVar5;
    }
    param_1 = pcVar7;
    lVar5 = lVar3 + -1;
    lVar4 = lVar3;
  }
  while (uVar2 = uVar8, uVar9 != 0) {
    *param_1 = param_2;
    cVar1 = param_3[uVar2];
    pcVar6 = param_1 + 1;
    if ('\0' < cVar1) {
      lVar5 = 0;
      do {
        param_1[lVar5 + 1] = param_6[lVar5];
        lVar5 = lVar5 + 1;
      } while (lVar5 != cVar1);
      param_6 = param_6 + lVar5;
      pcVar6 = pcVar6 + lVar5;
    }
    param_1 = pcVar6;
    uVar8 = uVar2 - 1;
    uVar9 = uVar2;
  }
  return param_1;
}

