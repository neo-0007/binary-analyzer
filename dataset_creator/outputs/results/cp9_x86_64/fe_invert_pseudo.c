
void fe_invert(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_f8 [48];
  undefined1 local_c8 [48];
  undefined1 local_98 [48];
  undefined1 local_68 [40];
  long local_40;
  
  iVar1 = 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fe_sq(auStack_f8);
  fe_sq(local_c8,auStack_f8);
  fe_sq(local_c8,local_c8);
  fe_mul(local_c8,param_2,local_c8);
  fe_mul(auStack_f8,auStack_f8,local_c8);
  fe_sq(local_98,auStack_f8);
  fe_mul(local_c8,local_c8,local_98);
  fe_sq(local_98,local_c8);
  do {
    fe_sq(local_98,local_98);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 9;
  fe_mul(local_c8,local_98,local_c8);
  fe_sq(local_98,local_c8);
  do {
    fe_sq(local_98,local_98);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x13;
  fe_mul(local_98,local_98,local_c8);
  fe_sq(local_68,local_98);
  do {
    fe_sq(local_68,local_68);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 10;
  fe_mul(local_98,local_68,local_98);
  do {
    fe_sq(local_98,local_98);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x31;
  fe_mul(local_c8,local_98,local_c8);
  fe_sq(local_98,local_c8);
  do {
    fe_sq(local_98,local_98);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 99;
  fe_mul(local_98,local_98,local_c8);
  fe_sq(local_68,local_98);
  do {
    fe_sq(local_68,local_68);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x31;
  fe_mul(local_98,local_68,local_98);
  fe_sq(local_98,local_98);
  do {
    fe_sq(local_98,local_98);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 4;
  fe_mul(local_c8,local_98,local_c8);
  fe_sq(local_c8,local_c8);
  do {
    fe_sq(local_c8,local_c8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  fe_mul(param_1,local_c8,auStack_f8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

