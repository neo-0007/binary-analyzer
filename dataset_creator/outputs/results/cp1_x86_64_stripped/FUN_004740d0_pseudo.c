
undefined8 FUN_004740d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = thunk_FUN_0041cdd0(param_2,&DAT_007ce5df);
  if (lVar1 == 0) {
    return 1;
  }
  uVar2 = FUN_00473bb0(param_1,param_2);
  return uVar2;
}

