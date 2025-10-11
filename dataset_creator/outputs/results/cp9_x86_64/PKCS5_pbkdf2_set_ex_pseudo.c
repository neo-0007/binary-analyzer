
X509_ALGOR *
PKCS5_pbkdf2_set_ex(int param_1,void *param_2,int param_3,int param_4,int param_5,undefined8 param_6
                   )

{
  ASN1_TYPE *pAVar1;
  int iVar2;
  PBKDF2PARAM *a;
  ASN1_OCTET_STRING *pAVar3;
  uchar *__dest;
  X509_ALGOR *pXVar4;
  ASN1_OBJECT *pAVar5;
  undefined8 uVar6;
  long lVar7;
  ASN1_INTEGER *pAVar8;
  size_t __n;
  
  a = PBKDF2PARAM_new();
  if ((a != (PBKDF2PARAM *)0x0) &&
     (pAVar3 = ASN1_OCTET_STRING_new(), pAVar3 != (ASN1_OCTET_STRING *)0x0)) {
    pAVar1 = a->salt;
    (pAVar1->value).octet_string = pAVar3;
    pAVar1->type = 4;
    if (-1 < param_3) {
      __n = (size_t)param_3;
      if (param_3 == 0) {
        __n = 8;
        param_3 = 8;
      }
      __dest = (uchar *)CRYPTO_malloc((int)__n,"../crypto/asn1/p5_pbev2.c",0xb8);
      pAVar3->data = __dest;
      if (__dest != (uchar *)0x0) {
        pAVar3->length = param_3;
        if (param_2 == (void *)0x0) {
          iVar2 = RAND_bytes_ex(param_6,__dest,__n);
          if (iVar2 < 1) goto LAB_005a8a27;
        }
        else {
          memcpy(__dest,param_2,__n);
        }
        if (param_1 < 1) {
          param_1 = 0x800;
        }
        iVar2 = ASN1_INTEGER_set(a->iter,(long)param_1);
        if (iVar2 != 0) {
          if (0 < param_5) {
            pAVar8 = ASN1_INTEGER_new();
            a->keylength = pAVar8;
            if ((pAVar8 == (ASN1_INTEGER *)0x0) ||
               (iVar2 = ASN1_INTEGER_set(pAVar8,(long)param_5), iVar2 == 0)) goto LAB_005a8a27;
          }
          if ((0 < param_4) && (param_4 != 0xa3)) {
            pXVar4 = X509_ALGOR_new();
            a->prf = pXVar4;
            if (pXVar4 == (X509_ALGOR *)0x0) goto LAB_005a8a27;
            pAVar5 = OBJ_nid2obj(param_4);
            X509_ALGOR_set0(a->prf,pAVar5,5,(void *)0x0);
          }
          pXVar4 = X509_ALGOR_new();
          if (pXVar4 != (X509_ALGOR *)0x0) {
            pAVar5 = OBJ_nid2obj(0x45);
            pXVar4->algorithm = pAVar5;
            uVar6 = PBKDF2PARAM_it();
            lVar7 = ASN1_TYPE_pack_sequence(uVar6,a,&pXVar4->parameter);
            if (lVar7 != 0) {
              PBKDF2PARAM_free(a);
              return pXVar4;
            }
            goto LAB_005a8a2a;
          }
        }
      }
    }
  }
LAB_005a8a27:
  pXVar4 = (X509_ALGOR *)0x0;
LAB_005a8a2a:
  ERR_new();
  ERR_set_debug("../crypto/asn1/p5_pbev2.c",0xeb,"PKCS5_pbkdf2_set_ex");
  ERR_set_error(0xd,0xc0100,0);
  PBKDF2PARAM_free(a);
  X509_ALGOR_free(pXVar4);
  return (X509_ALGOR *)0x0;
}

