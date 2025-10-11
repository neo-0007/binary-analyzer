
undefined4 aes_wrap_set_ctx_params(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  if (param_2 != 0) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"keylen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_28);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/ciphers/cipher_aes_wrp.c",0xfc,
                      "aes_wrap_set_ctx_params");
        ERR_set_error(0x39,0x67,0);
        uVar3 = 0;
        goto LAB_00443c61;
      }
      if (*(long *)(param_1 + 0x18) != local_28) {
        ERR_new();
        uVar3 = 0;
        ERR_set_debug("../providers/implementations/ciphers/cipher_aes_wrp.c",0x100,
                      "aes_wrap_set_ctx_params");
        ERR_set_error(0x39,0x69,0);
        goto LAB_00443c61;
      }
    }
  }
  uVar3 = 1;
LAB_00443c61:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

