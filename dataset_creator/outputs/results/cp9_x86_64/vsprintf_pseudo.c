
int vsprintf(char *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_128 [40];
  undefined1 *local_100;
  undefined8 local_a0;
  undefined1 *local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  _IO_no_init(auStack_128,0x8000,0xffffffff,0,0);
  local_50 = _IO_str_jumps;
  _IO_str_init_static_internal(auStack_128,__s,0xffffffffffffffff,__s);
  iVar1 = __vfprintf_internal(auStack_128,__format,__arg,0);
  *local_100 = 0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

