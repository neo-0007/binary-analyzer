
bool FUN_00546d60(undefined8 param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    if (param_2 < 0x1f) {
      iVar1 = FUN_00547790();
      if (iVar1 != 0) goto LAB_00546d81;
    }
    return false;
  }
LAB_00546d81:
  iVar1 = FUN_00547790(param_1);
  return iVar1 != 0;
}

