
undefined4 * evp_keyexch_from_algorithm(undefined4 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *ptr;
  long lVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  piVar4 = *(int **)(param_2 + 0x10);
  ptr = (undefined4 *)CRYPTO_zalloc(0x80,"../crypto/evp/exchange.c",0x17);
  if (ptr == (undefined4 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/exchange.c",0x1a,"evp_keyexch_new");
    ERR_set_error(6,0xc0100,0);
  }
  else {
    lVar2 = CRYPTO_THREAD_lock_new();
    *(long *)(ptr + 10) = lVar2;
    if (lVar2 != 0) {
      *(undefined8 *)(ptr + 6) = param_3;
      ossl_provider_up_ref(param_3);
      LOCK();
      ptr[8] = 1;
      UNLOCK();
      *ptr = param_1;
      lVar2 = ossl_algorithm_get1_first_name();
      *(long *)(ptr + 2) = lVar2;
      if (lVar2 != 0) {
        uVar6 = 0;
        uVar3 = 0;
        iVar5 = 0;
        *(undefined8 *)(ptr + 4) = *(undefined8 *)(param_2 + 0x18);
        iVar1 = *piVar4;
        if (iVar1 != 0) {
          do {
            switch(iVar1) {
            case 1:
              if (*(long *)(ptr + 0xc) != 0) break;
              *(undefined8 *)(ptr + 0xc) = *(undefined8 *)(piVar4 + 2);
              iVar1 = piVar4[4];
joined_r0x00527520:
              iVar5 = iVar5 + 1;
              goto joined_r0x00527520;
            case 2:
              if (*(long *)(ptr + 0xe) == 0) {
                *(undefined8 *)(ptr + 0xe) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x00527520;
              }
              break;
            case 3:
              if (*(long *)(ptr + 0x12) == 0) {
                *(undefined8 *)(ptr + 0x12) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x00527520;
              }
              break;
            case 4:
              if (*(long *)(ptr + 0x10) == 0) {
                *(undefined8 *)(ptr + 0x10) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x00527520;
              }
              break;
            case 5:
              if (*(long *)(ptr + 0x14) == 0) {
                iVar5 = iVar5 + 1;
                *(undefined8 *)(ptr + 0x14) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x00527520;
              }
              break;
            case 6:
              if (*(long *)(ptr + 0x16) == 0) {
                *(undefined8 *)(ptr + 0x16) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x00527520;
              }
              break;
            case 7:
              if (*(long *)(ptr + 0x18) == 0) {
                uVar3 = uVar3 + 1;
                *(undefined8 *)(ptr + 0x18) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x00527520;
              }
              break;
            case 8:
              if (*(long *)(ptr + 0x1a) == 0) {
                uVar3 = uVar3 + 1;
                *(undefined8 *)(ptr + 0x1a) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x00527520;
              }
              break;
            case 9:
              if (*(long *)(ptr + 0x1c) == 0) {
                uVar6 = uVar6 + 1;
                *(undefined8 *)(ptr + 0x1c) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x00527520;
              }
              break;
            case 10:
              if (*(long *)(ptr + 0x1e) == 0) {
                uVar6 = uVar6 + 1;
                *(undefined8 *)(ptr + 0x1e) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x00527520;
              }
            }
            iVar1 = piVar4[4];
joined_r0x00527520:
            piVar4 = piVar4 + 4;
          } while (iVar1 != 0);
          if ((iVar5 == 4) && (((uVar3 | uVar6) & 0xfffffffd) == 0)) {
            return ptr;
          }
        }
        ERR_new();
        ERR_set_debug("../crypto/evp/exchange.c",0x88,"evp_keyexch_from_algorithm");
        ERR_set_error(6,0xc1,0);
      }
      goto LAB_005275bc;
    }
    ERR_new();
    ERR_set_debug("../crypto/evp/exchange.c",0x20,"evp_keyexch_new");
    ERR_set_error(6,0xc0100,0);
    CRYPTO_free(ptr);
  }
  ERR_new();
  ptr = (undefined4 *)0x0;
  ERR_set_debug("../crypto/evp/exchange.c",0x34,"evp_keyexch_from_algorithm");
  ERR_set_error(6,0xc0100,0);
LAB_005275bc:
  EVP_KEYEXCH_free(ptr);
  return (undefined4 *)0x0;
}

