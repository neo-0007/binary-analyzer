
undefined8 FUN_005ce9e0(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar2 = 0;
  do {
    uVar1 = (**(code **)(*param_1 + 0xd0))(param_1,*(undefined8 *)(param_3 + lVar2 * 8),param_4);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    lVar2 = lVar2 + 1;
  } while (param_2 != lVar2);
  return 1;
}

