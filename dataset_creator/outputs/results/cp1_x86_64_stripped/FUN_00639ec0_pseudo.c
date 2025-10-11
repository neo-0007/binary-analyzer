
void FUN_00639ec0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = -1;
  if (param_2 != 0) {
    lVar2 = thunk_FUN_007129d0(param_2,0xffffffffffffffff);
    lVar2 = param_2 + lVar2;
  }
  uVar1 = FUN_00639a20(param_2,lVar2,param_3);
  *param_1 = uVar1;
  return;
}

