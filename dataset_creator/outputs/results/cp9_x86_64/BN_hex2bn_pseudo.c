
int BN_hex2bn(BIGNUM **a,char *str)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BIGNUM *pBVar6;
  BIGNUM *a_00;
  ulong uVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  bool bVar11;
  long local_60;
  long local_58;
  uint local_40;
  
  if ((str != (char *)0x0) && (cVar1 = *str, cVar1 != '\0')) {
    bVar11 = cVar1 == '-';
    if (bVar11) {
      cVar1 = str[1];
      str = str + 1;
    }
    local_40 = (uint)bVar11;
    lVar9 = 0;
    while( true ) {
      iVar8 = (int)lVar9;
      iVar2 = ossl_ctype_check((int)cVar1,0x10);
      if (iVar2 == 0) break;
      lVar9 = lVar9 + 1;
      if (lVar9 == 0x20000000) {
        return 0;
      }
      cVar1 = str[lVar9];
    }
    if (iVar8 != 0) {
      iVar2 = local_40 + iVar8;
      if (a == (BIGNUM **)0x0) {
        return iVar2;
      }
      a_00 = *a;
      if (a_00 == (BIGNUM *)0x0) {
        a_00 = BN_new();
        if (a_00 == (BIGNUM *)0x0) {
          return 0;
        }
      }
      else {
        iVar3 = BN_get_flags(a_00,2);
        if (iVar3 != 0) {
          ERR_new();
          ERR_set_debug("../crypto/bn/bn_conv.c",0x9e,__func___0);
          ERR_set_error(3,0x80106,0);
          return 0;
        }
        BN_zero_ex(a_00);
      }
      if ((iVar8 * 4 < 0x7fffffc1) &&
         ((iVar3 = iVar8 * 4 + 0x3f >> 6, iVar3 <= a_00->dmax ||
          (pBVar6 = bn_expand2(a_00,iVar3), pBVar6 != (BIGNUM *)0x0)))) {
        local_58 = (long)iVar8;
        local_60 = 0;
        iVar3 = iVar8;
        do {
          iVar4 = 0x10;
          if (iVar3 < 0x11) {
            iVar4 = iVar3;
          }
          uVar7 = 0;
          pcVar10 = str + (local_58 - iVar4);
          do {
            iVar5 = OPENSSL_hexchar2int(*pcVar10);
            if (iVar5 < 0) {
              iVar5 = 0;
            }
            pcVar10 = pcVar10 + 1;
            uVar7 = uVar7 << 4 | (long)iVar5;
          } while (str + (ulong)(iVar4 - 1) + ((local_58 + 1) - (long)iVar4) != pcVar10);
          iVar3 = iVar3 + -0x10;
          local_58 = local_58 + -0x10;
          *(ulong *)((long)a_00->d + local_60) = uVar7;
          local_60 = local_60 + 8;
        } while (0 < iVar3);
        a_00->top = (iVar8 - 1U >> 4) + 1;
        bn_correct_top(a_00);
        *a = a_00;
        if (a_00->top != 0) {
          a_00->neg = local_40;
          return iVar2;
        }
        return iVar2;
      }
      if (*a == (BIGNUM *)0x0) {
        BN_free(a_00);
      }
    }
  }
  return 0;
}

