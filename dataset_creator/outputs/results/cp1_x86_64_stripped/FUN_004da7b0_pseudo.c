
int FUN_004da7b0(long param_1)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    iVar2 = -1;
  }
  else {
    local_28 = lVar1;
    local_20 = lVar1;
    iVar2 = FUN_004da640(&local_28,0);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

