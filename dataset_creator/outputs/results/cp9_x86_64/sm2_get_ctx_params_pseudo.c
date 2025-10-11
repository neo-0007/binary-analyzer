
bool sm2_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  bool bVar5;
  
  bVar5 = false;
  if (param_1 != 0) {
    lVar2 = OSSL_PARAM_locate(param_2,"digest");
    bVar5 = true;
    if (lVar2 != 0) {
      lVar3 = ossl_prov_digest_md(param_1 + 0x10);
      puVar4 = &DAT_008343a2;
      if (lVar3 != 0) {
        puVar4 = (undefined1 *)EVP_MD_get0_name(lVar3,&DAT_008343a2);
      }
      iVar1 = OSSL_PARAM_set_utf8_string(lVar2,puVar4);
      bVar5 = iVar1 != 0;
    }
  }
  return bVar5;
}

