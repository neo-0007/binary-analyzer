
undefined8
int_get_rsa_md_name(uint *param_1,int param_2,uint param_3,undefined8 param_4,long param_5,
                   undefined8 param_6)

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
  if (((param_1 == (uint *)0x0) || (param_5 == 0)) || ((param_3 & *param_1) == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_lib.c",0x3a0,"int_get_rsa_md_name");
    ERR_set_error(6,0x93,0);
    uVar2 = 0xfffffffe;
    goto LAB_00556d63;
  }
  if (param_2 == -1) {
    iVar1 = EVP_PKEY_CTX_is_a(param_1,"RSA");
    if (iVar1 == 0) {
      iVar1 = EVP_PKEY_CTX_is_a(param_1,"RSA-PSS");
      goto joined_r0x00556db8;
    }
  }
  else {
    uVar2 = evp_pkey_type2name(param_2);
    iVar1 = EVP_PKEY_CTX_is_a(param_1,uVar2);
joined_r0x00556db8:
    if (iVar1 == 0) {
      uVar2 = 0xffffffff;
      goto LAB_00556d63;
    }
  }
  OSSL_PARAM_construct_utf8_string(&local_b8,param_4,param_5,param_6);
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
  uVar2 = evp_pkey_ctx_get_params_strict(param_1,&local_88);
LAB_00556d63:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

