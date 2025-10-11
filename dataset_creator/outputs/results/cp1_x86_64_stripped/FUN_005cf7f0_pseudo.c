
ulong FUN_005cf7f0(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  iVar1 = FUN_004f0cc0();
  if (iVar1 == 0) {
    uVar2 = FUN_004b7ba0(*(undefined8 *)(param_2 + 0x18));
    if (uVar2 == 0) {
      if (*(code **)(*param_1 + 0xd0) == (code *)0x0) {
        return (ulong)uVar2;
      }
      iVar1 = (**(code **)(*param_1 + 0xd0))(param_1,param_2,param_3);
      if (iVar1 == 0) {
        return (ulong)uVar2;
      }
      uVar3 = FUN_006184d0(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
                           *(undefined8 *)(param_2 + 0x18));
      return uVar3;
    }
  }
  return 1;
}

