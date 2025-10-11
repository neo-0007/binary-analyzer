
bool bn_mul_fixed_top(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BN_CTX *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  BIGNUM *pBVar8;
  long lVar9;
  BIGNUM *pBVar10;
  int iVar11;
  bool bVar12;
  
  iVar2 = param_2->top;
  iVar3 = param_3->top;
  if ((iVar2 == 0) || (iVar3 == 0)) {
    BN_zero_ex(param_1);
    return true;
  }
  iVar1 = iVar2 + iVar3;
  BN_CTX_start(param_4);
  if (((param_2 != param_1) && (pBVar10 = param_1, param_3 != param_1)) ||
     (pBVar10 = BN_CTX_get(param_4), pBVar10 != (BIGNUM *)0x0)) {
    iVar7 = iVar2 - iVar3;
    if ((iVar7 == 0) && (iVar2 == 8)) {
      lVar9 = bn_wexpand(pBVar10,0x10);
      if (lVar9 != 0) {
        puVar4 = param_2->d;
        pBVar10->top = 0x10;
        bn_mul_comba8(pBVar10->d,puVar4,param_3->d);
LAB_004b2645:
        bVar12 = true;
        pBVar10->neg = param_2->neg ^ param_3->neg;
        if (pBVar10 != param_1) {
          pBVar10 = BN_copy(param_1,pBVar10);
          bVar12 = pBVar10 != (BIGNUM *)0x0;
        }
        goto LAB_004b2673;
      }
    }
    else if ((iVar2 < 0x10) || ((iVar3 < 0x10 || (2 < iVar7 + 1U)))) {
      lVar9 = bn_wexpand(pBVar10,iVar1);
      if (lVar9 != 0) {
        puVar4 = param_2->d;
        pBVar10->top = iVar1;
        bn_mul_normal(pBVar10->d,puVar4,iVar2,param_3->d,iVar3);
        goto LAB_004b2645;
      }
    }
    else {
      if (iVar7 == -1) {
        iVar7 = BN_num_bits_word((long)iVar3);
        cVar6 = (char)iVar7;
      }
      else {
        iVar7 = BN_num_bits_word((long)iVar2);
        cVar6 = (char)iVar7;
      }
      iVar11 = 2 << (cVar6 - 1U & 0x1f);
      iVar7 = 1 << (cVar6 - 1U & 0x1f);
      pBVar8 = BN_CTX_get(param_4);
      if (pBVar8 != (BIGNUM *)0x0) {
        iVar5 = iVar3;
        if (iVar3 <= iVar2) {
          iVar5 = iVar2;
        }
        if (iVar7 < iVar5) {
          iVar11 = iVar11 << 2;
          lVar9 = bn_wexpand(pBVar8,iVar11);
          if ((lVar9 != 0) && (lVar9 = bn_wexpand(pBVar10,iVar11), lVar9 != 0)) {
            bn_mul_part_recursive
                      (pBVar10->d,param_2->d,param_3->d,iVar7,iVar2 - iVar7,iVar3 - iVar7,pBVar8->d)
            ;
LAB_004b25fd:
            pBVar10->top = iVar1;
            goto LAB_004b2645;
          }
        }
        else {
          lVar9 = bn_wexpand(pBVar8);
          if ((lVar9 != 0) && (lVar9 = bn_wexpand(pBVar10,iVar11 * 2), lVar9 != 0)) {
            bn_mul_recursive(pBVar10->d,param_2->d,param_3->d,iVar7,iVar2 - iVar7,iVar3 - iVar7,
                             pBVar8->d);
            goto LAB_004b25fd;
          }
        }
      }
    }
  }
  bVar12 = false;
LAB_004b2673:
  BN_CTX_end(param_4);
  return bVar12;
}

