
void ossl_method_store_do_all(long param_1,undefined8 param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_3;
  if (param_1 != 0) {
    ossl_sa_doall_arg(*(undefined8 *)(param_1 + 8),alg_do_each,&local_28);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

