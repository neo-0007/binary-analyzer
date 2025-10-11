
undefined8 get_payload_private_key(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  EC_KEY *key;
  BIGNUM *pBVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x20) = 0;
  if (*(int *)(*(long *)(param_3 + 0x30) + 8) != 2) {
    return 0;
  }
  iVar1 = EVP_PKEY_get_base_id(uVar3);
  if (iVar1 == 0x1c) {
    uVar3 = EVP_PKEY_get0_DH(uVar3);
    pBVar2 = (BIGNUM *)DH_get0_priv_key(uVar3);
  }
  else {
    if (iVar1 != 0x198) {
      ERR_new();
      ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x625,"get_payload_private_key");
      ERR_set_error(6,0xe0,0);
      return 0;
    }
    key = (EC_KEY *)EVP_PKEY_get0_EC_KEY(uVar3);
    pBVar2 = EC_KEY_get0_private_key(key);
  }
  *(BIGNUM **)(param_3 + 0x20) = pBVar2;
  uVar3 = default_fixup_args(param_1,param_2,param_3);
  return uVar3;
}

