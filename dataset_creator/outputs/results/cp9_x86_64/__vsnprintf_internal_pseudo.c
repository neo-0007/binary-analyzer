
void __vsnprintf_internal
               (undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  long in_FS_OFFSET;
  undefined1 local_178 [40];
  undefined1 *local_150;
  undefined1 *local_140;
  undefined8 local_f0;
  undefined1 *local_a0;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = 0;
  if (param_2 == 0) {
    param_1 = local_88;
    param_2 = 0x3f;
  }
  else {
    param_2 = param_2 + -1;
  }
  _IO_no_init(local_178,0x8000,0xffffffff,0,0);
  local_a0 = _IO_strn_jumps;
  *param_1 = 0;
  _IO_str_init_static_internal(local_178,param_1,param_2,param_1);
  __vfprintf_internal(local_178,param_3,param_4,param_5);
  if (local_140 != local_88) {
    *local_150 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

