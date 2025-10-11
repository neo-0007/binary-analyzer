
void * ossl_err_get_state_int(void)

{
  int iVar1;
  void *ptr;
  int iVar2;
  int *piVar3;
  void *ptr_00;
  long lVar4;
  
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  iVar2 = OPENSSL_init_crypto(0x40000,0);
  if ((((iVar2 != 0) && (iVar2 = CRYPTO_THREAD_run_once(&err_init,err_do_init_ossl_), iVar2 != 0))
      && (err_do_init_ossl_ret_ != 0)) &&
     (ptr_00 = (void *)CRYPTO_THREAD_get_local(&err_thread_local),
     ptr_00 != (void *)0xffffffffffffffff)) {
    if (ptr_00 != (void *)0x0) {
LAB_0051026b:
      *piVar3 = iVar1;
      return ptr_00;
    }
    iVar2 = CRYPTO_THREAD_set_local(&err_thread_local,0xffffffffffffffff);
    if (iVar2 != 0) {
      ptr_00 = (void *)CRYPTO_zalloc(0x388,"../crypto/err/err.c",0x296);
      if (ptr_00 != (void *)0x0) {
        iVar2 = ossl_init_thread_start(0,0,err_delete_thread_state);
        if ((iVar2 != 0) && (iVar2 = CRYPTO_THREAD_set_local(&err_thread_local,ptr_00), iVar2 != 0))
        {
          OPENSSL_init_crypto(2,0);
          goto LAB_0051026b;
        }
        lVar4 = 0;
        do {
          if ((*(byte *)((long)ptr_00 + lVar4 * 4 + 0x200) & 1) != 0) {
            CRYPTO_free(*(void **)((long)ptr_00 + lVar4 * 8 + 0x100));
          }
          ptr = *(void **)((long)ptr_00 + lVar4 * 8 + 0x240);
          *(undefined8 *)((long)ptr_00 + lVar4 * 8 + 0x100) = 0;
          *(undefined8 *)((long)ptr_00 + lVar4 * 8 + 0x180) = 0;
          *(undefined4 *)((long)ptr_00 + lVar4 * 4 + 0x200) = 0;
          *(undefined4 *)((long)ptr_00 + lVar4 * 4 + 0x40) = 0;
          *(undefined4 *)((long)ptr_00 + lVar4 * 4) = 0;
          *(undefined8 *)((long)ptr_00 + lVar4 * 8 + 0x80) = 0;
          *(undefined4 *)((long)ptr_00 + lVar4 * 4 + 0x2c0) = 0xffffffff;
          CRYPTO_free(ptr);
          *(undefined8 *)((long)ptr_00 + lVar4 * 8 + 0x240) = 0;
          CRYPTO_free(*(void **)((long)ptr_00 + lVar4 * 8 + 0x300));
          *(undefined8 *)((long)ptr_00 + lVar4 * 8 + 0x300) = 0;
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0x10);
        CRYPTO_free(ptr_00);
      }
      CRYPTO_THREAD_set_local(&err_thread_local,0);
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}

