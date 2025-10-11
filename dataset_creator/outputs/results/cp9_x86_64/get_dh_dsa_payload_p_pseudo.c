
undefined8 get_dh_dsa_payload_p(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  iVar1 = EVP_PKEY_get_base_id(uVar2);
  if (iVar1 == 0x1c) {
    uVar2 = EVP_PKEY_get0_DH(uVar2);
    lVar3 = DH_get0_p(uVar2);
  }
  else {
    if (iVar1 != 0x74) {
      ERR_new();
      ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x68b,"get_dh_dsa_payload_p");
      ERR_set_error(6,0xe0,0);
      return 0;
    }
    uVar2 = EVP_PKEY_get0_DSA(uVar2);
    lVar3 = DSA_get0_p(uVar2);
  }
  if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
    *(long *)(param_3 + 0x20) = lVar3;
    uVar2 = default_fixup_args(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

