
undefined8 rsakem_encapsulate_init(undefined8 *param_1,RSA *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_2 != (RSA *)0x0) {
    iVar1 = ossl_rsa_check_key(*param_1,param_2,0x1000);
    if (iVar1 != 0) {
      iVar1 = RSA_up_ref(param_2);
      if (iVar1 != 0) {
        RSA_free((RSA *)param_1[1]);
        param_1[1] = param_2;
        uVar2 = rsakem_set_ctx_params(param_1,param_3);
        return uVar2;
      }
    }
  }
  return 0;
}

