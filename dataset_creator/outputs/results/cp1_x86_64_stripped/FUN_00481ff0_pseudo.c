
bool FUN_00481ff0(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return false;
  }
  lVar3 = FUN_0041cdd0(param_2,"algorithm-id");
  if (lVar3 == 0) {
LAB_00482037:
    lVar3 = FUN_0041cdd0(param_2,"digest-size");
    if (lVar3 != 0) {
      iVar2 = thunk_FUN_0041d9c0(lVar3,*(undefined8 *)(param_1 + 0x170));
      if (iVar2 == 0) goto LAB_004820b0;
    }
    lVar3 = FUN_0041cdd0(param_2,"digest");
    bVar1 = true;
    if (lVar3 != 0) {
      lVar4 = param_1 + 0x19;
      if (*(long *)(param_1 + 0x160) != 0) {
        lVar4 = FUN_0040ab30(*(long *)(param_1 + 0x160),lVar4);
      }
      iVar2 = FUN_0041e1a0(lVar3,lVar4);
      return iVar2 != 0;
    }
  }
  else {
    iVar2 = FUN_0041e220(lVar3,*(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x158));
    if (iVar2 != 0) goto LAB_00482037;
LAB_004820b0:
    bVar1 = false;
  }
  return bVar1;
}

