
undefined8 drbg_hash_set_ctx_params(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  uVar3 = ossl_prov_ctx_get0_libctx(*(undefined8 *)(param_1 + 8));
  iVar2 = ossl_prov_digest_load_from_params(lVar1,param_2,uVar3);
  if (iVar2 == 0) {
    return 0;
  }
  lVar4 = ossl_prov_digest_md(lVar1);
  if (lVar4 != 0) {
    uVar5 = EVP_MD_get_flags(lVar4);
    if ((uVar5 & 2) != 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/rands/drbg_hash.c",0x1d8,
                    "drbg_hash_set_ctx_params");
      ERR_set_error(0x39,0xb7,0);
      return 0;
    }
    iVar2 = EVP_MD_get_size(lVar4);
    uVar5 = (ulong)iVar2;
    *(ulong *)(lVar1 + 0x20) = uVar5;
    uVar6 = (int)(uVar5 >> 3) << 6;
    if (0x100 < uVar6) {
      uVar6 = 0x100;
    }
    *(uint *)(param_1 + 0x80) = uVar6;
    *(ulong *)(param_1 + 0x90) = (ulong)(uVar6 >> 3);
    *(ulong *)(param_1 + 0xe8) = (-(ulong)(uVar5 < 0x21) & 0xffffffffffffffc8) + 0x6f;
    *(ulong *)(param_1 + 0xa0) = (ulong)(uVar6 >> 4);
  }
  uVar3 = ossl_drbg_set_ctx_params(param_1,param_2);
  return uVar3;
}

