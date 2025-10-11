
uint EVP_PKEY_CTX_get_ecdh_cofactor_mode(int *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint local_7c;
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
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (int *)0x0) || (*param_1 != 0x800)) {
    ERR_new();
    ERR_set_debug("../crypto/evp/ec_ctrl.c",0x1b,"evp_pkey_ctx_getset_ecdh_param_checks");
    ERR_set_error(6,0x93,0);
    local_7c = 0xfffffffe;
    goto LAB_00525524;
  }
  if (((*(long *)(param_1 + 8) != 0) || (*(int **)(param_1 + 0x1e) == (int *)0x0)) ||
     (**(int **)(param_1 + 0x1e) == 0x198)) {
    OSSL_PARAM_construct_int(&local_b8,"ecdh-cofactor-mode",&local_7c);
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
    iVar1 = evp_pkey_ctx_get_params_strict(param_1,&local_78);
    if (iVar1 == -2) {
      ERR_new();
      ERR_set_debug("../crypto/evp/ec_ctrl.c",0x57,"EVP_PKEY_CTX_get_ecdh_cofactor_mode");
      ERR_set_error(6,0x93,0);
      local_7c = 0xfffffffe;
      goto LAB_00525524;
    }
    if (iVar1 == 1) {
      if (1 < local_7c) {
        local_7c = 0xffffffff;
      }
      goto LAB_00525524;
    }
  }
  local_7c = 0xffffffff;
LAB_00525524:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_7c;
}

