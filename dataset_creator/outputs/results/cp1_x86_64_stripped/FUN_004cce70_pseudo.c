
undefined8 FUN_004cce70(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  FUN_0051f000();
  if (param_1 == 0) {
    iVar1 = FUN_004ccce0(0,param_2,param_3,&local_70);
  }
  else {
    FUN_004cc5f0(local_68,param_1);
    iVar1 = FUN_004ccce0(local_68,param_2,param_3,&local_70);
  }
  FUN_0051f050();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_70;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

