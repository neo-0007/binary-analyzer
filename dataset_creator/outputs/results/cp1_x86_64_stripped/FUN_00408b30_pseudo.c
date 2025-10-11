
undefined8
FUN_00408b30(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_58 [4];
  long local_38;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_58[0] = param_1;
  uVar1 = FUN_00408630(local_58,0,param_2,param_3,0,param_4,param_5,param_6,param_7);
  if (local_38 != 0) {
    FUN_00425490();
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

