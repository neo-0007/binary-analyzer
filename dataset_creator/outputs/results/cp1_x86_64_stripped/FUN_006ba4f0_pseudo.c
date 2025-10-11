
undefined8 FUN_006ba4f0(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  char *pcVar3;
  
  if ((*(byte *)(param_1 + 0x12) & 4) == 0) {
    uVar2 = *(uint *)(param_1 + 0x58);
    if (0x800 < uVar2) {
      return 0;
    }
    pcVar3 = *(char **)(param_1 + 0x18);
    *(uint *)(param_1 + 0x58) = uVar2 + 1;
    uVar1 = 0;
    if (*pcVar3 != 'F') goto LAB_006ba516;
  }
  else {
    pcVar3 = *(char **)(param_1 + 0x18);
    if (*pcVar3 != 'F') {
      return 0;
    }
  }
  *(char **)(param_1 + 0x18) = pcVar3 + 1;
  if (pcVar3[1] == 'Y') {
    *(char **)(param_1 + 0x18) = pcVar3 + 2;
  }
  uVar1 = FUN_006ba470(param_1,1);
  uVar1 = FUN_006b8df0(param_1,uVar1);
  if (**(char **)(param_1 + 0x18) == 'E') {
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  else {
    uVar1 = 0;
  }
  if ((*(byte *)(param_1 + 0x12) & 4) != 0) {
    return uVar1;
  }
  uVar2 = *(int *)(param_1 + 0x58) - 1;
LAB_006ba516:
  *(uint *)(param_1 + 0x58) = uVar2;
  return uVar1;
}

