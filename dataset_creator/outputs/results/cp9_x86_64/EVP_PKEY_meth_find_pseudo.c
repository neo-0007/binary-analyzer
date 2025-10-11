
EVP_PKEY_METHOD * EVP_PKEY_meth_find(int type)

{
  int iVar1;
  EVP_PKEY_METHOD *pEVar2;
  long in_FS_OFFSET;
  EVP_PKEY_METHOD *local_130;
  int local_128 [66];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((app_pkey_methods == 0) ||
      (local_128[0] = type, iVar1 = OPENSSL_sk_find(app_pkey_methods,local_128), iVar1 < 0)) ||
     (pEVar2 = (EVP_PKEY_METHOD *)OPENSSL_sk_value(app_pkey_methods,iVar1), local_130 = pEVar2,
     pEVar2 == (EVP_PKEY_METHOD *)0x0)) {
    local_130 = (EVP_PKEY_METHOD *)local_128;
    local_128[0] = type;
    pEVar2 = (EVP_PKEY_METHOD *)
             OBJ_bsearch_(&local_130,&standard_methods,10,8,pmeth_func_cmp_BSEARCH_CMP_FN);
    if (pEVar2 != (EVP_PKEY_METHOD *)0x0) {
      if (*(code **)pEVar2 == (code *)0x0) {
        pEVar2 = (EVP_PKEY_METHOD *)0x0;
      }
      else {
        pEVar2 = (EVP_PKEY_METHOD *)(**(code **)pEVar2)();
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pEVar2;
}

