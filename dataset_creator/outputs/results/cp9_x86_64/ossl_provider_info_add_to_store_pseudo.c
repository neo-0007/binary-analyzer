
undefined4 ossl_provider_info_add_to_store(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  void *addr;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  lVar4 = ossl_lib_ctx_get_data(param_1,1,provider_store_method);
  if (lVar4 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/provider_core.c",0x154,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
    if (*param_2 != 0) {
      ERR_new();
      ERR_set_debug("../crypto/provider_core.c",0x174,"ossl_provider_info_add_to_store");
      ERR_set_error(0xf,0xc0103,0);
      return 0;
    }
LAB_0041f150:
    ERR_new();
    ERR_set_debug("../crypto/provider_core.c",0x16f,"ossl_provider_info_add_to_store");
    ERR_set_error(0xf,0xc0102,0);
    return 0;
  }
  if (*param_2 == 0) goto LAB_0041f150;
  iVar3 = CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar4 + 0x20));
  if (iVar3 == 0) {
    return 0;
  }
  lVar2 = *(long *)(lVar4 + 0x40);
  if (lVar2 == 0) {
    addr = (void *)CRYPTO_zalloc(400,"../crypto/provider_core.c",0x17b);
    *(void **)(lVar4 + 0x30) = addr;
    if (addr == (void *)0x0) {
      ERR_new();
      uVar6 = 0x17e;
LAB_0041f1dc:
      ERR_set_debug("../crypto/provider_core.c",uVar6,"ossl_provider_info_add_to_store");
      uVar7 = 0;
      ERR_set_error(0xf,0xc0100,0);
      goto LAB_0041f07d;
    }
    *(undefined8 *)(lVar4 + 0x40) = 10;
    lVar5 = *(long *)(lVar4 + 0x38);
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x38);
    addr = *(void **)(lVar4 + 0x30);
    if (lVar2 == lVar5) {
      addr = CRYPTO_realloc(addr,(int)(lVar2 + 10) * 0x28,"../crypto/provider_core.c",0x186);
      if (addr == (void *)0x0) {
        ERR_new();
        uVar6 = 0x189;
        goto LAB_0041f1dc;
      }
      *(void **)(lVar4 + 0x30) = addr;
      lVar5 = *(long *)(lVar4 + 0x38);
      *(long *)(lVar4 + 0x40) = lVar2 + 10;
    }
  }
  lVar2 = param_2[1];
  uVar7 = 1;
  plVar1 = (long *)((long)addr + lVar5 * 0x28);
  *plVar1 = *param_2;
  plVar1[1] = lVar2;
  lVar2 = param_2[3];
  plVar1[2] = param_2[2];
  plVar1[3] = lVar2;
  plVar1[4] = param_2[4];
  *(long *)(lVar4 + 0x38) = lVar5 + 1;
LAB_0041f07d:
  CRYPTO_THREAD_unlock(*(undefined8 *)(lVar4 + 0x20));
  return uVar7;
}

