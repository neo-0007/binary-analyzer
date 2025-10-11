
EVP_PKEY_ASN1_METHOD * EVP_PKEY_get0_asn1(EVP_PKEY *pkey)

{
  return *(EVP_PKEY_ASN1_METHOD **)&pkey->references;
}

