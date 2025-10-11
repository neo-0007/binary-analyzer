
void FUN_00699920(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  *param_1 = param_3;
  lVar1 = *(long *)(param_2 + 8);
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  param_1[4] = 0xffffffffffffffff;
  param_1[5] = 0xffffffffffffffff;
  param_1[6] = 0xffffffffffffffff;
  lVar2 = *(long *)(param_2 + 0x48);
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar1 == 0) {
    if (lVar3 == 0) {
      return;
    }
    param_1[4] = lVar3 - lVar2 >> 2;
    uVar6 = *(ulong *)(param_2 + 0x28);
    param_1[5] = (long)(uVar6 - lVar3) >> 2;
    param_1[6] = *(long *)(param_2 + 0x30) - lVar2 >> 2;
  }
  else {
    param_1[1] = lVar1 - lVar2 >> 2;
    param_1[2] = *(long *)(param_2 + 0x10) - lVar2 >> 2;
    uVar4 = *(ulong *)(param_2 + 0x18);
    param_1[3] = (long)(uVar4 - lVar2) >> 2;
    uVar6 = uVar4;
    if (lVar3 != 0) {
      param_1[4] = lVar3 - lVar2 >> 2;
      uVar5 = *(ulong *)(param_2 + 0x28);
      param_1[5] = (long)(uVar5 - lVar3) >> 2;
      param_1[6] = *(long *)(param_2 + 0x30) - lVar2 >> 2;
      uVar6 = uVar5;
      if ((uVar4 != 0) && (uVar6 = uVar4, uVar4 < uVar5)) {
        uVar6 = uVar5;
      }
    }
  }
  if (uVar6 == 0) {
    return;
  }
  *(long *)(param_2 + 0x50) = (long)(uVar6 - lVar2) >> 2;
  return;
}

