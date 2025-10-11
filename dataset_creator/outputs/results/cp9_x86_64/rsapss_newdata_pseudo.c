
long rsapss_newdata(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  uVar2 = ossl_prov_ctx_get0_libctx();
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar3 = ossl_rsa_new_with_ctx(uVar2);
    if (lVar3 != 0) {
      RSA_clear_flags(lVar3,0xf000);
      RSA_set_flags(lVar3,0x1000);
    }
  }
  return lVar3;
}

