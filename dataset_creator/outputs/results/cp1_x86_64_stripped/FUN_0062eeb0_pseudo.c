
void FUN_0062eeb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = param_7;
  local_48 = param_3;
  local_40 = param_4;
  local_38 = param_6;
  FUN_0062edf0(&local_48,&local_38,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *param_5 = local_48;
  *param_8 = local_38;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

