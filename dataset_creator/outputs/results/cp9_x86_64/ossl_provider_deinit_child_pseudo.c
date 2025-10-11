
void ossl_provider_deinit_child(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_data(param_1,0x12,child_prov_ossl_ctx_method);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041db69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar1[5])(*puVar1);
    return;
  }
  return;
}

