
int X509_ATTRIBUTE_set1_object(X509_ATTRIBUTE *attr,ASN1_OBJECT *obj)

{
  uint uVar1;
  ASN1_OBJECT *pAVar2;
  
  if (attr != (X509_ATTRIBUTE *)0x0) {
    uVar1 = 0;
    if (obj != (ASN1_OBJECT *)0x0) {
      ASN1_OBJECT_free(attr->object);
      pAVar2 = OBJ_dup(obj);
      attr->object = pAVar2;
      uVar1 = (uint)(pAVar2 != (ASN1_OBJECT *)0x0);
    }
    return uVar1;
  }
  return 0;
}

