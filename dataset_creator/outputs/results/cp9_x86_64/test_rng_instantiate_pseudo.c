
undefined8 test_rng_instantiate(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 in_R9;
  
  uVar1 = test_rng_set_ctx_params(param_1,in_R9);
  if (((int)uVar1 != 0) && (uVar1 = 0, param_2 <= *(uint *)(param_1 + 0xc))) {
    *(undefined4 *)(param_1 + 8) = 1;
    uVar1 = 1;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return uVar1;
}

