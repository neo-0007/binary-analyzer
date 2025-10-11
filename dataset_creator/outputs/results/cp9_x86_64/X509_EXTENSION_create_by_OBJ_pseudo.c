
X509_EXTENSION *
X509_EXTENSION_create_by_OBJ(X509_EXTENSION **ex,ASN1_OBJECT *obj,int crit,ASN1_OCTET_STRING *data)

{
  int iVar1;
  X509_EXTENSION *ex_00;
  
  if ((ex == (X509_EXTENSION **)0x0) || (ex_00 = *ex, ex_00 == (X509_EXTENSION *)0x0)) {
    ex_00 = X509_EXTENSION_new();
    if (ex_00 == (X509_EXTENSION *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/x509/x509_v3.c",0xa2,"X509_EXTENSION_create_by_OBJ");
      ERR_set_error(0xb,0xc0100,0);
      return (X509_EXTENSION *)0x0;
    }
    iVar1 = X509_EXTENSION_set_object(ex_00,obj);
    if (((iVar1 != 0) && (iVar1 = X509_EXTENSION_set_critical(ex_00,crit), iVar1 != 0)) &&
       (iVar1 = X509_EXTENSION_set_data(ex_00,data), iVar1 != 0)) {
      if (ex == (X509_EXTENSION **)0x0) {
        return ex_00;
      }
      goto LAB_0058f89e;
    }
    if ((ex != (X509_EXTENSION **)0x0) && (*ex == ex_00)) {
      return (X509_EXTENSION *)0x0;
    }
  }
  else {
    iVar1 = X509_EXTENSION_set_object(ex_00,obj);
    if (((iVar1 != 0) && (iVar1 = X509_EXTENSION_set_critical(ex_00,crit), iVar1 != 0)) &&
       (iVar1 = X509_EXTENSION_set_data(ex_00,data), iVar1 != 0)) {
LAB_0058f89e:
      if (*ex != (X509_EXTENSION *)0x0) {
        return ex_00;
      }
      *ex = ex_00;
      return ex_00;
    }
    if (*ex == ex_00) {
      return (X509_EXTENSION *)0x0;
    }
  }
  X509_EXTENSION_free(ex_00);
  return (X509_EXTENSION *)0x0;
}

