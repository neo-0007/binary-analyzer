
undefined8 FUN_0054e3e0(long param_1,byte *param_2,ulong param_3)

{
  code *pcVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  
  pcVar1 = *(code **)(param_1 + 0x160);
  pcVar2 = *(code **)(param_1 + 0x168);
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar4 = *(ulong *)(param_1 + 0x30) + param_3;
    if ((0x2000000000000000 < uVar4) || (CARRY8(*(ulong *)(param_1 + 0x30),param_3))) {
      uVar5 = 0xffffffff;
    }
    else {
      *(ulong *)(param_1 + 0x30) = uVar4;
      uVar3 = *(uint *)(param_1 + 0x174);
      if (uVar3 != 0) {
        pbVar7 = param_2;
        if (param_3 == 0) {
LAB_0054e480:
          *(uint *)(param_1 + 0x174) = uVar3;
          return 0;
        }
        do {
          param_2 = pbVar7 + 1;
          param_3 = param_3 - 1;
          *(byte *)(param_1 + 0x40 + (ulong)uVar3) =
               *(byte *)(param_1 + 0x40 + (ulong)uVar3) ^ *pbVar7;
          uVar3 = uVar3 + 1 & 0xf;
          if (uVar3 == 0) goto LAB_0054e4a0;
          pbVar7 = param_2;
        } while (param_3 != 0);
        if (uVar3 != 0) goto LAB_0054e480;
LAB_0054e4a0:
        (*pcVar1)(param_1 + 0x40,param_1 + 0x60);
      }
      uVar4 = param_3 & 0xfffffffffffffff0;
      if (uVar4 != 0) {
        (*pcVar2)(param_1 + 0x40,param_1 + 0x60,param_2,uVar4);
        param_2 = param_2 + uVar4;
        param_3 = param_3 - uVar4;
      }
      uVar6 = 0;
      if (param_3 != 0) {
        uVar6 = (undefined4)param_3;
        uVar4 = 0;
        do {
          pbVar7 = (byte *)(param_1 + 0x40 + uVar4);
          *pbVar7 = *pbVar7 ^ param_2[uVar4];
          uVar4 = uVar4 + 1;
        } while (param_3 != uVar4);
      }
      *(undefined4 *)(param_1 + 0x174) = uVar6;
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0xfffffffe;
  }
  return uVar5;
}

