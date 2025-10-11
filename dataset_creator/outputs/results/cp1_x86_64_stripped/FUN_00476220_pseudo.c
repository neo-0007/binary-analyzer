
ulong FUN_00476220(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar2 = FUN_0041cdd0(param_2,"size");
  if (lVar2 != 0) {
    uVar3 = FUN_004cb6f0(*(undefined8 *)(param_1 + 8));
    iVar1 = FUN_004096f0(uVar3);
    uVar4 = thunk_FUN_0041d9c0(lVar2,(long)iVar1);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"block-size");
  uVar4 = 1;
  if (lVar2 != 0) {
    uVar3 = FUN_004cb6f0(*(undefined8 *)(param_1 + 8));
    iVar1 = FUN_004096f0(uVar3);
    iVar1 = thunk_FUN_0041d9c0(lVar2,(long)iVar1);
    uVar4 = (ulong)(iVar1 != 0);
  }
  return uVar4;
}

