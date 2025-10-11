
long * FUN_004b8810(long param_1,int param_2,long *param_3)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  
  plVar8 = (long *)0x0;
  if ((param_3 == (long *)0x0) &&
     (param_3 = (long *)FUN_004b7690(), plVar8 = param_3, param_3 == (long *)0x0)) {
    return (long *)0x0;
  }
  param_1 = param_1 + param_2;
  if (param_2 < 1) {
LAB_004b884a:
    if (param_2 != 0) {
      uVar4 = param_2 - 1;
      uVar6 = uVar4 & 7;
      uVar7 = (uVar4 >> 3) + 1;
      uVar5 = (ulong)uVar7;
      lVar2 = FUN_004b8240(param_3,uVar5);
      if (lVar2 == 0) {
        FUN_004b7fa0(plVar8);
        return (long *)0x0;
      }
      *(uint *)(param_3 + 1) = uVar7;
      uVar3 = 0;
      *(undefined4 *)(param_3 + 2) = 0;
      lVar2 = param_1 + ~(ulong)uVar4;
      do {
        while( true ) {
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar3 = uVar3 << 8 | (ulong)*pbVar1;
          if (uVar6 != 0) break;
          uVar5 = (ulong)((int)uVar5 - 1);
          uVar6 = 7;
          *(ulong *)(*param_3 + uVar5 * 8) = uVar3;
          uVar3 = 0;
          if (lVar2 == param_1) goto LAB_004b88d1;
        }
        uVar6 = uVar6 - 1;
      } while (lVar2 != param_1);
LAB_004b88d1:
      FUN_004b8490(param_3);
      return param_3;
    }
  }
  else {
    do {
      if (*(char *)(param_1 + -1) != '\0') goto LAB_004b884a;
      param_1 = param_1 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  *(undefined4 *)(param_3 + 1) = 0;
  return param_3;
}

