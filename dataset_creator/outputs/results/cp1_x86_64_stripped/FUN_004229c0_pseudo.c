
long FUN_004229c0(ulong *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar3 = 8;
    do {
      while( true ) {
        uVar2 = rdrand();
        bVar4 = (bool)rdrandIsValid();
        if (!bVar4) break;
        if (param_2 < 8) {
          do {
            *(char *)param_1 = (char)uVar2;
            param_1 = (ulong *)((long)param_1 + 1);
            lVar1 = lVar1 + 1;
            uVar2 = uVar2 >> 8;
            param_2 = param_2 - 1;
          } while (param_2 != 0);
          return lVar1;
        }
        *param_1 = uVar2;
        param_1 = param_1 + 1;
        lVar1 = lVar1 + 8;
        param_2 = param_2 - 8;
        if (param_2 == 0) {
          return lVar1;
        }
        lVar3 = 8;
      }
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return lVar1;
}

