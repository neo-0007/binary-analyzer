
undefined8 mac_gen_set_params_part_0(long param_1,undefined8 param_2)

{
  long lVar1;
  void *__dest;
  undefined8 uVar2;
  
  uVar2 = 1;
  lVar1 = OSSL_PARAM_locate_const(param_2,&DAT_007c4ad5);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 8) != 5) {
      ERR_new();
      ERR_set_debug("../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1ac,
                    "mac_gen_set_params");
      ERR_set_error(0x39,0x80106,0);
      return 0;
    }
    __dest = (void *)CRYPTO_secure_malloc
                               (*(undefined8 *)(lVar1 + 0x18),
                                "../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1af);
    *(void **)(param_1 + 0x10) = __dest;
    if (__dest == (void *)0x0) {
      ERR_new();
      uVar2 = 0;
      ERR_set_debug("../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1b1,
                    "mac_gen_set_params");
      ERR_set_error(0x39,0xc0100,0);
    }
    else {
      memcpy(__dest,*(void **)(lVar1 + 0x10),*(size_t *)(lVar1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
    }
  }
  return uVar2;
}

