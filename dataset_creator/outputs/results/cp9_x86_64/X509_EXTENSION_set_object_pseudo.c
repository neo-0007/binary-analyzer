
int X509_EXTENSION_set_object(X509_EXTENSION *ex,ASN1_OBJECT *obj)

{
  uint uVar1;
  ASN1_OBJECT *pAVar2;
  
  if (ex != (X509_EXTENSION *)0x0) {
    uVar1 = 0;
    if (obj != (ASN1_OBJECT *)0x0) {
      ASN1_OBJECT_free(ex->object);
      pAVar2 = OBJ_dup(obj);
      ex->object = pAVar2;
      uVar1 = (uint)(pAVar2 != (ASN1_OBJECT *)0x0);
    }
    return uVar1;
  }
  return 0;
}

