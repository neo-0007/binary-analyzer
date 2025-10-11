
ulong FUN_004772f0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_0041cdd0(param_2,"size");
  if ((lVar3 != 0) &&
     (uVar4 = thunk_FUN_0041d9c0(lVar3,*(undefined8 *)(param_1 + 0x28)), (int)uVar4 == 0)) {
    return uVar4;
  }
  lVar3 = FUN_0041cdd0(param_2,"block-size");
  uVar4 = 1;
  if (lVar3 != 0) {
    uVar5 = FUN_0043c7e0(param_1 + 0x10);
    uVar1 = FUN_0040abc0(uVar5);
    iVar2 = thunk_FUN_0041d0b0(lVar3,uVar1);
    uVar4 = (ulong)(iVar2 != 0);
  }
  return uVar4;
}

