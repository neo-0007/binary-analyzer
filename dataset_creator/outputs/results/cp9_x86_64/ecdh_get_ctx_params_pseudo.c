
bool ecdh_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  undefined1 *puVar5;
  
  if (param_1 == 0) {
    return false;
  }
  lVar3 = OSSL_PARAM_locate(param_2,"ecdh-cofactor-mode");
  if (lVar3 != 0) {
    if (*(int *)(param_1 + 0x18) == -1) {
      uVar2 = EC_KEY_get_flags(*(EC_KEY **)(param_1 + 8));
      iVar1 = OSSL_PARAM_set_int(lVar3,uVar2 >> 0xc & 1);
    }
    else {
      iVar1 = OSSL_PARAM_set_int(lVar3);
    }
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"kdf-type");
  if (lVar3 != 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = "X963KDF";
      if (*(int *)(param_1 + 0x1c) != 1) {
        return false;
      }
    }
    iVar1 = OSSL_PARAM_set_utf8_string(lVar3,pcVar4);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"kdf-digest");
  if (lVar3 != 0) {
    puVar5 = &DAT_008343a2;
    if (*(long *)(param_1 + 0x20) != 0) {
      puVar5 = (undefined1 *)EVP_MD_get0_name(*(long *)(param_1 + 0x20),&DAT_008343a2);
    }
    iVar1 = OSSL_PARAM_set_utf8_string(lVar3,puVar5);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"kdf-outlen");
  if ((lVar3 != 0) &&
     (iVar1 = OSSL_PARAM_set_size_t(lVar3,*(undefined8 *)(param_1 + 0x38)), iVar1 == 0)) {
    return false;
  }
  lVar3 = OSSL_PARAM_locate(param_2,&DAT_007d9d1b);
  if (lVar3 != 0) {
    iVar1 = OSSL_PARAM_set_octet_ptr
                      (lVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    return iVar1 != 0;
  }
  return true;
}

