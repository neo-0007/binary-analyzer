
int pkey_rsa_ctrl(uint *param_1,int param_2,int param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  EVP_MD *pEVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  piVar1 = *(int **)(param_1 + 0x26);
  if (0x100e < param_2) {
    return -2;
  }
  if (param_2 < 0x1001) {
    if (0xd < param_2) {
      return -2;
    }
    if (param_2 < 3) {
      if (param_2 == 1) {
        if ((param_4 != (long *)0x0) &&
           (iVar2 = check_padding_md_part_0(param_4,piVar1[7]), iVar2 == 0)) {
          return 0;
        }
        if (piVar1[0xd] != -1) {
          iVar2 = EVP_MD_get_type(*(undefined8 *)(piVar1 + 8));
          iVar3 = EVP_MD_get_type(param_4);
          if (iVar2 == iVar3) {
            return 1;
          }
          ERR_new();
          ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0x220,"pkey_rsa_ctrl");
          ERR_set_error(4,0x91,0);
          return 0;
        }
LAB_00431367:
        *(long **)(piVar1 + 8) = param_4;
        return 1;
      }
      if (param_2 != 2) {
        return -2;
      }
    }
    else {
      uVar6 = 1L << ((byte)param_2 & 0x3f);
      if ((uVar6 & 0x618) == 0) {
        if ((uVar6 & 0x8a0) != 0) {
          return 1;
        }
        if (param_2 != 0xd) {
          return -2;
        }
        *param_4 = *(long *)(piVar1 + 8);
        return 1;
      }
      if (**(int **)(param_1 + 0x1e) != 0x390) {
        return 1;
      }
    }
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0x271,"pkey_rsa_ctrl");
    ERR_set_error(4,0x94,0);
    return -2;
  }
  switch(param_2) {
  case 0x1002:
  case 0x1007:
    if (piVar1[7] != 6) {
      ERR_new();
      uVar7 = 0x1dc;
LAB_004317ae:
      ERR_set_debug("../crypto/rsa/rsa_pmeth.c",uVar7,"pkey_rsa_ctrl");
      ERR_set_error(4,0x92,0);
      return -2;
    }
    if (param_2 == 0x1007) {
      *(int *)param_4 = piVar1[0xc];
      return 1;
    }
    if (param_3 < -3) {
      return -2;
    }
    iVar2 = piVar1[0xd];
    if (iVar2 != -1) {
      if (param_3 == -2) {
        if (*param_1 == 0x20) {
          ERR_new();
          uVar7 = 0x1e7;
          goto LAB_004317ae;
        }
      }
      else if (param_3 == -1) {
        iVar3 = EVP_MD_get_size(*(undefined8 *)(piVar1 + 8));
        if (iVar3 < iVar2) goto LAB_004316fc;
      }
      else if ((-1 < param_3) && (param_3 < iVar2)) {
LAB_004316fc:
        ERR_new();
        ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0x1ed,"pkey_rsa_ctrl");
        ERR_set_error(4,0xa4,0);
        return 0;
      }
    }
    piVar1[0xc] = param_3;
    iVar2 = 1;
    break;
  case 0x1003:
    if (param_3 < 0x200) {
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0x1f7,"pkey_rsa_ctrl");
      ERR_set_error(4,0x78,0);
      iVar2 = -2;
    }
    else {
      *piVar1 = param_3;
      iVar2 = 1;
    }
    break;
  case 0x1004:
    if (((param_4 == (long *)0x0) || (iVar2 = BN_is_odd(param_4), iVar2 == 0)) ||
       (iVar2 = BN_is_one(param_4), iVar2 != 0)) {
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0x1ff,"pkey_rsa_ctrl");
      ERR_set_error(4,0x65,0);
      iVar2 = -2;
    }
    else {
      BN_free(*(BIGNUM **)(piVar1 + 2));
      *(long **)(piVar1 + 2) = param_4;
      iVar2 = 1;
    }
    break;
  case 0x1005:
  case 0x1008:
    if ((piVar1[7] & 0xfffffffdU) != 4) {
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0x22e,"pkey_rsa_ctrl");
      ERR_set_error(4,0x9c,0);
      return -2;
    }
    if (param_2 != 0x1008) {
      if (piVar1[0xd] == -1) {
        *(long **)(piVar1 + 10) = param_4;
        return 1;
      }
      iVar2 = EVP_MD_get_type(*(undefined8 *)(piVar1 + 10));
      iVar3 = EVP_MD_get_type(param_4);
      if (iVar2 == iVar3) {
        return 1;
      }
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0x23a,"pkey_rsa_ctrl");
      ERR_set_error(4,0x98,0);
      return 0;
    }
    lVar4 = *(long *)(piVar1 + 10);
    if (lVar4 != 0) goto LAB_004316a9;
    goto LAB_004316b0;
  case 0x1006:
    iVar2 = 1;
    *(int *)param_4 = piVar1[7];
    break;
  case 0x1009:
  case 0x100b:
    if (piVar1[7] != 4) {
      ERR_new();
      uVar7 = 0x211;
      goto LAB_0043183a;
    }
    if (param_2 != 0x100b) goto LAB_00431367;
