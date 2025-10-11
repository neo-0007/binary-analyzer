
void X509_REQ_set0_signature(long param_1,undefined8 param_2)

{
  if (*(ASN1_STRING **)(param_1 + 0x48) != (ASN1_STRING *)0x0) {
    ASN1_BIT_STRING_free(*(ASN1_STRING **)(param_1 + 0x48));
  }
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}

