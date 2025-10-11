
void EVP_PKEY_CTX_set_dsa_paramgen_md_props(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58 [5];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = dsa_paramgen_check();
  if (0 < iVar1) {
    puVar2 = &local_80;
    OSSL_PARAM_construct_utf8_string(&local_d8,"digest",param_2,0);
    local_a8 = local_d8;
    uStack_a0 = uStack_d0;
    local_88 = local_b8;
    local_98 = local_c8;
    uStack_90 = uStack_c0;
    if (param_3 != 0) {
      OSSL_PARAM_construct_utf8_string(&local_d8,"properties",param_3,0);
      puVar2 = local_58;
      local_60 = local_b8;
      local_80 = local_d8;
      uStack_78 = uStack_d0;
      local_70 = local_c8;
      uStack_68 = uStack_c0;
    }
    OSSL_PARAM_construct_end(&local_d8);
    *puVar2 = local_d8;
    puVar2[1] = uStack_d0;
    puVar2[2] = local_c8;
    puVar2[3] = uStack_c0;
    puVar2[4] = local_b8;
    EVP_PKEY_CTX_set_params(param_1,&local_a8);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

