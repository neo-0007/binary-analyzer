
int X509_EXTENSION_set_data(X509_EXTENSION *ex,ASN1_OCTET_STRING *data)

{
  int iVar1;
  
  if (ex != (X509_EXTENSION *)0x0) {
    iVar1 = ASN1_OCTET_STRING_set((ASN1_STRING *)&ex->value,data->data,data->length);
    return (int)(iVar1 != 0);
  }
  return 0;
}

