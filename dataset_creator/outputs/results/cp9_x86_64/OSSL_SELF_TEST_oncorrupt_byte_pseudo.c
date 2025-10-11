
undefined8 OSSL_SELF_TEST_oncorrupt_byte(undefined8 *param_1,byte *param_2)

{
  int iVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_1[3] != 0) {
    *param_1 = "Corrupt";
    self_test_setparams();
    iVar1 = (*(code *)param_1[3])(param_1 + 4,param_1[0x18]);
    if (iVar1 == 0) {
      *param_2 = *param_2 ^ 1;
      return 1;
    }
  }
  return 0;
}

