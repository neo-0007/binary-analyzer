
ulong FUN_004759e0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FUN_0041cdd0(param_2,"size");
  if ((lVar2 != 0) &&
     (uVar3 = thunk_FUN_0041d9c0(lVar2,*(undefined1 *)(param_1 + 0x80)), (int)uVar3 == 0)) {
    return uVar3;
  }
  lVar2 = FUN_0041cdd0(param_2,"block-size");
  uVar3 = 1;
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d9c0(lVar2,0x40);
    uVar3 = (ulong)(iVar1 != 0);
  }
  return uVar3;
}

