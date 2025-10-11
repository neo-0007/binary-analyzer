
bool ossl_dh_kdf_X9_42_asn1
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90 [10];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = EVP_MD_get0_name(param_8);
  uVar4 = EVP_KDF_fetch(param_9,"X942KDF-ASN1",param_10);
  lVar5 = EVP_KDF_CTX_new(uVar4);
  bVar1 = false;
  if (lVar5 != 0) {
    OSSL_PARAM_construct_utf8_string(&local_138,"digest",uVar3,0);
    local_e8 = local_118;
    puVar6 = &local_b8;
    local_108 = local_138;
    uStack_100 = uStack_130;
    local_f8 = local_128;
    uStack_f0 = uStack_120;
    OSSL_PARAM_construct_octet_string(&local_138,"key",param_3,param_4);
    local_e0 = local_138;
    uStack_d8 = uStack_130;
    local_c0 = local_118;
    local_d0 = local_128;
    uStack_c8 = uStack_120;
    if (param_6 != 0) {
      puVar6 = local_90;
      OSSL_PARAM_construct_octet_string(&local_138,&DAT_007d9d1f,param_6,param_7);
      local_98 = local_118;
      local_b8 = local_138;
      uStack_b0 = uStack_130;
      local_a8 = local_128;
      uStack_a0 = uStack_120;
    }
    OSSL_PARAM_construct_utf8_string(&local_138,"cekalg",param_5,0);
    *puVar6 = local_138;
    puVar6[1] = uStack_130;
    puVar6[2] = local_128;
    puVar6[3] = uStack_120;
    puVar6[4] = local_118;
    OSSL_PARAM_construct_end(&local_138);
    puVar6[5] = local_138;
    puVar6[6] = uStack_130;
    puVar6[7] = local_128;
    puVar6[8] = uStack_120;
    puVar6[9] = local_118;
    iVar2 = EVP_KDF_derive(lVar5,param_1,param_2,&local_108);
    bVar1 = 0 < iVar2;
  }
  EVP_KDF_CTX_free(lVar5);
  EVP_KDF_free(uVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

