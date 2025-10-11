
long * evp_mac_from_algorithm(undefined4 param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = *(int **)(param_2 + 0x10);
  plVar2 = (long *)CRYPTO_zalloc(0x90,"../crypto/evp/mac_meth.c",0x31);
  if (plVar2 != (long *)0x0) {
    lVar3 = CRYPTO_THREAD_lock_new();
    plVar2[5] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(undefined4 *)(plVar2 + 4) = 1;
      UNLOCK();
      *(undefined4 *)(plVar2 + 1) = param_1;
      lVar3 = ossl_algorithm_get1_first_name(param_2);
      plVar2[2] = lVar3;
      if (lVar3 == 0) {
        evp_mac_free(plVar2);
        return (long *)0x0;
      }
      iVar6 = 0;
      iVar4 = 0;
      plVar2[3] = *(long *)(param_2 + 0x18);
      iVar1 = *piVar5;
      if (iVar1 != 0) {
        do {
          switch(iVar1) {
          case 1:
            if (plVar2[6] != 0) break;
            iVar6 = iVar6 + 1;
            plVar2[6] = *(long *)(piVar5 + 2);
            iVar1 = piVar5[4];
            goto joined_r0x0052deae;
          case 2:
            if (plVar2[7] == 0) {
              plVar2[7] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0052deae;
            }
            break;
          case 3:
            if (plVar2[8] == 0) {
              iVar6 = iVar6 + 1;
              plVar2[8] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0052deae;
            }
            break;
          case 4:
            if (plVar2[9] == 0) {
              plVar2[9] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
joined_r0x0052deae:
              iVar4 = iVar4 + 1;
              goto joined_r0x0052deae;
            }
            break;
          case 5:
            if (plVar2[10] == 0) {
              plVar2[10] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0052deae;
            }
            break;
          case 6:
            if (plVar2[0xb] == 0) {
              iVar4 = iVar4 + 1;
              plVar2[0xb] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0052deae;
            }
            break;
          case 7:
            if (plVar2[0xf] == 0) {
              plVar2[0xf] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0052deae;
            }
            break;
          case 8:
            if (plVar2[0x10] == 0) {
              plVar2[0x10] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0052deae;
            }
            break;
          case 9:
            if (plVar2[0x11] == 0) {
              plVar2[0x11] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0052deae;
            }
            break;
          case 10:
            if (plVar2[0xc] == 0) {
              plVar2[0xc] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0052deae;
            }
            break;
          case 0xb:
            if (plVar2[0xd] == 0) {
              plVar2[0xd] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0052deae;
            }
            break;
          case 0xc:
            if (plVar2[0xe] == 0) {
              plVar2[0xe] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0052deae;
            }
          }
          iVar1 = piVar5[4];
joined_r0x0052deae:
          piVar5 = piVar5 + 4;
        } while (iVar1 != 0);
        if ((iVar4 == 3) && (iVar6 == 2)) {
          *plVar2 = param_3;
          if (param_3 == 0) {
            return plVar2;
          }
          ossl_provider_up_ref(param_3);
          return plVar2;
        }
      }
      evp_mac_free(plVar2);
      ERR_new();
      ERR_set_debug("../crypto/evp/mac_meth.c",0x9f,"evp_mac_from_algorithm");
      ERR_set_error(6,0xc1,0);
      return (long *)0x0;
    }
  }
  evp_mac_free(plVar2);
  ERR_new();
  ERR_set_debug("../crypto/evp/mac_meth.c",0x45,"evp_mac_from_algorithm");
  ERR_set_error(6,0xc0100,0);
  return (long *)0x0;
}

