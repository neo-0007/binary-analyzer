
undefined8 get_ec_decoded_from_explicit_params(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  iVar1 = EVP_PKEY_get_base_id(uVar2);
  if (iVar1 == 0x198) {
    uVar2 = EVP_PKEY_get0_EC_KEY(uVar2);
    iVar1 = EC_KEY_decoded_from_explicit_params(uVar2);
    if (iVar1 < 0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x6d6,
                    "get_ec_decoded_from_explicit_params");
      ERR_set_error(6,0xa3,0);
    }
    else if (*(int *)(*(long *)(param_3 + 0x30) + 8) == 1) {
      *(int *)(param_3 + 0x1c) = iVar1;
      *(undefined8 *)(param_3 + 0x20) = 0;
      uVar2 = default_fixup_args(param_1,param_2,param_3);
      return uVar2;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x6dc,
                  "get_ec_decoded_from_explicit_params");
    ERR_set_error(6,0xe0,0);
  }
  return 0;
}

