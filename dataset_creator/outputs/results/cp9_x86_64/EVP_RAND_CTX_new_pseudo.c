
undefined8 * EVP_RAND_CTX_new(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 *ptr;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/evp_rand.c",0x151,"EVP_RAND_CTX_new");
    ERR_set_error(6,0xda,0);
  }
  else {
    ptr = (undefined8 *)CRYPTO_zalloc(0x28,"../crypto/evp/evp_rand.c",0x155);
    if (ptr != (undefined8 *)0x0) {
      lVar3 = CRYPTO_THREAD_lock_new();
      ptr[4] = lVar3;
      if (lVar3 != 0) {
        if (param_2 == (long *)0x0) {
          uVar5 = 0;
          lVar3 = 0;
        }
        else {
          LOCK();
          *(int *)(param_2 + 3) = (int)param_2[3] + 1;
          UNLOCK();
          lVar3 = param_2[1];
          uVar5 = *(undefined8 *)(*param_2 + 0x30);
        }
        pcVar1 = (code *)param_1[7];
        uVar4 = ossl_provider_ctx(*param_1);
        lVar3 = (*pcVar1)(uVar4,lVar3,uVar5);
        ptr[1] = lVar3;
        if ((lVar3 != 0) && (iVar2 = EVP_RAND_up_ref(param_1), iVar2 != 0)) {
          *ptr = param_1;
          ptr[2] = param_2;
          LOCK();
          *(undefined4 *)(ptr + 3) = 1;
          UNLOCK();
          return ptr;
        }
        ERR_new();
        ERR_set_debug("../crypto/evp/evp_rand.c",0x168,"EVP_RAND_CTX_new");
        ERR_set_error(6,0xc0100,0);
        (*(code *)param_1[8])(ptr[1]);
        CRYPTO_THREAD_lock_free(ptr[4]);
        CRYPTO_free(ptr);
        EVP_RAND_CTX_free(param_2);
        return (undefined8 *)0x0;
      }
    }
    CRYPTO_free(ptr);
    ERR_new();
    ERR_set_debug("../crypto/evp/evp_rand.c",0x158,"EVP_RAND_CTX_new");
    ERR_set_error(6,0xc0100,0);
  }
  return (undefined8 *)0x0;
}

