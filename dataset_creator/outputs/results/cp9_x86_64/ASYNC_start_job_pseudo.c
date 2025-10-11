
undefined8
ASYNC_start_job(long *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
               void *param_5,size_t param_6)

{
  long lVar1;
  int iVar2;
  void *ptr;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  
  iVar2 = OPENSSL_init_crypto(0x100,0);
  if (iVar2 == 0) {
    return 0;
  }
  ptr = (void *)async_get_ctx();
  if (ptr == (void *)0x0) {
    iVar2 = ossl_init_thread_start(0,0,async_delete_thread_state);
    if (iVar2 == 0) {
      return 0;
    }
    ptr = CRYPTO_malloc(0x3d8,"../crypto/async/async.c",0x2a);
    if (ptr == (void *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/async/async.c",0x2c,"async_ctx_new");
      ERR_set_error(0x33,0xc0100,0);
    }
    else {
      *(undefined8 *)((long)ptr + 0x3c8) = 0;
      *(undefined4 *)((long)ptr + 0x3d0) = 0;
      iVar2 = CRYPTO_THREAD_set_local(&ctxkey,ptr);
      if (iVar2 != 0) goto LAB_004a6fa1;
    }
    CRYPTO_free(ptr);
    return 0;
  }
LAB_004a6fa1:
  lVar3 = *param_1;
  if (lVar3 == 0) goto LAB_004a7026;
  *(long *)((long)ptr + 0x3c8) = lVar3;
  do {
    if (lVar3 == 0) {
      puVar5 = (undefined8 *)CRYPTO_THREAD_get_local(&poolkey);
      if (puVar5 == (undefined8 *)0x0) {
        iVar2 = ASYNC_init_thread(0,0);
        if (iVar2 == 0) goto LAB_004a71c7;
        puVar5 = (undefined8 *)CRYPTO_THREAD_get_local(&poolkey);
      }
      pvVar6 = (void *)OPENSSL_sk_pop(*puVar5);
      if (pvVar6 == (void *)0x0) {
        if ((puVar5[2] != 0) && ((ulong)puVar5[2] <= (ulong)puVar5[1])) {
LAB_004a71c7:
          *(undefined8 *)((long)ptr + 0x3c8) = 0;
          return 1;
        }
        pvVar6 = (void *)CRYPTO_zalloc(0x3f0,"../crypto/async/async.c",0x54);
        if (pvVar6 == (void *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/async/async.c",0x56,"async_job_new");
          ERR_set_error(0x33,0xc0100,0);
          *(undefined8 *)((long)ptr + 0x3c8) = 0;
          return 1;
        }
        *(undefined4 *)((long)pvVar6 + 0x3dc) = 0;
        iVar2 = async_fibre_makecontext(pvVar6);
        if (iVar2 == 0) {
          CRYPTO_free(*(void **)((long)pvVar6 + 0x3d0));
          async_fibre_free(pvVar6);
          CRYPTO_free(pvVar6);
          goto LAB_004a71c7;
        }
        puVar5[1] = puVar5[1] + 1;
      }
      *(void **)((long)ptr + 0x3c8) = pvVar6;
      if (param_5 == (void *)0x0) {
        *(undefined8 *)((long)pvVar6 + 0x3d0) = 0;
      }
      else {
        pvVar7 = CRYPTO_malloc((int)param_6,"../crypto/async/async.c",0x101);
        *(void **)((long)pvVar6 + 0x3d0) = pvVar7;
        pvVar6 = *(void **)(*(long *)((long)ptr + 0x3c8) + 0x3d0);
        if (pvVar6 == (void *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/async/async.c",0x103,"ASYNC_start_job");
          ERR_set_error(0x33,0xc0100,0);
          async_release_job(*(undefined8 *)((long)ptr + 0x3c8));
          *(undefined8 *)((long)ptr + 0x3c8) = 0;
          return 0;
        }
        memcpy(pvVar6,param_5,param_6);
        pvVar6 = *(void **)((long)ptr + 0x3c8);
      }
      *(undefined8 *)((long)pvVar6 + 0x3c8) = param_4;
      *(undefined8 *)((long)pvVar6 + 0x3e0) = param_2;
      uVar4 = ossl_lib_ctx_get_concrete(0);
      swapcontext(ptr);
      lVar3 = *(long *)((long)ptr + 0x3c8);
      uVar4 = OSSL_LIB_CTX_set0_default(uVar4);
      *(undefined8 *)(lVar3 + 1000) = uVar4;
    }
    else {
      iVar2 = *(int *)(lVar3 + 0x3dc);
      if (iVar2 == 3) {
        *param_3 = *(undefined4 *)(lVar3 + 0x3d8);
        *(undefined8 *)(lVar3 + 0x3e0) = 0;
        async_release_job();
        *(undefined8 *)((long)ptr + 0x3c8) = 0;
        *param_1 = 0;
        return 3;
      }
      if (iVar2 == 1) {
        *param_1 = lVar3;
        *(undefined4 *)(lVar3 + 0x3dc) = 2;
        *(undefined8 *)((long)ptr + 0x3c8) = 0;
        return 2;
      }
      if (iVar2 != 2) {
        ERR_new();
        uVar4 = 0xf5;
        goto LAB_004a7139;
      }
      lVar3 = *param_1;
      if (lVar3 == 0) {
        return 0;
      }
      *(long *)((long)ptr + 0x3c8) = lVar3;
      lVar3 = OSSL_LIB_CTX_set0_default(*(undefined8 *)(lVar3 + 1000));
      if (lVar3 == 0) {
        ERR_new();
        uVar4 = 0xe1;
LAB_004a7139:
        ERR_set_debug("../crypto/async/async.c",uVar4,"ASYNC_start_job");
        ERR_set_error(0x33,0xc0103,0);
        async_release_job(*(undefined8 *)((long)ptr + 0x3c8));
        *(undefined8 *)((long)ptr + 0x3c8) = 0;
        *param_1 = 0;
        return 0;
      }
      swapcontext(ptr,*(undefined8 *)((long)ptr + 0x3c8));
      lVar1 = *(long *)((long)ptr + 0x3c8);
      uVar4 = OSSL_LIB_CTX_set0_default(lVar3);
      *(undefined8 *)(lVar1 + 1000) = uVar4;
    }
LAB_004a7026:
    lVar3 = *(long *)((long)ptr + 0x3c8);
  } while( true );
}

