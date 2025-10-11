
ulong EVP_CIPHER_CTX_get_tag_length(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined1 local_a8 [32];
  undefined8 local_88;
  ulong local_70;
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
  local_70 = 0;
  OSSL_PARAM_construct_size_t(local_a8,"taglen",&local_70);
  local_48._0_8_ = local_88;
  iVar1 = evp_do_ciph_ctx_getparams(*param_1,param_1[0x15],local_68);
  uVar2 = 0;
  if (iVar1 == 1) {
    uVar2 = local_70 & 0xffffffff;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

