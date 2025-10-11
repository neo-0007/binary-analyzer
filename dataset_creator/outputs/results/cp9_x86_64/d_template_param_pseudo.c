
undefined4 * d_template_param(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  char *pcVar4;
  
  pcVar4 = *(char **)(param_1 + 0x18);
  if (*pcVar4 != 'T') {
    return (undefined4 *)0x0;
  }
  *(char **)(param_1 + 0x18) = pcVar4 + 1;
  if (pcVar4[1] == '_') {
    pcVar4 = pcVar4 + 2;
    lVar3 = 0;
  }
  else {
    if (pcVar4[1] == 'n') {
      return (undefined4 *)0x0;
    }
    iVar1 = d_number();
    lVar3 = (long)(iVar1 + 1);
    if (iVar1 + 1 < 0) {
      return (undefined4 *)0x0;
    }
    if (**(char **)(param_1 + 0x18) != '_') {
      return (undefined4 *)0x0;
    }
    pcVar4 = *(char **)(param_1 + 0x18) + 1;
  }
  *(char **)(param_1 + 0x18) = pcVar4;
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x2c) <= iVar1) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)((long)iVar1 * 0x20 + *(long *)(param_1 + 0x20));
  *(undefined8 *)(puVar2 + 1) = 0;
  *(int *)(param_1 + 0x28) = iVar1 + 1;
  *puVar2 = 5;
  *(long *)(puVar2 + 4) = lVar3;
  return puVar2;
}

