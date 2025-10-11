
int ossl_method_store_fetch
              (undefined8 *param_1,int param_2,long param_3,long *param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long local_60;
  long *local_58;
  long local_50;
  int local_40;
  
  lVar8 = 0;
  if (param_4 != (long *)0x0) {
    lVar8 = *param_4;
  }
  iVar1 = OPENSSL_init_crypto(0x40,0);
  if ((((iVar1 == 0) || (param_2 < 1 || param_5 == (long *)0x0)) || (param_1 == (undefined8 *)0x0))
     || (iVar1 = CRYPTO_THREAD_read_lock(param_1[2]), iVar1 == 0)) {
    return 0;
  }
  lVar4 = ossl_sa_get(param_1[1],(long)param_2);
  if (lVar4 == 0) {
    CRYPTO_THREAD_unlock(param_1[2]);
    return 0;
  }
  if (param_3 == 0) {
    plVar6 = (long *)ossl_ctx_global_properties(*param_1,0);
    if (plVar6 != (long *)0x0) {
      local_60 = 0;
      local_50 = *plVar6;
      if (*plVar6 != 0) goto LAB_0042c0ed;
    }
LAB_0042c1a5:
    for (iVar1 = 0; iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar4 + 8)), iVar1 < iVar2;
        iVar1 = iVar1 + 1) {
      local_58 = (long *)OPENSSL_sk_value(*(undefined8 *)(lVar4 + 8),iVar1);
      if ((local_58 != (long *)0x0) && ((lVar8 == 0 || (*local_58 == lVar8)))) {
        local_60 = 0;
        goto LAB_0042c235;
      }
    }
LAB_0042c1e7:
    local_60 = 0;
    iVar1 = 0;
  }
  else {
    lVar5 = ossl_parse_query(*param_1,param_3,0);
    plVar6 = (long *)ossl_ctx_global_properties(*param_1,0);
    local_60 = lVar5;
    if ((plVar6 == (long *)0x0) || (*plVar6 == 0)) {
      local_50 = lVar5;
      if (lVar5 == 0) goto LAB_0042c1a5;
    }
    else {
      local_50 = *plVar6;
      if (lVar5 != 0) {
        local_60 = ossl_property_merge(lVar5);
        ossl_property_free(lVar5);
        local_50 = local_60;
        if (local_60 == 0) goto LAB_0042c1e7;
      }
    }
LAB_0042c0ed:
    iVar1 = 0;
    iVar2 = ossl_property_has_optional(local_50);
    local_40 = -1;
    local_58 = (long *)0x0;
    for (iVar7 = 0; iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar4 + 8)), iVar7 < iVar3;
        iVar7 = iVar7 + 1) {
      plVar6 = (long *)OPENSSL_sk_value(*(undefined8 *)(lVar4 + 8),iVar7);
      if ((plVar6 != (long *)0x0) &&
         (((lVar8 == 0 || (*plVar6 == lVar8)) &&
          (iVar3 = ossl_property_match_count(local_50,plVar6[1]), local_40 < iVar3)))) {
        local_58 = plVar6;
        if (iVar2 == 0) goto LAB_0042c235;
        iVar1 = 1;
        local_40 = iVar3;
      }
    }
    if (iVar1 != 0) {
LAB_0042c235:
      iVar1 = (*(code *)local_58[3])(local_58[2]);
      if (iVar1 != 0) {
        iVar1 = 1;
        *param_5 = local_58[2];
        if (param_4 != (long *)0x0) {
          *param_4 = *local_58;
        }
      }
    }
  }
  CRYPTO_THREAD_unlock(param_1[2]);
  ossl_property_free(local_60);
  return iVar1;
}

