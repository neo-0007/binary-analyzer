
bool ossl_pkcs5_pbkdf2_hmac_ex
               (char *param_1,int param_2,undefined1 *param_3,int param_4,undefined4 param_5,
               undefined8 param_6,int param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  size_t sVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_14c [4];
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
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
  local_13c = 1;
  local_14c[0] = param_5;
  uVar2 = EVP_MD_get0_name(param_6);
  if (param_1 == (char *)0x0) {
    param_2 = 0;
    param_1 = "";
  }
  else if (param_2 == -1) {
    sVar5 = strlen(param_1);
    param_2 = (int)sVar5;
  }
  if ((param_3 == (undefined1 *)0x0) && (param_4 == 0)) {
    param_3 = &DAT_008343a2;
  }
  uVar3 = EVP_KDF_fetch(param_9,"PBKDF2",param_10);
  lVar4 = EVP_KDF_CTX_new(uVar3);
  EVP_KDF_free(uVar3);
  bVar6 = false;
  if (lVar4 != 0) {
    OSSL_PARAM_construct_octet_string(&local_188,"pass",param_1,(long)param_2);
    local_138 = local_188;
    uStack_130 = uStack_180;
    local_128 = local_178;
    uStack_120 = uStack_170;
    local_118 = local_168;
    OSSL_PARAM_construct_int(&local_188,"pkcs5",&local_13c);
    local_f0 = local_168;
    local_110 = local_188;
    uStack_108 = uStack_180;
    local_100 = local_178;
    uStack_f8 = uStack_170;
    OSSL_PARAM_construct_octet_string(&local_188,"salt",param_3,(long)param_4);
    local_e8 = local_188;
    uStack_e0 = uStack_180;
    local_d8 = local_178;
    uStack_d0 = uStack_170;
    local_c8 = local_168;
    OSSL_PARAM_construct_int(&local_188,"iter",local_14c);
    local_c0 = local_188;
    uStack_b8 = uStack_180;
    local_b0 = local_178;
    uStack_a8 = uStack_170;
    local_a0 = local_168;
    OSSL_PARAM_construct_utf8_string(&local_188,"digest",uVar2,0);
    local_98 = local_188;
    uStack_90 = uStack_180;
    local_88 = local_178;
    uStack_80 = uStack_170;
    local_78 = local_168;
    OSSL_PARAM_construct_end(&local_188);
    local_70 = local_188;
    uStack_68 = uStack_180;
    local_60 = local_178;
    uStack_58 = uStack_170;
    local_50 = local_168;
    iVar1 = EVP_KDF_derive(lVar4,param_8,(long)param_7,&local_138);
    bVar6 = iVar1 == 1;
    EVP_KDF_CTX_free(lVar4);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

