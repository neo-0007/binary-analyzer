
undefined4 FUN_004a2750(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = FUN_004a7670();
  uVar2 = 0;
  if (lVar3 != 0) {
    iVar1 = thunk_FUN_004a1fa0(lVar3,param_2,param_3);
    if (iVar1 == 0) {
      thunk_FUN_004a2270(lVar3);
      return 0;
    }
    FUN_004a10c0(param_1,4,lVar3);
    uVar2 = 1;
  }
  return uVar2;
}

