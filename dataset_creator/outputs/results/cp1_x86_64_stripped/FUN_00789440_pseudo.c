
undefined8 FUN_00789440(ulong param_1)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  
  puVar2 = DAT_0094adf8;
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    FUN_007104f0();
    return 0;
  }
  if (DAT_0094adf8 == (ulong *)0x0) {
    puVar2 = (ulong *)FUN_007101b0(0x198);
    DAT_0094adf8 = puVar2;
    if (puVar2 != (ulong *)0x0) {
      puVar2[1] = param_1;
      *puVar2 = 1;
      return 0;
    }
    FUN_00789ac0();
    uVar3 = 1;
    FUN_007104f0(param_1);
  }
  else {
    uVar1 = *DAT_0094adf8;
    if (0x31 < uVar1) {
      FUN_00789ac0();
      uVar1 = *puVar2;
      while (uVar1 != 0) {
        *puVar2 = uVar1 - 1;
        FUN_007104f0(puVar2[uVar1]);
        uVar1 = *puVar2;
      }
      return 1;
    }
    *DAT_0094adf8 = uVar1 + 1;
    puVar2[uVar1 + 1] = param_1;
    uVar3 = 0;
  }
  return uVar3;
}

