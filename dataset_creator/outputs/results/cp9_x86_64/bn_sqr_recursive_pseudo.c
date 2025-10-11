
void bn_sqr_recursive(ulong *param_1,ulong *param_2,int param_3,ulong *param_4)

{
  ulong *rp;
  ulong *puVar1;
  int iVar2;
  ulong *bp;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int num;
  
  if (param_3 == 4) {
    bn_sqr_comba4();
    return;
  }
  if (param_3 == 8) {
    bn_sqr_comba8();
    return;
  }
  if (param_3 < 0x10) {
    bn_sqr_normal();
    return;
  }
  lVar6 = (long)param_3;
  num = param_3 >> 1;
  rp = param_4 + lVar6;
  bp = param_2 + num;
  iVar2 = bn_cmp_words(param_2,bp,num);
  puVar1 = rp + lVar6;
  if (iVar2 < 1) {
    if (iVar2 == 0) {
      memset(rp,0,lVar6 * 8);
      goto LAB_004b3b23;
    }
    bn_sub_words(param_4,bp,param_2,num);
  }
  else {
    bn_sub_words(param_4,param_2,bp,num);
  }
  bn_sqr_recursive(rp,param_4,num,puVar1);
LAB_004b3b23:
  bn_sqr_recursive(param_1,param_2,num,puVar1);
  bn_sqr_recursive(param_1 + lVar6,bp,num,puVar1);
  uVar3 = bn_add_words(param_4,param_1,param_1 + lVar6,param_3);
  uVar4 = bn_sub_words(rp,param_4,rp,param_3);
  uVar5 = bn_add_words(param_1 + num,param_1 + num,rp,param_3);
  iVar2 = ((int)uVar3 - (int)uVar4) + (int)uVar5;
  if (iVar2 != 0) {
    param_1 = param_1 + (param_3 + num);
    uVar3 = *param_1;
    *param_1 = *param_1 + (long)iVar2;
    if (CARRY8(uVar3,(long)iVar2)) {
      do {
        param_1 = param_1 + 1;
        *param_1 = *param_1 + 1;
      } while (*param_1 == 0);
    }
  }
  return;
}

