
undefined8 drbg_hmac_get_ctx_params(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar1 = *(long **)(param_1 + 0xf8);
  lVar3 = OSSL_PARAM_locate(param_2,"mac");
  if (lVar3 != 0) {
    if (*plVar1 == 0) {
      return 0;
    }
    uVar4 = EVP_MAC_CTX_get0_mac();
    uVar4 = EVP_MAC_get0_name(uVar4);
    iVar2 = OSSL_PARAM_set_utf8_string(lVar3,uVar4);
    if (iVar2 == 0) {
      return 0;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"digest");
  if (lVar3 == 0) {
LAB_004785e2:
    uVar4 = ossl_drbg_get_ctx_params(param_1,param_2);
    return uVar4;
  }
  lVar5 = ossl_prov_digest_md(plVar1 + 1);
  if (lVar5 != 0) {
    uVar4 = EVP_MD_get0_name(lVar5);
    iVar2 = OSSL_PARAM_set_utf8_string(lVar3,uVar4);
    if (iVar2 != 0) goto LAB_004785e2;
  }
  return 0;
}

