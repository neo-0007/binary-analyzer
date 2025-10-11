
undefined8 FUN_00466590(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00485290(param_2);
  lVar2 = FUN_0053c390(uVar1,"SCRYPT",0);
  if (lVar2 != 0) {
    uVar1 = FUN_0053c460(lVar2);
    thunk_FUN_0053bf90(lVar2);
    return uVar1;
  }
  return 0;
}

