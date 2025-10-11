
undefined8 FUN_00547360(long *param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_1[5] == 0) {
    return 0;
  }
  if ((param_2 != 0) && (param_2 <= (ulong)(param_1[4] - param_1[3]))) {
    puVar1 = (ulong *)*param_1;
    if ((puVar1 != (ulong *)0x0) && (uVar2 = *puVar1, uVar2 - param_1[3] < param_2)) {
      if (uVar2 <= param_2) {
        uVar2 = param_2;
      }
      uVar4 = 0xffffffffffffffff;
      if ((-1 < (long)uVar2) && (uVar4 = uVar2 * 2, uVar4 < 0x100)) {
        uVar4 = 0x100;
      }
      lVar3 = FUN_004c5070(puVar1,uVar4);
      if (lVar3 == 0) {
        return 0;
      }
    }
    if (param_3 != (long *)0x0) {
      lVar3 = FUN_00547310(param_1);
      *param_3 = lVar3;
      if (((*(byte *)(param_1 + 6) & 1) != 0) && (lVar3 != 0)) {
        *param_3 = lVar3 - param_2;
      }
    }
    return 1;
  }
  return 0;
}

