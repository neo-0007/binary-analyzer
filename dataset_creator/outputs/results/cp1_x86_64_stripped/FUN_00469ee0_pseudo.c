
undefined8 FUN_00469ee0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0041cdd0(param_2,"size");
  if (lVar1 != 0) {
    uVar2 = thunk_FUN_0041d9c0(lVar1,0xffffffffffffffff);
    return uVar2;
  }
  return 0xfffffffe;
}

