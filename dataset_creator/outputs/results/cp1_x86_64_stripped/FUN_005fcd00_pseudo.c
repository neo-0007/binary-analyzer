
int FUN_005fcd00(undefined8 param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 != 0) {
    lVar3 = FUN_004ab640();
    lVar4 = FUN_004ac470(param_1);
    if ((lVar3 != 0) && (lVar4 != 0)) {
      iVar1 = FUN_004ab770(lVar4,param_2,param_3);
      iVar2 = FUN_004ab660(param_1);
      if ((iVar2 != 0) &&
         ((0 < iVar1 && (iVar2 = FUN_00405f60(lVar3,param_2,(long)iVar1), iVar2 < 1)))) {
        return -1;
      }
      FUN_004ab6c0(param_1,0xf);
      FUN_004ac5f0(param_1);
      return iVar1;
    }
  }
  return 0;
}

