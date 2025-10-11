
ulong EVP_CIPHER_CTX_get_iv_length(EVP_CIPHER_CTX *param_1)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined1 local_a8 [32];
  undefined8 local_88;
  uint local_74;
  ulong local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_74 = EVP_CIPHER_get_iv_length(param_1->cipher);
  local_70 = (ulong)(int)local_74;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  OSSL_PARAM_construct_size_t(local_a8,"ivlen",&local_70);
  local_48._0_8_ = local_88;
  iVar1 = evp_do_ciph_ctx_getparams(param_1->cipher,param_1[1].cipher,local_68);
  if (iVar1 == -1) {
    uVar2 = EVP_CIPHER_get_flags(param_1->cipher);
    if ((uVar2 & 0x800) != 0) {
      iVar1 = EVP_CIPHER_CTX_ctrl(param_1,0x25,0,&local_74);
      if (iVar1 != 1) goto LAB_0040e501;
    }
    uVar2 = (ulong)local_74;
  }
  else {
    if (iVar1 != 0) {
      uVar2 = local_70 & 0xffffffff;
      goto LAB_0040e4aa;
    }
LAB_0040e501:
    uVar2 = 0xffffffff;
  }
LAB_0040e4aa:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

