
int PKCS5_v2_PBKDF2_keyivgen_ex
              (EVP_CIPHER_CTX *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,
              undefined8 param_9)

{
  ASN1_STRING *pAVar1;
  uchar *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  PBKDF2PARAM *a;
  ulong uVar8;
  char *pcVar9;
  EVP_MD *pEVar10;
  EVP_MD *pEVar11;
  size_t len;
  long in_FS_OFFSET;
  int local_8c;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = EVP_CIPHER_CTX_get0_cipher();
  if (lVar6 == 0) {
    pEVar10 = (EVP_MD *)0x0;
    len = 0;
    iVar4 = 0;
    ERR_new();
    ERR_set_debug("../crypto/evp/p5_crpt2.c",0xc1,"PKCS5_v2_PBKDF2_keyivgen_ex");
    ERR_set_error(6,0x83,0);
    a = (PBKDF2PARAM *)0x0;
    goto LAB_0052ef70;
  }
  uVar3 = EVP_CIPHER_CTX_get_key_length(param_1);
  len = (size_t)uVar3;
  if (0x40 < uVar3) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: keylen <= sizeof(key)","../crypto/evp/p5_crpt2.c",0xc5);
  }
  uVar7 = PBKDF2PARAM_it();
  a = (PBKDF2PARAM *)ASN1_TYPE_unpack_sequence(uVar7,param_4);
  if (a == (PBKDF2PARAM *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/p5_crpt2.c",0xcc,"PKCS5_v2_PBKDF2_keyivgen_ex");
    uVar7 = 0x72;
  }
  else {
    iVar4 = EVP_CIPHER_CTX_get_key_length(param_1);
    if (-1 < iVar4) {
      len = (size_t)iVar4;
      if (a->keylength != (ASN1_INTEGER *)0x0) {
        uVar8 = ASN1_INTEGER_get(a->keylength);
        if (uVar8 != len) {
          ERR_new();
          ERR_set_debug("../crypto/evp/p5_crpt2.c",0xda,"PKCS5_v2_PBKDF2_keyivgen_ex");
          uVar7 = 0x7b;
          goto LAB_0052f0ac;
        }
      }
      iVar5 = 0xa3;
      if (a->prf != (X509_ALGOR *)0x0) {
        iVar5 = OBJ_obj2nid(a->prf->algorithm);
      }
      iVar5 = EVP_PBE_find(1,iVar5,(int *)0x0,&local_8c,(undefined1 **)0x0);
      if (iVar5 == 0) {
        ERR_new();
        pEVar10 = (EVP_MD *)0x0;
        ERR_set_debug("../crypto/evp/p5_crpt2.c",0xe4,"PKCS5_v2_PBKDF2_keyivgen_ex");
        ERR_set_error(6,0x7d,0);
        iVar4 = 0;
        goto LAB_0052ef70;
      }
      pcVar9 = OBJ_nid2sn(local_8c);
      pEVar10 = (EVP_MD *)EVP_MD_fetch(param_8,pcVar9,param_9);
      pEVar11 = pEVar10;
      if (pEVar10 == (EVP_MD *)0x0) {
        pcVar9 = OBJ_nid2sn(local_8c);
        pEVar11 = EVP_get_digestbyname(pcVar9);
        if (pEVar11 != (EVP_MD *)0x0) goto LAB_0052eeea;
        ERR_new();
        ERR_set_debug("../crypto/evp/p5_crpt2.c",0xec,"PKCS5_v2_PBKDF2_keyivgen_ex");
        uVar7 = 0x7d;
      }
      else {
LAB_0052eeea:
        if (a->salt->type == 4) {
          pAVar1 = (a->salt->value).asn1_string;
          iVar5 = pAVar1->length;
          puVar2 = pAVar1->data;
          uVar8 = ASN1_INTEGER_get(a->iter);
          iVar4 = ossl_pkcs5_pbkdf2_hmac_ex
                            (param_2,param_3,puVar2,iVar5,uVar8 & 0xffffffff,pEVar11,iVar4,local_88,
                             param_8,param_9);
          if (iVar4 != 0) {
            iVar4 = EVP_CipherInit_ex(param_1,(EVP_CIPHER *)0x0,(ENGINE *)0x0,local_88,(uchar *)0x0,
                                      param_7);
          }
          goto LAB_0052ef70;
        }
        ERR_new();
        ERR_set_debug("../crypto/evp/p5_crpt2.c",0xf1,"PKCS5_v2_PBKDF2_keyivgen_ex");
        uVar7 = 0x7e;
      }
      iVar4 = 0;
      ERR_set_error(6,uVar7,0);
      goto LAB_0052ef70;
    }
    ERR_new();
    ERR_set_debug("../crypto/evp/p5_crpt2.c",0xd2,"PKCS5_v2_PBKDF2_keyivgen_ex");
    uVar7 = 0x82;
  }
LAB_0052f0ac:
  pEVar10 = (EVP_MD *)0x0;
  iVar4 = 0;
  ERR_set_error(6,uVar7,0);
LAB_0052ef70:
  OPENSSL_cleanse(local_88,len);
  PBKDF2PARAM_free(a);
  EVP_MD_free(pEVar10);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

