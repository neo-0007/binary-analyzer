
undefined8 FUN_006bae30(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  pcVar3 = *(char **)(param_1 + 0x18);
  cVar1 = *pcVar3;
  if (cVar1 == 'L') {
    uVar4 = FUN_006bac40();
    return uVar4;
  }
  if (cVar1 < 'M') {
    if ((byte)(cVar1 + 0xb7U) < 2) {
      *(char **)(param_1 + 0x18) = pcVar3 + 1;
      uVar4 = FUN_006baeb0();
      return uVar4;
    }
  }
  else if (cVar1 == 'X') {
    *(char **)(param_1 + 0x18) = pcVar3 + 1;
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x4c) = 1;
    uVar4 = FUN_006bb140();
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
    if (**(char **)(param_1 + 0x18) == 'E') {
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    }
    else {
      uVar4 = 0;
    }
    return uVar4;
  }
  uVar4 = FUN_006b9850();
  return uVar4;
}

