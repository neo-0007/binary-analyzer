
undefined8
FUN_0049e6c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    iVar1 = FUN_0049e110(param_2,&local_40);
    if (-1 < iVar1) {
      local_38 = *(undefined8 *)(local_40 + 8);
      uVar2 = FUN_004a54e0(param_3,&local_38,(long)iVar1,param_1,param_4,param_5);
    }
    FUN_004c4ff0(local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

