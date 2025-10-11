
int PKCS7_set_digest(PKCS7 *p7,EVP_MD *md)

{
  X509_ALGOR *pXVar1;
  int iVar2;
  ASN1_TYPE *pAVar3;
  ASN1_OBJECT *pAVar4;
  
  iVar2 = OBJ_obj2nid(p7->type);
  if (iVar2 != 0x19) {
    ERR_new();
    ERR_set_debug("../crypto/pkcs7/pk7_lib.c",0x214,"PKCS7_set_digest");
    ERR_set_error(0x21,0x71,0);
    return 1;
  }
  pXVar1 = ((p7->d).digest)->md;
  pAVar3 = ASN1_TYPE_new();
  pXVar1->parameter = pAVar3;
  if (pAVar3 != (ASN1_TYPE *)0x0) {
    ((p7->d).digest)->md->parameter->type = 5;
    iVar2 = EVP_MD_get_type(md);
    pXVar1 = ((p7->d).digest)->md;
    pAVar4 = OBJ_nid2obj(iVar2);
    pXVar1->algorithm = pAVar4;
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/pkcs7/pk7_lib.c",0x20c,"PKCS7_set_digest");
  ERR_set_error(0x21,0xc0100,0);
  return 0;
}

