
void ossl_blake2s256_init(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined1 auStack_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_blake2s_param_init(auStack_48);
  ossl_blake2s_init(param_1,auStack_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

