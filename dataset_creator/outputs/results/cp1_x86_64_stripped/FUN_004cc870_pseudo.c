
undefined8 FUN_004cc870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004cc5f0(auStack_58,param_1);
  iVar1 = FUN_004cc820(auStack_58,param_2,param_3);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_48;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

