
int RSA_padding_check_PKCS1_type_1(uchar *to,int tlen,uchar *f,int fl,int rsa_len)

{
  uchar uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (rsa_len < 0xb) {
    return -1;
  }
  if (rsa_len == fl) {
    uVar1 = *f;
    f = f + 1;
    if (uVar1 != '\0') {
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_pk1.c",0x4f,"RSA_padding_check_PKCS1_type_1");
      ERR_set_error(4,0x8a,0);
      return -1;
    }
    fl = fl + -1;
  }
  else if (fl + 1 != rsa_len) goto LAB_0055c066;
  if (*f == '\x01') {
    iVar3 = fl + -1;
    if (iVar3 < 1) {
      if (iVar3 != 0) {
LAB_0055c02e:
        ERR_new();
        ERR_set_debug("../crypto/rsa/rsa_pk1.c",0x6f,"RSA_padding_check_PKCS1_type_1");
        ERR_set_error(4,0x67,0);
        return -1;
      }
    }
    else {
      iVar2 = 0;
      do {
        uVar1 = f[1];
        if (uVar1 != 0xff) {
          if (uVar1 != '\0') {
            ERR_new();
            ERR_set_debug("../crypto/rsa/rsa_pk1.c",0x62,"RSA_padding_check_PKCS1_type_1");
            ERR_set_error(4,0x66,0);
            return -1;
          }
          if (iVar2 != iVar3) {
            if (7 < iVar2) {
              uVar4 = iVar3 - (iVar2 + 1);
              if ((int)uVar4 <= tlen) {
                memcpy(to,f + 2,(ulong)uVar4);
                return uVar4;
              }
              ERR_new();
              ERR_set_debug("../crypto/rsa/rsa_pk1.c",0x75,"RSA_padding_check_PKCS1_type_1");
              ERR_set_error(4,0x6d,0);
              return -1;
            }
            goto LAB_0055c02e;
          }
          break;
        }
        iVar2 = iVar2 + 1;
        f = f + 1;
      } while (iVar3 != iVar2);
    }
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_pk1.c",0x6a,"RSA_padding_check_PKCS1_type_1");
    ERR_set_error(4,0x71,0);
    return -1;
  }
LAB_0055c066:
  ERR_new();
  ERR_set_debug("../crypto/rsa/rsa_pk1.c",0x56,"RSA_padding_check_PKCS1_type_1");
  ERR_set_error(4,0x6a,0);
  return -1;
}

