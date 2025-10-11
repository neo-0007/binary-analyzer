
void EVP_PKEY_CTX_set_dh_paramgen_seed(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
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
  iVar1 = dh_paramgen_check();
  if (0 < iVar1) {
    OSSL_PARAM_construct_octet_string(&local_b8,"seed",param_2,param_3);
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
    evp_pkey_ctx_set_params_strict(param_1,&local_88);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

