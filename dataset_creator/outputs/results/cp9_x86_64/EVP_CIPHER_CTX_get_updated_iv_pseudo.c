
void EVP_CIPHER_CTX_get_updated_iv(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  OSSL_PARAM_construct_octet_string(local_98,"updated-iv",param_2,param_3);
  local_48._0_8_ = local_78;
  evp_do_ciph_ctx_getparams(*param_1,param_1[0x15],local_68);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

