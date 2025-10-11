
bool mac_key_fromdata(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  void *__dest;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = OSSL_PARAM_locate_const(param_2,&DAT_007c4ad5);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) != 5) {
      ERR_new();
      uVar4 = 0xbf;
      goto LAB_00471892;
    }
    CRYPTO_secure_clear_free
              (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
               "../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0xc2);
    lVar5 = *(long *)(lVar2 + 0x18);
    if (lVar5 == 0) {
      lVar5 = 1;
    }
    __dest = (void *)CRYPTO_secure_malloc
                               (lVar5,"../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0xc4
                               );
    *(void **)(param_1 + 0x18) = __dest;
    if (__dest == (void *)0x0) {
      ERR_new();
      uVar4 = 0xc6;
      goto LAB_00471a21;
    }
    memcpy(__dest,*(void **)(lVar2 + 0x10),*(size_t *)(lVar2 + 0x18));
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar2 + 0x18);
  }
  lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) != 4) {
      ERR_new();
      uVar4 = 0xd0;
LAB_00471892:
      ERR_set_debug("../providers/implementations/keymgmt/mac_legacy_kmgmt.c",uVar4,
                    "mac_key_fromdata");
      ERR_set_error(0x39,0x80106,0);
      return false;
    }
    CRYPTO_free(*(void **)(param_1 + 0x40));
    pcVar3 = CRYPTO_strdup(*(char **)(lVar2 + 0x10),
                           "../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0xd4);
    *(char **)(param_1 + 0x40) = pcVar3;
    if (pcVar3 == (char *)0x0) {
      ERR_new();
      uVar4 = 0xd6;
LAB_00471a21:
      ERR_set_debug("../providers/implementations/keymgmt/mac_legacy_kmgmt.c",uVar4,
                    "mac_key_fromdata");
      ERR_set_error(0x39,0xc0100,0);
      return false;
    }
  }
  if ((*(int *)(param_1 + 0x48) != 0) &&
     (iVar1 = ossl_prov_cipher_load_from_params(param_1 + 0x28,param_2,*(undefined8 *)(param_1 + 8))
     , iVar1 == 0)) {
    ERR_new();
    ERR_set_debug("../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0xdd,"mac_key_fromdata")
    ;
    ERR_set_error(0x39,0x80106,0);
    return false;
  }
  return *(long *)(param_1 + 0x18) != 0;
}

