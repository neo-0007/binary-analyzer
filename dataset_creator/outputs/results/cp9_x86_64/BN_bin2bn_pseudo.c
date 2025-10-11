
BIGNUM * BN_bin2bn(uchar *s,int len,BIGNUM *ret)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  BIGNUM *a;
  
  a = (BIGNUM *)0x0;
  if ((ret == (BIGNUM *)0x0) && (ret = BN_new(), a = ret, ret == (BIGNUM *)0x0)) {
    return (BIGNUM *)0x0;
  }
  if (len < 1) {
LAB_004b0873:
    if (len != 0) {
      uVar7 = len - 1U & 7;
      uVar6 = (len - 1U >> 3) + 1;
      uVar4 = (ulong)uVar6;
      lVar2 = bn_wexpand(ret,uVar4);
      if (lVar2 == 0) {
        BN_free(a);
        return (BIGNUM *)0x0;
      }
      ret->top = uVar6;
      uVar3 = 0;
      ret->neg = 0;
      pbVar5 = s + (uint)len;
      do {
        while( true ) {
          bVar1 = *s;
          s = s + 1;
          uVar3 = uVar3 << 8 | (ulong)bVar1;
          if (uVar7 != 0) break;
          uVar4 = (ulong)((int)uVar4 - 1);
          uVar7 = 7;
          ret->d[uVar4] = uVar3;
          uVar3 = 0;
          if (pbVar5 == s) goto LAB_004b08f8;
        }
        uVar7 = uVar7 - 1;
      } while (pbVar5 != s);
LAB_004b08f8:
      bn_correct_top(ret);
      return ret;
    }
  }
  else {
    do {
      if (*s != 0) goto LAB_004b0873;
      s = s + 1;
      len = len - 1;
    } while (len != 0);
  }
  ret->top = 0;
  return ret;
}

