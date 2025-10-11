
long * FUN_0064f900(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  code *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (code *)0x0;
                    /* try { // try from 0064f93e to 0064f967 has its CatchHandler @ 0064f9a2 */
  FUN_00633be0(*(undefined8 *)(param_2 + 0x20),&local_48);
  if (local_28 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0064f998 to 0064f99c has its CatchHandler @ 0064f9a2 */
    FUN_00403890("uninitialized __any_string");
  }
  *param_1 = (long)(param_1 + 2);
  FUN_0064f5b0(param_1,local_48,local_40 + local_48);
  if (local_28 != (code *)0x0) {
    (*local_28)(&local_48);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

