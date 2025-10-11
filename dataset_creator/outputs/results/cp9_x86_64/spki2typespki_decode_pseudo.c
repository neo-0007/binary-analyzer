
int spki2typespki_decode
              (undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
              undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  X509_PUBKEY *pub;
  X509_PUBKEY *pXVar4;
  long in_FS_OFFSET;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_174;
  void *local_170;
  void *local_168;
  undefined8 local_160;
  X509_ALGOR *local_158;
  ASN1_OBJECT *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  char local_78 [56];
  long local_40;
  
  iVar2 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_174 = 2;
  local_158 = (X509_ALGOR *)0x0;
  local_150 = (ASN1_OBJECT *)0x0;
  iVar1 = ossl_read_der(*param_1,param_2,&local_170,&local_160);
  if (iVar1 == 0) goto LAB_00453ab7;
  local_168 = local_170;
  uVar3 = ossl_prov_ctx_get0_libctx(*param_1);
  pub = (X509_PUBKEY *)ossl_d2i_X509_PUBKEY_INTERNAL(&local_168,local_160,uVar3);
  pXVar4 = pub;
  if (pub != (X509_PUBKEY *)0x0) {
    iVar2 = X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,(uchar **)0x0,(int *)0x0,&local_158,pub);
    if (iVar2 != 0) {
      X509_ALGOR_get0(&local_150,(int *)0x0,(void **)0x0,local_158);
      iVar1 = OBJ_obj2nid(local_150);
      if (iVar1 == 0x198) {
        iVar1 = ossl_x509_algor_is_sm2(local_158);
        if (iVar1 == 0) goto LAB_00453b80;
        builtin_strncpy(local_78,"SM2",4);
      }
      else {
LAB_00453b80:
        iVar2 = 0;
        iVar1 = OBJ_obj2txt(local_78,0x32,local_150,0);
        if (iVar1 < 1) goto LAB_00453b2e;
      }
      pXVar4 = (X509_PUBKEY *)0x0;
      ossl_X509_PUBKEY_INTERNAL_free(pub);
      OSSL_PARAM_construct_utf8_string(&local_1a8,"data-type",local_78,0);
      local_148 = local_1a8;
      uStack_140 = uStack_1a0;
      local_138 = local_198;
      uStack_130 = uStack_190;
      local_128 = local_188;
      OSSL_PARAM_construct_utf8_string(&local_1a8,"data-structure","SubjectPublicKeyInfo",0);
      local_120 = local_1a8;
      uStack_118 = uStack_1a0;
      local_110 = local_198;
      uStack_108 = uStack_190;
      local_100 = local_188;
      OSSL_PARAM_construct_octet_string(&local_1a8,"data",local_170,local_160);
      local_f8 = local_1a8;
      uStack_f0 = uStack_1a0;
      local_e8 = local_198;
      uStack_e0 = uStack_190;
      local_d8 = local_188;
      OSSL_PARAM_construct_int(&local_1a8,"type",&local_174);
      local_b0 = local_188;
      local_d0 = local_1a8;
      uStack_c8 = uStack_1a0;
      local_c0 = local_198;
      uStack_b8 = uStack_190;
      OSSL_PARAM_construct_end(&local_1a8);
      local_a8 = local_1a8;
      uStack_a0 = uStack_1a0;
      local_88 = local_188;
      local_98 = local_198;
      uStack_90 = uStack_190;
      iVar2 = (*param_4)(&local_148,param_5);
    }
  }
LAB_00453b2e:
  ossl_X509_PUBKEY_INTERNAL_free(pXVar4);
  CRYPTO_free(local_170);
LAB_00453ab7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

