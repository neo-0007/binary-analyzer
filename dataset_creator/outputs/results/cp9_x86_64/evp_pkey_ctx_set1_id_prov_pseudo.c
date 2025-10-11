
int evp_pkey_ctx_set1_id_prov(int *param_1,undefined8 param_2,int param_3)

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
  iVar1 = *param_1;
  if (((iVar1 - 0x10U & 0xffffffef) == 0 || (iVar1 - 0x40U & 0xffffffbf) == 0) || (iVar1 == 0x100))
  {
    OSSL_PARAM_construct_octet_string(&local_a8,"distid",param_2,(long)param_3);
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
      ERR_set_debug("../crypto/evp/pmeth_lib.c",0x4c7,"evp_pkey_ctx_set1_id_prov");
      ERR_set_error(6,0x93,0);
    }
  }
  else {
    ERR_new();
    ERR_set_debug("../crypto/evp/pmeth_lib.c",0x4b8,"evp_pkey_ctx_set1_id_prov");
    iVar1 = -2;
    ERR_set_error(6,0x93,0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

