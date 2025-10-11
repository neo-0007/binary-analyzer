
int X509_ATTRIBUTE_set1_data(X509_ATTRIBUTE *attr,int attrtype,void *data,int len)

{
  int iVar1;
  int iVar2;
  ASN1_STRING *str;
  ASN1_TYPE *a;
  
  if (attr == (X509_ATTRIBUTE *)0x0) {
    return 0;
  }
  if ((attrtype & 0x1000U) == 0) {
    str = (ASN1_STRING *)0x0;
    if (len == -1) {
      iVar2 = 0;
    }
    else {
      str = ASN1_STRING_type_new(attrtype);
      if ((str == (ASN1_STRING *)0x0) ||
         (iVar1 = ASN1_STRING_set(str,data,len), iVar2 = attrtype, iVar1 == 0)) {
        a = (ASN1_TYPE *)0x0;
        goto LAB_0058ad27;
      }
    }
    if (attrtype == 0) {
      ASN1_STRING_free(str);
      return 1;
    }
    a = ASN1_TYPE_new();
    if (a == (ASN1_TYPE *)0x0) goto LAB_0058ad27;
    if (len != -1) goto LAB_0058adbf;
    iVar2 = ASN1_TYPE_set1(a,attrtype,data);
    if (iVar2 == 0) goto LAB_0058ad27;
  }
  else {
    iVar2 = OBJ_obj2nid(attr->object);
    str = ASN1_STRING_set_by_NID((ASN1_STRING **)0x0,(uchar *)data,len,attrtype,iVar2);
    if (str == (ASN1_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/x509/x509_att.c",0x113,"X509_ATTRIBUTE_set1_data");
      ERR_set_error(0xb,0x8000d,0);
      return 0;
    }
    iVar2 = str->type;
    a = ASN1_TYPE_new();
    if (a == (ASN1_TYPE *)0x0) goto LAB_0058ad27;
LAB_0058adbf:
    ASN1_TYPE_set(a,iVar2,str);
    str = (ASN1_STRING *)0x0;
  }
  iVar2 = OPENSSL_sk_push(*(undefined8 *)&attr->single,a);
  if (iVar2 != 0) {
    return 1;
  }
LAB_0058ad27:
  ERR_new();
  ERR_set_debug("../crypto/x509/x509_att.c",0x134,"X509_ATTRIBUTE_set1_data");
  ERR_set_error(0xb,0xc0100,0);
  ASN1_TYPE_free(a);
  ASN1_STRING_free(str);
  return 0;
}

