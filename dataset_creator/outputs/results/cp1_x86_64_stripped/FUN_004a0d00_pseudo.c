
void FUN_004a0d00(undefined4 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_48 [10];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00419fe0(0x40,0);
  local_48[0] = param_1;
  if (DAT_00940fa0 != 0) {
    iVar1 = FUN_00435f40(DAT_00940fa0,local_48);
    if (-1 < iVar1) {
      FUN_004364a0(DAT_00940fa0,iVar1);
      goto LAB_004a0d66;
    }
  }
  FUN_00423d90(local_48,&DAT_007e7b80,0x1c,0x28,FUN_004a0b80);
LAB_004a0d66:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

