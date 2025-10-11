
long FUN_004ed500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = FUN_004f8980();
  uVar3 = FUN_004b2fd0(param_4);
  lVar4 = FUN_004ef460(uVar3,0,uVar2);
  lVar5 = lVar4;
  if (lVar4 != 0) {
    iVar1 = FUN_004ef9d0(lVar4,param_1,param_2,param_3,param_4);
    if (iVar1 == 0) {
      lVar5 = 0;
      FUN_004efd00(lVar4);
    }
  }
  return lVar5;
}

