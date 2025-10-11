
int X509V3_extensions_print
              (BIO *out,char *title,stack_st_X509_EXTENSION *exts,ulong flag,int indent)

{
  int iVar1;
  int iVar2;
  X509_EXTENSION *ex;
  ASN1_OBJECT *o;
  ASN1_OCTET_STRING *v;
  ulong uVar3;
  char *pcVar4;
  
  iVar1 = OPENSSL_sk_num(exts);
  if (0 < iVar1) {
    if (title != (char *)0x0) {
      uVar3 = (ulong)(uint)indent;
      indent = indent + 4;
      BIO_printf(out,"%*s%s:\n",uVar3,&DAT_008343a2,title);
    }
    for (iVar1 = 0; iVar2 = OPENSSL_sk_num(exts), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      ex = (X509_EXTENSION *)OPENSSL_sk_value(exts,iVar1);
      o = X509_EXTENSION_get_object(ex);
      if ((((flag & 0x2000) == 0) || (iVar2 = OBJ_obj2nid(o), iVar2 == 0x52)) ||
         (iVar2 = OBJ_obj2nid(o), iVar2 == 0x5a)) {
        if ((indent != 0) &&
           (iVar2 = BIO_printf(out,"%*s",(ulong)(uint)indent,&DAT_008343a2), iVar2 < 1)) {
          return 0;
        }
        i2a_ASN1_OBJECT(out,o);
        iVar2 = X509_EXTENSION_get_critical(ex);
        pcVar4 = "";
        if (iVar2 != 0) {
          pcVar4 = "critical";
        }
        iVar2 = BIO_printf(out,": %s\n",pcVar4);
        if (iVar2 < 1) {
          return 0;
        }
        iVar2 = X509V3_EXT_print(out,ex,flag,indent + 4U);
        if (iVar2 == 0) {
          BIO_printf(out,"%*s",indent + 4U,&DAT_008343a2);
          v = X509_EXTENSION_get_data(ex);
          ASN1_STRING_print(out,v);
        }
        iVar2 = BIO_write(out,&DAT_0081a1ca,1);
        if (iVar2 < 1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

