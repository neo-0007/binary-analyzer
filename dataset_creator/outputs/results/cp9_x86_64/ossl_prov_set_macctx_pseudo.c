
undefined8
ossl_prov_set_macctx
          (undefined8 param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
          long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110 [26];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    if (param_4 == 0) {
      param_4 = OSSL_PARAM_locate_const(param_2,"digest");
      if (param_4 == 0) goto LAB_0043a4ef;
      if (*(int *)(param_4 + 8) == 4) {
        param_4 = *(long *)(param_4 + 0x10);
        goto LAB_0043a4ef;
      }
LAB_0043a703:
      uVar1 = 0;
      goto LAB_0043a68f;
    }
LAB_0043a4ef:
    if (param_3 == 0) {
      param_3 = OSSL_PARAM_locate_const(param_2,"cipher");
      if (param_3 != 0) {
        if (*(int *)(param_3 + 8) != 4) goto LAB_0043a703;
        param_3 = *(long *)(param_3 + 0x10);
      }
    }
    if (param_5 == 0) {
      param_5 = OSSL_PARAM_locate_const(param_2,"engine");
      if (param_5 != 0) {
        if (*(int *)(param_5 + 8) != 4) goto LAB_0043a703;
        param_5 = *(long *)(param_5 + 0x10);
      }
    }
  }
  if (param_4 == 0) {
    puVar3 = &local_138;
  }
  else {
    puVar3 = local_110;
    OSSL_PARAM_construct_utf8_string(&local_168,"digest",param_4,0);
    local_118 = local_148;
    local_138 = local_168;
    uStack_130 = uStack_160;
    local_128 = local_158;
    uStack_120 = uStack_150;
  }
  puVar2 = puVar3;
  if (param_3 != 0) {
    puVar2 = puVar3 + 5;
    OSSL_PARAM_construct_utf8_string(&local_168,"cipher",param_3,0);
    *puVar3 = local_168;
    puVar3[1] = uStack_160;
    puVar3[2] = local_158;
    puVar3[3] = uStack_150;
    puVar3[4] = local_148;
  }
  puVar3 = puVar2;
  if (param_6 != 0) {
    OSSL_PARAM_construct_utf8_string(&local_168,"properties",param_6,0);
    puVar3 = puVar2 + 5;
    *puVar2 = local_168;
    puVar2[1] = uStack_160;
    puVar2[2] = local_158;
    puVar2[3] = uStack_150;
    puVar2[4] = local_148;
  }
  puVar2 = puVar3;
  if (param_5 != 0) {
    OSSL_PARAM_construct_utf8_string(&local_168,"engine",param_5,0);
    puVar2 = puVar3 + 5;
    *puVar3 = local_168;
    puVar3[1] = uStack_160;
    puVar3[2] = local_158;
    puVar3[3] = uStack_150;
    puVar3[4] = local_148;
  }
  puVar3 = puVar2;
  if (param_7 != 0) {
    puVar3 = puVar2 + 5;
    OSSL_PARAM_construct_octet_string(&local_168,"key",param_7,param_8);
    *puVar2 = local_168;
    puVar2[1] = uStack_160;
    puVar2[2] = local_158;
    puVar2[3] = uStack_150;
    puVar2[4] = local_148;
  }
  OSSL_PARAM_construct_end(&local_168);
  *puVar3 = local_168;
  puVar3[1] = uStack_160;
  puVar3[2] = local_158;
  puVar3[3] = uStack_150;
  puVar3[4] = local_148;
  uVar1 = EVP_MAC_CTX_set_params(param_1,&local_138);
LAB_0043a68f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

