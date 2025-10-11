
DH * dh_gen(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DH *dh;
  long *plVar3;
  BN_GENCB *cb;
  uint uVar4;
  
  iVar1 = ossl_prov_is_running();
  if (param_1 == (undefined8 *)0x0) {
    return (DH *)0x0;
  }
  if (iVar1 == 0) {
    return (DH *)0x0;
  }
  iVar1 = *(int *)((long)param_1 + 0x14);
  if (iVar1 == 0) {
    if ((*(int *)((long)param_1 + 0x3c) == 3) && (param_1[1] == 0)) {
      iVar1 = ossl_dh_get_named_group_uid_from_size(*(undefined4 *)(param_1 + 3));
      *(int *)((long)param_1 + 0x14) = iVar1;
      if (iVar1 == 0) {
        return (DH *)0x0;
      }
      goto LAB_0046c57a;
    }
LAB_0046c400:
    dh = (DH *)ossl_dh_new_ex(*param_1);
    if (dh == (DH *)0x0) {
      return (DH *)0x0;
    }
    plVar3 = (long *)ossl_dh_get0_params(dh);
    if (((param_1[1] == 0) || (iVar1 = ossl_ffc_params_copy(plVar3), iVar1 != 0)) &&
       (iVar1 = ossl_ffc_params_set_seed(plVar3,param_1[5],param_1[6]), iVar1 != 0)) {
      if (*(int *)(param_1 + 7) == -1) {
        if (*(int *)(param_1 + 9) != 0) {
          ossl_ffc_params_set_h(plVar3);
        }
      }
      else {
        ossl_ffc_params_set_gindex(plVar3);
        if (*(int *)((long)param_1 + 0x44) != -1) {
          ossl_ffc_params_set_pcounter(plVar3);
        }
      }
      if ((param_1[10] == 0) ||
         (iVar1 = ossl_ffc_set_digest(plVar3,param_1[10],param_1[0xb]), iVar1 != 0)) {
        param_1[0xc] = param_2;
        param_1[0xd] = param_3;
        cb = (BN_GENCB *)BN_GENCB_new();
        if (cb != (BN_GENCB *)0x0) {
          BN_GENCB_set(cb,dh_gencb,param_1);
        }
        uVar2 = *(uint *)(param_1 + 2);
        uVar4 = uVar2 & 4;
        if (uVar4 != 0) {
          if (*(int *)((long)param_1 + 0x3c) == 0) {
            uVar4 = DH_generate_parameters_ex(dh,*(int *)(param_1 + 3),*(int *)(param_1 + 8),cb);
          }
          else {
            uVar4 = ossl_dh_generate_ffc_parameters
                              (dh,*(int *)((long)param_1 + 0x3c),*(int *)(param_1 + 3),
                               *(undefined4 *)(param_1 + 4),cb);
          }
          if ((int)uVar4 < 1) goto LAB_0046c5d2;
          uVar2 = *(uint *)(param_1 + 2);
        }
        goto LAB_0046c4e6;
      }
    }
    cb = (BN_GENCB *)0x0;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x3c) = 3;
    if (param_1[1] != 0) goto LAB_0046c400;
LAB_0046c57a:
    dh = (DH *)ossl_dh_new_by_nid_ex(*param_1,iVar1);
    if (dh == (DH *)0x0) {
      return (DH *)0x0;
    }
    cb = (BN_GENCB *)0x0;
    uVar4 = 0;
    plVar3 = (long *)ossl_dh_get0_params(dh);
    uVar2 = *(uint *)(param_1 + 2);
LAB_0046c4e6:
    if ((uVar2 & 3) == 0) {
LAB_0046c535:
      DH_clear_flags(dh,0xf000);
      DH_set_flags(dh,*(undefined4 *)(param_1 + 0xe));
      BN_GENCB_free(cb);
      return dh;
    }
    if ((*plVar3 != 0) && (plVar3[2] != 0)) {
      if (0 < *(int *)((long)param_1 + 0x4c)) {
        DH_set_length(dh);
      }
      ossl_ffc_params_enable_flags(plVar3,4,*(int *)((long)param_1 + 0x3c) == 1);
      iVar1 = DH_generate_key(dh);
      if (0 < iVar1) goto LAB_0046c535;
    }
    if (uVar4 != 0) {
      BN_GENCB_free(cb);
      return dh;
    }
  }
LAB_0046c5d2:
  DH_free(dh);
  BN_GENCB_free(cb);
  return (DH *)0x0;
}

