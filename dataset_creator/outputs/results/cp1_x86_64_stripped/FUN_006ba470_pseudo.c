
undefined8 FUN_006ba470(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (**(char **)(param_1 + 0x18) == 'J') {
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  else if (param_2 == 0) {
    lVar1 = 0;
    lVar2 = FUN_006ba370(param_1);
    if (lVar2 == 0) {
      return 0;
    }
    goto LAB_006ba4a7;
  }
  lVar1 = FUN_006b9850(param_1);
  if ((lVar1 == 0) || (lVar2 = FUN_006ba370(param_1), lVar2 == 0)) {
    return 0;
  }
LAB_006ba4a7:
  uVar3 = FUN_006b8b90(param_1,0x29,lVar1,lVar2);
  return uVar3;
}

