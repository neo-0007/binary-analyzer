
int FUN_00547c30(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  iVar1 = 1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    iVar1 = FUN_00547420(param_1,param_3,&local_28);
    if (iVar1 != 0) {
      iVar1 = 1;
      if (local_28 != 0) {
        thunk_FUN_00713a50(local_28,param_2,param_3);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

