
bool sha1_internal_init(SHA_CTX *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    iVar1 = SHA1_Init(param_1);
    if (iVar1 != 0) {
      iVar1 = sha1_set_ctx_params(param_1,param_2);
      return iVar1 != 0;
    }
  }
  return false;
}

