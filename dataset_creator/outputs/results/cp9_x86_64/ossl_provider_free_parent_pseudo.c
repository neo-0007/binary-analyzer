
undefined8 ossl_provider_free_parent(undefined8 param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = ossl_provider_libctx();
  plVar2 = (long *)ossl_lib_ctx_get_data(uVar1,0x12,child_prov_ossl_ctx_method);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  lVar3 = ossl_provider_get_parent(param_1);
  if (*plVar2 != lVar3) {
    UNRECOVERED_JUMPTABLE = (code *)plVar2[10];
    uVar1 = ossl_provider_get_parent(param_1);
                    /* WARNING: Could not recover jumptable at 0x0041dc45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
    return uVar1;
  }
  return 1;
}

