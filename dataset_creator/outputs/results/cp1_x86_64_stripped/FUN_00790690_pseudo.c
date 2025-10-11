
void FUN_00790690(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_0094b100 != 0) {
    return;
  }
  iVar1 = FUN_007ab740();
  iVar2 = FUN_007ab730();
  uVar3 = 1;
  if (iVar2 == iVar1) {
    iVar1 = FUN_007ab760();
    iVar2 = FUN_007ab750();
    uVar3 = (uint)(iVar2 != iVar1);
  }
  DAT_0093ae30 = uVar3;
  return;
}

