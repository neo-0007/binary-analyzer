
undefined8 drbg_ctr_get_ctx_params(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  lVar3 = OSSL_PARAM_locate(param_2,"use_derivation_function");
  if ((lVar3 != 0) && (iVar2 = OSSL_PARAM_set_int(lVar3,*(undefined4 *)(lVar1 + 0x30)), iVar2 == 0))
  {
    return 0;
  }
  lVar3 = OSSL_PARAM_locate(param_2,"cipher");
  if (lVar3 == 0) {
LAB_00476432:
    uVar4 = ossl_drbg_get_ctx_params(param_1,param_2);
    return uVar4;
  }
  if (*(long *)(lVar1 + 0x20) != 0) {
    uVar4 = EVP_CIPHER_get0_name();
    iVar2 = OSSL_PARAM_set_utf8_string(lVar3,uVar4);
    if (iVar2 != 0) goto LAB_00476432;
  }
  return 0;
}

