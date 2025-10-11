
undefined8 FUN_0052ff80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = FUN_004098f0();
  local_34 = FUN_00409fd0(param_1);
  FUN_005524c0(param_3,param_2,param_4,lVar1,param_1 + 0x28,&local_34,*(undefined8 *)(lVar1 + 0x118)
              );
  FUN_0040a0a0(param_1,local_34);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

