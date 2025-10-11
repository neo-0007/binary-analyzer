
undefined4 chacha20_poly1305_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = OSSL_PARAM_locate(param_2,"ivlen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x340));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x59;
      goto LAB_00448641;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"keylen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0x20);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x5f;
      goto LAB_00448641;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"taglen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x338));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 100;
      goto LAB_00448641;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"tlsaadpad");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x350));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x69;
LAB_00448641:
      ERR_set_debug("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",uVar3,
                    "chacha20_poly1305_get_ctx_params");
      ERR_set_error(0x39,0x68,0);
      return 0;
    }
  }
  uVar4 = 1;
  lVar2 = OSSL_PARAM_locate(param_2,"tag");
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) != 5) {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",0x70,
                    "chacha20_poly1305_get_ctx_params");
      ERR_set_error(0x39,0x68,0);
      return 0;
    }
    if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
      ERR_new();
      uVar4 = 0;
      ERR_set_debug("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",0x74,
                    "chacha20_poly1305_get_ctx_params");
      ERR_set_error(0x39,0x77,0);
    }
    else if (*(size_t *)(lVar2 + 0x18) - 1 < 0x10) {
      memcpy(*(void **)(lVar2 + 0x10),(void *)(param_1 + 0x2fc),*(size_t *)(lVar2 + 0x18));
    }
    else {
      ERR_new();
      uVar4 = 0;
      ERR_set_debug("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",0x78,
                    "chacha20_poly1305_get_ctx_params");
      ERR_set_error(0x39,0x76,0);
    }
  }
  return uVar4;
}

