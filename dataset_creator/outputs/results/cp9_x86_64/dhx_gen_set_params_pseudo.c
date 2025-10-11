
undefined8 dhx_gen_set_params(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (((((param_2 == 0) || (iVar1 = dh_gen_common_set_params_part_0(), iVar1 != 0)) &&
       ((lVar2 = OSSL_PARAM_locate_const(param_2,"gindex"), lVar2 == 0 ||
        (iVar1 = OSSL_PARAM_get_int(lVar2,param_1 + 0x38), iVar1 != 0)))) &&
      ((lVar2 = OSSL_PARAM_locate_const(param_2,"pcounter"), lVar2 == 0 ||
       (iVar1 = OSSL_PARAM_get_int(lVar2,param_1 + 0x44), iVar1 != 0)))) &&
     ((lVar2 = OSSL_PARAM_locate_const(param_2,"hindex"), lVar2 == 0 ||
      (iVar1 = OSSL_PARAM_get_int(lVar2,param_1 + 0x48), iVar1 != 0)))) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"seed");
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) != 5) {
        return 0;
      }
      lVar3 = *(long *)(lVar2 + 0x10);
      lVar2 = *(long *)(lVar2 + 0x18);
      CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        "../providers/implementations/keymgmt/dh_kmgmt.c",0x1fc);
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      if ((lVar3 != 0) && (lVar2 != 0)) {
        lVar3 = CRYPTO_memdup(lVar3,lVar2,"../providers/implementations/keymgmt/dh_kmgmt.c",0x200);
        *(long *)(param_1 + 0x28) = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
        *(long *)(param_1 + 0x30) = lVar2;
      }
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"qbits");
    if ((lVar2 == 0) || (iVar1 = OSSL_PARAM_get_size_t(lVar2,param_1 + 0x20), iVar1 != 0)) {
      lVar2 = OSSL_PARAM_locate_const(param_2,"digest");
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 8) != 4) {
          return 0;
        }
        CRYPTO_free(*(void **)(param_1 + 0x50));
        pcVar4 = CRYPTO_strdup(*(char **)(lVar2 + 0x10),
                               "../providers/implementations/keymgmt/dh_kmgmt.c",0x272);
        *(char **)(param_1 + 0x50) = pcVar4;
        if (pcVar4 == (char *)0x0) {
          return 0;
        }
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 8) != 4) {
          return 0;
        }
        CRYPTO_free(*(void **)(param_1 + 0x58));
        pcVar4 = CRYPTO_strdup(*(char **)(lVar2 + 0x10),
                               "../providers/implementations/keymgmt/dh_kmgmt.c",0x27b);
        *(char **)(param_1 + 0x58) = pcVar4;
        if (pcVar4 == (char *)0x0) {
          return 0;
        }
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"safeprime-generator");
      if (lVar2 == 0) {
        return 1;
      }
      ERR_new();
      ERR_set_debug("../providers/implementations/keymgmt/dh_kmgmt.c",0x283,"dhx_gen_set_params");
      ERR_set_error(0x39,0x8010c,0);
    }
  }
  return 0;
}

