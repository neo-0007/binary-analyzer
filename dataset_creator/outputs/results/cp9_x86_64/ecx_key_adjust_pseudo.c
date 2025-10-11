
void ecx_key_adjust(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_ctx_get0_libctx(*param_2);
  ossl_ecx_key_set0_libctx(param_1,uVar1);
  return;
}

