
undefined8 sskdf_get_ctx_params(long param_1,undefined8 param_2)

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
  if (lVar3 != 0) {
    iVar1 = EVP_MD_get_size();
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    uVar4 = OSSL_PARAM_set_size_t(lVar2,(long)iVar1);
    return uVar4;
  }
  ERR_new(0);
  ERR_set_debug("../providers/implementations/kdfs/sskdf.c",0x152,"sskdf_size");
  ERR_set_error(0x39,0x81,0);
  uVar4 = OSSL_PARAM_set_size_t(lVar2,0);
  return uVar4;
}

