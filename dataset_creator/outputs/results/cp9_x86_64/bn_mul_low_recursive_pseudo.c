
void bn_mul_low_recursive(long param_1,long param_2,long param_3,int param_4,ulong *param_5)

{
  ulong *bp;
  long lVar1;
  ulong *rp;
  int num;
  
  num = param_4 / 2;
  lVar1 = (long)num * 8;
  rp = (ulong *)(param_1 + lVar1);
  bn_mul_recursive();
  if (param_4 < 0x40) {
    bp = param_5 + num;
    bn_mul_low_normal(param_5,param_2,param_3 + lVar1,num);
    bn_mul_low_normal(bp,param_2 + lVar1,param_3,num);
    bn_add_words(rp,rp,param_5,num);
  }
  else {
    bn_mul_low_recursive(param_5,param_2,param_3 + lVar1,num,param_5 + param_4);
    bn_add_words(rp,rp,param_5,num);
    bn_mul_low_recursive(param_5,param_2 + lVar1,param_3,num,param_5 + param_4);
    bp = param_5;
  }
  bn_add_words(rp,rp,bp,num);
  return;
}

