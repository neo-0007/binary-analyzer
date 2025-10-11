
undefined8 EVP_PKEY_CTX_set_rsa_keygen_bits(int *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_20;
  
  local_80 = (long)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (int *)0x0) || ((*param_1 - 2U & 0xfffffffd) != 0)) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_lib.c",0x4b5,"EVP_PKEY_CTX_set_rsa_keygen_bits");
    ERR_set_error(6,0x93,0);
    uVar2 = 0xfffffffe;
  }
  else {
    iVar1 = EVP_PKEY_CTX_is_a(param_1,"RSA");
    if (iVar1 == 0) {
      iVar1 = EVP_PKEY_CTX_is_a(param_1,"RSA-PSS");
      if (iVar1 == 0) {
        uVar2 = 0xffffffff;
        goto LAB_005585f4;
      }
    }
    OSSL_PARAM_construct_size_t(&local_b8,"bits",&local_80);
    local_58 = local_98;
    local_78 = local_b8;
    uStack_70 = uStack_b0;
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    OSSL_PARAM_construct_end(&local_b8);
    local_50 = local_b8;
    uStack_48 = uStack_b0;
    local_30 = local_98;
    local_40 = local_a8;
    uStack_38 = uStack_a0;
    uVar2 = evp_pkey_ctx_set_params_strict(param_1,&local_78);
  }
LAB_005585f4:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

