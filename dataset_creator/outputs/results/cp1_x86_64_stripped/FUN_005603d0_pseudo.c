
long FUN_005603d0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_00437c20(param_1,0x33,0xffffffff);
  uVar2 = FUN_00437c60(param_1,uVar1);
  lVar3 = FUN_004384c0(uVar2,0);
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 8);
  }
  return lVar3;
}

