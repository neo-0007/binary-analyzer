
long evp_pkey_meth_find_added_by_application(undefined4 param_1)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined4 local_118 [66];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = app_pkey_methods;
  if (app_pkey_methods != 0) {
    local_118[0] = param_1;
    iVar1 = OPENSSL_sk_find(app_pkey_methods,local_118);
    lVar2 = 0;
    if (-1 < iVar1) {
      lVar2 = OPENSSL_sk_value(app_pkey_methods);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

