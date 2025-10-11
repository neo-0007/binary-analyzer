
long FUN_0042b160(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN_0056a410();
  lVar3 = FUN_004a12d0(uVar2,uVar1);
  lVar5 = lVar3;
  if ((lVar3 != 0) && (*(long *)(lVar3 + 8) != 0)) {
    lVar4 = FUN_004a8ba0();
    *(long *)(lVar3 + 0x20) = lVar4;
    if (lVar4 == 0) {
      lVar5 = 0;
      FUN_0056a4a0(lVar3);
    }
  }
  return lVar5;
}

