
bool EVP_CIPHER_CTX_set_num(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_6c;
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
  local_6c = param_2;
  OSSL_PARAM_construct_uint(local_a8,"num",&local_6c);
  local_48._0_8_ = local_88;
  iVar1 = evp_do_ciph_ctx_setparams(*param_1,param_1[0x15],local_68);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xb) = local_6c;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

