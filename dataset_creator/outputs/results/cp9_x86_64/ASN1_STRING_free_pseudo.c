
void ASN1_STRING_free(ASN1_STRING *a)

{
  if (a != (ASN1_STRING *)0x0) {
    ossl_asn1_string_embed_free(a,(uint)a->flags & 0x80);
    return;
  }
  return;
}

