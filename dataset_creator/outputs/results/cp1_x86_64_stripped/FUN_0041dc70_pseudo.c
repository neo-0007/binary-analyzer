
uint FUN_0041dc70(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (((param_2 != 0) && (*(int *)(param_1 + 8) == 2)) &&
     (iVar1 = FUN_004b7d60(param_2), iVar1 == 0)) {
    iVar2 = FUN_004b7bb0(param_2);
    iVar1 = iVar2 + 0xe;
    if (-1 < iVar2 + 7) {
      iVar1 = iVar2 + 7;
    }
    *(long *)(param_1 + 0x20) = (long)(iVar1 >> 3);
    if (*(long *)(param_1 + 0x10) == 0) {
      return 1;
    }
    if ((ulong)(long)(iVar1 >> 3) <= *(ulong *)(param_1 + 0x18)) {
      *(ulong *)(param_1 + 0x20) = *(ulong *)(param_1 + 0x18);
      uVar3 = thunk_FUN_004b87e0(param_2);
      return ~uVar3 >> 0x1f;
    }
  }
  return 0;
}

