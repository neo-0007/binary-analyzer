
undefined4 FUN_0076ed20(void)

{
  int iVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined4 local_28 [6];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_0076eaa0(7,local_28);
  uVar2 = 0x100;
  if (-1 < iVar1) {
    uVar2 = local_28[0];
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

