
undefined8 aes_xts_set_ctx_params(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"keylen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_18);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/ciphers/cipher_aes_xts.c",0xf4,
                      "aes_xts_set_ctx_params");
        ERR_set_error(0x39,0x67,0);
      }
      else if (*(long *)(param_1 + 0x18) == local_18) goto LAB_00445080;
      uVar3 = 0;
      goto LAB_00445085;
    }
  }
LAB_00445080:
  uVar3 = 1;
LAB_00445085:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

