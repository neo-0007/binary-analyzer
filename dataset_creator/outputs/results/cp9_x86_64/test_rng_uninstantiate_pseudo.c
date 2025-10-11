
undefined8 test_rng_uninstantiate(long param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return 1;
}

