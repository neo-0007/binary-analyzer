
undefined8 * d_source_name(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  char *pcVar4;
  undefined8 *puVar5;
  
  iVar3 = d_number();
  if (iVar3 < 1) {
    return (undefined8 *)0x0;
  }
  plVar2 = *(long **)(param_1 + 0x18);
  if ((long)iVar3 <= *(long *)(param_1 + 8) - (long)plVar2) {
    pcVar4 = (char *)((long)iVar3 + (long)plVar2);
    *(char **)(param_1 + 0x18) = pcVar4;
    if (((*(byte *)(param_1 + 0x10) & 4) != 0) && (*pcVar4 == '$')) {
      *(char **)(param_1 + 0x18) = pcVar4 + 1;
    }
    if ((((iVar3 < 10) || (*plVar2 != 0x5f4c41424f4c475f)) ||
        (0x3b < (byte)(*(byte *)(plVar2 + 1) - 0x24))) ||
       (((0xf7fffffffffffbfeU >> ((ulong)(*(byte *)(plVar2 + 1) - 0x24) & 0x3f) & 1) != 0 ||
        (*(char *)((long)plVar2 + 9) != 'N')))) {
      puVar5 = (undefined8 *)d_make_name(param_1);
      goto LAB_006b7508;
    }
    iVar1 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x48) = (*(int *)(param_1 + 0x48) + 0x16) - iVar3;
    if (iVar1 < *(int *)(param_1 + 0x2c)) {
      puVar5 = (undefined8 *)((long)iVar1 * 0x20 + *(long *)(param_1 + 0x20));
      *(int *)(param_1 + 0x28) = iVar1 + 1;
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      puVar5[2] = "(anonymous namespace)";
      *(undefined4 *)(puVar5 + 3) = 0x15;
      goto LAB_006b7508;
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_006b7508:
  *(undefined8 **)(param_1 + 0x40) = puVar5;
  return puVar5;
}

