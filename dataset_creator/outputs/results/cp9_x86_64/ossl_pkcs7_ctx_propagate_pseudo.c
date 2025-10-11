
undefined8 ossl_pkcs7_ctx_propagate(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  ossl_pkcs7_set0_libctx(param_2,*(undefined8 *)(param_1 + 0x28));
  uVar1 = ossl_pkcs7_set1_propq(param_2,*(undefined8 *)(param_1 + 0x30));
  if ((int)uVar1 != 0) {
    ossl_pkcs7_resolve_libctx(param_2);
    uVar1 = 1;
  }
  return uVar1;
}

