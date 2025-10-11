
bool FUN_004091a0(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00420cf0();
  uVar2 = FUN_00418710(uVar2);
  if (param_1 == 0) {
    param_2 = FUN_00418920(uVar2,param_3);
  }
  iVar1 = FUN_00418920(uVar2,param_4);
  return iVar1 == param_2;
}

