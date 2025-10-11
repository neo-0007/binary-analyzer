
bool FUN_0055d4e0(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0xc) {
LAB_0055d512:
    lVar2 = FUN_0055e4c0(*param_2,*param_4);
    param_4[1] = lVar2;
    return lVar2 != 0;
  }
  if (param_1 < 0xd) {
    if (param_1 == 10) {
      iVar1 = FUN_005620b0(param_4 + 2,*param_2);
      if (iVar1 < 1) {
        return false;
      }
      goto LAB_0055d512;
    }
    if (param_1 != 0xb) {
      return true;
    }
  }
  else if (param_1 != 0xd) {
    return true;
  }
  iVar1 = FUN_0055fc20(*param_2,param_4[1]);
  return 0 < iVar1;
}

