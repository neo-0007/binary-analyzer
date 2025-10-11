
int EVP_PKEY_CTX_set0_ecdh_kdf_ukm(int *param_1,void *param_2,int param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
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
    iVar1 = -2;
    ERR_set_error(6,0x93,0);
  }
  else if (((*(long *)(param_1 + 8) == 0) && (*(int **)(param_1 + 0x1e) != (int *)0x0)) &&
          (**(int **)(param_1 + 0x1e) != 0x198)) {
    iVar1 = -1;
  }
  else {
    OSSL_PARAM_construct_octet_string(&local_a8,&DAT_007d9d1b,param_2,(long)param_3);
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
    iVar1 = evp_pkey_ctx_set_params_strict(param_1,&local_78);
    if (iVar1 == -2) {
      ERR_new();
      ERR_set_debug("../crypto/evp/ec_ctrl.c",0xe8,"EVP_PKEY_CTX_set0_ecdh_kdf_ukm");
      ERR_set_error(6,0x93,0);
    }
    else if (iVar1 == 1) {
      CRYPTO_free(param_2);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

