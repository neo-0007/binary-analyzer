
undefined8 * FUN_00630d90(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 uStack_60;
  undefined1 local_49;
  long local_48;
  long local_40;
  code *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (code *)0x0;
                    /* try { // try from 00630dce to 00630dfb has its CatchHandler @ 00630e5e */
  FUN_00651f40(*(undefined8 *)(param_2 + 0x20),&local_48);
  if (local_28 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00630e48 to 00630e5d has its CatchHandler @ 00630e5e */
    FUN_00403890("uninitialized __any_string");
  }
  local_40 = local_40 + local_48;
  if (local_48 == local_40) {
    *param_1 = &DAT_009452b8;
  }
  else {
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403890("basic_string::_S_construct null not valid",local_40,uStack_60);
    }
    uVar1 = FUN_006309c0(local_48,local_40,&local_49);
    *param_1 = uVar1;
    if (local_28 == (code *)0x0) goto LAB_00630e11;
  }
  (*local_28)(&local_48);
LAB_00630e11:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

