
void OBJ_NAME_do_all(int type,fn *fn,void *arg)

{
  long in_FS_OFFSET;
  int local_28 [2];
  fn *local_20;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28[0] = type;
  local_20 = fn;
  local_18 = arg;
  OPENSSL_LH_doall_arg(names_lh,do_all_fn,local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

