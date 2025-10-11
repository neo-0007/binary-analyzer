
undefined8 test_rng_generate(long param_1,void *param_2,ulong param_3,uint param_4)

{
  if ((param_4 <= *(uint *)(param_1 + 0xc)) &&
     (param_3 <= (ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x30)))) {
    memcpy(param_2,(void *)(*(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x18)),param_3);
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + param_3;
    return 1;
  }
  return 0;
}

