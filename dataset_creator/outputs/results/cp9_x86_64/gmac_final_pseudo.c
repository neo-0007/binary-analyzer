
undefined8 gmac_final(long param_1,uchar *param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  int local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    iVar1 = EVP_EncryptFinal_ex(*(EVP_CIPHER_CTX **)(param_1 + 8),param_2,&local_7c);
    if (iVar1 != 0) {
      local_7c = 0x10;
      OSSL_PARAM_construct_octet_string(&local_b8,"tag",param_2,0x10);
      local_78._8_8_ = uStack_b0;
      local_78._0_8_ = local_b8;
      local_58._0_8_ = local_98;
      local_68._8_8_ = uStack_a0;
      local_68._0_8_ = local_a8;
      iVar1 = EVP_CIPHER_CTX_get_params(*(undefined8 *)(param_1 + 8),local_78);
      if (iVar1 != 0) {
        *param_3 = (long)local_7c;
        uVar2 = 1;
        goto LAB_004740ee;
      }
    }
  }
  uVar2 = 0;
LAB_004740ee:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

