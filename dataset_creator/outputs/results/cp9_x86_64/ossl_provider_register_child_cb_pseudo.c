
int ossl_provider_register_child_cb
              (long param_1,code *param_2,code *param_3,code *param_4,long param_5)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *ptr;
  void *ptr_00;
  byte *pbVar6;
  undefined8 uVar7;
  int iVar8;
  bool bVar9;
  
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  lVar5 = ossl_lib_ctx_get_data(uVar7,1,provider_store_method);
  if (lVar5 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/provider_core.c",0x154,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
    return 0;
  }
  ptr = (long *)CRYPTO_malloc(0x28,"../crypto/provider_core.c",0x6b2);
  if (ptr == (long *)0x0) {
    return 0;
  }
  uVar2 = *(undefined8 *)(lVar5 + 0x20);
  *ptr = param_1;
  ptr[3] = (long)param_4;
  ptr[1] = (long)param_2;
  ptr[4] = param_5;
  ptr[2] = (long)param_3;
  iVar3 = CRYPTO_THREAD_write_lock(uVar2);
  if (iVar3 == 0) {
    CRYPTO_free(ptr);
    return 0;
  }
  ptr_00 = (void *)evp_get_global_properties_str(uVar7,0);
  if (ptr_00 != (void *)0x0) {
    (*param_4)(ptr_00,param_5);
    CRYPTO_free(ptr_00);
  }
  iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar5 + 8));
  if (iVar3 < 1) {
    if (iVar3 == 0) goto LAB_0041ed70;
    uVar7 = OPENSSL_sk_value(*(undefined8 *)(lVar5 + 8),0);
    (*param_3)(uVar7,param_5);
  }
  else {
    iVar8 = 0;
    do {
      pbVar6 = (byte *)OPENSSL_sk_value(*(undefined8 *)(lVar5 + 8),iVar8);
      iVar4 = CRYPTO_THREAD_read_lock(*(undefined8 *)(pbVar6 + 8));
      if ((iVar4 == 0) ||
         ((bVar1 = *pbVar6, CRYPTO_THREAD_unlock(*(undefined8 *)(pbVar6 + 8)), (bVar1 >> 1 & 1) != 0
          && (iVar4 = (*param_2)(pbVar6,param_5), iVar4 == 0)))) goto LAB_0041ecb8;
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar3);
LAB_0041ed70:
    iVar4 = OPENSSL_sk_push(*(undefined8 *)(lVar5 + 0x10),ptr);
    iVar8 = iVar3;
    if (0 < iVar4) goto LAB_0041ecec;
LAB_0041ecb8:
    do {
      uVar7 = OPENSSL_sk_value(*(undefined8 *)(lVar5 + 8),iVar8);
      (*param_3)(uVar7,param_5);
      bVar9 = iVar8 != 0;
      iVar8 = iVar8 + -1;
    } while (bVar9);
  }
  CRYPTO_free(ptr);
  iVar4 = 0;
LAB_0041ecec:
  CRYPTO_THREAD_unlock(*(undefined8 *)(lVar5 + 0x20));
  return iVar4;
}

