
void X509_REQ_set0_distinguishing_id(long param_1,undefined8 param_2)

{
  ASN1_OCTET_STRING_free(*(ASN1_STRING **)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}

