
bool dh_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined1 *puVar4;
  bool bVar5;
  
  if (param_1 == 0) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"kdf-type");
  if (lVar2 != 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = "X942KDF-ASN1";
      if (*(int *)(param_1 + 0x1c) != 1) {
        return false;
      }
    }
    iVar1 = OSSL_PARAM_set_utf8_string(lVar2,pcVar3);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"kdf-digest");
  if (lVar2 != 0) {
    puVar4 = &DAT_008343a2;
    if (*(long *)(param_1 + 0x20) != 0) {
      puVar4 = (undefined1 *)EVP_MD_get0_name(*(long *)(param_1 + 0x20),&DAT_008343a2);
    }
    iVar1 = OSSL_PARAM_set_utf8_string(lVar2,puVar4);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"kdf-outlen");
  if ((lVar2 != 0) &&
     (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x38)), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,&DAT_007d9d1b);
  if ((lVar2 != 0) &&
     (iVar1 = OSSL_PARAM_set_octet_ptr
                        (lVar2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30)),
     iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"cekalg");
  bVar5 = true;
  if (lVar2 != 0) {
    puVar4 = *(undefined1 **)(param_1 + 0x40);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_008343a2;
    }
    iVar1 = OSSL_PARAM_set_utf8_string(lVar2,puVar4);
    bVar5 = iVar1 != 0;
  }
  return bVar5;
}

