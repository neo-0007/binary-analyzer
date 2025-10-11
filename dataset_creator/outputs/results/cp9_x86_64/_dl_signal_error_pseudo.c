
void _dl_signal_error(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  
  puVar1 = *(undefined8 **)(in_FS_OFFSET + -8);
  if (param_4 == (char *)0x0) {
    param_4 = "DYNAMIC LINKER BUG!!!";
  }
  if (puVar1 != (undefined8 *)0x0) {
    _dl_exception_create(*puVar1);
    *(int *)puVar1[1] = (int)param_1;
                    /* WARNING: Subroutine does not return */
    __longjmp((__jmp_buf_tag *)(puVar1 + 2),1);
  }
                    /* WARNING: Subroutine does not return */
  fatal_error(param_1,param_2,param_3,param_4);
}

