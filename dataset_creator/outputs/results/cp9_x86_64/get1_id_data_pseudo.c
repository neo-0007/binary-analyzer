
int get1_id_data(int *param_1,void *param_2,size_t *param_3)

{
  size_t sVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  size_t local_a8;
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  size_t local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  size_t local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_1;
  local_90 = (void *)0x0;
  if (((iVar2 - 0x10U & 0xffffffef) == 0 || (iVar2 - 0x40U & 0xffffffbf) == 0) || (iVar2 == 0x100))
  {
    OSSL_PARAM_construct_octet_ptr(&local_c8,"distid",&local_90,0);
    local_68 = local_a8;
    local_88 = local_c8;
    uStack_80 = uStack_c0;
    local_78 = local_b8;
    uStack_70 = uStack_b0;
    OSSL_PARAM_construct_end(&local_c8);
    local_40 = local_a8;
    local_60 = local_c8;
    uStack_58 = uStack_c0;
    local_50 = local_b8;
    uStack_48 = uStack_b0;
    iVar2 = evp_pkey_ctx_get_params_strict(param_1,&local_88);
    sVar1 = local_68;
    if (iVar2 == -2) {
      ERR_new();
      ERR_set_debug("../crypto/evp/pmeth_lib.c",0x4e3,"get1_id_data");
      ERR_set_error(6,0x93,0);
    }
    else if (0 < iVar2) {
      if (param_2 != (void *)0x0) {
        memcpy(param_2,local_90,local_68);
      }
      if (param_3 != (size_t *)0x0) {
        *param_3 = sVar1;
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("../crypto/evp/pmeth_lib.c",0x4d8,"get1_id_data");
    iVar2 = -2;
    ERR_set_error(6,0x93,0);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

