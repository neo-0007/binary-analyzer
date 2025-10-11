
undefined8 ed448_new_key(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    uVar2 = ossl_ecx_key_new(uVar2,3,0,0);
    return uVar2;
  }
  return 0;
}

