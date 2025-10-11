
undefined8 OSSL_HTTP_REQ_CTX_nbio_cold(void)

{
  long in_FS_OFFSET;
  long in_stack_00000038;
  
  if (in_stack_00000038 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

