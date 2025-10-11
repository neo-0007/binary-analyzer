
void FUN_004090c0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78 [4];
  long local_58;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_78[0] = param_1;
  FUN_00408630(local_78,0,param_2,0,0,0,param_5,param_6,param_7);
  local_98[0] = param_2;
  local_90 = param_3;
  local_88 = param_4;
  if (local_58 != 0) {
    FUN_004259a0(local_58,FUN_00408610,local_98);
  }
  uVar1 = FUN_00417730(param_1,0,&DAT_008dd2c0);
  FUN_004259a0(uVar1,FUN_00408610,local_98);
  if (local_58 != 0) {
    FUN_00425490();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

