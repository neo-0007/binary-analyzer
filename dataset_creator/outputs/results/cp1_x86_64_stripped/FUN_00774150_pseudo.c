
undefined8 FUN_00774150(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_58 [16];
  undefined4 local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_007ac010();
  if (-1 < iVar1) {
    local_48 = param_1;
    iVar2 = FUN_0076ebb0(iVar1,0x8910,auStack_58);
    FUN_0076e4b0(iVar1);
    if (-1 < iVar2) {
      uVar3 = thunk_FUN_00712b50(param_2,auStack_58,0x10);
      goto LAB_007741c7;
    }
    if (*(int *)(in_FS_OFFSET + -0x58) == 0x13) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 6;
    }
  }
  uVar3 = 0;
LAB_007741c7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

