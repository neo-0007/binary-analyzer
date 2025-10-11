
uint FUN_00461c50(undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                 code *param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if ((param_3 & 1) == 0) {
    if ((param_3 & 2) == 0) {
      return param_3 & 2;
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  lVar4 = FUN_0040ec60();
  if (((lVar4 == 0) || (iVar2 = (*param_5)(lVar4,param_2), iVar2 == 0)) ||
     (lVar5 = FUN_0043bf50(*param_1,param_4), lVar5 == 0)) {
    uVar3 = 0;
  }
  else {
    if (bVar1) {
      uVar3 = FUN_0055b380();
    }
    else {
      uVar3 = FUN_0055b370(lVar5,lVar4);
    }
    FUN_004ab560(lVar5);
  }
  FUN_0040f4f0(lVar4);
  return uVar3;
}

