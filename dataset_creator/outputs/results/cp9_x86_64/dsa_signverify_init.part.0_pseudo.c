
bool dsa_signverify_init_part_0(undefined8 *param_1,DSA *param_2,long param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  if (param_2 == (DSA *)0x0) {
    if (param_1[2] == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/signature/dsa_sig.c",0xc4,"dsa_signverify_init");
      ERR_set_error(0x39,0x72,0);
      return false;
    }
  }
  else {
    iVar1 = ossl_dsa_check_key(*param_1,param_2,param_4 == 0x10);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/signature/dsa_sig.c",0xcb,"dsa_signverify_init");
      ERR_set_error(0x39,0x69,0);
      return false;
    }
    iVar1 = DSA_up_ref(param_2);
    if (iVar1 == 0) {
      return false;
    }
    DSA_free((DSA *)param_1[2]);
    param_1[2] = param_2;
  }
  *(int *)(param_1 + 0x2e) = param_4;
  bVar2 = true;
  if (param_3 != 0) {
    iVar1 = dsa_set_ctx_params_part_0(param_1,param_3);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

