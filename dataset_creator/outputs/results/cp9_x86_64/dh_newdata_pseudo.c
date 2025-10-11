
long dh_newdata(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    lVar3 = ossl_dh_new_ex(uVar2);
    if (lVar3 != 0) {
      DH_clear_flags(lVar3,0xf000);
      DH_set_flags(lVar3,0);
    }
  }
  return lVar3;
}

