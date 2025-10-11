
long * FUN_00650050(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  code *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (code *)0x0;
                    /* try { // try from 0065008e to 006500b8 has its CatchHandler @ 006500f3 */
  FUN_00633e00(*(undefined8 *)(param_2 + 0x20),&local_48);
  if (local_28 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006500e9 to 006500ed has its CatchHandler @ 006500f3 */
    FUN_00403890("uninitialized __any_string");
  }
  *param_1 = (long)(param_1 + 2);
  FUN_0064fce0(param_1,local_48,local_48 + local_40 * 4);
  if (local_28 != (code *)0x0) {
    (*local_28)(&local_48);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

