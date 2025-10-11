
EVP_PKEY_ASN1_METHOD * EVP_PKEY_asn1_new(int id,int flags,char *pem_str,char *info)

{
  EVP_PKEY_ASN1_METHOD *ameth;
  char *pcVar1;
  
  ameth = (EVP_PKEY_ASN1_METHOD *)CRYPTO_zalloc(0x140,"../crypto/asn1/ameth_lib.c",0xdf);
  if (ameth == (EVP_PKEY_ASN1_METHOD *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/ameth_lib.c",0xe2,"EVP_PKEY_asn1_new");
    ERR_set_error(0xd,0xc0100,0);
    return (EVP_PKEY_ASN1_METHOD *)0x0;
  }
  *(int *)ameth = id;
  *(int *)(ameth + 4) = id;
  *(long *)(ameth + 8) = (long)(int)(flags | 2);
  if (info != (char *)0x0) {
    pcVar1 = CRYPTO_strdup(info,"../crypto/asn1/ameth_lib.c",0xeb);
    *(char **)(ameth + 0x18) = pcVar1;
    if (pcVar1 == (char *)0x0) goto LAB_0049ed50;
  }
  if (pem_str == (char *)0x0) {
    return ameth;
  }
  pcVar1 = CRYPTO_strdup(pem_str,"../crypto/asn1/ameth_lib.c",0xf1);
  *(char **)(ameth + 0x10) = pcVar1;
  if (pcVar1 != (char *)0x0) {
    return ameth;
  }
LAB_0049ed50:
  EVP_PKEY_asn1_free(ameth);
  ERR_new();
  ERR_set_debug("../crypto/asn1/ameth_lib.c",0xfa,"EVP_PKEY_asn1_new");
  ERR_set_error(0xd,0xc0100,0);
  return (EVP_PKEY_ASN1_METHOD *)0x0;
}

