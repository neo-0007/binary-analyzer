
long OPENSSL_instrument_bus(int *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  
  uVar1 = rdtsc();
  clflush((char)*param_1);
  LOCK();
  *param_1 = *param_1;
  UNLOCK();
  lVar2 = param_2;
  iVar3 = (int)uVar1;
  do {
    uVar1 = rdtsc();
    clflush((char)*param_1);
    LOCK();
    *param_1 = *param_1 + ((int)uVar1 - iVar3);
    UNLOCK();
    param_1 = param_1 + 1;
    lVar2 = lVar2 + -1;
    iVar3 = (int)uVar1;
  } while (lVar2 != 0);
  return param_2;
}

