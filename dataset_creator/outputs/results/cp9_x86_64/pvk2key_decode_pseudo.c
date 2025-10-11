
undefined4
pvk2key_decode(undefined8 *param_1,undefined8 param_2,uint param_3,code *param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  BIO *a;
  undefined8 uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  BIO *local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
  local_120 = (BIO *)0x0;
  if (a == (BIO *)0x0) {
    uVar3 = 0;
    goto LAB_00453783;
  }
  *(uint *)(param_1 + 2) = param_3;
  if (param_3 == 0) {
    if (*(long *)(param_1[1] + 0x18) == 0) goto LAB_004537c7;
LAB_00453739:
    local_118 = (undefined1  [16])0x0;
    local_108 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    iVar2 = ossl_pw_set_ossl_passphrase_cb(local_118,param_6,param_7);
    if (iVar2 != 0) {
      pcVar1 = *(code **)(param_1[1] + 0x18);
      uVar5 = ossl_prov_ctx_get0_libctx(*param_1);
      local_120 = (BIO *)(*pcVar1)(a,ossl_pw_pvk_password,local_118,uVar5,0);
      uVar6 = ERR_peek_last_error();
      uVar4 = (uint)uVar6;
      if ((((int)uVar4 < 0) || ((char)((ulong)(long)(int)uVar4 >> 0x17) != '\t')) ||
         (((uVar4 & 0x7fffff) != 0x68 && ((uVar4 & 0x7fffff) != 0x65)))) {
        if ((local_120 != (BIO *)0x0) && (*(code **)(param_1[1] + 0x20) != (code *)0x0)) {
          (**(code **)(param_1[1] + 0x20))(local_120,param_1);
        }
        goto LAB_004537c7;
      }
      ERR_clear_last_mark();
    }
    uVar3 = 0;
  }
  else {
    if (((param_3 & 1) != 0) && (*(long *)(param_1[1] + 0x18) != 0)) goto LAB_00453739;
LAB_004537c7:
    uVar3 = 1;
    BIO_free(a);
    a = local_120;
    if (local_120 != (BIO *)0x0) {
      local_118._0_4_ = 2;
      OSSL_PARAM_construct_int(&local_158,"type",local_118);
      local_c8 = local_138;
      local_e8 = local_158;
      uStack_e0 = uStack_150;
      local_d8 = local_148;
      uStack_d0 = uStack_140;
      OSSL_PARAM_construct_utf8_string(&local_158,"data-type",*(undefined8 *)(param_1[1] + 8),0);
      local_c0 = local_158;
      uStack_b8 = uStack_150;
      local_b0 = local_148;
      uStack_a8 = uStack_140;
      local_a0 = local_138;
      OSSL_PARAM_construct_octet_string(&local_158,"reference",&local_120,8);
      a = (BIO *)0x0;
      local_78 = local_138;
      local_98 = local_158;
      uStack_90 = uStack_150;
      local_88 = local_148;
      uStack_80 = uStack_140;
      OSSL_PARAM_construct_end(&local_158);
      local_50 = local_138;
      local_70 = local_158;
      uStack_68 = uStack_150;
      local_60 = local_148;
      uStack_58 = uStack_140;
      uVar3 = (*param_4)(&local_e8,param_5);
    }
  }
  BIO_free(a);
  (**(code **)(param_1[1] + 0x28))(local_120);
LAB_00453783:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

