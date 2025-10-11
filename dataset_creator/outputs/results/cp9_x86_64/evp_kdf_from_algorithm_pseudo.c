
long * evp_kdf_from_algorithm(undefined4 param_1,long param_2,long param_3)

{
  int iVar1;
  long *ptr;
  long lVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = *(int **)(param_2 + 0x10);
  ptr = (long *)CRYPTO_zalloc(0x88,"../crypto/evp/kdf_meth.c",0x32);
  if (ptr != (long *)0x0) {
    lVar2 = CRYPTO_THREAD_lock_new();
    ptr[5] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(undefined4 *)(ptr + 4) = 1;
      UNLOCK();
      *(undefined4 *)(ptr + 1) = param_1;
      lVar2 = ossl_algorithm_get1_first_name(param_2);
      ptr[2] = lVar2;
      if (lVar2 == 0) {
        evp_kdf_free(ptr);
        return (long *)0x0;
      }
      iVar3 = 0;
      iVar5 = 0;
      ptr[3] = *(long *)(param_2 + 0x18);
      iVar1 = *piVar4;
      if (iVar1 != 0) {
        do {
          switch(iVar1) {
          case 1:
            if (ptr[6] != 0) break;
            iVar3 = iVar3 + 1;
            ptr[6] = *(long *)(piVar4 + 2);
            iVar1 = piVar4[4];
            goto joined_r0x00528a4b;
          case 2:
            if (ptr[7] == 0) {
              ptr[7] = *(long *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x00528a4b;
            }
            break;
          case 3:
            if (ptr[8] == 0) {
              iVar3 = iVar3 + 1;
              ptr[8] = *(long *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x00528a4b;
            }
            break;
          case 4:
            if (ptr[9] == 0) {
              ptr[9] = *(long *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x00528a4b;
            }
            break;
          case 5:
            if (ptr[10] == 0) {
              iVar5 = iVar5 + 1;
              ptr[10] = *(long *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x00528a4b;
            }
            break;
          case 6:
            if (ptr[0xb] == 0) {
              ptr[0xb] = *(long *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x00528a4b;
            }
            break;
          case 7:
            if (ptr[0xc] == 0) {
              ptr[0xc] = *(long *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x00528a4b;
            }
            break;
          case 8:
            if (ptr[0xd] == 0) {
              ptr[0xd] = *(long *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x00528a4b;
            }
            break;
          case 9:
            if (ptr[0xe] == 0) {
              ptr[0xe] = *(long *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x00528a4b;
            }
            break;
          case 10:
            if (ptr[0xf] == 0) {
              ptr[0xf] = *(long *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x00528a4b;
            }
            break;
          case 0xb:
            if (ptr[0x10] == 0) {
              ptr[0x10] = *(long *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x00528a4b;
            }
          }
          iVar1 = piVar4[4];
joined_r0x00528a4b:
          piVar4 = piVar4 + 4;
        } while (iVar1 != 0);
        if ((iVar5 == 1) && (iVar3 == 2)) {
          *ptr = param_3;
          if (param_3 == 0) {
            return ptr;
          }
          ossl_provider_up_ref(param_3);
          return ptr;
        }
      }
      evp_kdf_free(ptr);
      ERR_new();
      ERR_set_debug("../crypto/evp/kdf_meth.c",0x96,"evp_kdf_from_algorithm");
      ERR_set_error(6,0xc1,0);
      return (long *)0x0;
    }
  }
  CRYPTO_free(ptr);
  ERR_new();
  ERR_set_debug("../crypto/evp/kdf_meth.c",0x44,"evp_kdf_from_algorithm");
  ERR_set_error(6,0xc0100,0);
  return (long *)0x0;
}

