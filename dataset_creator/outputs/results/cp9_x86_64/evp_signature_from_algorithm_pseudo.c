
undefined4 * evp_signature_from_algorithm(undefined4 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *ptr;
  long lVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  piVar4 = *(int **)(param_2 + 0x10);
  ptr = (undefined4 *)CRYPTO_zalloc(0xf8,"../crypto/evp/signature.c",0x17);
  if (ptr == (undefined4 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/signature.c",0x1a,"evp_signature_new");
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
      if (lVar2 == 0) goto LAB_004148bc;
      *(undefined8 *)(ptr + 4) = *(undefined8 *)(param_2 + 0x18);
      iVar1 = *piVar4;
      if (iVar1 != 0) {
        uVar11 = 0;
        uVar12 = 0;
        uVar13 = 0;
        uVar5 = 0;
        uVar7 = 0;
        uVar6 = 0;
        uVar8 = 0;
        uVar3 = 0;
        uVar9 = 0;
        iVar10 = 0;
        do {
          switch(iVar1) {
          case 1:
            if (*(long *)(ptr + 0xc) == 0) {
              iVar10 = iVar10 + 1;
              *(undefined8 *)(ptr + 0xc) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 2:
            if (*(long *)(ptr + 0xe) == 0) {
              uVar9 = uVar9 + 1;
              *(undefined8 *)(ptr + 0xe) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 3:
            if (*(long *)(ptr + 0x10) == 0) {
              uVar9 = uVar9 + 1;
              *(undefined8 *)(ptr + 0x10) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 4:
            if (*(long *)(ptr + 0x12) == 0) {
              uVar3 = uVar3 + 1;
              *(undefined8 *)(ptr + 0x12) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 5:
            if (*(long *)(ptr + 0x14) == 0) {
              uVar3 = uVar3 + 1;
              *(undefined8 *)(ptr + 0x14) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 6:
            if (*(long *)(ptr + 0x16) == 0) {
              uVar8 = uVar8 + 1;
              *(undefined8 *)(ptr + 0x16) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 7:
            if (*(long *)(ptr + 0x18) == 0) {
              uVar8 = uVar8 + 1;
              *(undefined8 *)(ptr + 0x18) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 8:
            if (*(long *)(ptr + 0x1a) == 0) {
              *(undefined8 *)(ptr + 0x1a) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 9:
            if (*(long *)(ptr + 0x1c) == 0) {
              uVar6 = uVar6 + 1;
              *(undefined8 *)(ptr + 0x1c) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 10:
            if (*(long *)(ptr + 0x1e) == 0) {
              uVar6 = uVar6 + 1;
              *(undefined8 *)(ptr + 0x1e) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 0xb:
            if (*(long *)(ptr + 0x20) == 0) {
              *(undefined8 *)(ptr + 0x20) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 0xc:
            if (*(long *)(ptr + 0x22) == 0) {
              *(undefined8 *)(ptr + 0x22) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 0xd:
            if (*(long *)(ptr + 0x24) == 0) {
              uVar7 = uVar7 + 1;
              *(undefined8 *)(ptr + 0x24) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 0xe:
            if (*(long *)(ptr + 0x26) == 0) {
              uVar7 = uVar7 + 1;
              *(undefined8 *)(ptr + 0x26) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 0xf:
            if (*(long *)(ptr + 0x28) == 0) {
              *(undefined8 *)(ptr + 0x28) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 0x10:
            if (*(long *)(ptr + 0x2a) == 0) {
              iVar10 = iVar10 + 1;
              *(undefined8 *)(ptr + 0x2a) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 0x11:
            if (*(long *)(ptr + 0x2c) == 0) {
              *(undefined8 *)(ptr + 0x2c) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 0x12:
            if (*(long *)(ptr + 0x2e) == 0) {
              uVar5 = uVar5 + 1;
              *(undefined8 *)(ptr + 0x2e) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 0x13:
            if (*(long *)(ptr + 0x30) == 0) {
              uVar5 = uVar5 + 1;
              *(undefined8 *)(ptr + 0x30) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 0x14:
            if (*(long *)(ptr + 0x32) == 0) {
              uVar13 = uVar13 + 1;
              *(undefined8 *)(ptr + 0x32) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 0x15:
            if (*(long *)(ptr + 0x34) == 0) {
              uVar13 = uVar13 + 1;
              *(undefined8 *)(ptr + 0x34) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 0x16:
            if (*(long *)(ptr + 0x36) == 0) {
              uVar12 = uVar12 + 1;
              *(undefined8 *)(ptr + 0x36) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 0x17:
            if (*(long *)(ptr + 0x38) == 0) {
              uVar12 = uVar12 + 1;
              *(undefined8 *)(ptr + 0x38) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 0x18:
            if (*(long *)(ptr + 0x3a) == 0) {
              uVar11 = uVar11 + 1;
              *(undefined8 *)(ptr + 0x3a) = *(undefined8 *)(piVar4 + 2);
            }
            break;
          case 0x19:
            if (*(long *)(ptr + 0x3c) == 0) {
              uVar11 = uVar11 + 1;
              *(undefined8 *)(ptr + 0x3c) = *(undefined8 *)(piVar4 + 2);
            }
          }
          iVar1 = piVar4[4];
          piVar4 = piVar4 + 4;
        } while (iVar1 != 0);
        if (iVar10 == 2) {
          if ((((uVar9 == 0 && uVar3 == 0) && uVar8 == 0) && uVar6 == 0) && uVar7 == 0) {
            if ((*(long *)(ptr + 0x20) != 0) || (*(long *)(ptr + 0x28) != 0)) goto LAB_004148ef;
          }
          else if ((((uVar9 & 0xfffffffd) == 0) && (((uVar3 | uVar8 | uVar6) & 0xfffffffd) == 0)) &&
                  (((uVar6 != 2 || (*(long *)(ptr + 0x1a) != 0)) && ((uVar7 & 0xfffffffd) == 0)))) {
LAB_004148ef:
            if ((((uVar7 != 2) || (*(long *)(ptr + 0x22) != 0)) &&
                ((*(long *)(ptr + 0x20) == 0 || (*(long *)(ptr + 0x1a) != 0)))) &&
               (((*(long *)(ptr + 0x28) == 0 || (*(long *)(ptr + 0x22) != 0)) &&
                (((uVar5 | uVar13 | uVar12 | uVar11) & 0xfffffffd) == 0)))) {
              return ptr;
            }
          }
        }
      }
      ERR_new();
      ERR_set_debug("../crypto/evp/signature.c",0x10e,"evp_signature_from_algorithm");
      ERR_set_error(6,0xc1,0);
      goto LAB_004148bc;
    }
    ERR_new();
    ERR_set_debug("../crypto/evp/signature.c",0x20,"evp_signature_new");
    ERR_set_error(6,0xc0100,0);
    CRYPTO_free(ptr);
  }
  ERR_new();
  ptr = (undefined4 *)0x0;
  ERR_set_debug("../crypto/evp/signature.c",0x36,"evp_signature_from_algorithm");
  ERR_set_error(6,0xc0100,0);
LAB_004148bc:
  EVP_SIGNATURE_free(ptr);
  return (undefined4 *)0x0;
}

