
undefined8
evp_pkey_ctx_set_uint64_constprop_0
          (int *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
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
  local_80 = param_4;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x800)) {
    ERR_new();
    ERR_set_debug("../crypto/evp/pmeth_lib.c",0x468,"evp_pkey_ctx_set_uint64");
    ERR_set_error(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else if (*(long *)(param_1 + 0xc) == 0) {
    uVar1 = EVP_PKEY_CTX_ctrl_uint64(param_1,0xffffffff,0x800,param_3,param_4);
  }
  else {
    OSSL_PARAM_construct_uint64(&local_b8,param_2,&local_80);
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
    uVar1 = EVP_PKEY_CTX_set_params(param_1,&local_78);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

