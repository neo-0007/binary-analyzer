
int RSA_padding_check_X931(uchar *to,int tlen,uchar *f,int fl,int rsa_len)

{
  uchar uVar1;
  int iVar2;
  undefined4 in_register_00000034;
  uchar *__src;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  
  if ((rsa_len != fl) || (1 < (byte)(*f + 0x96))) {
    ERR_new(to,CONCAT44(in_register_00000034,tlen));
    ERR_set_debug("../crypto/rsa/rsa_x931.c",0x43,"RSA_padding_check_X931");
    ERR_set_error(4,0x89,0);
    return -1;
  }
  __src = f + 1;
  uVar4 = rsa_len - 2;
  if (*f == 'k') {
    iVar5 = rsa_len + -3;
    if (iVar5 < 1) {
LAB_004341a8:
      ERR_new();
      uVar3 = 0x56;
LAB_004341d1:
      ERR_set_debug("../crypto/rsa/rsa_x931.c",uVar3,"RSA_padding_check_X931");
      ERR_set_error(4,0x8a,0);
      return -1;
    }
    iVar2 = 0;
    do {
      uVar1 = *__src;
      __src = __src + 1;
      if (uVar1 == 0xba) {
        uVar4 = iVar5 - iVar2;
        if (iVar2 != 0) goto LAB_0043415a;
        goto LAB_004341a8;
      }
      if (uVar1 != 0xbb) {
        ERR_new();
        uVar3 = 0x4e;
        goto LAB_004341d1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar5 != iVar2);
    uVar4 = 0;
  }
LAB_0043415a:
  if (__src[(int)uVar4] == 0xcc) {
    memcpy(to,__src,(ulong)uVar4);
    return uVar4;
  }
  ERR_new();
  ERR_set_debug("../crypto/rsa/rsa_x931.c",0x5f,"RSA_padding_check_X931");
  ERR_set_error(4,0x8b,0);
  return -1;
}

