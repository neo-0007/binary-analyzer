
void _dl_catch_error(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _dl_catch_exception(&local_38,param_4,param_5);
  *param_1 = local_38;
  *param_2 = local_30;
  *(bool *)param_3 = local_28 == local_30;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

