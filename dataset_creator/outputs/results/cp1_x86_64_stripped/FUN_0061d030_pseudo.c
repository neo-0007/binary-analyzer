
undefined8 FUN_0061d030(long *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  
  lVar1 = *param_1;
  uVar3 = thunk_FUN_007129d0(lVar1);
  if (8 < uVar3) {
    pcVar4 = (char *)(lVar1 + 9);
    iVar2 = thunk_FUN_00712ab0(lVar1,"critical,",9);
    if (iVar2 == 0) {
      while( true ) {
        iVar2 = FUN_005466b0((int)*pcVar4,8);
        if (iVar2 == 0) break;
        pcVar4 = pcVar4 + 1;
      }
      *param_1 = (long)pcVar4;
      return 1;
    }
  }
  return 0;
}

