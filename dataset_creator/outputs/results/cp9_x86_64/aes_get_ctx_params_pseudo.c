
undefined4 aes_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,"tls1multi_maxbufsz");
  if (lVar2 != 0) {
    iVar1 = (**(code **)(*(long *)(param_1 + 0x1d0) + 0x28))(param_1);
    iVar1 = OSSL_PARAM_set_size_t(lVar2,(long)iVar1);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0xe9;
      goto LAB_0043d561;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"tls1multi_interleave");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_uint(lVar2,*(undefined4 *)(param_1 + 0x1d8));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0xf0;
      goto LAB_0043d561;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"tls1multi_aadpacklen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_uint(lVar2,*(undefined4 *)(param_1 + 0x1dc));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0xf6;
      goto LAB_0043d561;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"tls1multi_enclen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x1e8));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0xfc;
      goto LAB_0043d561;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"tlsaadpad");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x1f0));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x103;
      goto LAB_0043d561;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"keylen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x108;
      goto LAB_0043d561;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"ivlen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x20));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x10d;
      goto LAB_0043d561;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"iv");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x74,*(undefined8 *)(param_1 + 0x20));
    if (iVar1 == 0) {
      iVar1 = OSSL_PARAM_set_octet_ptr(lVar2,param_1 + 0x74,*(undefined8 *)(param_1 + 0x20));
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x114;
        goto LAB_0043d561;
      }
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"updated-iv");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x94,*(undefined8 *)(param_1 + 0x20));
    if (iVar1 == 0) {
      iVar1 = OSSL_PARAM_set_octet_ptr(lVar2,param_1 + 0x94,*(undefined8 *)(param_1 + 0x20));
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x11b;
LAB_0043d561:
        ERR_set_debug("../providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",uVar3,
                      "aes_get_ctx_params");
        ERR_set_error(0x39,0x68,0);
        return 0;
      }
    }
  }
  return 1;
}

