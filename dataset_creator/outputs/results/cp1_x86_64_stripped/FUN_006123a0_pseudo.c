
long FUN_006123a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = 0;
  lVar4 = param_3;
  while( true ) {
    iVar1 = FUN_00436480(param_2);
    if (iVar1 <= iVar5) {
      if (lVar4 != 0) {
        return lVar4;
      }
      lVar4 = FUN_00436410();
      return lVar4;
    }
    uVar2 = FUN_004364a0(param_2,iVar5);
    lVar3 = FUN_00611ef0(param_1,uVar2,lVar4);
    if (lVar3 == 0) break;
    iVar5 = iVar5 + 1;
    lVar4 = lVar3;
  }
  if (param_3 == 0) {
    FUN_00436430(lVar4,FUN_0059cb40);
    return 0;
  }
  return 0;
}

