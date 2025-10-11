
uint pkey_ec_ctrl(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  EC_KEY *pEVar4;
  EC_GROUP *pEVar5;
  EC_KEY *key;
  
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  if (param_2 < 0xe) {
    if (0 < param_2) {
      if ((1L << ((byte)param_2 & 0x3f) & 0x8a4U) != 0) {
        return 1;
      }
      if (param_2 == 0xd) {
        *param_4 = puVar1[1];
        return 1;
      }
      if (param_2 == 1) {
        iVar2 = EVP_MD_get_type(param_4);
        if ((((((iVar2 != 0x40) && (iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x1a0)) &&
              (iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x2a3)) &&
             ((iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x2a0 &&
              (iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x2a1)))) &&
            ((iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x2a2 &&
             ((iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x448 &&
              (iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x449)))))) &&
           ((iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x44a &&
            ((iVar2 = EVP_MD_get_type(param_4), iVar2 != 1099 &&
             (iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x477)))))) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_pmeth.c",0x171,"pkey_ec_ctrl");
          ERR_set_error(0x10,0x8a,0);
          return 0;
        }
        puVar1[1] = param_4;
        return 1;
      }
    }
    goto LAB_004e8944;
  }
  if (9 < param_2 - 0x1001U) goto LAB_004e8944;
  switch(param_2) {
  case 0x1002:
    if ((EC_GROUP *)*puVar1 == (EC_GROUP *)0x0) {
      ERR_new();
      uVar3 = 0;
      ERR_set_debug("../crypto/ec/ec_pmeth.c",0x10c,"pkey_ec_ctrl");
      ERR_set_error(0x10,0x8b,0);
    }
    else {
      uVar3 = 1;
      EC_GROUP_set_asn1_flag((EC_GROUP *)*puVar1,param_3);
    }
    break;
  case 0x1003:
    if (param_3 == -2) {
      if (*(char *)(puVar1 + 3) != -1) {
        return (int)*(char *)(puVar1 + 3);
      }
      pEVar4 = (EC_KEY *)EVP_PKEY_get0_EC_KEY(*(undefined8 *)(param_1 + 0x88));
      uVar3 = EC_KEY_get_flags(pEVar4);
      return uVar3 >> 0xc & 1;
    }
    if (param_3 + 1U < 3) {
      *(char *)(puVar1 + 3) = (char)param_3;
      if (param_3 == -1) {
        EC_KEY_free((EC_KEY *)puVar1[2]);
        puVar1[2] = 0;
        return 1;
      }
      pEVar4 = (EC_KEY *)EVP_PKEY_get0_EC_KEY(*(undefined8 *)(param_1 + 0x88));
      if (*(long *)(*(long *)(param_1 + 0x88) + 0x60) != 0) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_pmeth.c",0x126,"pkey_ec_ctrl");
        ERR_set_error(0x10,0x8010c,0);
        return 0;
      }
      if (*(long *)(pEVar4 + 0x18) != 0) {
        iVar2 = BN_is_one(*(undefined8 *)(*(long *)(pEVar4 + 0x18) + 0x18));
        if (iVar2 != 0) {
          return 1;
        }
        key = (EC_KEY *)puVar1[2];
        if (key == (EC_KEY *)0x0) {
          key = EC_KEY_dup(pEVar4);
          puVar1[2] = key;
          if (key == (EC_KEY *)0x0) {
            return 0;
          }
        }
        if (param_3 != 0) {
          EC_KEY_set_flags(key,0x1000);
          return 1;
        }
        EC_KEY_clear_flags(key,0x1000);
        return 1;
      }
    }
    goto LAB_004e8944;
  case 0x1004:
    if (param_3 == -2) {
      return (int)*(char *)((long)puVar1 + 0x19);
    }
    if (param_3 - 1U < 2) {
      *(char *)((long)puVar1 + 0x19) = (char)param_3;
      return 1;
    }
    goto LAB_004e8944;
  case 0x1005:
    puVar1[4] = param_4;
    uVar3 = 1;
    break;
  case 0x1006:
    uVar3 = 1;
    *param_4 = puVar1[4];
    break;
  case 0x1007:
    if (0 < param_3) {
      puVar1[7] = (long)param_3;
      return 1;
    }
LAB_004e8944:
    uVar3 = 0xfffffffe;
    break;
  case 0x1008:
    uVar3 = 1;
    *(int *)param_4 = (int)puVar1[7];
    break;
  case 0x1009:
    CRYPTO_free((void *)puVar1[5]);
    puVar1[5] = param_4;
    if (param_4 == (undefined8 *)0x0) {
      puVar1[6] = 0;
      uVar3 = 1;
    }
    else {
      puVar1[6] = (long)param_3;
      uVar3 = 1;
    }
    break;
  case 0x100a:
    uVar3 = *(uint *)(puVar1 + 6);
    *param_4 = puVar1[5];
    break;
  default:
    pEVar5 = EC_GROUP_new_by_curve_name(param_3);
    if (pEVar5 == (EC_GROUP *)0x0) {
      ERR_new();
      uVar3 = 0;
      ERR_set_debug("../crypto/ec/ec_pmeth.c",0x103,"pkey_ec_ctrl");
      ERR_set_error(0x10,0x8d,0);
    }
    else {
      uVar3 = 1;
      EC_GROUP_free((EC_GROUP *)*puVar1);
      *puVar1 = pEVar5;
    }
  }
  return uVar3;
}

