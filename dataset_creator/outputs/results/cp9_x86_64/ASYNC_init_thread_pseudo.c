
undefined4 ASYNC_init_thread(ulong param_1,ulong param_2)

{
  int iVar1;
  long *ptr;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  
  if (param_1 < param_2) {
    ERR_new();
    ERR_set_debug("../crypto/async/async.c",0x166,"ASYNC_init_thread");
    ERR_set_error(0x33,0x67,0);
    return 0;
  }
  iVar1 = OPENSSL_init_crypto(0x100,0);
  if ((iVar1 != 0) && (iVar1 = ossl_init_thread_start(0,0,async_delete_thread_state), iVar1 != 0)) {
    ptr = (long *)CRYPTO_zalloc(0x18,"../crypto/async/async.c",0x170);
    if (ptr == (long *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/async/async.c",0x172,"ASYNC_init_thread");
      ERR_set_error(0x33,0xc0100,0);
      return 0;
    }
    lVar2 = OPENSSL_sk_new_reserve(0,param_2 & 0xffffffff);
    *ptr = lVar2;
    if (lVar2 != 0) {
      ptr[2] = param_1;
      uVar4 = 0;
      if (param_2 != 0) {
        do {
          pvVar3 = (void *)CRYPTO_zalloc(0x3f0,"../crypto/async/async.c",0x54);
          if (pvVar3 == (void *)0x0) {
            ERR_new();
            ERR_set_debug("../crypto/async/async.c",0x56,"async_job_new");
            ERR_set_error(0x33,0xc0100,0);
            break;
          }
          *(undefined4 *)((long)pvVar3 + 0x3dc) = 0;
          iVar1 = async_fibre_makecontext(pvVar3);
          if (iVar1 == 0) {
            CRYPTO_free(*(void **)((long)pvVar3 + 0x3d0));
            async_fibre_free(pvVar3);
            CRYPTO_free(pvVar3);
            break;
          }
          lVar2 = *ptr;
          uVar4 = uVar4 + 1;
          *(undefined8 *)((long)pvVar3 + 0x3d0) = 0;
          OPENSSL_sk_push(lVar2,pvVar3);
        } while (param_2 != uVar4);
      }
      ptr[1] = uVar4;
      iVar1 = CRYPTO_THREAD_set_local(&poolkey,ptr);
      if (iVar1 != 0) {
        return 1;
      }
      ERR_new();
      ERR_set_debug("../crypto/async/async.c",0x191,"ASYNC_init_thread");
      ERR_set_error(0x33,0x65,0);
      lVar2 = *ptr;
      if (lVar2 != 0) {
        pvVar3 = (void *)OPENSSL_sk_pop();
        while (pvVar3 != (void *)0x0) {
          CRYPTO_free(*(void **)((long)pvVar3 + 0x3d0));
          async_fibre_free(pvVar3);
          CRYPTO_free(pvVar3);
          pvVar3 = (void *)OPENSSL_sk_pop(*ptr);
        }
        lVar2 = *ptr;
      }
      OPENSSL_sk_free(lVar2);
      CRYPTO_free(ptr);
      return 0;
    }
    ERR_new();
    ERR_set_debug("../crypto/async/async.c",0x178,"ASYNC_init_thread");
    ERR_set_error(0x33,0xc0100,0);
    CRYPTO_free(ptr);
  }
  return 0;
}

