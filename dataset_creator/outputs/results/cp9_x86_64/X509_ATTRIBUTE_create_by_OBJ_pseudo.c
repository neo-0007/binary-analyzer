
X509_ATTRIBUTE *
X509_ATTRIBUTE_create_by_OBJ(X509_ATTRIBUTE **attr,ASN1_OBJECT *obj,int atrtype,void *data,int len)

{
  int iVar1;
  X509_ATTRIBUTE *attr_00;
  
  if ((attr == (X509_ATTRIBUTE **)0x0) || (attr_00 = *attr, attr_00 == (X509_ATTRIBUTE *)0x0)) {
    attr_00 = X509_ATTRIBUTE_new();
    if (attr_00 == (X509_ATTRIBUTE *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/x509/x509_att.c",0xd7,"X509_ATTRIBUTE_create_by_OBJ");
      ERR_set_error(0xb,0xc0100,0);
      return (X509_ATTRIBUTE *)0x0;
    }
    iVar1 = X509_ATTRIBUTE_set1_object(attr_00,obj);
    if ((iVar1 != 0) && (iVar1 = X509_ATTRIBUTE_set1_data(attr_00,atrtype,data,len), iVar1 != 0)) {
      if (attr == (X509_ATTRIBUTE **)0x0) {
        return attr_00;
      }
      goto LAB_0058aec4;
    }
    if ((attr != (X509_ATTRIBUTE **)0x0) && (*attr == attr_00)) {
      return (X509_ATTRIBUTE *)0x0;
    }
  }
  else {
    iVar1 = X509_ATTRIBUTE_set1_object(attr_00,obj);
    if ((iVar1 != 0) && (iVar1 = X509_ATTRIBUTE_set1_data(attr_00,atrtype,data,len), iVar1 != 0)) {
LAB_0058aec4:
      if (*attr == (X509_ATTRIBUTE *)0x0) {
        *attr = attr_00;
        return attr_00;
      }
      return attr_00;
    }
    if (*attr == attr_00) {
      return (X509_ATTRIBUTE *)0x0;
    }
  }
  X509_ATTRIBUTE_free(attr_00);
  return (X509_ATTRIBUTE *)0x0;
}

