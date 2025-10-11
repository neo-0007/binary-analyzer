
bool FUN_00546a90(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  if (((param_2 < 0) || ((param_2 < 0x1f && (iVar1 = FUN_00547790(), iVar1 != 0)))) &&
     ((iVar1 = FUN_00547790(param_1), iVar1 != 0 &&
      ((((param_3 == 0 || (iVar1 = FUN_005477a0(param_1,0xff,1), iVar1 != 0)) &&
        (iVar1 = FUN_00547aa0(param_1), iVar1 == 0)) &&
       (iVar1 = FUN_005477a0(param_1,1,1), iVar1 == 0)))))) {
    iVar1 = FUN_00546870(param_1,param_2);
    bVar2 = iVar1 != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

