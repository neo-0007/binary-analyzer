
undefined8 test_rng_nonce(long param_1,void *param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(void **)(param_1 + 0x20) != (void *)0x0) && (param_3 <= *(uint *)(param_1 + 0xc))) {
    if (param_2 != (void *)0x0) {
      memcpy(param_2,*(void **)(param_1 + 0x20),*(size_t *)(param_1 + 0x38));
    }
    uVar1 = *(undefined8 *)(param_1 + 0x38);
  }
  return uVar1;
}

