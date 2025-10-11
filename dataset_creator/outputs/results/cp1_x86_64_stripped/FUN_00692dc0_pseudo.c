
int FUN_00692dc0(long param_1,int param_2)

{
  char cVar1;
  ulong uVar2;
  char cVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (*(ulong *)(param_1 + 8) < uVar2) {
    if (param_2 == -1) {
      *(ulong *)(param_1 + 0x10) = uVar2 - 1;
      return 0;
    }
    cVar1 = *(char *)(uVar2 - 1);
    cVar3 = (char)param_2;
    if (((*(byte *)(param_1 + 0x40) & 0x10) != 0) || (cVar1 == cVar3)) {
      *(ulong *)(param_1 + 0x10) = uVar2 - 1;
      if (cVar1 == cVar3) {
        return param_2;
      }
      *(char *)(uVar2 - 1) = cVar3;
      return param_2;
    }
  }
  return -1;
}

