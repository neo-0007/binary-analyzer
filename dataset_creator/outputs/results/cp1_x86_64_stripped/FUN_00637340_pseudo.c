
long FUN_00637340(long *param_1,char param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  lVar3 = -1;
  if (param_3 < *(ulong *)(lVar1 + -0x18)) {
    lVar2 = thunk_FUN_007134f0(lVar1 + param_3,(int)param_2,*(ulong *)(lVar1 + -0x18) - param_3);
    if (lVar2 != 0) {
      lVar3 = lVar2 - lVar1;
    }
  }
  return lVar3;
}

