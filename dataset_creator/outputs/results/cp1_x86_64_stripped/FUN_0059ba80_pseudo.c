
undefined8 FUN_0059ba80(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0059e6c0(param_2);
  uVar3 = FUN_0059e6d0(param_1);
  iVar1 = FUN_0059eab0(uVar3,uVar2);
  if (iVar1 != 0) {
    return 0x1d;
  }
  iVar1 = FUN_0059afc0(param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_0059afc0(param_2), iVar1 != 0)) {
    uVar2 = FUN_0059aef0(param_1,*(undefined8 *)(param_2 + 0x100));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_0059ef80(param_1);
    uVar2 = FUN_0059a320(uVar2,param_2);
    return uVar2;
  }
  return 1;
}

