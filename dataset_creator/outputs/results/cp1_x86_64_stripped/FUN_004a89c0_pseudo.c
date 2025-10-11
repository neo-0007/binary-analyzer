
void FUN_004a89c0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00424ba0(*param_1,*param_2);
  if (iVar1 == 0) {
    if (param_1[1] != 0 || param_2[1] != 0) {
      FUN_004a11e0();
      return;
    }
  }
  return;
}

