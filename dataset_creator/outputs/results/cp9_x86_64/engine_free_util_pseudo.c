
undefined8 engine_free_util(void *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (void *)0x0) {
    return 1;
  }
  piVar1 = (int *)((long)param_1 + 0x9c);
  if (param_2 == 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    iVar2 = iVar2 + -1;
  }
  else {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) goto LAB_0050c591;
  }
  if (0 < iVar2) {
    return 1;
  }
LAB_0050c591:
  engine_pkey_meths_free(param_1);
  engine_pkey_asn1_meths_free(param_1);
  if (*(code **)((long)param_1 + 0x58) != (code *)0x0) {
    (**(code **)((long)param_1 + 0x58))(param_1);
  }
  engine_remove_dynamic_id(param_1,param_2);
  CRYPTO_free_ex_data(10,param_1,(CRYPTO_EX_DATA *)((long)param_1 + 0xa8));
  CRYPTO_free(param_1);
  return 1;
}

