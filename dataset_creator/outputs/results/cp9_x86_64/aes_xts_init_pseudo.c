
undefined4
aes_xts_init(long param_1,void *param_2,ulong param_3,long param_4,undefined8 param_5,long param_6,
            byte param_7)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) &&
     ((*(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xfd | (param_7 & 1) * '\x02',
      param_4 == 0 || (iVar1 = ossl_cipher_generic_initiv(param_1,param_4,param_5), iVar1 != 0)))) {
    if (param_2 != (void *)0x0) {
      if (*(ulong *)(param_1 + 0x18) != param_3) {
        ERR_new();
        uVar3 = 0;
        ERR_set_debug("../providers/implementations/ciphers/cipher_aes_xts.c",0x56,"aes_xts_init");
        ERR_set_error(0x39,0x69,0);
        goto LAB_00444ccb;
      }
      if (((ossl_aes_xts_allow_insecure_decrypt == 0) || ((param_7 & 1) != 0)) &&
         (iVar1 = CRYPTO_memcmp(param_2,(void *)((long)param_2 + (param_3 >> 1)),param_3 >> 1),
         iVar1 == 0)) {
        ERR_new();
        ERR_set_debug("../providers/implementations/ciphers/cipher_aes_xts.c",0x3b,
                      "aes_xts_check_keys_differ");
        ERR_set_error(0x39,0x95,0);
        uVar3 = 0;
        goto LAB_00444ccb;
      }
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xa8))(param_1,param_2,param_3);
      if (iVar1 == 0) goto LAB_00444cc8;
    }
    if ((param_6 == 0) || (lVar2 = OSSL_PARAM_locate_const(param_6,"keylen"), lVar2 == 0)) {
LAB_00444d30:
      uVar3 = 1;
      goto LAB_00444ccb;
    }
    iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_48);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/cipher_aes_xts.c",0xf4,
                    "aes_xts_set_ctx_params");
      ERR_set_error(0x39,0x67,0);
    }
    else if (*(long *)(param_1 + 0x18) == local_48) goto LAB_00444d30;
  }
LAB_00444cc8:
  uVar3 = 0;
LAB_00444ccb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

