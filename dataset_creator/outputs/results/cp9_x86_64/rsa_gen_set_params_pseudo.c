
undefined8 rsa_gen_set_params(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = rsa_gen_set_params_part_0();
    return uVar1;
  }
  return 1;
}

