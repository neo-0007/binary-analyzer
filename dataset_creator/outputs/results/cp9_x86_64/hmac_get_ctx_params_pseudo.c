
ulong hmac_get_ctx_params(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar3 = OSSL_PARAM_locate(param_2,"size");
  if (lVar3 != 0) {
    uVar4 = HMAC_size(*(undefined8 *)(param_1 + 8));
    uVar5 = OSSL_PARAM_set_size_t(lVar3,uVar4);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"block-size");
  uVar5 = 1;
  if (lVar3 != 0) {
    lVar6 = ossl_prov_digest_md(param_1 + 0x10);
    uVar1 = 0;
    if (lVar6 != 0) {
      uVar1 = EVP_MD_get_block_size(lVar6,0);
    }
    iVar2 = OSSL_PARAM_set_int(lVar3,uVar1);
    uVar5 = (ulong)(iVar2 != 0);
  }
  return uVar5;
}

