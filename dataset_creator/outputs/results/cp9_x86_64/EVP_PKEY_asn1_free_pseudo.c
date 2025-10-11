
void EVP_PKEY_asn1_free(EVP_PKEY_ASN1_METHOD *ameth)

{
  if (ameth == (EVP_PKEY_ASN1_METHOD *)0x0) {
    return;
  }
  if (((byte)ameth[8] & 2) == 0) {
    return;
  }
  CRYPTO_free(*(void **)(ameth + 0x10));
  CRYPTO_free(*(void **)(ameth + 0x18));
  CRYPTO_free(ameth);
  return;
}

