
bool sm2_set_ctx_params(undefined8 *param_1,long param_2)

{
  int iVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return false;
  }
  if (param_2 != 0) {
    iVar1 = ossl_prov_digest_load_from_params(param_1 + 2,param_2,*param_1);
    return iVar1 != 0;
  }
  return true;
}

