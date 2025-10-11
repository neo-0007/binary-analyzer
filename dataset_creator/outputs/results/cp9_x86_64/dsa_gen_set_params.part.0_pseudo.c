
bool dsa_gen_set_params_part_0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  bool bVar6;
  
  lVar3 = OSSL_PARAM_locate_const(param_2,"type");
  if (lVar3 == 0) {
LAB_0046e131:
    lVar3 = OSSL_PARAM_locate_const(param_2,"gindex");
    if ((lVar3 != 0) && (iVar2 = OSSL_PARAM_get_int(lVar3,param_1 + 0x38), iVar2 == 0)) {
      return false;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"pcounter");
    if ((lVar3 != 0) && (iVar2 = OSSL_PARAM_get_int(lVar3,param_1 + 0x40), iVar2 == 0)) {
      return false;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"hindex");
    if ((lVar3 != 0) && (iVar2 = OSSL_PARAM_get_int(lVar3,param_1 + 0x44), iVar2 == 0)) {
      return false;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"seed");
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 8) != 5) {
        return false;
      }
      lVar4 = *(long *)(lVar3 + 0x10);
      lVar3 = *(long *)(lVar3 + 0x18);
      CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        "../providers/implementations/keymgmt/dsa_kmgmt.c",0x1bd);
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      if ((lVar4 != 0) && (lVar3 != 0)) {
        lVar4 = CRYPTO_memdup(lVar4,lVar3,"../providers/implementations/keymgmt/dsa_kmgmt.c",0x1c1);
        *(long *)(param_1 + 0x28) = lVar4;
        if (lVar4 == 0) {
          return false;
        }
        *(long *)(param_1 + 0x30) = lVar3;
      }
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"pbits");
    if ((lVar3 != 0) && (iVar2 = OSSL_PARAM_get_size_t(lVar3,param_1 + 0x18), iVar2 == 0)) {
      return false;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"qbits");
    if ((lVar3 != 0) && (iVar2 = OSSL_PARAM_get_size_t(lVar3,param_1 + 0x20), iVar2 == 0)) {
      return false;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"digest");
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 8) != 4) {
        return false;
      }
      CRYPTO_free(*(void **)(param_1 + 0x48));
      pcVar5 = CRYPTO_strdup(*(char **)(lVar3 + 0x10),
                             "../providers/implementations/keymgmt/dsa_kmgmt.c",0x1f8);
      *(char **)(param_1 + 0x48) = pcVar5;
      if (pcVar5 == (char *)0x0) {
        return false;
      }
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"properties");
    bVar6 = true;
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 8) != 4) {
        return false;
      }
      CRYPTO_free(*(void **)(param_1 + 0x50));
      pcVar5 = CRYPTO_strdup(*(char **)(lVar3 + 0x10),
                             "../providers/implementations/keymgmt/dsa_kmgmt.c",0x201);
      bVar6 = pcVar5 != (char *)0x0;
      *(char **)(param_1 + 0x50) = pcVar5;
    }
  }
  else {
    if (*(int *)(lVar3 + 8) == 4) {
      uVar1 = *(undefined8 *)(lVar3 + 0x10);
      iVar2 = OPENSSL_strcasecmp("default",uVar1);
      if (iVar2 == 0) {
        lVar3 = 0;
      }
      else {
        iVar2 = OPENSSL_strcasecmp("fips186_4",uVar1);
        if (iVar2 == 0) {
          lVar3 = 1;
        }
        else {
          iVar2 = OPENSSL_strcasecmp("fips186_2",uVar1);
          if (iVar2 != 0) {
            *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
            goto LAB_0046e0d8;
          }
          lVar3 = 2;
        }
      }
      iVar2 = *(int *)(dsatype2id + lVar3 * 0x10 + 8);
      *(int *)(param_1 + 0x3c) = iVar2;
      if (iVar2 != -1) goto LAB_0046e131;
    }
LAB_0046e0d8:
    ERR_new();
    ERR_set_debug("../providers/implementations/keymgmt/dsa_kmgmt.c",0x1d8,"dsa_gen_set_params");
    ERR_set_error(0x39,0x80106,0);
    bVar6 = false;
  }
  return bVar6;
}

