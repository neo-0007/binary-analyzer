
undefined8 ec_gen_set_template(long param_1,EC_KEY *param_2)

{
  int iVar1;
  EC_GROUP *pEVar2;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && (param_1 != 0)) && (param_2 != (EC_KEY *)0x0)) {
    pEVar2 = EC_KEY_get0_group(param_2);
    if (pEVar2 != (EC_GROUP *)0x0) {
      pEVar2 = EC_GROUP_dup(pEVar2);
      if (pEVar2 != (EC_GROUP *)0x0) {
        EC_GROUP_free(*(EC_GROUP **)(param_1 + 0x80));
        *(EC_GROUP **)(param_1 + 0x80) = pEVar2;
        return 1;
      }
      ERR_new();
      ERR_set_debug("../providers/implementations/keymgmt/ec_kmgmt.c",0x401,"ec_gen_set_group");
      ERR_set_error(0x39,0xb0,0);
    }
  }
  return 0;
}

