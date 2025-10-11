
undefined8 FUN_00451580(undefined8 param_1,long param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68[0] = FUN_00451350(0);
  local_58 = local_68[0];
  local_48 = local_68[0];
  local_38 = local_68[0];
  FUN_00771fb0(local_68,param_3,*(undefined1 *)(param_2 + 1),0x40);
  FUN_004514a0(param_1,local_68,0x40);
  FUN_004227b0(local_68,0x40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

