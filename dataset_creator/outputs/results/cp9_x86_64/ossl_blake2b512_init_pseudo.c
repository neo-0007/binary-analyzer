
void ossl_blake2b512_init(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined1 auStack_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_blake2b_param_init(auStack_68);
  ossl_blake2b_init(param_1,auStack_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

