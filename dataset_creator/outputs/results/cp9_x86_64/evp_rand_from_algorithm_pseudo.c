
/* WARNING: Type propagation algorithm not settling */

long * evp_rand_from_algorithm(undefined4 param_1,long param_2,long param_3)

{
  int iVar1;
  long *ptr;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  piVar7 = *(int **)(param_2 + 0x10);
  ptr = (long *)CRYPTO_zalloc(0xc0,"../crypto/evp/evp_rand.c",0x50);
  if (ptr != (long *)0x0) {
    lVar2 = CRYPTO_THREAD_lock_new();
    ptr[5] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(undefined4 *)(ptr + 4) = 1;
      UNLOCK();
      *(undefined4 *)(ptr + 1) = param_1;
      lVar2 = ossl_algorithm_get1_first_name();
      ptr[2] = lVar2;
      if (lVar2 == 0) {
        evp_rand_free(ptr);
        return (long *)0x0;
      }
      lVar2 = *(long *)(param_2 + 0x18);
      ptr[6] = (long)piVar7;
      ptr[3] = lVar2;
      iVar1 = *piVar7;
      if (iVar1 != 0) {
        iVar6 = 0;
        uVar5 = 0;
        iVar3 = 0;
        iVar4 = 0;
        do {
          switch(iVar1) {
          case 1:
            if (ptr[7] != 0) break;
            ptr[7] = *(long *)(piVar7 + 2);
            iVar1 = piVar7[4];
joined_r0x00526669:
            iVar3 = iVar3 + 1;
            goto joined_r0x00526669;
          case 2:
            if (ptr[8] == 0) {
              ptr[8] = *(long *)(piVar7 + 2);
              iVar1 = piVar7[4];
              goto joined_r0x00526669;
            }
            break;
          case 3:
            if (ptr[9] == 0) {
              ptr[9] = *(long *)(piVar7 + 2);
              iVar1 = piVar7[4];
joined_r0x00526609:
              iVar4 = iVar4 + 1;
              goto joined_r0x00526669;
            }
            break;
          case 4:
            if (ptr[10] == 0) {
              ptr[10] = *(long *)(piVar7 + 2);
              iVar1 = piVar7[4];
              goto joined_r0x00526609;
            }
            break;
          case 5:
            if (ptr[0xb] == 0) {
              iVar4 = iVar4 + 1;
              ptr[0xb] = *(long *)(piVar7 + 2);
              iVar1 = piVar7[4];
              goto joined_r0x00526669;
            }
            break;
          case 6:
            if (ptr[0xc] == 0) {
              ptr[0xc] = *(long *)(piVar7 + 2);
              iVar1 = piVar7[4];
              goto joined_r0x00526669;
            }
            break;
          case 7:
            if (ptr[0xd] == 0) {
              ptr[0xd] = *(long *)(piVar7 + 2);
              iVar1 = piVar7[4];
              goto joined_r0x00526669;
            }
            break;
          case 8:
            if (ptr[0xe] == 0) {
              iVar6 = iVar6 + 1;
              ptr[0xe] = *(long *)(piVar7 + 2);
              iVar1 = piVar7[4];
              goto joined_r0x00526669;
            }
            break;
          case 9:
            if (ptr[0xf] == 0) {
              ptr[0xf] = *(long *)(piVar7 + 2);
              iVar1 = piVar7[4];
joined_r0x005264e7:
              uVar5 = uVar5 + 1;
              goto joined_r0x00526669;
            }
            break;
          case 10:
            if (ptr[0x10] == 0) {
              ptr[0x10] = *(long *)(piVar7 + 2);
              iVar1 = piVar7[4];
              goto joined_r0x005264e7;
            }
            break;
          case 0xb:
            if (ptr[0x11] == 0) {
              ptr[0x11] = *(long *)(piVar7 + 2);
              iVar1 = piVar7[4];
              goto joined_r0x00526669;
            }
            break;
          case 0xc:
            if (ptr[0x12] == 0) {
              ptr[0x12] = *(long *)(piVar7 + 2);
              iVar1 = piVar7[4];
              goto joined_r0x00526669;
            }
            break;
          case 0xd:
            if (ptr[0x13] == 0) {
              ptr[0x13] = *(long *)(piVar7 + 2);
              iVar1 = piVar7[4];
              goto joined_r0x00526669;
            }
            break;
          case 0xe:
            if (ptr[0x14] == 0) {
              ptr[0x14] = *(long *)(piVar7 + 2);
              iVar1 = piVar7[4];
              goto joined_r0x00526669;
            }
            break;
          case 0xf:
            if (ptr[0x15] == 0) {
              iVar3 = iVar3 + 1;
              ptr[0x15] = *(long *)(piVar7 + 2);
              iVar1 = piVar7[4];
              goto joined_r0x00526669;
            }
            break;
          case 0x10:
            if (ptr[0x16] == 0) {
              ptr[0x16] = *(long *)(piVar7 + 2);
              iVar1 = piVar7[4];
              goto joined_r0x00526669;
            }
            break;
          case 0x11:
            if (ptr[0x17] == 0) {
              ptr[0x17] = *(long *)(piVar7 + 2);
              iVar1 = piVar7[4];
              goto joined_r0x00526669;
            }
          }
          iVar1 = piVar7[4];
joined_r0x00526669:
          piVar7 = piVar7 + 4;
        } while (iVar1 != 0);
        if (((iVar4 == 3 && iVar3 == 3) && (iVar6 < 2)) && ((uVar5 & 0xfffffffd) == 0)) {
          if ((param_3 != 0) && (iVar1 = ossl_provider_up_ref(param_3), iVar1 == 0)) {
            evp_rand_free(ptr);
            ERR_new();
            ERR_set_debug("../crypto/evp/evp_rand.c",0x109,"evp_rand_from_algorithm");
            ERR_set_error(6,0xc0103,0);
            return (long *)0x0;
          }
          *ptr = param_3;
          return ptr;
        }
      }
      evp_rand_free(ptr);
      ERR_new();
      ERR_set_debug("../crypto/evp/evp_rand.c",0x103,"evp_rand_from_algorithm");
      ERR_set_error(6,0xc1,0);
      return (long *)0x0;
    }
  }
  CRYPTO_free(ptr);
  ERR_new();
  ERR_set_debug("../crypto/evp/evp_rand.c",0x7f,"evp_rand_from_algorithm");
  ERR_set_error(6,0xc0100,0);
  return (long *)0x0;
}

