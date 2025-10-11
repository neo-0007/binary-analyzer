
void ASN1_STRING_clear_free(ASN1_STRING *param_1)

{
  if (param_1 == (ASN1_STRING *)0x0) {
    return;
  }
  if ((param_1->data != (uchar *)0x0) && ((param_1->flags & 0x10) == 0)) {
    OPENSSL_cleanse(param_1->data,(long)param_1->length);
    ASN1_STRING_free(param_1);
    return;
  }
  ASN1_STRING_free(param_1);
  return;
}

