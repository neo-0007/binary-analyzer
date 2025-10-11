
bool ecdh_init(undefined8 *param_1,EC_KEY *param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if ((((iVar1 != 0) && (param_1 != (undefined8 *)0x0)) && (param_2 != (EC_KEY *)0x0)) &&
     (iVar1 = EC_KEY_up_ref(param_2), iVar1 != 0)) {
    EC_KEY_free((EC_KEY *)param_1[1]);
    param_1[1] = param_2;
    param_1[3] = 0xffffffff;
    iVar1 = ecdh_set_ctx_params(param_1,param_3);
    if (iVar1 != 0) {
      iVar1 = ossl_ec_check_key(*param_1,param_2,1);
      return iVar1 != 0;
    }
  }
  return false;
}

