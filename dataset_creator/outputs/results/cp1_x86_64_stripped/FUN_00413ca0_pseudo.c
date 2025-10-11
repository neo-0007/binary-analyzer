
ulong FUN_00413ca0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar3 = FUN_0053e720(*(long *)(param_1 + 0x20));
    return uVar3;
  }
  iVar1 = **(int **)(param_1 + 0x78);
  iVar2 = FUN_0040e5a0(param_2);
  return (ulong)(iVar1 == iVar2);
}

