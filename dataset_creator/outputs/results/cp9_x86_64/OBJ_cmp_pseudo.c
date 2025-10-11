
int OBJ_cmp(ASN1_OBJECT *a,ASN1_OBJECT *b)

{
  int iVar1;
  
  iVar1 = a->length - b->length;
  if (iVar1 == 0) {
    iVar1 = bcmp(a->data,b->data,(long)a->length);
    return iVar1;
  }
  return iVar1;
}

