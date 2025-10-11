
bool FUN_00485120(undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_3 == 0) {
    iVar1 = FUN_00546d60();
    if (iVar1 == 0) {
      return false;
    }
    puVar2 = &DAT_0080df70;
  }
  else {
    if (param_3 != 0x1000) {
      return false;
    }
    iVar1 = FUN_00546d60();
    if (iVar1 == 0) {
      return false;
    }
    iVar1 = FUN_00433230(param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_00484e10(param_1,0xffffffff,param_4), iVar1 == 0)) {
      return false;
    }
    puVar2 = &DAT_0080df40;
  }
  iVar1 = FUN_00546a10(param_1,0xffffffff,puVar2,0xb);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00546da0(param_1,param_2);
  return iVar1 != 0;
}

