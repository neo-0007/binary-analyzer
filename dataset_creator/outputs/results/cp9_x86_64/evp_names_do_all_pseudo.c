
void evp_names_do_all(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = ossl_provider_libctx();
  uVar1 = ossl_namemap_stored(uVar1);
  ossl_namemap_doall_names(uVar1,param_2,param_3,param_4);
  return;
}

