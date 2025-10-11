
void bn_mul_low_normal(ulong *param_1,ulong *param_2,ulong *param_3,int param_4)

{
  ulong *puVar1;
  uint uVar2;
  int num;
  int iVar3;
  uint num_00;
  
  bn_mul_words(param_1,param_2,param_4,*param_3);
  if (1 < param_4) {
    num_00 = param_4 - 2;
    uVar2 = num_00 & 0xfffffffc;
    iVar3 = param_4;
    while (bn_mul_add_words(param_1 + 1,param_2,iVar3 + -1,param_3[1]), num_00 != 0) {
      bn_mul_add_words(param_1 + 2,param_2,num_00,param_3[2]);
      if (iVar3 + -3 == 0) {
        return;
      }
      bn_mul_add_words(param_1 + 3,param_2,iVar3 + -3,param_3[3]);
      num = iVar3 + -4;
      if (num == 0) {
        return;
      }
      puVar1 = param_3 + 4;
      param_1 = param_1 + 4;
      param_3 = param_3 + 4;
      bn_mul_add_words(param_1,param_2,num,*puVar1);
      if (num == (param_4 + -4) - uVar2) {
        return;
      }
      num_00 = iVar3 - 6;
      iVar3 = num;
    }
  }
  return;
}

