
int RSA_padding_add_PKCS1_type_1(uchar *to,int tlen,uchar *f,int fl)

{
  void *pvVar1;
  undefined1 *puVar2;
  size_t __n;
  
  if (fl < tlen + -10) {
    to[0] = '\0';
    to[1] = '\x01';
    __n = (size_t)((tlen + -3) - fl);
    pvVar1 = memset(to + 2,0xff,__n);
    puVar2 = (undefined1 *)((long)pvVar1 + __n);
    *puVar2 = 0;
    memcpy(puVar2 + 1,f,(ulong)(uint)fl);
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/rsa/rsa_pk1.c",0x27,"RSA_padding_add_PKCS1_type_1");
  ERR_set_error(4,0x6e,0);
  return 0;
}

