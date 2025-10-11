
int FUN_004b0710(long param_1,long param_2,int param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (param_2 != 0)) {
    iVar1 = FUN_006fdea0(param_2,(long)param_3,1,*(undefined8 *)(param_1 + 0x40));
    if (iVar1 != 0) {
      return param_3;
    }
    return 0;
  }
  return 0;
}

