
uint FUN_0061b580(long param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_1 != 0) {
    bVar3 = *(long *)(param_1 + 0x10) != 0;
    uVar2 = (uint)bVar3;
    if (*(long *)(param_1 + 8) != 0) {
      iVar1 = FUN_00436480();
      uVar2 = (uint)bVar3 + iVar1;
    }
    return uVar2;
  }
  return 0;
}

