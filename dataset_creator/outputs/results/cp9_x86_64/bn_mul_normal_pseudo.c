
void bn_mul_normal(ulong *param_1,ulong *param_2,int param_3,ulong *param_4,int param_5)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  
  puVar4 = param_4;
  iVar3 = param_5;
  if (param_3 < param_5) {
    puVar4 = param_2;
    param_2 = param_4;
    iVar3 = param_3;
    param_3 = param_5;
  }
  if (iVar3 < 1) {
    bn_mul_words(param_1,param_2,param_3,0);
    return;
  }
  puVar5 = param_1 + param_3;
  uVar2 = bn_mul_words(param_1,param_2,param_3,*puVar4);
  *puVar5 = uVar2;
  while( true ) {
    if (iVar3 == 1) {
      return;
    }
    uVar2 = bn_mul_add_words(param_1 + 1,param_2,param_3,puVar4[1]);
    puVar5[1] = uVar2;
    if (iVar3 == 2) {
      return;
    }
    uVar2 = bn_mul_add_words(param_1 + 2,param_2,param_3,puVar4[2]);
    puVar5[2] = uVar2;
    if (iVar3 == 3) {
      return;
    }
    uVar2 = bn_mul_add_words(param_1 + 3,param_2,param_3,puVar4[3]);
    puVar5[3] = uVar2;
    iVar3 = iVar3 + -4;
    if (iVar3 == 0) break;
    puVar1 = puVar4 + 4;
    param_1 = param_1 + 4;
    puVar5 = puVar5 + 4;
    puVar4 = puVar4 + 4;
    uVar2 = bn_mul_add_words(param_1,param_2,param_3,*puVar1);
    *puVar5 = uVar2;
  }
  return;
}

