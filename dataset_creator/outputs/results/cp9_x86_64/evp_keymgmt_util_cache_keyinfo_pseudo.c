
void evp_keymgmt_util_cache_keyinfo(long param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
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
  if (*(long *)(param_1 + 0x68) != 0) {
    local_d4 = 0;
    local_d0 = 0;
    local_cc = 0;
    OSSL_PARAM_construct_int(&local_108,"bits",&local_d4);
    local_c8 = local_108;
    uStack_c0 = uStack_100;
    local_b8 = local_f8;
    uStack_b0 = uStack_f0;
    local_a8 = local_e8;
    OSSL_PARAM_construct_int(&local_108,"security-bits",&local_d0);
    local_a0 = local_108;
    uStack_98 = uStack_100;
    local_80 = local_e8;
    local_90 = local_f8;
    uStack_88 = uStack_f0;
    OSSL_PARAM_construct_int(&local_108,"max-size",&local_cc);
    local_58 = local_e8;
    local_78 = local_108;
    uStack_70 = uStack_100;
    local_68 = local_f8;
    uStack_60 = uStack_f0;
    OSSL_PARAM_construct_end(&local_108);
    local_50 = local_108;
    uStack_48 = uStack_100;
    local_30 = local_e8;
    local_40 = local_f8;
    uStack_38 = uStack_f0;
    iVar1 = evp_keymgmt_get_params
                      (*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),&local_c8);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x90) = local_cc;
      *(undefined4 *)(param_1 + 0x88) = local_d4;
      *(undefined4 *)(param_1 + 0x8c) = local_d0;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

