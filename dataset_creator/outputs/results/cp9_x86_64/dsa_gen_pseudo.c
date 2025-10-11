
DSA * dsa_gen(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  DSA *a;
  long lVar2;
  long *plVar3;
  DSA *pDVar4;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 == 0) || (param_1 == (undefined8 *)0x0)) ||
     (a = (DSA *)ossl_dsa_new(*param_1), a == (DSA *)0x0)) {
    return (DSA *)0x0;
  }
  if (*(int *)((long)param_1 + 0x3c) == 2) {
    *(uint *)((long)param_1 + 0x3c) = (uint)((ulong)param_1[3] < 0x800);
  }
  param_1[0xb] = param_2;
  param_1[0xc] = param_3;
  lVar2 = BN_GENCB_new();
  if (lVar2 != 0) {
    BN_GENCB_set(lVar2,dsa_gencb,param_1);
  }
  plVar3 = (long *)ossl_dsa_get0_params(a);
  if (((param_1[1] == 0) || (iVar1 = ossl_ffc_params_copy(plVar3), iVar1 != 0)) &&
     ((param_1[5] == 0 ||
      (iVar1 = ossl_ffc_params_set_seed(plVar3,param_1[5],param_1[6]), iVar1 != 0)))) {
    if (*(int *)(param_1 + 7) == -1) {
      if (*(int *)((long)param_1 + 0x44) != 0) {
        ossl_ffc_params_set_h(plVar3);
      }
    }
    else {
      ossl_ffc_params_set_gindex(plVar3);
      if (*(int *)(param_1 + 8) != -1) {
        ossl_ffc_params_set_pcounter(plVar3);
      }
    }
    if ((((param_1[9] == 0) ||
         (iVar1 = ossl_ffc_set_digest(plVar3,param_1[9],param_1[10]), iVar1 != 0)) &&
        (((*(byte *)(param_1 + 2) & 4) == 0 ||
         (iVar1 = ossl_dsa_generate_ffc_parameters
                            (a,*(undefined4 *)((long)param_1 + 0x3c),*(undefined4 *)(param_1 + 3),
                             *(undefined4 *)(param_1 + 4),lVar2), 0 < iVar1)))) &&
       ((ossl_ffc_params_enable_flags(plVar3,4,*(int *)((long)param_1 + 0x3c) == 1), pDVar4 = a,
        (*(byte *)(param_1 + 2) & 3) == 0 ||
        ((((*plVar3 != 0 && (plVar3[1] != 0)) && (plVar3[2] != 0)) &&
         (iVar1 = DSA_generate_key(a), 0 < iVar1)))))) goto LAB_0046dfeb;
  }
  pDVar4 = (DSA *)0x0;
  DSA_free(a);
LAB_0046dfeb:
  BN_GENCB_free(lVar2);
  return pDVar4;
}

