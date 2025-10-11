
bool FUN_00484db0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00546d60();
  if (iVar1 != 0) {
    iVar1 = FUN_00546a10(param_1,0xffffffff,&DAT_0080de29,5);
    if (iVar1 != 0) {
      iVar1 = FUN_00546da0(param_1,param_2);
      return iVar1 != 0;
    }
  }
  return false;
}

