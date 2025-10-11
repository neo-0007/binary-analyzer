
int ossl_cipher_var_keylen_set_ctx_params(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    iVar1 = ossl_cipher_generic_set_ctx_params();
    if (iVar1 == 0) goto LAB_004842c3;
    lVar2 = OSSL_PARAM_locate_const(param_2,"keylen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_28);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/ciphers/ciphercommon.c",0x80,
                      "ossl_cipher_var_keylen_set_ctx_params");
        ERR_set_error(0x39,0x67,0);
        iVar1 = 0;
      }
      else {
        iVar1 = 1;
        *(undefined8 *)(param_1 + 0x18) = local_28;
      }
      goto LAB_004842c3;
    }
  }
  iVar1 = 1;
LAB_004842c3:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

