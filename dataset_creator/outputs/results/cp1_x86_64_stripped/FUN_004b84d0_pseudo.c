
long * FUN_004b84d0(byte *param_1,uint param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  
  plVar8 = (long *)0x0;
  if ((param_3 == (long *)0x0) &&
     (param_3 = (long *)FUN_004b7690(), plVar8 = param_3, param_3 == (long *)0x0)) {
    return (long *)0x0;
  }
  if ((int)param_2 < 1) {
LAB_004b8503:
    if (param_2 != 0) {
      uVar7 = param_2 - 1 & 7;
      uVar6 = (param_2 - 1 >> 3) + 1;
      uVar4 = (ulong)uVar6;
      lVar2 = FUN_004b8240(param_3,uVar4);
      if (lVar2 == 0) {
        FUN_004b7fa0(plVar8);
        return (long *)0x0;
      }
      *(uint *)(param_3 + 1) = uVar6;
      uVar3 = 0;
      *(undefined4 *)(param_3 + 2) = 0;
      pbVar5 = param_1 + param_2;
      do {
        while( true ) {
          bVar1 = *param_1;
          param_1 = param_1 + 1;
          uVar3 = uVar3 << 8 | (ulong)bVar1;
          if (uVar7 != 0) break;
          uVar4 = (ulong)((int)uVar4 - 1);
          uVar7 = 7;
          *(ulong *)(*param_3 + uVar4 * 8) = uVar3;
          uVar3 = 0;
          if (pbVar5 == param_1) goto LAB_004b8588;
        }
        uVar7 = uVar7 - 1;
      } while (pbVar5 != param_1);
LAB_004b8588:
      FUN_004b8490(param_3);
      return param_3;
    }
  }
  else {
    do {
      if (*param_1 != 0) goto LAB_004b8503;
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  *(undefined4 *)(param_3 + 1) = 0;
  return param_3;
}

