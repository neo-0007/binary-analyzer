
undefined8 FUN_00487bf0(long param_1,undefined8 param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  if ((*(byte *)(param_1 + 0x54) & 0x14) != 0x14) {
    return 0;
  }
  iVar4 = (**(code **)(*(long *)(param_1 + 0xf0) + 8))
                    (param_1,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10));
  if (iVar4 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x10);
    uVar6 = param_3;
    if (uVar2 <= param_3) {
      uVar6 = uVar2;
    }
    if (param_3 == 0) {
      uVar6 = uVar2;
    }
    thunk_FUN_00713a50(param_2,param_1 + 0x55 + (uVar2 - uVar6));
    lVar3 = *(long *)(param_1 + 0x10);
    lVar5 = 7;
    do {
      pcVar1 = (char *)(lVar3 + param_1 + 0x4d + lVar5);
      *pcVar1 = *pcVar1 + '\x01';
      iVar4 = (int)lVar5;
      lVar5 = lVar5 + -1;
    } while (*pcVar1 == '\0' && iVar4 != 0);
    *(undefined4 *)(param_1 + 0x50) = 2;
    return 1;
  }
  return 0;
}

