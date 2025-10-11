
void bn_sqr_normal(ulong *param_1,ulong *param_2,int param_3,ulong *param_4)

{
  int num;
  int num_00;
  ulong uVar1;
  int num_01;
  ulong *puVar2;
  ulong *rp;
  ulong *ap;
  
  num_00 = param_3 * 2;
  rp = param_1 + 1;
  num = param_3 + -1;
  param_1[(long)num_00 + -1] = 0;
  *param_1 = 0;
  ap = param_2;
  if (0 < num) {
    ap = param_2 + 1;
    puVar2 = rp + num;
    uVar1 = bn_mul_words(rp,ap,num,*param_2);
    rp = param_1 + 3;
    *puVar2 = uVar1;
  }
  num_01 = param_3 + -2;
  if (0 < num_01) {
    puVar2 = rp + (long)num + -1;
    do {
      uVar1 = bn_mul_add_words(rp,ap + 1,num_01,*ap);
      *puVar2 = uVar1;
      num_01 = num_01 + -1;
      puVar2 = puVar2 + 1;
      rp = rp + 2;
      ap = ap + 1;
    } while (num_01 != 0);
  }
  bn_add_words(param_1,param_1,param_1,num_00);
  bn_sqr_words(param_4,param_2,param_3);
  bn_add_words(param_1,param_1,param_4,num_00);
  return;
}

