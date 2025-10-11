
undefined8 FUN_00569560(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  *param_2 = 0;
  iVar1 = FUN_0042c5e0(param_1,0xf000);
  if (iVar1 == 0x1000) {
    if (*(long *)(param_1 + 0x80) == 0) {
      *param_3 = 0xffffffff;
      return 1;
    }
    uVar2 = FUN_0056a410();
    lVar3 = FUN_004a2560(*(undefined8 *)(param_1 + 0x80),uVar2,param_2);
    if (lVar3 != 0) {
      *param_3 = 0x10;
      return 1;
    }
    uVar2 = 0;
  }
  else {
    *param_3 = 5;
    uVar2 = 1;
  }
  return uVar2;
}

