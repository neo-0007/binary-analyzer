
int ASN1_STRING_cmp(ASN1_STRING *a,ASN1_STRING *b)

{
  int iVar1;
  int iVar2;
  
  iVar2 = a->length;
  iVar1 = iVar2 - b->length;
  if (iVar1 != 0) {
    return iVar1;
  }
  if (iVar2 != 0) {
    iVar2 = bcmp(a->data,b->data,(long)iVar2);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  return a->type - b->type;
}

