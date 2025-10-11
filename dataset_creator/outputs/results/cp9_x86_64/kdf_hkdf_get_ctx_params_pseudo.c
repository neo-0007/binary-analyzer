
undefined8 kdf_hkdf_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = OSSL_PARAM_locate(param_2,"size");
  if (lVar2 == 0) {
    return 0xfffffffe;
  }
  lVar3 = ossl_prov_digest_md(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 1) {
    if (lVar3 == 0) {
      ERR_new(0);
      ERR_set_debug("../providers/implementations/kdfs/hkdf.c",0x8a,"kdf_hkdf_size");
      ERR_set_error(0x39,0x81,0);
      return 0;
    }
    iVar1 = EVP_MD_get_size();
    lVar3 = (long)iVar1;
    if (iVar1 < 1) {
      return 0;
    }
  }
  else {
    lVar3 = -1;
  }
  uVar4 = OSSL_PARAM_set_size_t(lVar2,lVar3);
  return uVar4;
}

