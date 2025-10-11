
undefined8 bn_from_montgomery_word(undefined8 *param_1,long *param_2,long param_3)

{
  int num;
  ulong *bp;
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  
  num = *(int *)(param_3 + 0x28);
  if (num == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return 1;
  }
  iVar1 = num * 2;
  lVar2 = bn_wexpand(param_2,iVar1);
  if (lVar2 != 0) {
    *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 0x30);
    lVar2 = param_2[1];
    puVar10 = (ulong *)*param_2;
    bp = *(ulong **)(param_3 + 0x20);
    puVar9 = puVar10;
    uVar6 = -(int)lVar2;
    if (0 < iVar1) {
      do {
        uVar7 = uVar6 + 1;
        *puVar9 = *puVar9 & -(ulong)(uVar6 >> 0x1f);
        puVar9 = puVar9 + 1;
        uVar6 = uVar7;
      } while (iVar1 - (int)lVar2 != uVar7);
    }
    *(int *)(param_2 + 1) = iVar1;
    lVar2 = *(long *)(param_3 + 0x50);
    if (num < 1) {
      lVar2 = bn_wexpand(param_1,num);
      if (lVar2 != 0) {
        lVar2 = param_2[2];
        *(int *)(param_1 + 1) = num;
        *(int *)(param_1 + 2) = (int)lVar2;
        bn_sub_words((ulong *)*param_1,(ulong *)(*param_2 + (long)num * 8),bp,num);
        return 1;
      }
    }
    else {
      lVar3 = (long)num;
      uVar8 = 0;
      puVar9 = puVar10 + lVar3;
      do {
        uVar4 = bn_mul_add_words(puVar10,bp,num,*puVar10 * lVar2);
        uVar5 = puVar10[lVar3];
        uVar4 = uVar4 + uVar8 + uVar5;
        puVar10[lVar3] = uVar4;
        puVar10 = puVar10 + 1;
        uVar8 = (ulong)(uVar4 <= uVar5) & (uVar5 != uVar4 | uVar8);
      } while (puVar10 != puVar9);
      lVar2 = bn_wexpand(param_1,num);
      if (lVar2 != 0) {
        lVar2 = param_2[2];
        puVar9 = (ulong *)(lVar3 * 8 + *param_2);
        *(int *)(param_1 + 1) = num;
        puVar10 = (ulong *)*param_1;
        *(int *)(param_1 + 2) = (int)lVar2;
        uVar5 = bn_sub_words(puVar10,puVar9,bp,num);
        lVar2 = 0;
        do {
          puVar10[lVar2] = (puVar9[lVar2] ^ puVar10[lVar2]) & uVar8 - uVar5 ^ puVar10[lVar2];
          puVar9[lVar2] = 0;
          lVar2 = lVar2 + 1;
        } while (lVar2 != lVar3);
        return 1;
      }
    }
  }
  return 0;
}

