
void bn_mul_part_recursive
               (ulong *param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
               ulong *param_7)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *bp;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong *rp;
  int iVar12;
  int iVar13;
  ulong *puVar14;
  int iVar15;
  
  if (param_4 < 8) {
    bn_mul_normal(param_1,param_2,param_4 + param_5,param_3,param_4 + param_6);
    return;
  }
  lVar5 = (long)param_4;
  lVar1 = param_2 + lVar5 * 8;
  iVar15 = param_6 - param_4;
  iVar3 = bn_cmp_part_words(param_2,lVar1,param_5,param_4 - param_5);
  lVar8 = lVar5 * 8 + param_3;
  iVar4 = bn_cmp_part_words(lVar8,param_3,param_6,iVar15);
  puVar14 = param_7 + lVar5;
  iVar4 = iVar3 * 3 + iVar4;
  if (2 < iVar4) {
    bVar2 = false;
    if (iVar4 - 3U < 2) {
      bn_sub_part_words(param_7,param_2,lVar1,param_5);
      bn_sub_part_words(puVar14,lVar8,param_3,param_6,iVar15);
    }
    goto LAB_004b2035;
  }
  if (iVar4 < -1) {
    if (iVar4 == -4) {
      bn_sub_part_words(param_7,lVar1,param_2,param_5,param_5 - param_4);
      bn_sub_part_words(puVar14,param_3,lVar8,param_6,param_4 - param_6);
      bVar2 = false;
      goto LAB_004b2035;
    }
    bVar2 = false;
    if ((iVar4 < -4) || (1 < iVar4 + 3U)) goto LAB_004b2035;
    bn_sub_part_words(param_7,lVar1,param_2,param_5,param_5 - param_4);
    lVar9 = param_3;
    lVar11 = lVar8;
  }
  else {
    bn_sub_part_words(param_7,param_2,lVar1,param_5);
    iVar15 = param_4 - param_6;
    lVar9 = lVar8;
    lVar11 = param_3;
  }
  bn_sub_part_words(puVar14,lVar11,lVar9,param_6,iVar15);
  bVar2 = true;
LAB_004b2035:
  iVar15 = param_4 * 2;
  rp = puVar14 + lVar5;
  bp = param_1 + iVar15;
  if (param_4 == 8) {
    bn_mul_comba8(param_7 + 0x10,param_7,puVar14);
    bn_mul_comba8(param_1,param_2,param_3);
    bn_mul_normal(param_1 + 0x10,lVar1,param_5,lVar8,param_6);
    memset(param_1 + (param_5 + 0x10 + param_6),0,(long)((0x10 - param_5) - param_6) << 3);
  }
  else {
    puVar10 = rp + lVar5 * 2;
    bn_mul_recursive(rp,param_7,puVar14,param_4,0,0,puVar10);
    bn_mul_recursive(param_1,param_2,param_3,param_4,0,0,puVar10);
    iVar4 = param_4 >> 1;
    iVar12 = param_5 - iVar4;
    iVar13 = param_6 - iVar4;
    iVar3 = iVar12;
    if (param_5 <= param_6) {
      iVar3 = iVar13;
    }
    if (iVar3 == 0) {
      bn_mul_recursive(bp,lVar1,lVar8,iVar4,iVar12,iVar13,puVar10);
      memset(param_1 + (iVar4 * 2 + iVar15),0,(long)(iVar15 + iVar4 * -2) << 3);
    }
    else if (iVar3 < 1) {
      bp = (ulong *)memset(bp,0,(long)iVar15 * 8);
      if ((param_5 < 0x10) && (param_6 < 0x10)) {
        bn_mul_normal(bp,lVar1,param_5,lVar8,param_6);
      }
      else {
        iVar3 = param_6;
        if (param_6 <= param_5) {
          iVar3 = param_5;
        }
        do {
          iVar4 = iVar4 / 2;
          if (iVar4 < iVar3) {
            bn_mul_part_recursive(bp,lVar1,lVar8,iVar4,param_5 - iVar4,param_6 - iVar4,puVar10);
            goto LAB_004b21fc;
          }
        } while ((param_5 != iVar4) && (param_6 != iVar4));
        bn_mul_recursive(bp,lVar1,lVar8,iVar4,param_5 - iVar4,param_6 - iVar4,puVar10);
      }
    }
    else {
      bn_mul_part_recursive(bp,lVar1,lVar8,iVar4,iVar12,iVar13,puVar10);
      memset(param_1 + (param_5 + iVar15 + param_6),0,(long)((iVar15 - param_5) - param_6) << 3);
    }
  }
LAB_004b21fc:
  uVar6 = bn_add_words(param_7,param_1,bp,iVar15);
  if (bVar2) {
    uVar7 = bn_sub_words(rp,param_7,rp,iVar15);
    iVar3 = -(int)uVar7;
  }
  else {
    uVar7 = bn_add_words(rp,rp,param_7,iVar15);
    iVar3 = (int)uVar7;
  }
  uVar7 = bn_add_words(param_1 + lVar5,param_1 + lVar5,rp,iVar15);
  iVar15 = (int)uVar6 + iVar3 + (int)uVar7;
  if (iVar15 != 0) {
    param_1 = param_1 + param_4 * 3;
    uVar6 = *param_1;
    *param_1 = *param_1 + (long)iVar15;
    if (CARRY8(uVar6,(long)iVar15)) {
      do {
        param_1 = param_1 + 1;
        *param_1 = *param_1 + 1;
      } while (*param_1 == 0);
    }
  }
  return;
}

