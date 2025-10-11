
ulong FUN_005b3b70(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar2 = thunk_FUN_0041cdd0(param_2,"reseed_requests");
  if ((lVar2 != 0) && (uVar3 = thunk_FUN_0041d240(lVar2,param_1 + 0xc4), (int)uVar3 == 0)) {
    return uVar3;
  }
  lVar2 = thunk_FUN_0041cdd0(param_2,"reseed_time_interval");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d520(lVar2,param_1 + 0xd0);
    return (ulong)(iVar1 != 0);
  }
  return 1;
}

