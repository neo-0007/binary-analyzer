
long FUN_006c3f80(undefined8 param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  
  uVar1 = FUN_006c3ea0();
  lVar4 = param_3;
  while( true ) {
    while (lVar2 = FUN_0076da60(uVar1,param_2,lVar4), lVar2 == -1) {
      piVar3 = (int *)FUN_006d2700();
      if (*piVar3 != 4) {
        return param_3 - lVar4;
      }
    }
    lVar4 = lVar4 - lVar2;
    if (lVar4 == 0) break;
    param_2 = param_2 + lVar2;
  }
  return param_3;
}

