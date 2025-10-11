
undefined4 * evp_kem_from_algorithm(undefined4 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *ptr;
  long lVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  piVar4 = *(int **)(param_2 + 0x10);
  ptr = (undefined4 *)CRYPTO_zalloc(0x88,"../crypto/evp/kem.c",0xef);
  if (ptr == (undefined4 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/kem.c",0xf2,"evp_kem_new");
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
        *(undefined8 *)(ptr + 4) = *(undefined8 *)(param_2 + 0x18);
        iVar1 = *piVar4;
        if (iVar1 != 0) {
          uVar7 = 0;
          uVar8 = 0;
          iVar5 = 0;
          uVar3 = 0;
          iVar6 = 0;
          do {
            switch(iVar1) {
            case 1:
              if (*(long *)(ptr + 0xc) != 0) break;
              iVar6 = iVar6 + 1;
              *(undefined8 *)(ptr + 0xc) = *(undefined8 *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x005290a0;
            case 2:
              if (*(long *)(ptr + 0xe) == 0) {
                uVar3 = uVar3 + 1;
                *(undefined8 *)(ptr + 0xe) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x005290a0;
              }
              break;
            case 3:
              if (*(long *)(ptr + 0x10) == 0) {
                uVar3 = uVar3 + 1;
                *(undefined8 *)(ptr + 0x10) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x005290a0;
              }
              break;
            case 4:
              if (*(long *)(ptr + 0x12) == 0) {
                iVar5 = iVar5 + 1;
                *(undefined8 *)(ptr + 0x12) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x005290a0;
              }
              break;
            case 5:
              if (*(long *)(ptr + 0x14) == 0) {
                iVar5 = iVar5 + 1;
                *(undefined8 *)(ptr + 0x14) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x005290a0;
              }
              break;
            case 6:
              if (*(long *)(ptr + 0x16) == 0) {
                iVar6 = iVar6 + 1;
                *(undefined8 *)(ptr + 0x16) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x005290a0;
              }
              break;
            case 7:
              if (*(long *)(ptr + 0x18) == 0) {
                *(undefined8 *)(ptr + 0x18) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x005290a0;
              }
              break;
            case 8:
              if (*(long *)(ptr + 0x1a) == 0) {
                uVar8 = uVar8 + 1;
                *(undefined8 *)(ptr + 0x1a) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x005290a0;
              }
              break;
            case 9:
              if (*(long *)(ptr + 0x1c) == 0) {
                uVar8 = uVar8 + 1;
                *(undefined8 *)(ptr + 0x1c) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x005290a0;
              }
              break;
            case 10:
              if (*(long *)(ptr + 0x1e) == 0) {
                uVar7 = uVar7 + 1;
                *(undefined8 *)(ptr + 0x1e) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x005290a0;
              }
              break;
            case 0xb:
              if (*(long *)(ptr + 0x20) == 0) {
                uVar7 = uVar7 + 1;
                *(undefined8 *)(ptr + 0x20) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x005290a0;
              }
            }
            iVar1 = piVar4[4];
joined_r0x005290a0:
            piVar4 = piVar4 + 4;
          } while (iVar1 != 0);
          if ((iVar6 == 2) &&
             (((uVar3 == 2 && iVar5 == 0 || (iVar5 == 2)) &&
              (((uVar3 | uVar8 | uVar7) & 0xfffffffd) == 0)))) {
            return ptr;
          }
        }
        ERR_new();
        ERR_set_debug("../crypto/evp/kem.c",0x16d,"evp_kem_from_algorithm");
        ERR_set_error(6,0xc1,0);
      }
      goto LAB_00528f3c;
    }
    ERR_new();
    ERR_set_debug("../crypto/evp/kem.c",0xf8,"evp_kem_new");
    ERR_set_error(6,0xc0100,0);
    CRYPTO_free(ptr);
  }
  ERR_new();
  ptr = (undefined4 *)0x0;
  ERR_set_debug("../crypto/evp/kem.c",0x10c,"evp_kem_from_algorithm");
  ERR_set_error(6,0xc0100,0);
LAB_00528f3c:
  EVP_KEM_free(ptr);
  return (undefined4 *)0x0;
}

