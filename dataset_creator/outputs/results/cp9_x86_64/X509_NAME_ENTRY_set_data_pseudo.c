
int X509_NAME_ENTRY_set_data(X509_NAME_ENTRY *ne,int type,uchar *bytes,int len)

{
  int iVar1;
  size_t sVar2;
  ASN1_STRING *pAVar3;
  
  if ((ne != (X509_NAME_ENTRY *)0x0) && ((bytes != (uchar *)0x0 || (len == 0)))) {
    if ((0 < type) && ((type & 0x1000U) != 0)) {
      iVar1 = OBJ_obj2nid(ne->object);
      pAVar3 = ASN1_STRING_set_by_NID(&ne->value,bytes,len,type,iVar1);
      return (uint)(pAVar3 != (ASN1_STRING *)0x0);
    }
    if (len < 0) {
      sVar2 = strlen((char *)bytes);
      len = (int)sVar2;
    }
    iVar1 = ASN1_STRING_set(ne->value,bytes,len);
    if (iVar1 != 0) {
      if (type == -1) {
        return 1;
      }
      pAVar3 = ne->value;
      if (type == -2) {
        iVar1 = ASN1_PRINTABLE_type(bytes,len);
        pAVar3->type = iVar1;
        return 1;
      }
      pAVar3->type = type;
      return 1;
    }
  }
  return 0;
}

