
undefined8 sm2sig_signature_init(long param_1,EC_KEY *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (param_1 != 0)) {
    if (param_2 == (EC_KEY *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) goto LAB_0047ff6d;
      ERR_new();
      ERR_set_debug("../providers/implementations/signature/sm2_sig.c",0x8f,"sm2sig_signature_init")
      ;
      ERR_set_error(0x39,0x72,0);
    }
    else {
      iVar1 = EC_KEY_up_ref(param_2);
      if (iVar1 != 0) {
        EC_KEY_free(*(EC_KEY **)(param_1 + 0x10));
        *(EC_KEY **)(param_1 + 0x10) = param_2;
LAB_0047ff6d:
        uVar2 = sm2sig_set_ctx_params(param_1,param_3);
        return uVar2;
      }
    }
  }
  return 0;
}

