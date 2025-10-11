
undefined8 dsa_gen_set_params(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    uVar1 = dsa_gen_set_params_part_0();
    return uVar1;
  }
  return 1;
}

