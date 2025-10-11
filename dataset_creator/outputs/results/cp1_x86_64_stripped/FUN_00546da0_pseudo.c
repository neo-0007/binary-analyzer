
bool FUN_00546da0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_005472b0(param_1,&local_30);
  if (((iVar1 != 0) && (iVar1 = FUN_00547aa0(param_1), iVar1 != 0)) &&
     (iVar1 = FUN_005472b0(param_1,&local_28), iVar1 != 0)) {
    if (local_30 == local_28) {
      iVar1 = FUN_00547210(param_1,2);
    }
    else {
      iVar1 = FUN_005477a0(param_1,0x30,1);
    }
    if (iVar1 != 0) {
      iVar1 = FUN_00546870(param_1,param_2);
      bVar2 = iVar1 != 0;
      goto LAB_00546dd1;
    }
  }
  bVar2 = false;
LAB_00546dd1:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

