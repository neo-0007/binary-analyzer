
ulong FUN_004d2dc0(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_005422f0(*(long *)(param_1 + 0x20) + 8,*(long *)(param_2 + 0x20) + 8,
                       *(undefined **)(param_1 + 8) != &DAT_00902400);
  if ((int)uVar2 != 0) {
    iVar1 = FUN_004b7840(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x70),
                         *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70));
    uVar2 = (ulong)(iVar1 == 0);
  }
  return uVar2;
}

