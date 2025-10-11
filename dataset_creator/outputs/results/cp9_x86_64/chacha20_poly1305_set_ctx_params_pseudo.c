
undefined4 chacha20_poly1305_set_ctx_params(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  size_t __n;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) goto LAB_004482b8;
  lVar4 = OSSL_PARAM_locate_const(param_2,"keylen");
  if (lVar4 != 0) {
    iVar2 = OSSL_PARAM_get_size_t(lVar4,&local_38);
    if (iVar2 != 0) {
      if (local_38 != 0x20) {
        ERR_new();
        uVar3 = 0;
        ERR_set_debug("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",0xa2,
                      "chacha20_poly1305_set_ctx_params");
        ERR_set_error(0x39,0x69,0);
        goto LAB_004482be;
      }
      goto LAB_00448199;
    }
    ERR_new();
    uVar5 = 0x9e;
LAB_00448361:
    uVar3 = 0;
    ERR_set_debug("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",uVar5,
                  "chacha20_poly1305_set_ctx_params");
    ERR_set_error(0x39,0x67,0);
    goto LAB_004482be;
  }
LAB_00448199:
  lVar4 = OSSL_PARAM_locate_const(param_2,"ivlen");
  if (lVar4 != 0) {
    iVar2 = OSSL_PARAM_get_size_t(lVar4,&local_38);
    if (iVar2 == 0) {
      ERR_new();
      uVar5 = 0xa9;
      goto LAB_00448361;
    }
    if (0xb < local_38 - 1U) {
      ERR_new();
      uVar3 = 0;
      ERR_set_debug("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",0xad,
                    "chacha20_poly1305_set_ctx_params");
      ERR_set_error(0x39,0x6d,0);
      goto LAB_004482be;
    }
    *(long *)(param_1 + 0x340) = local_38;
  }
  lVar4 = OSSL_PARAM_locate_const(param_2,"tag");
  if (lVar4 == 0) {
LAB_0044823c:
    lVar4 = OSSL_PARAM_locate_const(param_2,"tlsaad");
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 8) != 5) {
        ERR_new();
        uVar5 = 0xca;
        goto LAB_004482f1;
      }
      iVar2 = (**(code **)(lVar1 + 0x28))
                        (param_1,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
      local_38 = (long)iVar2;
      if (local_38 == 0) {
        ERR_new();
        uVar3 = 0;
        ERR_set_debug("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",0xcf,
                      "chacha20_poly1305_set_ctx_params");
        ERR_set_error(0x39,0x73,0);
        goto LAB_004482be;
      }
      *(long *)(param_1 + 0x350) = local_38;
    }
    lVar4 = OSSL_PARAM_locate_const(param_2,"tlsivfixed");
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 8) != 5) {
        ERR_new();
        uVar5 = 0xd8;
        goto LAB_004482f1;
      }
      iVar2 = (**(code **)(lVar1 + 0x30))
                        (param_1,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",0xdc,
                      "chacha20_poly1305_set_ctx_params");
        ERR_set_error(0x39,0x6d,0);
        uVar3 = 0;
        goto LAB_004482be;
      }
    }
LAB_004482b8:
    uVar3 = 1;
  }
  else {
    if (*(int *)(lVar4 + 8) == 5) {
      __n = *(size_t *)(lVar4 + 0x18);
      if (0xf < __n - 1) {
        ERR_new();
        uVar3 = 0;
        ERR_set_debug("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",0xba,
                      "chacha20_poly1305_set_ctx_params");
        ERR_set_error(0x39,0x76,0);
        goto LAB_004482be;
      }
      if (*(void **)(lVar4 + 0x10) != (void *)0x0) {
        if ((*(byte *)(param_1 + 0x3c) & 2) != 0) {
          ERR_new();
          uVar3 = 0;
          ERR_set_debug("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",0xbf,
                        "chacha20_poly1305_set_ctx_params");
          ERR_set_error(0x39,0x78,0);
          goto LAB_004482be;
        }
        memcpy((void *)(param_1 + 0x2fc),*(void **)(lVar4 + 0x10),__n);
        __n = *(size_t *)(lVar4 + 0x18);
      }
      *(size_t *)(param_1 + 0x338) = __n;
      goto LAB_0044823c;
    }
    ERR_new();
    uVar5 = 0xb6;
LAB_004482f1:
    uVar3 = 0;
    ERR_set_debug("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",uVar5,
                  "chacha20_poly1305_set_ctx_params");
    ERR_set_error(0x39,0x67,0);
  }
LAB_004482be:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

