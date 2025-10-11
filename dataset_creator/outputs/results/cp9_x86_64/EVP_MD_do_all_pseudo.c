
void EVP_MD_do_all(fn *fn,void *arg)

{
  long in_FS_OFFSET;
  void *local_38;
  fn *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  OPENSSL_init_crypto(8,0);
  local_38 = arg;
  local_30 = fn;
  OBJ_NAME_do_all(1,do_all_md_fn,&local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

