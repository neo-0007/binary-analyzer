
int ct_base64_decode(uchar *param_1,undefined8 *param_2)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  uchar *t;
  int n;
  
  sVar4 = strlen((char *)param_1);
  if (sVar4 == 0) {
    *param_2 = 0;
    return 0;
  }
  t = (uchar *)CRYPTO_malloc((int)(sVar4 >> 2) * 3,"../crypto/ct/ct_b64.c",0x24);
  if (t == (uchar *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ct/ct_b64.c",0x26,"ct_base64_decode");
    ERR_set_error(0x32,0xc0100,0);
  }
  else {
    n = (int)sVar4;
    iVar3 = EVP_DecodeBlock(t,param_1,n);
    if (iVar3 < 0) {
      ERR_new();
      ERR_set_debug("../crypto/ct/ct_b64.c",0x2c,"ct_base64_decode");
      ERR_set_error(0x32,0x6c,0);
    }
    else {
      sVar1 = sVar4 - 3;
      do {
        iVar2 = (int)sVar4;
        sVar4 = sVar4 - 1;
        if (param_1[sVar4] != '=') {
          *param_2 = t;
          return (iVar3 - n) + iVar2;
        }
      } while (sVar4 != sVar1);
    }
  }
  CRYPTO_free(t);
  return -1;
}

