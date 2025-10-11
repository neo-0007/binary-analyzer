
int FUN_0040f380(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_004d4b30(param_2);
  if (iVar1 == 0) {
    lVar2 = FUN_004d60c0(param_2);
    if (lVar2 != 0) {
      uVar3 = 0x398;
      goto LAB_0040f3a2;
    }
  }
  uVar3 = 0x1c;
LAB_0040f3a2:
  iVar1 = FUN_0040f1c0(param_1,uVar3,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_004d5ea0(param_2);
  return iVar1;
}

