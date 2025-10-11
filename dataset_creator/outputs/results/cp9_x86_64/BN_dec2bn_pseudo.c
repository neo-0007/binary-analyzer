
int BN_dec2bn(BIGNUM **a,char *str)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BIGNUM *pBVar6;
  BIGNUM *a_00;
  int iVar7;
  long lVar8;
  ulong w;
  bool bVar9;
  uint local_3c;
  
  if ((str != (char *)0x0) && (cVar2 = *str, cVar2 != '\0')) {
    bVar9 = cVar2 == '-';
    if (bVar9) {
      cVar2 = str[1];
      str = str + 1;
    }
    local_3c = (uint)bVar9;
    lVar8 = 0;
    while( true ) {
      iVar5 = (int)lVar8;
      iVar3 = ossl_isdigit((int)cVar2);
      if (iVar3 == 0) break;
      lVar8 = lVar8 + 1;
      if (lVar8 == 0x20000000) goto LAB_004aece8;
      cVar2 = str[lVar8];
    }
    if (iVar5 == 0) {
LAB_004aece8:
      a_00 = (BIGNUM *)0x0;
    }
    else {
      iVar3 = local_3c + iVar5;
      if (a == (BIGNUM **)0x0) {
        return iVar3;
      }
      a_00 = *a;
      if (a_00 == (BIGNUM *)0x0) {
        a_00 = BN_new();
        if (a_00 == (BIGNUM *)0x0) {
          return 0;
        }
      }
      else {
        BN_zero_ex(a_00);
      }
      if ((iVar5 * 4 < 0x7fffffc1) &&
         ((iVar7 = iVar5 * 4 + 0x3f >> 6, iVar7 <= a_00->dmax ||
          (pBVar6 = bn_expand2(a_00,iVar7), pBVar6 != (BIGNUM *)0x0)))) {
        iVar4 = (iVar5 / 0x13) * 0x13 - iVar5;
        iVar7 = iVar4 + 0x13;
        if (iVar4 == 0) {
          iVar7 = 0;
        }
        w = 0;
        pcVar1 = str + (ulong)(iVar5 - 1) + 1;
        do {
          while( true ) {
            cVar2 = *str;
            iVar7 = iVar7 + 1;
            str = str + 1;
            w = (long)(cVar2 + -0x30) + w * 10;
            if (iVar7 != 0x13) break;
            iVar5 = BN_mul_word(a_00,10000000000000000000);
            if ((iVar5 == 0) || (iVar5 = BN_add_word(a_00,w), iVar5 == 0)) goto LAB_004aecea;
            iVar7 = 0;
            w = 0;
            if (str == pcVar1) goto LAB_004aecc8;
          }
        } while (str != pcVar1);
LAB_004aecc8:
        bn_correct_top(a_00);
        iVar5 = a_00->top;
        *a = a_00;
        if (iVar5 != 0) {
          a_00->neg = local_3c;
          return iVar3;
        }
        return iVar3;
      }
    }
LAB_004aecea:
    if (*a == (BIGNUM *)0x0) {
      BN_free(a_00);
    }
  }
  return 0;
}

