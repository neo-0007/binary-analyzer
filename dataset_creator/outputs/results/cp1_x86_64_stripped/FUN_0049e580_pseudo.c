
undefined8 FUN_0049e580(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  iVar1 = FUN_0049e110(param_3,&local_30);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    local_28 = *(undefined8 *)(local_30 + 8);
    uVar2 = (*param_2)(param_4,&local_28,(long)iVar1);
  }
  FUN_004c4ff0(local_30);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

