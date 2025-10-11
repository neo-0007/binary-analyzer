
bool kdf_tls1_3_set_ctx_params(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  
  if (param_2 == 0) {
    return true;
  }
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  iVar1 = ossl_prov_digest_load_from_params(param_1 + 2,param_2,uVar2);
  if ((iVar1 == 0) || (iVar1 = hkdf_common_set_ctx_params_part_0(param_1,param_2), iVar1 == 0)) {
LAB_00464c18:
    bVar4 = false;
  }
  else {
    if (*(int *)(param_1 + 1) == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/kdfs/hkdf.c",0x2af,"kdf_tls1_3_set_ctx_params");
      ERR_set_error(0x39,0x7d,0);
      return false;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"prefix");
    if (lVar3 != 0) {
      CRYPTO_free((void *)param_1[9]);
      param_1[9] = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 9,0,param_1 + 10);
      if (iVar1 == 0) goto LAB_00464c18;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"label");
    if (lVar3 != 0) {
      CRYPTO_free((void *)param_1[0xb]);
      param_1[0xb] = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 0xb,0,param_1 + 0xc);
      if (iVar1 == 0) goto LAB_00464c18;
    }
    CRYPTO_clear_free(param_1[0xd],param_1[0xe],"../providers/implementations/kdfs/hkdf.c",0x2c3);
    param_1[0xd] = 0;
    lVar3 = OSSL_PARAM_locate_const(param_2,"data");
    if (lVar3 == 0) {
      return true;
    }
    iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 0xd,0,param_1 + 0xe);
    bVar4 = iVar1 != 0;
  }
  return bVar4;
}

