
void FUN_00515940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68 [4];
  long local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_68[0] = param_1;
  FUN_00514df0(local_68,0,0,0);
  local_78 = param_2;
  local_70 = param_3;
  if (local_48 != 0) {
    FUN_004259a0(local_48,FUN_00514b80,&local_78);
  }
  uVar1 = FUN_00417730(param_1,0xb,&DAT_00904060);
  FUN_004259a0(uVar1,FUN_00514b80,&local_78);
  if (local_48 != 0) {
    FUN_00425490();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

