
undefined8
ossl_method_store_add
          (undefined8 *param_1,long param_2,int param_3,undefined1 *param_4,long param_5,
          code *param_6,long param_7)

{
  int iVar1;
  int iVar2;
  long *ptr;
  long lVar3;
  long lVar4;
  int *ptr_00;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (param_5 == 0 || param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_3 < 1) {
    return 0;
  }
  if (param_4 == (undefined1 *)0x0) {
    param_4 = &DAT_008343a2;
  }
  if (param_2 == 0) {
    return 0;
  }
  ptr = (long *)CRYPTO_malloc(0x28,"../crypto/property/property.c",0x125);
  if (ptr == (long *)0x0) {
    return 0;
  }
  ptr[2] = param_5;
  ptr[3] = (long)param_6;
  ptr[4] = param_7;
  iVar1 = (*param_6)(param_5);
  if (iVar1 == 0) {
    CRYPTO_free(ptr);
    return 0;
  }
  *ptr = param_2;
  iVar1 = CRYPTO_THREAD_write_lock(param_1[2]);
  if (iVar1 == 0) {
    CRYPTO_free(ptr);
    return 0;
  }
  lVar7 = (long)param_3;
  lVar3 = ossl_sa_get(param_1[1],lVar7);
  if (lVar3 != 0) {
    lVar4 = OPENSSL_LH_num_items(*(undefined8 *)(lVar3 + 0x10));
    param_1[3] = param_1[3] - lVar4;
    OPENSSL_LH_doall(*(undefined8 *)(lVar3 + 0x10),impl_cache_free);
    OPENSSL_LH_flush(*(undefined8 *)(lVar3 + 0x10));
  }
  lVar3 = ossl_prop_defn_get(*param_1,param_4);
  ptr[1] = lVar3;
  if (lVar3 == 0) {
    lVar3 = ossl_parse_property(*param_1,param_4);
    ptr[1] = lVar3;
    if (lVar3 != 0) {
      ossl_prop_defn_set(*param_1,param_4,lVar3);
      goto LAB_0042bbed;
    }
LAB_0042bc4f:
    uVar6 = param_1[2];
  }
  else {
LAB_0042bbed:
    ptr_00 = (int *)ossl_sa_get(param_1[1],lVar7);
    if (ptr_00 == (int *)0x0) {
      ptr_00 = (int *)CRYPTO_zalloc(0x18,"../crypto/property/property.c",0x140);
      if (ptr_00 != (int *)0x0) {
        lVar3 = OPENSSL_sk_new_null();
        *(long *)(ptr_00 + 2) = lVar3;
        if (lVar3 != 0) {
          lVar3 = OPENSSL_LH_new(query_hash,query_cmp);
          *(long *)(ptr_00 + 4) = lVar3;
          if (lVar3 != 0) {
            *ptr_00 = param_3;
            iVar1 = ossl_sa_set(param_1[1],lVar7,ptr_00);
            if (iVar1 != 0) goto LAB_0042bc06;
          }
        }
        CRYPTO_THREAD_unlock(param_1[2]);
        OPENSSL_sk_pop_free(*(undefined8 *)(ptr_00 + 2),impl_free);
        OPENSSL_LH_doall(*(undefined8 *)(ptr_00 + 4),impl_cache_free);
        OPENSSL_LH_free(*(undefined8 *)(ptr_00 + 4));
        CRYPTO_free(ptr_00);
        goto LAB_0042bc59;
      }
      goto LAB_0042bc4f;
    }
LAB_0042bc06:
    iVar1 = 0;
    while ((iVar2 = OPENSSL_sk_num(*(undefined8 *)(ptr_00 + 2)), iVar1 < iVar2 &&
           ((plVar5 = (long *)OPENSSL_sk_value(*(undefined8 *)(ptr_00 + 2),iVar1), *plVar5 != *ptr
            || (plVar5[1] != ptr[1]))))) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(ptr_00 + 2));
    if (iVar1 != iVar2) goto LAB_0042bc4f;
    iVar1 = OPENSSL_sk_push(*(undefined8 *)(ptr_00 + 2),ptr);
    uVar6 = param_1[2];
    if (iVar1 != 0) {
      CRYPTO_THREAD_unlock(uVar6);
      return 1;
    }
  }
  CRYPTO_THREAD_unlock(uVar6);
LAB_0042bc59:
  (*(code *)ptr[4])(ptr[2]);
  CRYPTO_free(ptr);
  return 0;
}

