
undefined8 ossl_tdes_get_ctx_params(long param_1,undefined8 param_2)

{
  ulong uVar1;
  DES_cblock *key;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = ossl_cipher_generic_get_ctx_params();
  if ((int)uVar3 != 0) {
    lVar4 = OSSL_PARAM_locate(param_2,"randkey");
    uVar3 = 1;
    if (lVar4 != 0) {
      uVar1 = *(ulong *)(param_1 + 0x18);
      key = *(DES_cblock **)(lVar4 + 0x10);
      if ((uVar1 != 0) &&
         (iVar2 = RAND_priv_bytes_ex(*(undefined8 *)(param_1 + 0xb8),key,uVar1,0), 0 < iVar2)) {
        DES_set_odd_parity(key);
        if (0xf < uVar1) {
          DES_set_odd_parity(key + 1);
        }
        if (0x17 < uVar1) {
          DES_set_odd_parity(key + 2);
          return 1;
        }
      }
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/cipher_tdes_common.c",0x91,
                    "ossl_tdes_get_ctx_params");
      ERR_set_error(0x39,0x79,0);
      return 0;
    }
  }
  return uVar3;
}

