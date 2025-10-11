
X509_ALGOR *
PKCS5_pbe2_set_scrypt
          (EVP_CIPHER *param_1,void *param_2,int param_3,long param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  PBE2PARAM *a;
  ASN1_OBJECT *pAVar3;
  ASN1_TYPE *pAVar4;
  EVP_CIPHER_CTX *ctx;
  long *plVar5;
  ASN1_INTEGER *pAVar6;
  undefined8 uVar7;
  long lVar8;
  X509_ALGOR *pXVar9;
  long in_FS_OFFSET;
  X509_ALGOR *local_68;
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (EVP_CIPHER *)0x0) {
    ERR_new();
    a = (PBE2PARAM *)0x0;
    ctx = (EVP_CIPHER_CTX *)0x0;
    ERR_set_debug("../crypto/asn1/p5_scrypt.c",0x36,"PKCS5_pbe2_set_scrypt");
    ERR_set_error(0xd,0xc0102,0);
    pXVar9 = (X509_ALGOR *)0x0;
  }
  else {
    iVar1 = EVP_PBE_scrypt(0,0,0,0,param_5,param_6,param_7,0,0,0);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/p5_scrypt.c",0x3b,"PKCS5_pbe2_set_scrypt");
      uVar7 = 0xe3;
    }
    else {
      iVar1 = EVP_CIPHER_get_type(param_1);
      if (iVar1 != 0) {
        a = PBE2PARAM_new();
        if (a == (PBE2PARAM *)0x0) {
LAB_006141e8:
          pXVar9 = (X509_ALGOR *)0x0;
        }
        else {
          pXVar9 = a->encryption;
          pAVar3 = OBJ_nid2obj(iVar1);
          pXVar9->algorithm = pAVar3;
          pAVar4 = ASN1_TYPE_new();
          pXVar9->parameter = pAVar4;
          if (pAVar4 == (ASN1_TYPE *)0x0) goto LAB_006141e8;
          iVar2 = EVP_CIPHER_get_iv_length(param_1);
          if (iVar2 != 0) {
            if (param_4 != 0) {
              iVar2 = EVP_CIPHER_get_iv_length(param_1);
              __memcpy_chk(local_58,param_4,(long)iVar2);
              goto LAB_0061403a;
            }
            iVar2 = EVP_CIPHER_get_iv_length(param_1);
            iVar2 = RAND_bytes(local_58,iVar2);
            ctx = (EVP_CIPHER_CTX *)0x0;
            if (0 < iVar2) goto LAB_0061403a;
LAB_00614350:
            pXVar9 = (X509_ALGOR *)0x0;
            goto LAB_00614220;
          }
LAB_0061403a:
          ctx = EVP_CIPHER_CTX_new();
          if (ctx == (EVP_CIPHER_CTX *)0x0) goto LAB_006141e8;
          iVar2 = EVP_CipherInit_ex(ctx,param_1,(ENGINE *)0x0,(uchar *)0x0,local_58,0);
          if (iVar2 == 0) goto LAB_00614350;
          iVar2 = EVP_CIPHER_param_to_asn1(ctx,pXVar9->parameter);
          if (iVar2 < 1) {
            ERR_new();
            pXVar9 = (X509_ALGOR *)0x0;
            ERR_set_debug("../crypto/asn1/p5_scrypt.c",0x61,"PKCS5_pbe2_set_scrypt");
            ERR_set_error(0xd,0x72,0);
            goto LAB_00614220;
          }
          lVar8 = 0;
          EVP_CIPHER_CTX_free(ctx);
          if (iVar1 == 0x25) {
            iVar1 = EVP_CIPHER_get_key_length(param_1);
            lVar8 = (long)iVar1;
          }
          X509_ALGOR_free(a->keyfunc);
          plVar5 = (long *)SCRYPT_PARAMS_new();
          if (plVar5 == (long *)0x0) {
LAB_00614268:
            local_68 = (X509_ALGOR *)0x0;
LAB_00614271:
            ERR_new();
            ERR_set_debug("../crypto/asn1/p5_scrypt.c",0xcc,"pkcs5_scrypt_set");
            ERR_set_error(0xd,0xc0100,0);
LAB_006142a4:
            pXVar9 = (X509_ALGOR *)0x0;
            SCRYPT_PARAMS_free(plVar5);
            X509_ALGOR_free(local_68);
            a->keyfunc = (X509_ALGOR *)0x0;
          }
          else {
            iVar1 = 8;
            if (param_3 != 0) {
              iVar1 = param_3;
            }
            iVar2 = ASN1_STRING_set((ASN1_STRING *)*plVar5,param_2,iVar1);
            if (iVar2 == 0) goto LAB_00614268;
            if ((param_2 == (void *)0x0) &&
               (iVar1 = RAND_bytes(*(uchar **)(*plVar5 + 8),iVar1), iVar1 < 1)) {
              local_68 = (X509_ALGOR *)0x0;
              goto LAB_006142a4;
            }
            iVar1 = ASN1_INTEGER_set_uint64(plVar5[1],param_5);
            if (((iVar1 == 0) || (iVar1 = ASN1_INTEGER_set_uint64(plVar5[2],param_6), iVar1 == 0))
               || (iVar1 = ASN1_INTEGER_set_uint64(plVar5[3],param_7), iVar1 == 0))
            goto LAB_00614268;
            if (lVar8 != 0) {
              pAVar6 = ASN1_INTEGER_new();
              plVar5[4] = (long)pAVar6;
              if ((pAVar6 == (ASN1_INTEGER *)0x0) ||
                 (iVar1 = ASN1_INTEGER_set_int64(pAVar6,lVar8), iVar1 == 0)) goto LAB_00614268;
            }
            local_68 = X509_ALGOR_new();
            if (local_68 == (X509_ALGOR *)0x0) goto LAB_00614268;
            pAVar3 = OBJ_nid2obj(0x3cd);
            local_68->algorithm = pAVar3;
            uVar7 = SCRYPT_PARAMS_it();
            lVar8 = ASN1_TYPE_pack_sequence(uVar7,plVar5,&local_68->parameter);
            if (lVar8 == 0) goto LAB_00614271;
            SCRYPT_PARAMS_free(plVar5);
            a->keyfunc = local_68;
            pXVar9 = X509_ALGOR_new();
            if (pXVar9 == (X509_ALGOR *)0x0) goto LAB_006141e8;
            pAVar3 = OBJ_nid2obj(0xa1);
            pXVar9->algorithm = pAVar3;
            uVar7 = PBE2PARAM_it();
            lVar8 = ASN1_TYPE_pack_sequence(uVar7,a,&pXVar9->parameter);
            if (lVar8 != 0) {
              PBE2PARAM_free(a);
              goto LAB_0061423b;
            }
          }
        }
        ERR_new();
        ctx = (EVP_CIPHER_CTX *)0x0;
        ERR_set_debug("../crypto/asn1/p5_scrypt.c",0x89,"PKCS5_pbe2_set_scrypt");
        ERR_set_error(0xd,0xc0100,0);
        goto LAB_00614220;
      }
      ERR_new();
      ERR_set_debug("../crypto/asn1/p5_scrypt.c",0x41,"PKCS5_pbe2_set_scrypt");
      uVar7 = 0x6c;
    }
    a = (PBE2PARAM *)0x0;
    ctx = (EVP_CIPHER_CTX *)0x0;
    ERR_set_error(0xd,uVar7,0);
    pXVar9 = (X509_ALGOR *)0x0;
  }
LAB_00614220:
  PBE2PARAM_free(a);
  X509_ALGOR_free(pXVar9);
  pXVar9 = (X509_ALGOR *)0x0;
  EVP_CIPHER_CTX_free(ctx);
LAB_0061423b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pXVar9;
}

