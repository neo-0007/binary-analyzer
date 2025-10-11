
int FUN_00409250(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_50 [8];
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == 0) || (param_3 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004a2a70(param_2,local_50,0,0x10);
    if (iVar1 < 1) {
      iVar1 = -1;
    }
    else {
      FUN_004a2a70(param_2,local_50,local_48,iVar1);
      thunk_FUN_00713a50(param_3,local_48,(long)iVar1);
      *(int *)(param_3 + 0x10) = iVar1;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

