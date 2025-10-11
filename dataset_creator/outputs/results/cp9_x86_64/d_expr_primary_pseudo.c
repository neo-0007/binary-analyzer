
int * d_expr_primary(long param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  
  pcVar3 = *(char **)(param_1 + 0x18);
  if (*pcVar3 != 'L') {
    return (int *)0x0;
  }
  pcVar4 = pcVar3 + 1;
  *(char **)(param_1 + 0x18) = pcVar4;
  if (pcVar3[1] == '_') {
    pcVar4 = pcVar3 + 2;
    *(char **)(param_1 + 0x18) = pcVar4;
    cVar5 = pcVar3[2];
    if (cVar5 != 'Z') {
      piVar2 = (int *)0x0;
      goto LAB_006b8ca0;
    }
  }
  else if (pcVar3[1] != 'Z') {
    piVar2 = (int *)d_type();
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar2 == 0x27) {
      puVar1 = *(undefined8 **)(piVar2 + 4);
      if (*(int *)((long)puVar1 + 0x1c) != 0) {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - *(int *)(puVar1 + 1);
      }
      iVar6 = strcmp((char *)*puVar1,"decltype(nullptr)");
      if (iVar6 != 0) goto LAB_006b8c03;
      pcVar3 = *(char **)(param_1 + 0x18);
      cVar5 = *pcVar3;
      if (cVar5 == 'E') {
        *(char **)(param_1 + 0x18) = pcVar3 + 1;
        return piVar2;
      }
      uVar7 = 0x3d;
      pcVar4 = pcVar3;
      if (cVar5 == 'n') goto LAB_006b8d10;
LAB_006b8c47:
      do {
        pcVar3 = pcVar3 + 1;
        if (cVar5 == '\0') {
          return (int *)0x0;
        }
        *(char **)(param_1 + 0x18) = pcVar3;
        cVar5 = *pcVar3;
      } while (cVar5 != 'E');
      iVar6 = (int)pcVar3 - (int)pcVar4;
    }
    else {
LAB_006b8c03:
      pcVar3 = *(char **)(param_1 + 0x18);
      uVar7 = 0x3d;
      cVar5 = *pcVar3;
      pcVar4 = pcVar3;
      if (cVar5 == 'n') {
LAB_006b8d10:
        pcVar4 = pcVar3 + 1;
        uVar7 = 0x3e;
        *(char **)(param_1 + 0x18) = pcVar4;
        cVar5 = pcVar3[1];
      }
      pcVar3 = pcVar4;
      if (cVar5 != 'E') goto LAB_006b8c47;
      iVar6 = 0;
    }
    d_make_name(param_1,pcVar4,iVar6,0x45,uVar7);
    piVar2 = (int *)d_make_comp();
    pcVar4 = *(char **)(param_1 + 0x18);
    cVar5 = *pcVar4;
    goto LAB_006b8ca0;
  }
  *(char **)(param_1 + 0x18) = pcVar4 + 1;
  if ((pcVar4[1] == 'G') || (pcVar4[1] == 'T')) {
    piVar2 = (int *)d_special_name(param_1);
    pcVar4 = *(char **)(param_1 + 0x18);
    cVar5 = *pcVar4;
  }
  else {
    piVar2 = (int *)d_encoding_part_0(param_1,0);
    pcVar4 = *(char **)(param_1 + 0x18);
    cVar5 = *pcVar4;
  }
LAB_006b8ca0:
  if (cVar5 != 'E') {
    return (int *)0x0;
  }
  *(char **)(param_1 + 0x18) = pcVar4 + 1;
  return piVar2;
}

