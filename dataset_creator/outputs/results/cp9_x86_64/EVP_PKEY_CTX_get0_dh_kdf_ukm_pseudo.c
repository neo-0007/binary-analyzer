
ulong EVP_PKEY_CTX_get0_dh_kdf_ukm(int *param_1,undefined8 param_2)

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
  if ((param_1 == (int *)0x0) || (*param_1 != 0x800)) {
    ERR_new();
    ERR_set_debug("../crypto/evp/dh_ctrl.c",0x25,"dh_param_derive_check");
    ERR_set_error(6,0x93,0);
    uVar2 = 0xfffffffe;
    goto LAB_005180bb;
  }
  if (((*(long *)(param_1 + 8) != 0) || (**(int **)(param_1 + 0x1e) == 0x1c)) ||
     (**(int **)(param_1 + 0x1e) == 0x398)) {
    OSSL_PARAM_construct_octet_ptr(&local_a8,&DAT_007d9d1b,param_2,0);
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
    iVar1 = evp_pkey_ctx_get_params_strict(param_1,&local_78);
    if (iVar1 == -2) {
      ERR_new();
      ERR_set_debug("../crypto/evp/dh_ctrl.c",0x150,"EVP_PKEY_CTX_get0_dh_kdf_ukm");
      ERR_set_error(6,0x93,0);
      uVar2 = 0xffffffff;
      goto LAB_005180bb;
    }
    if (iVar1 == 1) {
      uVar2 = local_58 & 0xffffffff;
      if (0x7fffffff < local_58) {
        uVar2 = 0xffffffff;
      }
      goto LAB_005180bb;
    }
  }
  uVar2 = 0xffffffff;
LAB_005180bb:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

