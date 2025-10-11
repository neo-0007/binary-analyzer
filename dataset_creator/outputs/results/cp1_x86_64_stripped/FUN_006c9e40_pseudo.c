
bool FUN_006c9e40(long *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long extraout_RDX;
  
  iVar1 = (**(code **)(*param_1 + 0x28))();
  if (*(long *)(param_3 + 2) != extraout_RDX) {
    return false;
  }
  return *param_3 == iVar1;
}

