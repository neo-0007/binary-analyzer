
undefined8 FUN_0044fea0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8[0] = FUN_0044fc10(0);
  local_98 = local_a8[0];
  local_88 = local_a8[0];
  local_78 = local_a8[0];
  local_68 = local_a8[0];
  local_58 = local_a8[0];
  local_48 = local_a8[0];
  local_38 = local_a8[0];
  FUN_00771fb0(local_a8,param_3,*(undefined1 *)(param_2 + 1),0x80);
  FUN_0044fdb0(param_1,local_a8,0x80);
  FUN_004227b0(local_a8,0x80);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

