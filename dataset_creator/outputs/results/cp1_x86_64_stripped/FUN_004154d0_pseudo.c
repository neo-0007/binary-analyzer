
undefined4 FUN_004154d0(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_0041c870(param_3,&local_38);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
    if (local_38 < 0x80000000) {
      uVar1 = (**(code **)(*(long *)(param_1 + 0x78) + 0xc0))(param_1,param_2,local_38,lVar2);
    }
    FUN_0041ad60(lVar2,"../crypto/evp/pmeth_lib.c",0x641);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

