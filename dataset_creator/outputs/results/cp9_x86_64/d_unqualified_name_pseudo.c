
int * d_unqualified_name(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char cVar8;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  
  pcVar10 = *(char **)(param_1 + 0x18);
  cVar8 = *pcVar10;
  if ((byte)(cVar8 - 0x30U) < 10) {
    piVar4 = (int *)d_source_name();
    cVar8 = **(char **)(param_1 + 0x18);
    pcVar9 = *(char **)(param_1 + 0x18);
    goto joined_r0x006b8812;
  }
  if ((byte)(cVar8 + 0x9fU) < 0x1a) {
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
    if ((cVar8 == 'o') && (pcVar10[1] == 'n')) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(char **)(param_1 + 0x18) = pcVar10 + 2;
    }
    piVar4 = (int *)d_operator_name(param_1);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    if ((piVar4 != (int *)0x0) && (*piVar4 == 0x32)) {
      pcVar10 = (char *)**(undefined8 **)(piVar4 + 4);
      *(int *)(param_1 + 0x48) =
           *(int *)(param_1 + 0x48) + 7 + *(int *)(*(undefined8 **)(piVar4 + 4) + 2);
      if ((*pcVar10 == 'l') && ((pcVar10[1] == 'i' && (pcVar10[2] == '\0')))) {
        uVar6 = d_source_name(param_1);
        piVar4 = (int *)d_make_comp(param_1,0x37,piVar4,uVar6);
        cVar8 = **(char **)(param_1 + 0x18);
        pcVar9 = *(char **)(param_1 + 0x18);
        goto joined_r0x006b8812;
      }
    }
  }
  else {
    if ((byte)(cVar8 + 0xbdU) < 2) {
      piVar11 = *(int **)(param_1 + 0x40);
      if ((piVar11 == (int *)0x0) || ((*piVar11 != 0 && (*piVar11 != 0x18)))) {
        if (cVar8 == 'C') goto LAB_006b8ad8;
      }
      else {
        *(int *)(param_1 + 0x48) = piVar11[6] + *(int *)(param_1 + 0x48);
        cVar8 = *pcVar10;
        if (cVar8 == 'C') {
LAB_006b8ad8:
          cVar8 = pcVar10[1];
          if (cVar8 == 'I') {
            pcVar9 = pcVar10 + 1;
            *(char **)(param_1 + 0x18) = pcVar9;
            cVar8 = pcVar10[2];
            if (4 < (byte)(cVar8 - 0x31U)) {
              cVar8 = pcVar10[1];
              piVar4 = (int *)0x0;
              goto joined_r0x006b8812;
            }
            *(char **)(param_1 + 0x18) = pcVar10 + 3;
            d_type(param_1);
            piVar11 = *(int **)(param_1 + 0x40);
          }
          else {
            if (4 < (byte)(cVar8 - 0x31U)) {
              return (int *)0x0;
            }
            *(char **)(param_1 + 0x18) = pcVar10 + 2;
          }
          iVar3 = *(int *)(param_1 + 0x28);
          if (iVar3 < *(int *)(param_1 + 0x2c)) {
            piVar4 = (int *)((long)iVar3 * 0x20 + *(long *)(param_1 + 0x20));
            piVar4[1] = 0;
            piVar4[2] = 0;
            *(int *)(param_1 + 0x28) = iVar3 + 1;
            if (piVar11 != (int *)0x0) {
              piVar4[0] = 7;
              piVar4[1] = 0;
              piVar4[2] = 0;
              piVar4[4] = cVar8 + -0x30;
              *(int **)(piVar4 + 6) = piVar11;
              goto LAB_006b86f9;
            }
          }
          pcVar9 = *(char **)(param_1 + 0x18);
          piVar4 = (int *)0x0;
          cVar8 = *pcVar9;
          goto joined_r0x006b8812;
        }
        if (cVar8 != 'D') goto LAB_006b896c;
      }
      switch(pcVar10[1]) {
      case '0':
        iVar3 = 1;
        break;
      case '1':
        iVar3 = 2;
        break;
      case '2':
        iVar3 = 3;
        break;
      default:
        piVar4 = (int *)0x0;
        pcVar9 = pcVar10;
        goto joined_r0x006b8812;
      case '4':
        iVar3 = 4;
        break;
      case '5':
        iVar3 = 5;
      }
      pcVar9 = pcVar10 + 2;
      iVar2 = *(int *)(param_1 + 0x28);
      *(char **)(param_1 + 0x18) = pcVar9;
      if (iVar2 < *(int *)(param_1 + 0x2c)) {
        piVar4 = (int *)((long)iVar2 * 0x20 + *(long *)(param_1 + 0x20));
        piVar4[1] = 0;
        piVar4[2] = 0;
        *(int *)(param_1 + 0x28) = iVar2 + 1;
        if (piVar11 != (int *)0x0) {
          piVar4[0] = 8;
          piVar4[1] = 0;
          piVar4[2] = 0;
          piVar4[4] = iVar3;
          *(int **)(piVar4 + 6) = piVar11;
          cVar8 = pcVar10[2];
          goto joined_r0x006b8812;
        }
      }
      cVar8 = pcVar10[2];
      piVar4 = (int *)0x0;
      goto joined_r0x006b8812;
    }
    if (cVar8 != 'L') {
      if (cVar8 != 'U') {
        return (int *)0x0;
      }
      if (pcVar10[1] == 'l') {
        *(char **)(param_1 + 0x18) = pcVar10 + 1;
        cVar8 = pcVar10[1];
        if (cVar8 != 'l') goto LAB_006b8978;
        *(char **)(param_1 + 0x18) = pcVar10 + 2;
        lVar7 = d_parmlist();
        pcVar10 = *(char **)(param_1 + 0x18);
        cVar8 = *pcVar10;
        if ((lVar7 == 0) || (cVar8 != 'E')) {
LAB_006b896c:
          piVar4 = (int *)0x0;
          pcVar9 = pcVar10;
          goto joined_r0x006b8812;
        }
        *(char **)(param_1 + 0x18) = pcVar10 + 1;
        if (pcVar10[1] == '_') {
          pcVar9 = pcVar10 + 2;
          iVar3 = 0;
        }
        else {
          if (pcVar10[1] == 'n') {
            return (int *)0x0;
          }
          iVar3 = d_number(param_1);
          pcVar10 = *(char **)(param_1 + 0x18);
          cVar8 = *pcVar10;
          iVar3 = iVar3 + 1;
          if ((iVar3 < 0) || (cVar8 != '_')) goto LAB_006b896c;
          pcVar9 = pcVar10 + 1;
        }
        *(char **)(param_1 + 0x18) = pcVar9;
        iVar2 = *(int *)(param_1 + 0x28);
        if (iVar2 < *(int *)(param_1 + 0x2c)) {
          piVar4 = (int *)((long)iVar2 * 0x20 + *(long *)(param_1 + 0x20));
          piVar4[1] = 0;
          piVar4[2] = 0;
          *(int *)(param_1 + 0x28) = iVar2 + 1;
          *piVar4 = 0x47;
          *(long *)(piVar4 + 4) = lVar7;
          piVar4[6] = iVar3;
          cVar8 = *pcVar9;
          goto joined_r0x006b8812;
        }
      }
      else {
        if (pcVar10[1] != 't') {
          return (int *)0x0;
        }
        *(char **)(param_1 + 0x18) = pcVar10 + 1;
        cVar8 = pcVar10[1];
        if (cVar8 != 't') {
LAB_006b8978:
          piVar4 = (int *)0x0;
          pcVar9 = pcVar10 + 1;
          goto joined_r0x006b8812;
        }
        *(char **)(param_1 + 0x18) = pcVar10 + 2;
        if (pcVar10[2] == '_') {
          pcVar9 = pcVar10 + 3;
          iVar3 = 0;
        }
        else {
          if (pcVar10[2] == 'n') {
            return (int *)0x0;
          }
          iVar3 = d_number();
          pcVar10 = *(char **)(param_1 + 0x18);
          cVar8 = *pcVar10;
          iVar3 = iVar3 + 1;
          if ((iVar3 < 0) || (cVar8 != '_')) goto LAB_006b896c;
          pcVar9 = pcVar10 + 1;
        }
        *(char **)(param_1 + 0x18) = pcVar9;
        iVar2 = *(int *)(param_1 + 0x28);
        if (iVar2 < *(int *)(param_1 + 0x2c)) {
          piVar4 = (int *)((long)iVar2 * 0x20 + *(long *)(param_1 + 0x20));
          piVar4[1] = 0;
          piVar4[2] = 0;
          *(int *)(param_1 + 0x28) = iVar2 + 1;
          *(long *)(piVar4 + 4) = (long)iVar3;
          iVar3 = *(int *)(param_1 + 0x38);
          *piVar4 = 0x49;
          if (iVar3 < *(int *)(param_1 + 0x3c)) {
            *(int **)(*(long *)(param_1 + 0x30) + (long)iVar3 * 8) = piVar4;
            *(int *)(param_1 + 0x38) = iVar3 + 1;
            cVar8 = *pcVar9;
            goto joined_r0x006b8812;
          }
        }
      }
      cVar8 = *pcVar9;
      piVar4 = (int *)0x0;
      goto joined_r0x006b8812;
    }
    *(char **)(param_1 + 0x18) = pcVar10 + 1;
    piVar4 = (int *)d_source_name();
    if (piVar4 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar3 = d_discriminator(param_1);
    if (iVar3 == 0) {
      return (int *)0x0;
    }
  }
LAB_006b86f9:
  cVar8 = **(char **)(param_1 + 0x18);
  pcVar9 = *(char **)(param_1 + 0x18);
joined_r0x006b8812:
  if (cVar8 == 'B') {
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    do {
      *(char **)(param_1 + 0x18) = pcVar9 + 1;
      uVar5 = d_source_name(param_1);
      piVar4 = (int *)d_make_comp(param_1,0x4d,piVar4,uVar5);
      pcVar9 = *(char **)(param_1 + 0x18);
    } while (*pcVar9 == 'B');
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    return piVar4;
  }
  return piVar4;
}

