
undefined8 __inet_aton_exact(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = inet_aton_end(param_1,&local_1c,&local_18);
  if (((int)uVar1 != 0) && (uVar1 = 0, *local_18 == '\0')) {
    *param_2 = local_1c;
    uVar1 = 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

