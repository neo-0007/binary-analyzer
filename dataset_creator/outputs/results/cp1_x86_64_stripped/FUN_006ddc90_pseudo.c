
undefined8 FUN_006ddc90(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_30 [2];
  int local_28 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (DAT_00946100 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_006dd840(param_1,local_30);
    if (iVar1 == 0) {
      uVar2 = FUN_006dd840(param_2,local_28);
      if ((int)uVar2 == 0) {
        *param_3 = local_30[0] - local_28[0];
        goto LAB_006ddcdc;
      }
    }
    iVar1 = thunk_FUN_00712780(param_1,param_2);
    *param_3 = iVar1;
    uVar2 = 0;
  }
LAB_006ddcdc:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

