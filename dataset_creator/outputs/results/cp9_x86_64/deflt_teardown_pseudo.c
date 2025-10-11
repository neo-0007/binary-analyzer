
void deflt_teardown(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_ctx_get0_core_bio_method();
  BIO_meth_free(uVar1);
  ossl_prov_ctx_free(param_1);
  return;
}

