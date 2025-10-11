
int FUN_004ab7e0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = 0;
  if (0 < param_3) {
    iVar1 = FUN_004ab1e0(param_1,param_2,(long)param_3,local_18);
    if (0 < iVar1) {
      iVar1 = local_18[0];
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

