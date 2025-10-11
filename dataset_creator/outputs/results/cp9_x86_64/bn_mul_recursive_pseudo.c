
void bn_mul_recursive(ulong *param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                     ulong *param_7)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong *rp;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  ulong *bp;
  bool bVar16;
  byte bVar17;
  ulong *local_78;
  size_t local_48;
  
  bVar17 = 0;
  bVar16 = param_5 == 0;
  if ((param_4 == 8) && (bVar16)) {
    if (param_6 == 0) {
      bn_mul_comba8();
      return;
    }
LAB_004b1a18:
    bn_mul_normal(param_1,param_2,param_4 + param_5,param_3,param_4 + param_6);
    if (-1 < param_5 + param_6) {
      return;
    }
    memset(param_1 + (param_4 + param_5 + param_4 + param_6),0,(long)-(param_5 + param_6) << 3);
    return;
  }
  if (param_4 < 0x10) goto LAB_004b1a18;
  iVar3 = param_4 >> 1;
  iVar14 = -param_5;
  iVar15 = iVar3 + param_5;
  iVar10 = iVar3 + param_6;
  lVar6 = (long)iVar3;
  lVar1 = param_2 + lVar6 * 8;
  iVar4 = bn_cmp_part_words(param_2,lVar1,iVar15,iVar14);
  lVar7 = lVar6 * 8 + param_3;
  iVar5 = bn_cmp_part_words(lVar7,param_3,iVar10,param_6);
  switch(iVar4 * 3 + 4 + iVar5) {
  case 0:
    bn_sub_part_words(param_7,lVar1,param_2,iVar15,param_5);
    iVar4 = -param_6;
    lVar11 = lVar7;
    lVar12 = param_3;
    break;
  case 1:
  case 3:
  case 4:
  case 5:
  case 7:
    if (((iVar3 != 8) || (!bVar16)) || (param_6 != 0)) {
      local_78 = param_7 + param_4 * 2;
      local_48 = (long)param_4 * 8;
      rp = (ulong *)memset(param_7 + param_4,0,local_48);
      bVar2 = false;
      goto LAB_004b1b55;
    }
    rp = param_7 + param_4;
    *rp = 0;
    rp[0xf] = 0;
    puVar13 = (undefined8 *)((ulong)(rp + 1) & 0xfffffffffffffff8);
    for (uVar8 = (ulong)(((int)rp - (int)(undefined8 *)((ulong)(rp + 1) & 0xfffffffffffffff8)) +
                         0x80U >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar13 = 0;
      puVar13 = puVar13 + (ulong)bVar17 * -2 + 1;
    }
    bVar2 = false;
    goto LAB_004b1c65;
  case 2:
    bn_sub_part_words(param_7,lVar1,param_2,iVar15,param_5);
    lVar11 = param_3;
    lVar12 = lVar7;
    iVar4 = param_6;
    goto LAB_004b1c0b;
  case 6:
    bn_sub_part_words(param_7,param_2,lVar1,iVar15,iVar14);
    lVar11 = lVar7;
    lVar12 = param_3;
    iVar4 = -param_6;
LAB_004b1c0b:
    bn_sub_part_words(param_7 + lVar6,lVar12,lVar11,iVar10,iVar4);
    bVar2 = true;
    goto LAB_004b1c27;
  case 8:
    bn_sub_part_words(param_7,param_2,lVar1,iVar15,iVar14);
    lVar11 = param_3;
    lVar12 = lVar7;
    iVar4 = param_6;
    break;
  default:
    bVar2 = false;
    goto LAB_004b1c27;
  }
  bn_sub_part_words(param_7 + lVar6,lVar12,lVar11,iVar10,iVar4);
  bVar2 = false;
LAB_004b1c27:
  if (((iVar3 == 8) && (bVar16)) && (param_6 == 0)) {
    rp = param_7 + param_4;
    bn_mul_comba8(rp,param_7,param_7 + lVar6);
LAB_004b1c65:
    bn_mul_comba8(param_1,param_2,param_3);
    bp = param_1 + param_4;
    bn_mul_comba8(bp,lVar1,lVar7);
  }
  else {
    local_78 = param_7 + param_4 * 2;
    local_48 = (long)param_4 * 8;
    rp = param_7 + param_4;
    bn_mul_recursive(rp,param_7,param_7 + lVar6,iVar3,0,0,local_78);
LAB_004b1b55:
    bn_mul_recursive(param_1,param_2,param_3,iVar3,0,0,local_78);
    bp = (ulong *)(local_48 + (long)param_1);
    bn_mul_recursive(bp,lVar1,lVar7,iVar3,param_5,param_6,local_78);
  }
  uVar8 = bn_add_words(param_7,param_1,bp,param_4);
  if (bVar2) {
    uVar9 = bn_sub_words(rp,param_7,rp,param_4);
    iVar4 = -(int)uVar9;
  }
  else {
    uVar9 = bn_add_words(rp,rp,param_7,param_4);
    iVar4 = (int)uVar9;
  }
  uVar9 = bn_add_words(param_1 + lVar6,param_1 + lVar6,rp,param_4);
  iVar4 = (int)uVar8 + iVar4 + (int)uVar9;
  if (iVar4 != 0) {
    param_1 = param_1 + (param_4 + iVar3);
    uVar8 = *param_1;
    *param_1 = *param_1 + (long)iVar4;
    if (CARRY8(uVar8,(long)iVar4)) {
      do {
        param_1 = param_1 + 1;
        *param_1 = *param_1 + 1;
      } while (*param_1 == 0);
      return;
    }
  }
  return;
}

