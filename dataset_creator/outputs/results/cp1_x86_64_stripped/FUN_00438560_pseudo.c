
undefined8 FUN_00438560(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00437b90();
  if (iVar1 == -1) {
    return 0;
  }
  if (param_3 < -1) {
    iVar2 = FUN_00437b90(param_1,param_2,iVar1);
    if (iVar2 != -1) {
      return 0;
    }
    uVar3 = FUN_00437c60(param_1,iVar1);
    if ((param_3 != -2) && (iVar1 = FUN_00438480(uVar3), iVar1 != 1)) {
      return 0;
    }
  }
  else {
    uVar3 = FUN_00437c60(param_1,iVar1);
  }
  uVar3 = FUN_004384e0(uVar3,0,param_4,0);
  return uVar3;
}

