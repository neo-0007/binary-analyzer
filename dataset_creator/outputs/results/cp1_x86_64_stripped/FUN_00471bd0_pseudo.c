
bool FUN_00471bd0(undefined8 param_1,uint param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = FUN_004ebc60(param_1,param_3);
  lVar3 = FUN_004ee2d0(param_1);
  if ((lVar3 != 0) && (iVar2 = FUN_004ef870(lVar3), param_4 == (iVar2 == 0x494))) {
    if ((param_2 & 3) == 0) {
      if ((param_2 & 0x80) == 0) {
        return iVar1 != 0;
      }
      if (iVar1 != 0) goto LAB_00471c5d;
    }
    else if ((iVar1 != 0) && (iVar1 = FUN_004eba00(param_1,param_3,param_2 & 1), iVar1 != 0)) {
      if ((param_2 & 0x80) == 0) {
        return true;
      }
LAB_00471c5d:
      iVar1 = FUN_004ec060(param_1,param_3);
      return iVar1 != 0;
    }
  }
  return false;
}

