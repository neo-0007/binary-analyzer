
undefined8 rsa_init(undefined8 *param_1,RSA *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && (param_1 != (undefined8 *)0x0)) && (param_2 != (RSA *)0x0)) {
    iVar1 = ossl_rsa_check_key(*param_1,param_2,param_4);
    if (iVar1 != 0) {
      iVar1 = RSA_up_ref(param_2);
      if (iVar1 != 0) {
        RSA_free((RSA *)param_1[1]);
        *(undefined4 *)((long)param_1 + 0x14) = param_4;
        param_1[1] = param_2;
        *(undefined4 *)(param_1 + 8) = 1;
        iVar1 = RSA_test_flags(param_2,0xf000);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 2) = 1;
          uVar2 = rsa_set_ctx_params(param_1,param_3);
          return uVar2;
        }
        ERR_new();
        ERR_set_debug("../providers/implementations/asymciphers/rsa_enc.c",0x78,"rsa_init");
        ERR_set_error(0x39,0xc0103,0);
      }
    }
  }
  return 0;
}

