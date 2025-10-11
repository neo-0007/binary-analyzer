
undefined8 d_discriminator(long param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = *(char **)(param_1 + 0x18);
  if (*pcVar1 != '_') {
    return 1;
  }
  *(char **)(param_1 + 0x18) = pcVar1 + 1;
  if (pcVar1[1] == '_') {
    *(char **)(param_1 + 0x18) = pcVar1 + 2;
    iVar2 = d_number();
    if (iVar2 < 0) {
      return 0;
    }
    if (9 < iVar2) {
      if (**(char **)(param_1 + 0x18) != '_') {
        return 0;
      }
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    }
  }
  else {
    iVar2 = d_number();
    if (iVar2 < 0) {
      return 0;
    }
  }
  return 1;
}

