
undefined4 aes_siv_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,"tag");
  if (((lVar2 != 0) && (*(int *)(lVar2 + 8) == 5)) &&
     (((*(byte *)(param_1 + 4) & 1) == 0 ||
      ((*(long *)(lVar2 + 0x18) != *(long *)(param_1 + 0x10) ||
       (iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x28), iVar1 == 0)))))) {
    ERR_new();
    ERR_set_debug("../providers/implementations/ciphers/cipher_aes_siv.c",0xac,
                  "aes_siv_get_ctx_params");
    ERR_set_error(0x39,0x68,0);
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"taglen");
  if ((lVar2 == 0) ||
     (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) {
    lVar2 = OSSL_PARAM_locate(param_2,"keylen");
    if ((lVar2 == 0) ||
       (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 8)), iVar1 != 0)) {
      return 1;
    }
    ERR_new();
    uVar3 = 0xb7;
  }
  else {
    ERR_new();
    uVar3 = 0xb2;
  }
  ERR_set_debug("../providers/implementations/ciphers/cipher_aes_siv.c",uVar3,
                "aes_siv_get_ctx_params");
  ERR_set_error(0x39,0x68,0);
  return 0;
}

