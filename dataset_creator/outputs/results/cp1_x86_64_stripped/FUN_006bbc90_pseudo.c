
undefined8 FUN_006bbc90(long param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  undefined4 *puVar11;
  
  iVar4 = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x48) = iVar4 + 0x14;
  pcVar3 = *(char **)(param_1 + 0x18);
  if (*pcVar3 == 'T') {
    *(char **)(param_1 + 0x18) = pcVar3 + 1;
    if (pcVar3[1] == '\0') {
switchD_006bbe89_caseD_42:
      return 0;
    }
    *(char **)(param_1 + 0x18) = pcVar3 + 2;
    switch(pcVar3[1]) {
    case 'A':
      puVar5 = (undefined4 *)FUN_006bae30();
      puVar11 = (undefined4 *)0x0;
      uVar7 = 0x30;
      break;
    default:
      goto switchD_006bbe89_caseD_42;
    case 'C':
      puVar11 = (undefined4 *)FUN_006b9850();
      iVar4 = FUN_006b8cc0(param_1);
      if (iVar4 < 0) {
        return 0;
      }
      if (**(char **)(param_1 + 0x18) != '_') {
        return 0;
      }
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      puVar5 = (undefined4 *)FUN_006b9850(param_1);
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 5;
      uVar7 = 0xb;
      break;
    case 'F':
      puVar5 = (undefined4 *)FUN_006b9850();
      puVar11 = (undefined4 *)0x0;
      uVar7 = 0xe;
      break;
    case 'H':
      puVar5 = (undefined4 *)FUN_006bc230();
      puVar11 = (undefined4 *)0x0;
      uVar7 = 0x14;
      break;
    case 'I':
      puVar5 = (undefined4 *)FUN_006b9850();
      puVar11 = (undefined4 *)0x0;
      uVar7 = 0xc;
      break;
    case 'J':
      puVar5 = (undefined4 *)FUN_006b9850();
      puVar11 = (undefined4 *)0x0;
      uVar7 = 0x12;
      break;
    case 'S':
      puVar5 = (undefined4 *)FUN_006b9850();
      puVar11 = (undefined4 *)0x0;
      uVar7 = 0xd;
      break;
    case 'T':
      *(int *)(param_1 + 0x48) = iVar4 + 10;
      puVar5 = (undefined4 *)FUN_006b9850();
      puVar11 = (undefined4 *)0x0;
      uVar7 = 10;
      break;
    case 'V':
      *(int *)(param_1 + 0x48) = iVar4 + 0xf;
      puVar5 = (undefined4 *)FUN_006b9850();
      puVar11 = (undefined4 *)0x0;
      uVar7 = 9;
      break;
    case 'W':
      puVar5 = (undefined4 *)FUN_006bc230();
      puVar11 = (undefined4 *)0x0;
      uVar7 = 0x15;
      break;
    case 'c':
      iVar4 = FUN_006b8d80(param_1,0);
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = FUN_006b8d80(param_1,0);
      if (iVar4 == 0) {
        return 0;
      }
      if ((**(char **)(param_1 + 0x18) == 'G') || (**(char **)(param_1 + 0x18) == 'T')) {
        puVar5 = (undefined4 *)FUN_006bbc90(param_1);
      }
      else {
        puVar5 = (undefined4 *)FUN_006bc6e0(param_1,0);
      }
      puVar11 = (undefined4 *)0x0;
      uVar7 = 0x11;
      break;
    case 'h':
      iVar4 = FUN_006b8d80(param_1,0x68);
      if (iVar4 == 0) {
        return 0;
      }
      if ((**(char **)(param_1 + 0x18) == 'G') || (**(char **)(param_1 + 0x18) == 'T')) {
        puVar5 = (undefined4 *)FUN_006bbc90(param_1);
      }
      else {
        puVar5 = (undefined4 *)FUN_006bc6e0(param_1,0);
      }
      puVar11 = (undefined4 *)0x0;
      uVar7 = 0xf;
      break;
    case 'v':
      iVar4 = FUN_006b8d80(param_1,0x76);
      if (iVar4 == 0) {
        return 0;
      }
      if ((**(char **)(param_1 + 0x18) == 'G') || (**(char **)(param_1 + 0x18) == 'T')) {
        puVar5 = (undefined4 *)FUN_006bbc90(param_1);
      }
      else {
        puVar5 = (undefined4 *)FUN_006bc6e0(param_1,0);
      }
      puVar11 = (undefined4 *)0x0;
      uVar7 = 0x10;
    }
    goto LAB_006bbe67;
  }
  if (*pcVar3 != 'G') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = pcVar3 + 1;
  if (pcVar3[1] == '\0') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = pcVar3 + 2;
  cVar1 = pcVar3[1];
  if (cVar1 != 'T') {
    if (cVar1 < 'U') {
      if (cVar1 == 'A') {
        if ((pcVar3[2] == 'G') || (pcVar3[2] == 'T')) {
          puVar5 = (undefined4 *)FUN_006bbc90(param_1);
        }
        else {
          puVar5 = (undefined4 *)FUN_006bc6e0(param_1,0);
        }
        puVar11 = (undefined4 *)0x0;
        uVar7 = 0x17;
      }
      else {
        if (cVar1 != 'R') {
          return 0;
        }
        puVar5 = (undefined4 *)FUN_006bc230();
        iVar4 = *(int *)(param_1 + 0x28);
        if (iVar4 < *(int *)(param_1 + 0x2c)) {
          puVar11 = (undefined4 *)((long)iVar4 * 0x20 + *(long *)(param_1 + 0x20));
          *(undefined8 *)(puVar11 + 1) = 0;
          *(int *)(param_1 + 0x28) = iVar4 + 1;
          *puVar11 = 0x43;
          iVar4 = FUN_006b8cc0(param_1);
          *(long *)(puVar11 + 4) = (long)iVar4;
        }
        else {
          puVar11 = (undefined4 *)0x0;
        }
        uVar7 = 0x16;
      }
    }
    else if (cVar1 == 'V') {
      puVar5 = (undefined4 *)FUN_006bc230();
      puVar11 = (undefined4 *)0x0;
      uVar7 = 0x13;
    }
    else {
      if (cVar1 != 'r') {
        return 0;
      }
      iVar4 = FUN_006b8cc0();
      if (iVar4 < 2) {
        return 0;
      }
      pcVar3 = *(char **)(param_1 + 0x18);
      if (*pcVar3 == '\0') {
        return 0;
      }
      pcVar9 = pcVar3 + 1;
      *(char **)(param_1 + 0x18) = pcVar9;
      if (*pcVar3 != '_') {
        return 0;
      }
      uVar10 = (ulong)(iVar4 - 1);
      puVar11 = (undefined4 *)0x0;
      do {
        if (*pcVar9 == '\0') {
          return 0;
        }
        iVar4 = (int)uVar10;
        if (*pcVar9 == '$') {
          cVar1 = pcVar9[1];
          if (cVar1 == 'S') {
            uVar6 = 0x2f;
          }
          else if (cVar1 == '_') {
            uVar6 = 0x2e;
          }
          else {
            if (cVar1 != '$') {
              return 0;
            }
            uVar6 = 0x24;
          }
          iVar2 = *(int *)(param_1 + 0x28);
          pcVar9 = (char *)(*(long *)(param_1 + 0x18) + 2);
          if (*(int *)(param_1 + 0x2c) <= iVar2) {
            *(char **)(param_1 + 0x18) = pcVar9;
            return 0;
          }
          uVar10 = (ulong)(iVar4 - 2);
          puVar5 = (undefined4 *)((long)iVar2 * 0x20 + *(long *)(param_1 + 0x20));
          *(undefined8 *)(puVar5 + 1) = 0;
          *(int *)(param_1 + 0x28) = iVar2 + 1;
          *puVar5 = 0x42;
          puVar5[4] = uVar6;
          *(char **)(param_1 + 0x18) = pcVar9;
        }
        else {
          uVar10 = 1;
          while( true ) {
            uVar8 = uVar10;
            if (iVar4 <= (int)uVar8) break;
            if ((pcVar9[uVar8] == '\0') || (uVar10 = uVar8 + 1, pcVar9[uVar8] == '$')) break;
          }
          uVar10 = (ulong)(uint)(iVar4 - (int)uVar8);
          puVar5 = (undefined4 *)FUN_006b8c70(param_1,pcVar9,uVar8 & 0xffffffff);
          pcVar9 = (char *)(*(long *)(param_1 + 0x18) + uVar8);
          *(char **)(param_1 + 0x18) = pcVar9;
          if (puVar5 == (undefined4 *)0x0) {
            return 0;
          }
        }
        if ((puVar11 != (undefined4 *)0x0) &&
           (puVar5 = (undefined4 *)FUN_006b8b90(param_1,0x41,puVar11), puVar5 == (undefined4 *)0x0))
        {
          return 0;
        }
        puVar11 = puVar5;
      } while (0 < (int)uVar10);
      puVar11 = (undefined4 *)0x0;
      uVar7 = 0x40;
    }
    goto LAB_006bbe67;
  }
  if (pcVar3[2] == '\0') {
LAB_006bc1b0:
    puVar5 = (undefined4 *)FUN_006bc6e0(param_1,0);
  }
  else {
    *(char **)(param_1 + 0x18) = pcVar3 + 3;
    cVar1 = pcVar3[3];
    if (pcVar3[2] == 'n') {
      if ((cVar1 == 'G') || (cVar1 == 'T')) {
        puVar5 = (undefined4 *)FUN_006bbc90(param_1);
      }
      else {
        puVar5 = (undefined4 *)FUN_006bc6e0(param_1,0);
      }
      puVar11 = (undefined4 *)0x0;
      uVar7 = 0x4b;
      goto LAB_006bbe67;
    }
    if ((cVar1 != 'G') && (cVar1 != 'T')) goto LAB_006bc1b0;
    puVar5 = (undefined4 *)FUN_006bbc90(param_1);
  }
  puVar11 = (undefined4 *)0x0;
  uVar7 = 0x4a;
LAB_006bbe67:
  uVar7 = FUN_006b8b90(param_1,uVar7,puVar5,puVar11);
  return uVar7;
}

