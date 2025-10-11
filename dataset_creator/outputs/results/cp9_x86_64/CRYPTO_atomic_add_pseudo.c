
undefined8 CRYPTO_atomic_add(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  *param_3 = iVar1 + param_2;
  return 1;
}

