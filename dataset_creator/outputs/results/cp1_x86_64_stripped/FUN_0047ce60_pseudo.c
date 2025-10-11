
bool FUN_0047ce60(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    return false;
  }
  lVar2 = FUN_0041cdd0(param_2,"algorithm-id");
  if (lVar2 != 0) {
    iVar1 = FUN_0041e220(lVar2,*(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x158));
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"digest");
  bVar3 = true;
  if (lVar2 != 0) {
    iVar1 = FUN_0041e1a0(lVar2,param_1 + 0x19);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

