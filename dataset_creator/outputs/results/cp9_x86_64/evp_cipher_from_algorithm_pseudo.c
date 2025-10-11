
/* WARNING: Type propagation algorithm not settling */

int * evp_cipher_from_algorithm(int param_1,long param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = *(int **)(param_2 + 0x10);
  piVar2 = (int *)evp_cipher_new();
  if (piVar2 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/evp_enc.c",0x5e5,"evp_cipher_from_algorithm");
    ERR_set_error(6,0xc0100,0);
  }
  else {
    *piVar2 = 0;
    iVar1 = evp_names_do_all(param_3,param_1,set_legacy_nid);
    if ((iVar1 == 0) || (*piVar2 == -1)) {
      ERR_new();
      ERR_set_debug("../crypto/evp/evp_enc.c",0x5ed,"evp_cipher_from_algorithm");
      ERR_set_error(6,0xc0103,0);
      EVP_CIPHER_free(piVar2);
      return (int *)0x0;
    }
    piVar2[0x18] = param_1;
    lVar3 = ossl_algorithm_get1_first_name(param_2);
    *(long *)(piVar2 + 0x1a) = lVar3;
    if (lVar3 != 0) {
      *(undefined8 *)(piVar2 + 0x1c) = *(undefined8 *)(param_2 + 0x18);
      iVar1 = *piVar5;
      if (iVar1 != 0) {
        iVar6 = 0;
        iVar4 = 0;
        do {
          switch(iVar1) {
          case 1:
            if (*(long *)(piVar2 + 0x24) != 0) break;
            iVar6 = iVar6 + 1;
            *(undefined8 *)(piVar2 + 0x24) = *(undefined8 *)(piVar5 + 2);
            iVar1 = piVar5[4];
            goto joined_r0x0040c966;
          case 2:
            if (*(long *)(piVar2 + 0x26) == 0) {
              *(undefined8 *)(piVar2 + 0x26) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
joined_r0x0040ca46:
              iVar4 = iVar4 + 1;
              goto joined_r0x0040c966;
            }
            break;
          case 3:
            if (*(long *)(piVar2 + 0x28) == 0) {
              *(undefined8 *)(piVar2 + 0x28) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0040ca46;
            }
            break;
          case 4:
            if (*(long *)(piVar2 + 0x2a) == 0) {
              *(undefined8 *)(piVar2 + 0x2a) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
joined_r0x0040c9d6:
              iVar4 = iVar4 + 1;
              goto joined_r0x0040c966;
            }
            break;
          case 5:
            if (*(long *)(piVar2 + 0x2c) == 0) {
              *(undefined8 *)(piVar2 + 0x2c) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0040c9d6;
            }
            break;
          case 6:
            if (*(long *)(piVar2 + 0x2e) == 0) {
              *(undefined8 *)(piVar2 + 0x2e) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0040c966;
            }
            break;
          case 7:
            if (*(long *)(piVar2 + 0x30) == 0) {
              iVar6 = iVar6 + 1;
              *(undefined8 *)(piVar2 + 0x30) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0040c966;
            }
            break;
          case 8:
            if (*(long *)(piVar2 + 0x32) == 0) {
              *(undefined8 *)(piVar2 + 0x32) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0040c966;
            }
            break;
          case 9:
            if (*(long *)(piVar2 + 0x34) == 0) {
              *(undefined8 *)(piVar2 + 0x34) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0040c966;
            }
            break;
          case 10:
            if (*(long *)(piVar2 + 0x36) == 0) {
              *(undefined8 *)(piVar2 + 0x36) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0040c966;
            }
            break;
          case 0xb:
            if (*(long *)(piVar2 + 0x38) == 0) {
              *(undefined8 *)(piVar2 + 0x38) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0040c966;
            }
            break;
          case 0xc:
            if (*(long *)(piVar2 + 0x3a) == 0) {
              *(undefined8 *)(piVar2 + 0x3a) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0040c966;
            }
            break;
          case 0xd:
            if (*(long *)(piVar2 + 0x3c) == 0) {
              *(undefined8 *)(piVar2 + 0x3c) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0040c966;
            }
            break;
          case 0xe:
            if (*(long *)(piVar2 + 0x3e) == 0) {
              *(undefined8 *)(piVar2 + 0x3e) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0040c966;
            }
          }
          iVar1 = piVar5[4];
joined_r0x0040c966:
          piVar5 = piVar5 + 4;
        } while (iVar1 != 0);
        if (iVar4 == 0) {
          if (*(long *)(piVar2 + 0x2e) == 0) goto LAB_0040caa7;
        }
        else if ((iVar4 != 3) && (iVar4 != 4)) goto LAB_0040caa7;
        if (iVar6 == 2) {
          *(long *)(piVar2 + 0x1e) = param_3;
          if (param_3 != 0) {
            ossl_provider_up_ref(param_3);
          }
          iVar1 = evp_cipher_cache_constants(piVar2);
          if (iVar1 != 0) {
            return piVar2;
          }
          EVP_CIPHER_free(piVar2);
          ERR_new();
          ERR_set_debug("../crypto/evp/evp_enc.c",0x65f,"evp_cipher_from_algorithm");
          ERR_set_error(6,0xe1,0);
          return (int *)0x0;
        }
      }
LAB_0040caa7:
      EVP_CIPHER_free(piVar2);
      ERR_new();
      ERR_set_debug("../crypto/evp/evp_enc.c",0x656,"evp_cipher_from_algorithm");
      ERR_set_error(6,0xc1,0);
      return (int *)0x0;
    }
    EVP_CIPHER_free(piVar2);
  }
  return (int *)0x0;
}

