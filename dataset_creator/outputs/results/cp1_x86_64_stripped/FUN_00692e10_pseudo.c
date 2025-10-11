
int FUN_00692e10(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  iVar3 = -1;
  if (*(ulong *)(param_1 + 8) < uVar2) {
    if (param_2 == -1) {
      *(ulong *)(param_1 + 0x10) = uVar2 - 4;
      return 0;
    }
    iVar1 = *(int *)(uVar2 - 4);
    if (((*(byte *)(param_1 + 0x40) & 0x10) != 0) || (iVar1 == param_2)) {
      *(ulong *)(param_1 + 0x10) = uVar2 - 4;
      iVar3 = param_2;
      if (iVar1 != param_2) {
        *(int *)(uVar2 - 4) = param_2;
        return param_2;
      }
    }
  }
  return iVar3;
}

