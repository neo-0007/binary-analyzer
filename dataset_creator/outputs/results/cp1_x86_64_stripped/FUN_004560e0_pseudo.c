
bool FUN_004560e0(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0042c5e0(param_1,0xf000);
  if (iVar1 == 0) {
    return param_2 == 6;
  }
  if (iVar1 == 0x1000) {
    return param_2 == 0x390;
  }
  return false;
}

