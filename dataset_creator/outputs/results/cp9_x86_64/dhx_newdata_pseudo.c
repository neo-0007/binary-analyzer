
long dhx_newdata(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = ossl_prov_ctx_get0_libctx();
  lVar2 = ossl_dh_new_ex(uVar1);
  if (lVar2 != 0) {
    DH_clear_flags(lVar2,0xf000);
    DH_set_flags(lVar2,0x1000);
  }
  return lVar2;
}

