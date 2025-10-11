
int EVP_CIPHER_set_asn1_iv(EVP_CIPHER_CTX *c,ASN1_TYPE *type)

{
  uint len;
  int iVar1;
  uchar *data;
  
  if (type == (ASN1_TYPE *)0x0) {
    return 0;
  }
  data = (uchar *)EVP_CIPHER_CTX_original_iv();
  len = EVP_CIPHER_CTX_get_iv_length(c);
  if (len < 0x11) {
    iVar1 = ASN1_TYPE_set_octetstring(type,data,len);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: j <= sizeof(c->iv)","../crypto/evp/evp_lib.c",0x4a);
}

