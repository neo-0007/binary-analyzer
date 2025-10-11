
bool FUN_0047b740(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = FUN_0041cdd0(param_2,"state");
  if ((lVar2 != 0) && (iVar1 = thunk_FUN_0041d0b0(lVar2,*(undefined4 *)(param_1 + 8)), iVar1 == 0))
  {
    return false;
  }
  lVar2 = FUN_0041cdd0(param_2,"strength");
  if ((lVar2 != 0) && (iVar1 = thunk_FUN_0041d0b0(lVar2,*(undefined4 *)(param_1 + 0xc)), iVar1 == 0)
     ) {
    return false;
  }
  lVar2 = FUN_0041cdd0(param_2,"max_request");
  bVar3 = true;
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 0x10));
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

