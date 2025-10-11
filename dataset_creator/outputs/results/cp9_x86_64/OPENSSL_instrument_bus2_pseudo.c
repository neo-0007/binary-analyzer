
long OPENSSL_instrument_bus2(int *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = rdtsc();
  clflush((char)*param_1);
  LOCK();
  *param_1 = *param_1;
  UNLOCK();
  uVar2 = rdtsc();
  lVar4 = param_2;
  iVar6 = (int)uVar2;
  iVar7 = (int)uVar2 - (int)uVar1;
  do {
    clflush((char)*param_1);
    LOCK();
    *param_1 = *param_1 + iVar7;
    UNLOCK();
    param_3 = param_3 + -1;
    if (param_3 == 0) break;
    uVar1 = rdtsc();
    iVar3 = (int)uVar1 - iVar6;
    uVar5 = (ulong)(iVar3 != iVar7);
    lVar4 = lVar4 - uVar5;
    param_1 = param_1 + uVar5;
    iVar6 = (int)uVar1;
    iVar7 = iVar3;
  } while (lVar4 != 0);
  return param_2 - lVar4;
}

