
undefined4
any2obj_decode_final_constprop_0
          (undefined4 param_1,BUF_MEM *param_2,code *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_ac;
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
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  uVar1 = 1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_ac = param_1;
  if (param_2 != (BUF_MEM *)0x0) {
    OSSL_PARAM_construct_int(&local_e8,"type",&local_ac);
    local_a8 = local_e8;
    uStack_a0 = uStack_e0;
    local_98 = local_d8;
    uStack_90 = uStack_d0;
    local_88 = local_c8;
    OSSL_PARAM_construct_octet_string(&local_e8,"data",param_2->data,param_2->length);
    local_60 = local_c8;
    local_80 = local_e8;
    uStack_78 = uStack_e0;
    local_70 = local_d8;
    uStack_68 = uStack_d0;
    OSSL_PARAM_construct_end(&local_e8);
    local_58 = local_e8;
    uStack_50 = uStack_e0;
    local_38 = local_c8;
    local_48 = local_d8;
    uStack_40 = uStack_d0;
    uVar1 = (*param_3)(&local_a8,param_4);
    BUF_MEM_free(param_2);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

