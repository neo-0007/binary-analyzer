
int BN_gcd(BIGNUM *r,BIGNUM *a,BIGNUM *b,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  BIGNUM *pBVar5;
  BIGNUM *r_00;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  int local_44;
  
  iVar1 = BN_is_zero(b);
  pBVar5 = a;
  if ((iVar1 == 0) && (iVar1 = BN_is_zero(a), pBVar5 = b, iVar1 == 0)) {
    BN_CTX_start(ctx);
    pBVar5 = BN_CTX_get(ctx);
    r_00 = BN_CTX_get(ctx);
    uVar10 = 0;
    if ((r_00 != (BIGNUM *)0x0) &&
       ((iVar1 = BN_lshift1(r_00,b), iVar1 != 0 && (iVar1 = BN_lshift1(r,a), iVar1 != 0)))) {
      if (r->dmax < 1) {
        iVar1 = 0;
      }
      else {
        iVar1 = 0;
        lVar9 = 0;
        uVar7 = 1;
        do {
          if (r_00->dmax <= (int)lVar9) break;
          iVar8 = 0x40;
          uVar6 = ~(r->d[lVar9] | r_00->d[lVar9]);
          do {
            uVar7 = uVar7 & (uint)uVar6;
            uVar6 = uVar6 >> 1;
            iVar1 = iVar1 + uVar7;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          lVar9 = lVar9 + 1;
        } while (r->dmax != lVar9);
      }
      iVar8 = BN_rshift(r,r,iVar1);
      if ((iVar8 != 0) && (iVar8 = BN_rshift(r_00,r_00,iVar1), iVar8 != 0)) {
        iVar8 = r->top;
        if (r->top < r_00->top) {
          iVar8 = r_00->top;
        }
        iVar8 = iVar8 + 1;
        lVar9 = bn_wexpand(r,iVar8);
        if (((lVar9 != 0) && (lVar9 = bn_wexpand(r_00,iVar8), lVar9 != 0)) &&
           (lVar9 = bn_wexpand(pBVar5,iVar8), lVar9 != 0)) {
          BN_consttime_swap(~(uint)*r->d & 1,r,r_00,iVar8);
          iVar2 = BN_num_bits(r);
          iVar3 = BN_num_bits(r_00);
          if (iVar2 < iVar3) {
            iVar2 = iVar3;
          }
          iVar2 = iVar2 * 3 + 4;
          if (0 < iVar2) {
            local_44 = 0;
            uVar7 = 1;
            do {
              uVar4 = ~(r_00->top + -1 >> 0x1f) & (int)-uVar7 >> 0x1f & (uint)*r_00->d & 1;
              r->neg = r->neg ^ uVar4;
              BN_consttime_swap(uVar4,r,r_00,iVar8);
              uVar7 = (-uVar7 & -uVar4 | uVar4 - 1 & uVar7) + 1;
              iVar3 = BN_add(pBVar5,r_00,r);
              if (iVar3 == 0) goto LAB_005b3a20;
              BN_consttime_swap(~(r_00->top + -1 >> 0x1f) & (uint)*r_00->d & 1,r_00,pBVar5,iVar8);
              iVar3 = BN_rshift1(r_00,r_00);
              if (iVar3 == 0) goto LAB_005b3a20;
              local_44 = local_44 + 1;
            } while (iVar2 != local_44);
          }
          r->neg = 0;
          iVar1 = BN_lshift(r,r,iVar1);
          if (iVar1 != 0) {
            iVar1 = BN_rshift1(r,r);
            uVar10 = (uint)(iVar1 != 0);
          }
        }
      }
    }
LAB_005b3a20:
    BN_CTX_end(ctx);
  }
  else {
    pBVar5 = BN_copy(r,pBVar5);
    r->neg = 0;
    uVar10 = (uint)(pBVar5 != (BIGNUM *)0x0);
  }
  return uVar10;
}

