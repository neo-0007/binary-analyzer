
long FUN_00422590(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *param_1;
  do {
    iVar1 = param_2 + iVar3;
    LOCK();
    iVar2 = *param_1;
    bVar4 = iVar3 == iVar2;
    if (bVar4) {
      *param_1 = iVar1;
      iVar2 = iVar3;
    }
    iVar3 = iVar2;
    UNLOCK();
  } while (!bVar4);
  return (long)iVar1;
}

