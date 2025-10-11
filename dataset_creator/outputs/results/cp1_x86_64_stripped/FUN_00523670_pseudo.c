
ulong FUN_00523670(int param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = FUN_00521cc0();
  uVar4 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    if (*(int *)(param_3 + 8) != 2) {
      return 0;
    }
    if (param_1 == 1) {
      uVar3 = FUN_00423b00(*(undefined4 *)(param_3 + 0x1c));
      *(undefined8 *)(param_3 + 0x20) = uVar3;
      *(undefined4 *)(param_3 + 0x1c) = 0;
      uVar4 = FUN_00521e40(1,param_2,param_3);
      return uVar4;
    }
    uVar1 = FUN_00521e40(param_1,param_2,param_3);
    uVar4 = (ulong)uVar1;
    if ((param_1 == 7) && (0 < (int)uVar1)) {
      uVar2 = FUN_00424460(*(undefined8 *)(param_3 + 0x20));
      *(undefined8 *)(param_3 + 0x20) = 0;
      *(undefined4 *)(param_3 + 0x1c) = uVar2;
    }
  }
  return uVar4;
}

