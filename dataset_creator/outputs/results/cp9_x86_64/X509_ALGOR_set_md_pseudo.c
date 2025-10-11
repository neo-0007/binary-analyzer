
void X509_ALGOR_set_md(X509_ALGOR *alg,EVP_MD *md)

{
  ulong uVar1;
  int n;
  ASN1_OBJECT *aobj;
  
  uVar1 = md->flags;
  n = EVP_MD_get_type(md);
  aobj = OBJ_nid2obj(n);
  X509_ALGOR_set0(alg,aobj,(-(uint)((uVar1 & 8) == 0) & 6) - 1,(void *)0x0);
  return;
}

