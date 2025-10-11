
int RSA_padding_add_X931(uchar *to,int tlen,uchar *f,int fl)

{
  void *pvVar1;
  uchar *__s;
  int iVar2;
  
  iVar2 = (tlen - fl) + -2;
  if (-1 < iVar2) {
    __s = to + 1;
    if (iVar2 == 0) {
      *to = 'j';
    }
    else {
      *to = 'k';
      if (iVar2 != 1) {
        memset(__s,0xbb,(long)((tlen - fl) + -3));
        __s = to + iVar2;
      }
      *__s = 0xba;
      __s = __s + 1;
    }
    pvVar1 = memcpy(__s,f,(ulong)(uint)fl);
    *(undefined1 *)((long)pvVar1 + (long)fl) = 0xcc;
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/rsa/rsa_x931.c",0x24,"RSA_padding_add_X931");
  ERR_set_error(4,0x6e,0);
  return -1;
}

