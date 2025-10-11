
bool sm2_init(undefined8 *param_1,EC_KEY *param_2,long param_3)

{
  int iVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return false;
  }
  if ((param_2 != (EC_KEY *)0x0) && (iVar1 = EC_KEY_up_ref(param_2), iVar1 != 0)) {
    EC_KEY_free((EC_KEY *)param_1[1]);
    param_1[1] = param_2;
    if (param_3 == 0) {
      return true;
    }
    iVar1 = ossl_prov_digest_load_from_params(param_1 + 2,param_3,*param_1);
    return iVar1 != 0;
  }
  return false;
}

