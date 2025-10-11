
long * FUN_0068e350(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 != 0) {
    uVar1 = thunk_FUN_007129d0(param_2);
    FUN_0068ddc0(param_1,param_2,uVar1);
    return param_1;
  }
  lVar2 = *(long *)(*param_1 + -0x18) + (long)param_1;
  FUN_0066ec40(lVar2,*(uint *)(lVar2 + 0x20) | 1);
  return param_1;
}

