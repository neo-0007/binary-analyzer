
undefined8 FUN_00511370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  uVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_004a2cd0(0,&local_40,&local_44,&local_38,param_1);
  if (iVar1 != 0) {
    lVar2 = FUN_004a7610(0,&local_40,(long)local_44);
    if (lVar2 == 0) {
      local_40 = 0;
      local_44 = 0;
    }
    else {
      local_40 = FUN_004a23e0(lVar2);
      local_44 = FUN_004a23b0(lVar2);
    }
    uVar3 = FUN_00510f50(local_38,local_40,local_44,0,1,param_2,param_3);
    thunk_FUN_004a2270(lVar2);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

