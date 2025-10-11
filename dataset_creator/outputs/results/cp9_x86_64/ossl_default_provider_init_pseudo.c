
int ossl_default_provider_init(undefined8 param_1,int *param_2,undefined8 *param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  iVar1 = ossl_prov_bio_from_dispatch(param_2);
  if (((iVar1 != 0) && (iVar1 = ossl_prov_seeding_from_dispatch(param_2), iVar1 != 0)) &&
     (iVar1 = *param_2, iVar1 != 0)) {
    pcVar4 = (code *)0x0;
    do {
      while (iVar1 != 4) {
        iVar1 = param_2[4];
        param_2 = param_2 + 4;
        if (iVar1 == 0) goto LAB_00439334;
      }
      pcVar4 = *(code **)(param_2 + 2);
      iVar1 = param_2[4];
      param_2 = param_2 + 4;
    } while (iVar1 != 0);
LAB_00439334:
    if (pcVar4 != (code *)0x0) {
      lVar2 = ossl_prov_ctx_new();
      *param_4 = lVar2;
      if (lVar2 != 0) {
        lVar2 = ossl_bio_prov_init_bio_method();
        if (lVar2 != 0) {
          uVar3 = (*pcVar4)(param_1);
          ossl_prov_ctx_set0_libctx(*param_4,uVar3);
          ossl_prov_ctx_set0_handle(*param_4,param_1);
          ossl_prov_ctx_set0_core_bio_method(*param_4,lVar2);
          *param_3 = deflt_dispatch_table;
          ossl_prov_cache_exported_algorithms(deflt_ciphers,exported_ciphers);
          return 1;
        }
        lVar2 = *param_4;
      }
      ossl_prov_ctx_free(lVar2);
      *param_4 = 0;
      return iVar1;
    }
  }
  return 0;
}

