
ulong FUN_0040e680(int *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = FUN_0053e720();
    return uVar2;
  }
  iVar1 = FUN_0040e5a0(param_2);
  return (ulong)(*param_1 == iVar1);
}

