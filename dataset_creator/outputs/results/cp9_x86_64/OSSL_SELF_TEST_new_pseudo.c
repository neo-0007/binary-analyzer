
undefined8 * OSSL_SELF_TEST_new(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(200,"../crypto/self_test_core.c",0x67);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = param_1;
    puVar1[0x18] = param_2;
    *puVar1 = &DAT_008343a2;
    puVar1[1] = &DAT_008343a2;
    puVar1[2] = &DAT_008343a2;
    self_test_setparams(puVar1);
  }
  return puVar1;
}

