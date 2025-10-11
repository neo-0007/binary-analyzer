
undefined8 EVP_PKEY_CTX_set0_rsa_oaep_label(int *param_1,void *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (int *)0x0) || ((*param_1 - 0x200U & 0xfffffdff) != 0)) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_lib.c",0x441,"EVP_PKEY_CTX_set0_rsa_oaep_label");
    ERR_set_error(6,0x93,0);
    uVar2 = 0xfffffffe;
  }
  else {
    iVar1 = EVP_PKEY_CTX_is_a(param_1,"RSA");
    if (iVar1 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      OSSL_PARAM_construct_octet_string(&local_b8,"oaep-label",param_2,(long)param_3);
      local_68 = local_98;
      local_88 = local_b8;
      uStack_80 = uStack_b0;
      local_78 = local_a8;
      uStack_70 = uStack_a0;
      OSSL_PARAM_construct_end(&local_b8);
      local_60 = local_b8;
      uStack_58 = uStack_b0;
      local_40 = local_98;
      local_50 = local_a8;
      uStack_48 = uStack_a0;
      uVar2 = evp_pkey_ctx_set_params_strict(param_1,&local_88);
      if ((int)uVar2 != 0) {
        CRYPTO_free(param_2);
        uVar2 = 1;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

