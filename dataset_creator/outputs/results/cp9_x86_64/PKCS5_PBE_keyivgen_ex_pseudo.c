
int PKCS5_PBE_keyivgen_ex
              (EVP_CIPHER_CTX *param_1,char *param_2,int param_3,int *param_4,EVP_CIPHER *param_5,
              undefined8 param_6,int param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  PBEPARAM *a;
  long lVar8;
  size_t sVar9;
  uchar *puVar10;
  long in_FS_OFFSET;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [64];
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = EVP_MD_get0_name(param_6);
  if (((param_4 == (int *)0x0) || (*param_4 != 0x10)) || (*(long *)(param_4 + 2) == 0)) {
    ERR_new();
    uVar6 = 0x2f;
  }
  else {
    uVar7 = PBEPARAM_it();
    a = (PBEPARAM *)ASN1_TYPE_unpack_sequence(uVar7,param_4);
    if (a != (PBEPARAM *)0x0) {
      uVar1 = EVP_CIPHER_get_iv_length(param_5);
      if (uVar1 < 0x11) {
        uVar2 = EVP_CIPHER_get_key_length(param_5);
        if (0x40 < uVar2) {
          ERR_new();
          ERR_set_debug("../crypto/evp/p5_crpt.c",0x40,"PKCS5_PBE_keyivgen_ex");
          uVar6 = 0x82;
          goto LAB_005f56c4;
        }
        local_1ac = 1;
        if (a->iter != (ASN1_INTEGER *)0x0) {
          lVar8 = ASN1_INTEGER_get(a->iter);
          local_1ac = (undefined4)lVar8;
        }
        puVar10 = a->salt->data;
        iVar4 = a->salt->length;
        if (param_2 == (char *)0x0) {
          param_3 = 0;
        }
        else if (param_3 == -1) {
          sVar9 = strlen(param_2);
          param_3 = (int)sVar9;
        }
        iVar3 = EVP_MD_get_size(param_6);
        if (iVar3 < 0) goto LAB_005f56d0;
        uVar7 = EVP_KDF_fetch(param_8,"PBKDF1",param_9);
        lVar8 = EVP_KDF_CTX_new(uVar7);
        EVP_KDF_free(uVar7);
        if (lVar8 == 0) goto LAB_005f56d0;
        iVar5 = 0;
        OSSL_PARAM_construct_octet_string(&local_1e8,"pass",param_2,(long)param_3);
        local_1a8 = local_1e8;
        uStack_1a0 = uStack_1e0;
        local_198 = local_1d8;
        uStack_190 = uStack_1d0;
        local_188 = local_1c8;
        OSSL_PARAM_construct_octet_string(&local_1e8,"salt",puVar10,(long)iVar4);
        local_180 = local_1e8;
        uStack_178 = uStack_1e0;
        local_170 = local_1d8;
        uStack_168 = uStack_1d0;
        local_160 = local_1c8;
        OSSL_PARAM_construct_int(&local_1e8,"iter",&local_1ac);
        local_158 = local_1e8;
        uStack_150 = uStack_1e0;
        local_148 = local_1d8;
        uStack_140 = uStack_1d0;
        local_138 = local_1c8;
        OSSL_PARAM_construct_utf8_string(&local_1e8,"digest",uVar6,0);
        local_110 = local_1c8;
        local_130 = local_1e8;
        uStack_128 = uStack_1e0;
        local_120 = local_1d8;
        uStack_118 = uStack_1d0;
        OSSL_PARAM_construct_end(&local_1e8);
        local_108 = local_1e8;
        uStack_100 = uStack_1e0;
        local_e8 = local_1c8;
        local_f8 = local_1d8;
        uStack_f0 = uStack_1d0;
        iVar4 = EVP_KDF_derive(lVar8,local_c8,(long)iVar3,&local_1a8);
        if (iVar4 == 1) {
          __memcpy_chk(local_88,local_c8,(long)(int)uVar2,0x40);
          puVar10 = (uchar *)__memcpy_chk(local_d8,local_c8 + (int)(0x10 - uVar1),(long)(int)uVar1,
                                          0x10);
          iVar5 = EVP_CipherInit_ex(param_1,param_5,(ENGINE *)0x0,local_88,puVar10,param_7);
          if (iVar5 != 0) {
            iVar5 = 1;
            OPENSSL_cleanse(local_c8,0x40);
            OPENSSL_cleanse(local_88,0x40);
            OPENSSL_cleanse(puVar10,0x10);
          }
        }
      }
      else {
        ERR_new();
        ERR_set_debug("../crypto/evp/p5_crpt.c",0x3b,"PKCS5_PBE_keyivgen_ex");
        uVar6 = 0xc2;
LAB_005f56c4:
        ERR_set_error(6,uVar6,0);
LAB_005f56d0:
        lVar8 = 0;
        iVar5 = 0;
      }
      EVP_KDF_CTX_free(lVar8);
      PBEPARAM_free(a);
      goto LAB_005f539a;
    }
    ERR_new();
    uVar6 = 0x35;
  }
  iVar5 = 0;
  ERR_set_debug("../crypto/evp/p5_crpt.c",uVar6,"PKCS5_PBE_keyivgen_ex");
  ERR_set_error(6,0x72,0);
LAB_005f539a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

