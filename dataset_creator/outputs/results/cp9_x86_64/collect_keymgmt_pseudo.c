
void collect_keymgmt(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = EVP_KEYMGMT_up_ref();
  if (iVar1 != 0) {
    iVar1 = OPENSSL_sk_push(param_2,param_1);
    if (iVar1 < 1) {
      EVP_KEYMGMT_free(param_1);
      return;
    }
  }
  return;
}

