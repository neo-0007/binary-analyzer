
void felem_mul_reduce(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined1 auStack_b8 [152];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  felem_mul_ref(auStack_b8);
  felem_reduce(param_1,auStack_b8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

