
int ASN1_STRING_TABLE_add(int param_1,long param_2,long param_3,ulong param_4,ulong param_5)

{
  int iVar1;
  ASN1_STRING_TABLE *pAVar2;
  ASN1_STRING_TABLE *ptr;
  
  if ((stable != 0) || (stable = OPENSSL_sk_new(sk_table_cmp), stable != 0)) {
    pAVar2 = ASN1_STRING_TABLE_get(param_1);
    if ((pAVar2 != (ASN1_STRING_TABLE *)0x0) && ((pAVar2->flags & 1) != 0)) {
LAB_005a4072:
      if (-1 < param_2) {
        pAVar2->minsize = param_2;
      }
      if (-1 < param_3) {
        pAVar2->maxsize = param_3;
      }
      if (param_4 != 0) {
        pAVar2->mask = param_4;
      }
      if (param_5 == 0) {
        return 1;
      }
      pAVar2->flags = param_5 | 1;
      return 1;
    }
    ptr = (ASN1_STRING_TABLE *)CRYPTO_zalloc(0x28,"../crypto/asn1/a_strnid.c",0xa2);
    if (ptr == (ASN1_STRING_TABLE *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_strnid.c",0xa3,"stable_get");
      ERR_set_error(0xd,0xc0100,0);
    }
    else {
      iVar1 = OPENSSL_sk_push(stable,ptr);
      if (iVar1 != 0) {
        if (pAVar2 == (ASN1_STRING_TABLE *)0x0) {
          ptr->nid = param_1;
          ptr->minsize = -1;
          ptr->maxsize = -1;
          ptr->flags = 1;
          pAVar2 = ptr;
        }
        else {
          ptr->nid = pAVar2->nid;
          ptr->minsize = pAVar2->minsize;
          ptr->maxsize = pAVar2->maxsize;
          ptr->mask = pAVar2->mask;
          ptr->flags = pAVar2->flags | 1;
          pAVar2 = ptr;
        }
        goto LAB_005a4072;
      }
      CRYPTO_free(ptr);
    }
  }
  ERR_new();
  ERR_set_debug("../crypto/asn1/a_strnid.c",0xc1,"ASN1_STRING_TABLE_add");
  ERR_set_error(0xd,0xc0100,0);
  return 0;
}

