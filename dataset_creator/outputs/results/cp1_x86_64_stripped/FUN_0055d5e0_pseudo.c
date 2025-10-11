
long FUN_0055d5e0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == (long *)0x0) {
    lVar2 = 0;
    uVar3 = 0;
  }
  else {
    lVar2 = *param_1;
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x28);
      lVar2 = *(long *)(lVar2 + 0x30);
    }
  }
  uVar1 = FUN_0055d440();
  lVar2 = FUN_004a54e0(param_1,param_2,param_3,uVar1,uVar3,lVar2);
  if (lVar2 != 0) {
    FUN_00561650(lVar2);
  }
  return lVar2;
}

