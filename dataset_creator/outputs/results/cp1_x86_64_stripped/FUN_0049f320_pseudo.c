
int FUN_0049f320(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x100;
  uVar3 = *(uint *)(param_2 + 4) & 0x100;
  if (uVar3 != uVar1) {
    return (-(uint)(uVar1 == 0) & 2) - 1;
  }
  iVar2 = FUN_004a2350();
  if (uVar3 != 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}

