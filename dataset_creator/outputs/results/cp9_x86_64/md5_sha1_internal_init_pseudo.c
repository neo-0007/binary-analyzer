
bool md5_sha1_internal_init(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    iVar1 = ossl_md5_sha1_init(param_1);
    if (iVar1 != 0) {
      iVar1 = md5_sha1_set_ctx_params(param_1,param_2);
      return iVar1 != 0;
    }
  }
  return false;
}

