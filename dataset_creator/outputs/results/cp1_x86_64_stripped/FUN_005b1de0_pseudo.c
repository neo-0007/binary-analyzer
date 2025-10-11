
bool FUN_005b1de0(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  if (param_4 != 0x477) {
    return false;
  }
  iVar1 = FUN_00546d60();
  if ((iVar1 != 0) && (iVar1 = FUN_00546a10(param_1,0xffffffff,&DAT_0081c1f8,10), iVar1 != 0)) {
    iVar1 = FUN_00546da0(param_1,param_2);
    return iVar1 != 0;
  }
  return false;
}

