
bool FUN_00478270(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  lVar2 = FUN_0041cdd0(param_2,"size");
  if (lVar2 != 0) {
    uVar3 = FUN_0058e9d0(param_1 + 8);
    iVar1 = thunk_FUN_0041d9c0(lVar2,uVar3);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"c-rounds");
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    if (*(int *)(param_1 + 0x48) == 0) {
      iVar1 = 2;
    }
    iVar1 = thunk_FUN_0041d380(lVar2,iVar1);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"d-rounds");
  bVar4 = true;
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0x4c) == 0) {
      iVar1 = 4;
    }
    iVar1 = thunk_FUN_0041d380(lVar2,iVar1);
    bVar4 = iVar1 != 0;
  }
  return bVar4;
}

