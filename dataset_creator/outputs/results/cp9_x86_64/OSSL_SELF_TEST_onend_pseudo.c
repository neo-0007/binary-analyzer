
void OSSL_SELF_TEST_onend(undefined8 *param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[3] != 0) {
      puVar1 = &DAT_007c5aad;
      if (param_2 != 1) {
        puVar1 = &DAT_007c5ab2;
      }
      *param_1 = puVar1;
      self_test_setparams();
      (*(code *)param_1[3])(param_1 + 4,param_1[0x18]);
      *param_1 = "None";
      param_1[1] = "None";
      param_1[2] = "None";
    }
    return;
  }
  return;
}

