
void dsa_adjust(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_ctx_get0_libctx(*param_2);
  ossl_dsa_set0_libctx(param_1,uVar1);
  return;
}

