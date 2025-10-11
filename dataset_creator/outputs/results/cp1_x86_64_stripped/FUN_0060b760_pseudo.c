
ulong FUN_0060b760(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return 1;
  }
  uVar2 = FUN_0060a910(*param_1);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = FUN_0060a910(param_1[1]);
  return (ulong)(iVar1 != 0);
}

