
undefined8 FUN_005ab930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  undefined8 local_38;
  long local_30;
  
  uVar2 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  iVar1 = FUN_0049e110(param_1,&local_40);
  if (-1 < iVar1) {
    local_38 = *(undefined8 *)(local_40 + 8);
    uVar2 = FUN_005ba8a0(param_2,&local_38,(long)iVar1,param_3,param_4);
  }
  FUN_004c4ff0(local_40);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

