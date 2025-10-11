
undefined8 dh_set_peer(long param_1,DH *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = ossl_prov_is_running();
  if (((iVar2 != 0) && (param_1 != 0)) && (param_2 != (DH *)0x0)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    lVar3 = ossl_dh_get0_params(param_2);
    lVar4 = ossl_dh_get0_params(uVar1);
    if (((lVar3 == 0) || (lVar4 == 0)) || (iVar2 = ossl_ffc_params_cmp(lVar3,lVar4,1), iVar2 == 0))
    {
      ERR_new();
      ERR_set_debug("../providers/implementations/exchange/dh_exch.c",0x7b,"dh_match_params");
      ERR_set_error(0x39,0xcb,0);
    }
    else {
      iVar2 = DH_up_ref(param_2);
      if (iVar2 != 0) {
        DH_free(*(DH **)(param_1 + 0x10));
        *(DH **)(param_1 + 0x10) = param_2;
        return 1;
      }
    }
  }
  return 0;
}

