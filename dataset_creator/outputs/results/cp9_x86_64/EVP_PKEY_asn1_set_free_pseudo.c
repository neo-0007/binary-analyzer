
void EVP_PKEY_asn1_set_free(EVP_PKEY_ASN1_METHOD *ameth,pkey_free *pkey_free)

{
  *(pkey_free **)(ameth + 0xa8) = pkey_free;
  return;
}

