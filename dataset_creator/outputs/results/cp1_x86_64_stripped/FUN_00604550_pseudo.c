
undefined8 FUN_00604550(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_004a7670();
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = FUN_004a1fa0(lVar2,param_2,param_3);
  if ((iVar1 != 0) && (iVar1 = FUN_00560c20(param_1,0x33,4,lVar2), iVar1 != 0)) {
    return 1;
  }
  thunk_FUN_004a2270(lVar2);
  return 0;
}

