
undefined8 get_payload_group_name(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  EC_KEY *key;
  EC_GROUP *group;
  char *__s;
  
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x20) = 0;
  iVar1 = EVP_PKEY_get_base_id(uVar3);
  if (iVar1 == 0x1c) {
    uVar3 = EVP_PKEY_get0_DH(uVar3);
    iVar1 = DH_get_nid(uVar3);
    if (iVar1 != 0) {
      uVar3 = ossl_ffc_uid_to_dh_named_group(iVar1);
      __s = (char *)ossl_ffc_named_group_get_name(uVar3);
      *(char **)(param_3 + 0x20) = __s;
      goto LAB_00515e59;
    }
  }
  else {
    if (iVar1 != 0x198) {
      ERR_new();
      ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x5f8,"get_payload_group_name");
      ERR_set_error(6,0xe0,0);
      return 0;
    }
    key = (EC_KEY *)EVP_PKEY_get0_EC_KEY(uVar3);
    group = EC_KEY_get0_group(key);
    if (group != (EC_GROUP *)0x0) {
      iVar1 = EC_GROUP_get_curve_name(group);
      if (iVar1 != 0) {
        __s = (char *)OSSL_EC_curve_nid2name(iVar1);
        *(char **)(param_3 + 0x20) = __s;
        goto LAB_00515e59;
      }
    }
  }
  __s = *(char **)(param_3 + 0x20);
LAB_00515e59:
  if (__s != (char *)0x0) {
    sVar2 = strlen(__s);
    *(int *)(param_3 + 0x1c) = (int)sVar2;
    uVar3 = default_fixup_args(param_1,param_2,param_3);
    return uVar3;
  }
  return 1;
}