LAB_004316b0:
    lVar4 = *(long *)(piVar1 + 8);
LAB_004316a9:
    *param_4 = lVar4;
    return 1;
  case 0x100a:
    if (piVar1[7] == 4) {
      CRYPTO_free(*(void **)(piVar1 + 0x10));
      if ((param_4 != (long *)0x0) && (0 < param_3)) {
        *(long **)(piVar1 + 0x10) = param_4;
        *(long *)(piVar1 + 0x12) = (long)param_3;
        return 1;
      }
      piVar1[0x10] = 0;
      piVar1[0x11] = 0;
      piVar1[0x12] = 0;
      piVar1[0x13] = 0;
      return 1;
    }
    ERR_new();
    uVar7 = 0x243;
    goto LAB_0043183a;
  case 0x100c:
    if (piVar1[7] == 4) {
      iVar2 = piVar1[0x12];
      *param_4 = *(long *)(piVar1 + 0x10);
      return iVar2;
    }
    ERR_new();
    uVar7 = 0x252;
    goto LAB_0043183a;
  case 0x100d:
    if (param_3 - 2U < 4) {
      piVar1[4] = param_3;
      iVar2 = 1;
    }
    else {
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0x208,"pkey_rsa_ctrl");
      ERR_set_error(4,0xa5,0);
      iVar2 = -2;
    }
    break;
  case 0x100e:
    if (piVar1[7] == 1) {
      piVar1[0x14] = param_3;
      return 1;
    }
    ERR_new();
    uVar7 = 0x25a;
LAB_0043183a:
    ERR_set_debug("../crypto/rsa/rsa_pmeth.c",uVar7,"pkey_rsa_ctrl");
    ERR_set_error(4,0x8d,0);
    iVar2 = -2;
    break;
  default:
    if (param_3 - 1U < 6) {
      if ((*(long *)(piVar1 + 8) != 0) &&
         (iVar2 = check_padding_md_part_0(*(long *)(piVar1 + 8),param_3), iVar2 == 0)) {
        return 0;
      }
      if (param_3 == 6) {
        if ((*param_1 & 0x30) != 0) {
LAB_004315d6:
          if (*(long *)(piVar1 + 8) == 0) {
            pEVar5 = EVP_sha1();
            *(EVP_MD **)(piVar1 + 8) = pEVar5;
          }
LAB_004315e1:
          piVar1[7] = param_3;
          return 1;
        }
      }
      else if (**(int **)(param_1 + 0x1e) != 0x390) {
        if (param_3 != 4) goto LAB_004315e1;
        if ((*param_1 & 0x600) != 0) goto LAB_004315d6;
      }
    }
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0x1d2,"pkey_rsa_ctrl");
    ERR_set_error(4,0x90,0);
    iVar2 = -2;
  }
  return iVar2;
}

