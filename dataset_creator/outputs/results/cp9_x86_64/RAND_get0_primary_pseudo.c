
long RAND_get0_primary(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  
  puVar2 = (undefined8 *)ossl_lib_ctx_get_data(param_1,5,rand_drbg_ossl_ctx_method);
  if (puVar2 != (undefined8 *)0x0) {
    iVar1 = CRYPTO_THREAD_read_lock(*puVar2);
    if (iVar1 != 0) {
      lVar5 = puVar2[2];
      CRYPTO_THREAD_unlock(*puVar2);
      if (lVar5 != 0) {
        return lVar5;
      }
      iVar1 = CRYPTO_THREAD_write_lock(*puVar2);
      if (iVar1 != 0) {
        lVar5 = puVar2[2];
        if (puVar2[2] == 0) {
          lVar5 = puVar2[1];
          if (lVar5 == 0) {
            ERR_set_mark();
            lVar5 = ossl_lib_ctx_get_data(param_1,5,rand_drbg_ossl_ctx_method);
            if (lVar5 != 0) {
              pcVar4 = *(char **)(lVar5 + 0x40);
              if (pcVar4 == (char *)0x0) {
                pcVar4 = "SEED-SRC";
              }
              lVar3 = EVP_RAND_fetch(param_1,pcVar4,*(undefined8 *)(lVar5 + 0x48));
              if (lVar3 == 0) {
                ERR_new();
                lVar5 = 0;
                ERR_set_debug("../crypto/rand/rand_lib.c",0x21a,"rand_new_seed");
                ERR_set_error(0x24,0x90,0);
              }
              else {
                lVar5 = EVP_RAND_CTX_new(lVar3,0);
                EVP_RAND_free(lVar3);
                if (lVar5 == 0) {
                  ERR_new();
                  ERR_set_debug("../crypto/rand/rand_lib.c",0x220,"rand_new_seed");
                  ERR_set_error(0x24,0x8f,0);
                }
                else {
                  iVar1 = EVP_RAND_instantiate(lVar5,0,0,0,0,0);
                  if (iVar1 == 0) {
                    ERR_new();
                    ERR_set_debug("../crypto/rand/rand_lib.c",0x224,"rand_new_seed");
                    ERR_set_error(0x24,0x6c,0);
                    EVP_RAND_CTX_free(lVar5);
                    lVar5 = 0;
                  }
                }
              }
            }
            puVar2[1] = lVar5;
            ERR_pop_to_mark();
            lVar5 = puVar2[1];
          }
          lVar3 = rand_new_drbg(param_1,lVar5,0x100,0xe10);
          puVar2[2] = lVar3;
          lVar5 = lVar3;
          if (lVar3 != 0) {
            iVar1 = EVP_RAND_enable_locking(lVar3);
            if (iVar1 == 0) {
              ERR_new();
              ERR_set_debug("../crypto/rand/rand_lib.c",0x28f,"RAND_get0_primary");
              ERR_set_error(6,0xd4,0);
              lVar5 = 0;
              EVP_RAND_CTX_free(lVar3);
              puVar2[2] = 0;
            }
          }
        }
        CRYPTO_THREAD_unlock(*puVar2);
        return lVar5;
      }
    }
  }
  return 0;
}

