
undefined4 *
FUN_006a6de0(undefined4 *param_1,undefined4 param_2,char *param_3,long param_4,long param_5,
            long param_6)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar7 = (long)*param_3;
  if ((lVar7 < param_6 - param_5 >> 2) && ((byte)(*param_3 - 1U) < 0x7e)) {
    uVar9 = 0;
    lVar4 = 0;
    do {
      param_6 = param_6 + lVar7 * -4;
      if (uVar9 < param_4 - 1U) {
        uVar9 = uVar9 + 1;
      }
      else {
        lVar4 = lVar4 + 1;
      }
      pcVar5 = param_3 + uVar9;
      lVar7 = (long)*pcVar5;
    } while ((lVar7 < param_6 - param_5 >> 2) && ((byte)(*pcVar5 - 1U) < 0x7e));
    lVar7 = lVar4 + -1;
    uVar8 = uVar9 - 1;
    if (param_5 == param_6) goto joined_r0x006a6e99;
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
    *(undefined4 *)((long)param_1 + lVar3) = *(undefined4 *)(param_5 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != param_6 - param_5);
  param_1 = (undefined4 *)((long)param_1 + lVar3);
joined_r0x006a6e99:
  while (lVar3 = lVar7, lVar4 != 0) {
    *param_1 = param_2;
    cVar1 = *pcVar5;
    puVar6 = param_1 + 1;
    if ('\0' < cVar1) {
      lVar7 = 0;
      do {
        *(undefined4 *)((long)param_1 + lVar7 + 4) = *(undefined4 *)(param_6 + lVar7);
        lVar7 = lVar7 + 4;
      } while (lVar7 != (long)cVar1 * 4);
      param_6 = param_6 + lVar7;
      puVar6 = (undefined4 *)((long)puVar6 + lVar7);
    }
    param_1 = puVar6;
    lVar7 = lVar3 + -1;
    lVar4 = lVar3;
  }
  while (uVar2 = uVar8, uVar9 != 0) {
    *param_1 = param_2;
    cVar1 = param_3[uVar2];
    puVar6 = param_1 + 1;
    if ('\0' < cVar1) {
      lVar7 = 0;
      do {
        *(undefined4 *)((long)param_1 + lVar7 + 4) = *(undefined4 *)(param_6 + lVar7);
        lVar7 = lVar7 + 4;
      } while (lVar7 != (long)cVar1 * 4);
      param_6 = param_6 + lVar7;
      puVar6 = (undefined4 *)((long)puVar6 + lVar7);
    }
    param_1 = puVar6;
    uVar8 = uVar2 - 1;
    uVar9 = uVar2;
  }
  return param_1;
}

