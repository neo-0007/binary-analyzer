
undefined4 cmac_gen_set_params(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (iVar1 = mac_gen_set_params_part_0(), iVar1 != 0)) {
    iVar1 = ossl_prov_cipher_load_from_params(param_1 + 4,param_2,*param_1);
    if (iVar1 != 0) {
      return 1;
    }
    ERR_new();
    ERR_set_debug("../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1c4,
                  "cmac_gen_set_params");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}

