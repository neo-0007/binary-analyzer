
undefined8 FUN_0040d5f0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00423b00(*param_1);
  iVar1 = FUN_00422f70(uVar2,1,param_1);
  if (iVar1 != 0) {
    uVar3 = FUN_00423c40(*param_1);
    uVar3 = FUN_00422f70(uVar3,1,param_1);
    if ((int)uVar3 != 0) {
      if (param_1[1] == 0) {
        return uVar3;
      }
      if (param_1[1] == *param_1) {
        return uVar3;
      }
      uVar3 = FUN_00423b00();
      iVar1 = FUN_00422f70(uVar3,0x8001,uVar2);
      if (iVar1 != 0) {
        uVar3 = FUN_00423c40(param_1[1]);
        uVar2 = FUN_00422f70(uVar3,0x8001,uVar2);
        return uVar2;
      }
    }
  }
  return 0;
}

