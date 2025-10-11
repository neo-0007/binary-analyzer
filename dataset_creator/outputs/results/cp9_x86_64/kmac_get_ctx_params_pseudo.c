
ulong kmac_get_ctx_params(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar3 = OSSL_PARAM_locate(param_2,"size");
  if ((lVar3 != 0) &&
     (uVar4 = OSSL_PARAM_set_size_t(lVar3,*(undefined8 *)(param_1 + 0x28)), (int)uVar4 == 0)) {
    return uVar4;
  }
  lVar3 = OSSL_PARAM_locate(param_2,"block-size");
  uVar4 = 1;
  if (lVar3 != 0) {
    uVar5 = ossl_prov_digest_md(param_1 + 0x10);
    uVar1 = EVP_MD_get_block_size(uVar5);
    iVar2 = OSSL_PARAM_set_int(lVar3,uVar1);
    uVar4 = (ulong)(iVar2 != 0);
  }
  return uVar4;
}

