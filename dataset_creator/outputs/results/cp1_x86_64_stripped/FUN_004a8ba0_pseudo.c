
undefined8 FUN_004a8ba0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00423da0(*param_1);
  if (iVar1 == 0x38f) {
    uVar3 = param_1[1];
    uVar2 = FUN_004a8740();
    uVar3 = FUN_004a12d0(uVar2,uVar3);
    return uVar3;
  }
  return 0;
}

