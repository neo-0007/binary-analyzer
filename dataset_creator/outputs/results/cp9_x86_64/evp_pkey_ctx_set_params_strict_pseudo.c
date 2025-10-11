
undefined8 evp_pkey_ctx_set_params_strict(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != (long *)0x0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar2 = EVP_PKEY_CTX_settable_params();
      lVar3 = *param_2;
      plVar4 = param_2;
      while (lVar3 != 0) {
        lVar3 = OSSL_PARAM_locate_const(uVar2);
        if (lVar3 == 0) {
          return 0xfffffffe;
        }
        plVar1 = plVar4 + 5;
        plVar4 = plVar4 + 5;
        lVar3 = *plVar1;
      }
    }
    uVar2 = EVP_PKEY_CTX_set_params(param_1,param_2);
    return uVar2;
  }
  return 0;
}

