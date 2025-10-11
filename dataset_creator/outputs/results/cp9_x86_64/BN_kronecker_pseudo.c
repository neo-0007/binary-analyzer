
int BN_kronecker(BIGNUM *a,BIGNUM *b,BN_CTX *ctx)

{
  int iVar1;
  uint uVar2;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *pBVar3;
  ulong uVar4;
  int iVar5;
  
  BN_CTX_start(ctx);
  a_00 = BN_CTX_get(ctx);
  a_01 = BN_CTX_get(ctx);
  if (((a_01 != (BIGNUM *)0x0) && (pBVar3 = BN_copy(a_00,a), pBVar3 != (BIGNUM *)0x0)) &&
     (pBVar3 = BN_copy(a_01,b), pBVar3 != (BIGNUM *)0x0)) {
    iVar1 = BN_is_zero(a_01);
    if (iVar1 != 0) {
      iVar1 = BN_abs_is_word(a_00,1);
      BN_CTX_end(ctx);
      return iVar1;
    }
    iVar1 = BN_is_odd(a_00);
    uVar2 = 0;
    if ((iVar1 != 0) || (iVar1 = BN_is_odd(a_01), iVar1 != 0)) {
      while (iVar1 = BN_is_bit_set(a_01,uVar2), iVar1 == 0) {
        uVar2 = uVar2 + 1;
      }
      iVar1 = BN_rshift(a_01,a_01,uVar2);
      if (iVar1 == 0) goto LAB_005b3d30;
      iVar5 = 1;
      if (((uVar2 & 1) != 0) && (iVar5 = a_00->top, iVar5 != 0)) {
        iVar5 = *(int *)(tab_0 + (ulong)((uint)*a_00->d & 7) * 4);
      }
      if ((a_01->neg != 0) && (a_01->neg = 0, a_00->neg != 0)) {
        iVar5 = -iVar5;
      }
      while (pBVar3 = a_01, uVar2 = BN_is_zero(a_00), uVar2 == 0) {
        while (iVar1 = BN_is_bit_set(a_00,uVar2), iVar1 == 0) {
          uVar2 = uVar2 + 1;
        }
        iVar1 = BN_rshift(a_00,a_00,uVar2);
        if (iVar1 == 0) goto LAB_005b3d30;
        if ((uVar2 & 1) != 0) {
          if (pBVar3->top == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 * *(int *)(tab_0 + (ulong)((uint)*pBVar3->d & 7) * 4);
          }
        }
        if (a_00->neg == 0) {
          if (a_00->top != 0) {
            uVar4 = *a_00->d;
            goto LAB_005b3e2d;
          }
        }
        else {
          uVar4 = 0xffffffffffffffff;
          if (a_00->top != 0) {
            uVar4 = ~*a_00->d;
          }
LAB_005b3e2d:
          if ((pBVar3->top != 0) && ((uVar4 & *pBVar3->d & 2) != 0)) {
            iVar5 = -iVar5;
          }
        }
        iVar1 = BN_nnmod(pBVar3,pBVar3,a_00,ctx);
        if (iVar1 == 0) goto LAB_005b3d30;
        a_00->neg = 0;
        a_01 = a_00;
        a_00 = pBVar3;
      }
      iVar1 = BN_is_one(pBVar3);
      if (iVar1 != 0) {
        BN_CTX_end(ctx);
        return iVar5;
      }
    }
    BN_CTX_end(ctx);
    return iVar1;
  }
LAB_005b3d30:
  BN_CTX_end(ctx);
  return -2;
}

