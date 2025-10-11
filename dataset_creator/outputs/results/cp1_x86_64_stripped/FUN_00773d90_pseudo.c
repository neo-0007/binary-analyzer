
undefined4 FUN_00773d90(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = thunk_FUN_007129d0();
  if (0xf < uVar3) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x13;
    local_38 = 0;
    goto LAB_00773dca;
  }
  thunk_FUN_00712b50(auStack_48,param_1,0x10);
  iVar1 = FUN_007ac010();
  if (-1 < iVar1) {
    iVar2 = FUN_0076ebb0(iVar1,0x8933,auStack_48);
    if (-1 < iVar2) {
      FUN_0076e4b0(iVar1);
      goto LAB_00773dca;
    }
    iVar2 = *(int *)(in_FS_OFFSET + -0x58);
    FUN_0076e4b0(iVar1);
    if (iVar2 == 0x16) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x26;
      local_38 = 0;
      goto LAB_00773dca;
    }
  }
  local_38 = 0;
LAB_00773dca:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return local_38;
}

