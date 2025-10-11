
ulong EVP_PKEY_CTX_get0_rsa_oaep_label(int *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulong local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (int *)0x0) || ((*param_1 - 0x200U & 0xfffffdff) != 0)) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_lib.c",0x45d,"EVP_PKEY_CTX_get0_rsa_oaep_label");
    ERR_set_error(6,0x93,0);
    uVar2 = 0xfffffffe;
  }
  else {
    iVar1 = EVP_PKEY_CTX_is_a(param_1,"RSA");
    if (iVar1 != 0) {
      OSSL_PARAM_construct_octet_ptr(&local_a8,"oaep-label",param_2,0);
      local_58 = local_88;
      local_78 = local_a8;
      uStack_70 = uStack_a0;
      local_68 = local_98;
      uStack_60 = uStack_90;
      OSSL_PARAM_construct_end(&local_a8);
      local_50 = local_a8;
      uStack_48 = uStack_a0;
      local_30 = local_88;
      local_40 = local_98;
      uStack_38 = uStack_90;
      iVar1 = EVP_PKEY_CTX_get_params(param_1,&local_78);
      if ((iVar1 != 0) && (uVar2 = local_58, local_58 < 0x80000000)) goto LAB_00558353;
    }
    uVar2 = 0xffffffff;
  }
LAB_00558353:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

