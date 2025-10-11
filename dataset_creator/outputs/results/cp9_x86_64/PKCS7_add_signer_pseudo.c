
int PKCS7_add_signer(PKCS7 *p7,PKCS7_SIGNER_INFO *p7i)

{
  stack_st_PKCS7_SIGNER_INFO *psVar1;
  stack_st_X509_ALGOR *psVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  X509_ALGOR *a;
  ASN1_TYPE *pAVar6;
  ASN1_OBJECT *pAVar7;
  ASN1_INTEGER *pAVar8;
  
  iVar3 = OBJ_obj2nid(p7->type);
  if ((iVar3 != 0x16) && (iVar3 != 0x18)) {
    ERR_new();
    ERR_set_debug("../crypto/pkcs7/pk7_lib.c",0xcf,"PKCS7_add_signer");
    ERR_set_error(0x21,0x71,0);
    return 0;
  }
  psVar1 = ((p7->d).sign)->signer_info;
  psVar2 = ((p7->d).sign)->md_algs;
  pAVar7 = p7i->digest_alg->algorithm;
  for (iVar3 = 0; iVar4 = OPENSSL_sk_num(psVar2), iVar3 < iVar4; iVar3 = iVar3 + 1) {
    puVar5 = (undefined8 *)OPENSSL_sk_value(psVar2,iVar3);
    iVar4 = OBJ_cmp(pAVar7,(ASN1_OBJECT *)*puVar5);
    if (iVar4 == 0) goto LAB_0054acb0;
  }
  a = X509_ALGOR_new();
  if (a != (X509_ALGOR *)0x0) {
    pAVar6 = ASN1_TYPE_new();
    a->parameter = pAVar6;
    if (pAVar6 != (ASN1_TYPE *)0x0) {
      iVar3 = OBJ_obj2nid(pAVar7);
      if (iVar3 == 0) {
        pAVar7 = OBJ_dup(pAVar7);
      }
      else {
        pAVar7 = OBJ_nid2obj(iVar3);
      }
      a->algorithm = pAVar7;
      a->parameter->type = 5;
      if ((pAVar7 == (ASN1_OBJECT *)0x0) || (iVar3 = OPENSSL_sk_push(psVar2,a), iVar3 == 0)) {
        X509_ALGOR_free(a);
        return 0;
      }
LAB_0054acb0:
      pAVar8 = (ASN1_INTEGER *)ossl_pkcs7_get0_ctx(p7);
      p7i[1].version = pAVar8;
      iVar3 = OPENSSL_sk_push(psVar1,p7i);
      return (int)(iVar3 != 0);
    }
  }
  X509_ALGOR_free(a);
  ERR_new();
  ERR_set_debug("../crypto/pkcs7/pk7_lib.c",0xe3,"PKCS7_add_signer");
  ERR_set_error(0x21,0xc0100,0);
  return 0;
}

