
int ASN1_STRING_set(ASN1_STRING *str,void *data,int len)

{
  uchar *addr;
  uchar *puVar1;
  ulong __n;
  
  __n = (ulong)len;
  if (len < 0) {
    if (data == (void *)0x0) {
      return 0;
    }
    __n = strlen((char *)data);
  }
  if (__n < 0x7fffffff) {
    addr = str->data;
    if (((ulong)(long)str->length <= __n) || (addr == (uchar *)0x0)) {
      puVar1 = (uchar *)CRYPTO_realloc(addr,(int)__n + 1,"../crypto/asn1/asn1_lib.c",0x134);
      str->data = puVar1;
      if (puVar1 == (uchar *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/asn1/asn1_lib.c",0x137,"ASN1_STRING_set");
        ERR_set_error(0xd,0xc0100,0);
        str->data = addr;
        return 0;
      }
    }
    str->length = (int)__n;
    if (data != (void *)0x0) {
      memcpy(str->data,data,__n);
      str->data[__n] = '\0';
    }
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/asn1/asn1_lib.c",299,"ASN1_STRING_set");
  ERR_set_error(0xd,0xdf,0);
  return 0;
}

