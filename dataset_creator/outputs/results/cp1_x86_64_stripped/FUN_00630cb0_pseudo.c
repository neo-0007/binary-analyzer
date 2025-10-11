
undefined8 * FUN_00630cb0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 local_49;
  long local_48;
  long local_40;
  code *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (code *)0x0;
                    /* try { // try from 00630ce3 to 00630d12 has its CatchHandler @ 00630d76 */
  FUN_00651260(*(undefined8 *)(param_2 + 0x18),&local_48);
  if (local_28 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00630d60 to 00630d75 has its CatchHandler @ 00630d76 */
    FUN_00403890("uninitialized __any_string");
  }
  if (local_48 == local_40 + local_48) {
    *param_1 = &DAT_009452b8;
  }
  else {
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403890("basic_string::_S_construct null not valid");
    }
    uVar1 = FUN_006309c0(local_48,local_40 + local_48,&local_49);
    *param_1 = uVar1;
    if (local_28 == (code *)0x0) goto LAB_00630d29;
  }
  (*local_28)(&local_48);
LAB_00630d29:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

