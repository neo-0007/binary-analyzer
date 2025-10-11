
void bn_to_mont_fixed_top(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bn_mul_mont_fixed_top(param_1,param_2,param_3 + 8,param_3,param_4);
  return;
}

