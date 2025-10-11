
undefined8
int_set_rsa_md_name(uint *param_1,int param_2,uint param_3,undefined8 param_4,long param_5,
                   undefined8 param_6,long param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == (uint *)0x0) || (param_5 == 0)) || ((param_3 & *param_1) == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_lib.c",0x378,"int_set_rsa_md_name");
    ERR_set_error(6,0x93,0);
    uVar2 = 0xfffffffe;
    goto LAB_00556bea;
  }
  if (param_2 == -1) {
    iVar1 = EVP_PKEY_CTX_is_a(param_1,"RSA");
    if (iVar1 == 0) {
      iVar1 = EVP_PKEY_CTX_is_a(param_1,"RSA-PSS");
      goto joined_r0x00556c40;
    }
  }
  else {
    uVar2 = evp_pkey_type2name(param_2);
    iVar1 = EVP_PKEY_CTX_is_a(param_1,uVar2);
joined_r0x00556c40:
    if (iVar1 == 0) {
      uVar2 = 0xffffffff;
      goto LAB_00556bea;
    }
  }
  OSSL_PARAM_construct_utf8_string(&local_e8,param_4,param_5,0);
  local_b8 = local_e8;
  uStack_b0 = uStack_e0;
  local_98 = local_c8;
  local_a8 = local_d8;
  uStack_a0 = uStack_d0;
  if ((*(long *)(param_1 + 8) == 0) || (param_7 == 0)) {
    puVar3 = &local_90;
  }
  else {
    OSSL_PARAM_construct_utf8_string(&local_e8,param_6,param_7,0);
    puVar3 = local_68;
    local_90 = local_e8;
    uStack_88 = uStack_e0;
    local_70 = local_c8;
    local_80 = local_d8;
    uStack_78 = uStack_d0;
  }
  OSSL_PARAM_construct_end(&local_e8);
  *puVar3 = local_e8;
  puVar3[1] = uStack_e0;
  puVar3[2] = local_d8;
  puVar3[3] = uStack_d0;
  puVar3[4] = local_c8;
  uVar2 = evp_pkey_ctx_set_params_strict(param_1,&local_b8);
LAB_00556bea:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

