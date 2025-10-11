
undefined8
FUN_00408bb0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_88 [4];
  long local_68;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88[0] = FUN_00420cf0();
  local_68 = 0;
  uVar1 = FUN_00408630(local_88,param_1,param_2,0,param_3,param_4,param_5,param_6,param_7);
  if (local_68 != 0) {
    FUN_00425490();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

