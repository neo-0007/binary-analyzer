
X509_ALGOR *
PKCS5_pbe2_set_iv_ex
          (EVP_CIPHER *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,long param_5
          ,int param_6,undefined8 param_7)

{
  int n;
  int iVar1;
  undefined4 uVar2;
  PBE2PARAM *a;
  ASN1_OBJECT *pAVar3;
  ASN1_TYPE *pAVar4;
  EVP_CIPHER_CTX *ctx;
  X509_ALGOR *pXVar5;
  X509_ALGOR *pXVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  int local_5c;
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c = param_6;
  n = EVP_CIPHER_get_type();
  if (n == 0) {
    ERR_new();
    a = (PBE2PARAM *)0x0;
    ctx = (EVP_CIPHER_CTX *)0x0;
    pXVar5 = (X509_ALGOR *)0x0;
    ERR_set_debug("../crypto/asn1/p5_pbev2.c",0x37,"PKCS5_pbe2_set_iv_ex");
    ERR_set_error(0xd,0x6c,0);
  }
  else {
    a = PBE2PARAM_new();
    if (a == (PBE2PARAM *)0x0) {
LAB_005a8c80:
      pXVar6 = (X509_ALGOR *)0x0;
    }
    else {
      pXVar5 = a->encryption;
      pAVar3 = OBJ_nid2obj(n);
      pXVar5->algorithm = pAVar3;
      pAVar4 = ASN1_TYPE_new();
      pXVar5->parameter = pAVar4;
      if (pAVar4 == (ASN1_TYPE *)0x0) goto LAB_005a8c80;
      iVar1 = EVP_CIPHER_get_iv_length(param_1);
      if (0 < iVar1) {
        if (param_5 != 0) {
          __memcpy_chk(local_58,param_5);
          goto LAB_005a8b9c;
        }
        iVar1 = RAND_bytes_ex(param_7,local_58,(long)iVar1);
        if (0 < iVar1) goto LAB_005a8b9c;
        ctx = (EVP_CIPHER_CTX *)0x0;
LAB_005a8d60:
        pXVar5 = (X509_ALGOR *)0x0;
        goto LAB_005a8cb5;
      }
LAB_005a8b9c:
      ctx = EVP_CIPHER_CTX_new();
      if (ctx == (EVP_CIPHER_CTX *)0x0) goto LAB_005a8c80;
      iVar1 = EVP_CipherInit_ex(ctx,param_1,(ENGINE *)0x0,(uchar *)0x0,local_58,0);
      if (iVar1 == 0) goto LAB_005a8d60;
      iVar1 = EVP_CIPHER_param_to_asn1(ctx,pXVar5->parameter);
      if (iVar1 < 1) {
        ERR_new();
        pXVar5 = (X509_ALGOR *)0x0;
        ERR_set_debug("../crypto/asn1/p5_pbev2.c",0x55,"PKCS5_pbe2_set_iv_ex");
        ERR_set_error(0xd,0x72,0);
        goto LAB_005a8cb5;
      }
      ERR_set_mark();
      if (local_5c == -1) {
        iVar1 = EVP_CIPHER_CTX_ctrl(ctx,7,0,&local_5c);
        if (iVar1 < 1) {
          local_5c = 799;
        }
      }
      ERR_pop_to_mark();
      uVar2 = 0xffffffff;
      EVP_CIPHER_CTX_free(ctx);
      if (n == 0x25) {
        uVar2 = EVP_CIPHER_get_key_length(param_1);
      }
      X509_ALGOR_free(a->keyfunc);
      pXVar5 = (X509_ALGOR *)PKCS5_pbkdf2_set_ex(param_2,param_3,param_4,local_5c,uVar2,param_7);
      a->keyfunc = pXVar5;
      if (pXVar5 == (X509_ALGOR *)0x0) goto LAB_005a8c80;
      pXVar6 = X509_ALGOR_new();
      if (pXVar6 == (X509_ALGOR *)0x0) goto LAB_005a8c80;
      pAVar3 = OBJ_nid2obj(0xa1);
      pXVar6->algorithm = pAVar3;
      uVar7 = PBE2PARAM_it();
      lVar8 = ASN1_TYPE_pack_sequence(uVar7,a,&pXVar6->parameter);
      if (lVar8 != 0) {
        PBE2PARAM_free(a);
        goto LAB_005a8cd0;
      }
    }
    ERR_new();
    ctx = (EVP_CIPHER_CTX *)0x0;
    ERR_set_debug("../crypto/asn1/p5_pbev2.c",0x89,"PKCS5_pbe2_set_iv_ex");
    ERR_set_error(0xd,0xc0100,0);
    pXVar5 = pXVar6;
  }
LAB_005a8cb5:
  EVP_CIPHER_CTX_free(ctx);
  PBE2PARAM_free(a);
  pXVar6 = (X509_ALGOR *)0x0;
  X509_ALGOR_free(pXVar5);
LAB_005a8cd0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pXVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

