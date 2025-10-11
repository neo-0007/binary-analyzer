
long FUN_0061fbf0(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  long in_FS_OFFSET;
  int *local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *param_2;
  local_40 = (int *)0x0;
  lVar1 = FUN_004a7610(&local_40,&local_38);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = *(long *)(local_40 + 2);
    lVar1 = FUN_0061f7d0(param_1,&local_38,(long)*local_40);
    if (lVar1 != 0) {
      *param_2 = *param_2 + param_3;
    }
    thunk_FUN_004a2270(local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

