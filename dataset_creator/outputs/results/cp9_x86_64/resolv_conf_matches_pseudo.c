
bool resolv_conf_matches(long param_1,long param_2)

{
  short *psVar1;
  short *psVar2;
  char *pcVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  undefined8 *puVar7;
  size_t sVar8;
  size_t sVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar11 = *(ulong *)(param_2 + 0x10);
  uVar10 = 3;
  if (uVar11 < 4) {
    uVar10 = uVar11;
  }
  if ((long)*(int *)(param_1 + 0x10) != uVar10) {
    return false;
  }
  if ((*(ushort *)(param_1 + 0x200) != 0) &&
     ((ulong)*(ushort *)(param_1 + 0x200) != (long)*(int *)(param_1 + 0x10))) {
    return false;
  }
  if (uVar11 != 0) {
    if (*(short *)(param_1 + 0x14) == 0) {
      psVar1 = *(short **)(param_1 + 0x218);
      if (*psVar1 != 10) {
        return false;
      }
      puVar7 = *(undefined8 **)(param_2 + 8);
      psVar2 = (short *)*puVar7;
      if (*psVar2 != 10) {
        return false;
      }
      if (*(long *)(psVar1 + 8) != *(long *)(psVar2 + 8) ||
          *(long *)(psVar1 + 4) != *(long *)(psVar2 + 4)) {
        return false;
      }
      if (psVar1[1] != psVar2[1]) {
        return false;
      }
      if (*(int *)(psVar1 + 0xc) != *(int *)(psVar2 + 0xc)) {
        return false;
      }
    }
    else {
      if (*(short *)(param_1 + 0x14) != 2) {
        return false;
      }
      puVar7 = *(undefined8 **)(param_2 + 8);
      psVar1 = (short *)*puVar7;
      if (*psVar1 != 2) {
        return false;
      }
      if (*(int *)(param_1 + 0x18) != *(int *)(psVar1 + 2)) {
        return false;
      }
      if (*(short *)(param_1 + 0x16) != psVar1[1]) {
        return false;
      }
    }
    if (1 < uVar11) {
      if (*(short *)(param_1 + 0x24) == 0) {
        psVar1 = *(short **)(param_1 + 0x220);
        if (*psVar1 != 10) {
          return false;
        }
        psVar2 = (short *)puVar7[1];
        if (*psVar2 != 10) {
          return false;
        }
        if (*(long *)(psVar1 + 8) != *(long *)(psVar2 + 8) ||
            *(long *)(psVar1 + 4) != *(long *)(psVar2 + 4)) {
          return false;
        }
        if (psVar1[1] != psVar2[1]) {
          return false;
        }
        if (*(int *)(psVar1 + 0xc) != *(int *)(psVar2 + 0xc)) {
          return false;
        }
      }
      else {
        if (*(short *)(param_1 + 0x24) != 2) {
          return false;
        }
        psVar1 = (short *)puVar7[1];
        if (*psVar1 != 2) {
          return false;
        }
        if (*(int *)(param_1 + 0x28) != *(int *)(psVar1 + 2)) {
          return false;
        }
        if (*(short *)(param_1 + 0x26) != psVar1[1]) {
          return false;
        }
      }
      if (2 < uVar11) {
        if (*(short *)(param_1 + 0x34) == 0) {
          psVar1 = *(short **)(param_1 + 0x228);
          if (*psVar1 != 10) {
            return false;
          }
          psVar2 = (short *)puVar7[2];
          if (*psVar2 != 10) {
            return false;
          }
          if (*(long *)(psVar1 + 8) != *(long *)(psVar2 + 8) ||
              *(long *)(psVar1 + 4) != *(long *)(psVar2 + 4)) {
            return false;
          }
          if (psVar1[1] != psVar2[1]) {
            return false;
          }
          if (*(int *)(psVar1 + 0xc) != *(int *)(psVar2 + 0xc)) {
            return false;
          }
        }
        else {
          if (*(short *)(param_1 + 0x34) != 2) {
            return false;
          }
          psVar1 = (short *)puVar7[2];
          if (*psVar1 != 2) {
            return false;
          }
          if (*(int *)(param_1 + 0x38) != *(int *)(psVar1 + 2)) {
            return false;
          }
          if (*(short *)(param_1 + 0x36) != psVar1[1]) {
            return false;
          }
        }
      }
    }
  }
  pcVar3 = *(char **)(param_1 + 0x48);
  if (pcVar3 == (char *)0x0) {
    if (*(long *)(param_2 + 0x20) == 0) {
      return *(char *)(param_1 + 0x80) == '\0';
    }
    return false;
  }
  if (pcVar3 != (char *)(param_1 + 0x80)) {
    return false;
  }
  lVar4 = *(long *)(param_2 + 0x20);
  if (lVar4 != 0) {
    puVar7 = *(undefined8 **)(param_2 + 0x18);
    sVar8 = strlen(pcVar3);
    uVar11 = sVar8 + 1;
    iVar6 = strcmp(pcVar3,(char *)*puVar7);
    if (iVar6 != 0) {
      return false;
    }
    if (lVar4 != 1) {
      pcVar3 = *(char **)(param_1 + 0x50);
      if (pcVar3 != (char *)0x0) {
        sVar9 = strlen(pcVar3);
        uVar11 = sVar8 + 2 + sVar9;
        iVar6 = strcmp(pcVar3,(char *)puVar7[1]);
        if (iVar6 != 0) {
          return false;
        }
        if (lVar4 == 2) goto LAB_007a5a4d;
        pcVar3 = *(char **)(param_1 + 0x58);
        if (pcVar3 != (char *)0x0) {
          sVar8 = strlen(pcVar3);
          uVar11 = uVar11 + 1 + sVar8;
          iVar6 = strcmp(pcVar3,(char *)puVar7[2]);
          if (iVar6 != 0) {
            return false;
          }
          if (lVar4 == 3) goto LAB_007a5a4d;
          pcVar3 = *(char **)(param_1 + 0x60);
          if (pcVar3 != (char *)0x0) {
            sVar8 = strlen(pcVar3);
            uVar11 = uVar11 + 1 + sVar8;
            iVar6 = strcmp(pcVar3,(char *)puVar7[3]);
            if (iVar6 != 0) {
              return false;
            }
            if (lVar4 == 4) goto LAB_007a5a4d;
            pcVar3 = *(char **)(param_1 + 0x68);
            if (pcVar3 != (char *)0x0) {
              sVar8 = strlen(pcVar3);
              uVar11 = uVar11 + 1 + sVar8;
              iVar6 = strcmp(pcVar3,(char *)puVar7[4]);
              if (iVar6 != 0) {
                return false;
              }
              if (lVar4 == 5) goto LAB_007a5a4d;
              if (*(char **)(param_1 + 0x70) != (char *)0x0) {
                iVar6 = strcmp(*(char **)(param_1 + 0x70),(char *)puVar7[5]);
                if (iVar6 != 0) {
                  return false;
                }
                if (((lVar4 != 6) && (*(char **)(param_1 + 0x78) != (char *)0x0)) &&
                   (iVar6 = strcmp(*(char **)(param_1 + 0x78),(char *)puVar7[6]), iVar6 != 0)) {
                  return false;
                }
                goto LAB_007a5a4d;
              }
            }
          }
        }
      }
      if (uVar11 < 0x39) {
        return false;
      }
    }
  }
LAB_007a5a4d:
  uVar11 = *(ulong *)(param_2 + 0x30);
  uVar10 = 10;
  if (uVar11 < 0xb) {
    uVar10 = uVar11;
  }
  if (uVar10 != *(byte *)(param_1 + 0x188) >> 4) {
    return false;
  }
  if (uVar11 != 0) {
    piVar5 = *(int **)(param_2 + 0x28);
    if (*piVar5 != *(int *)(param_1 + 0x18c)) {
      return false;
    }
    if (piVar5[1] != *(int *)(param_1 + 400)) {
      return false;
    }
    if (1 < uVar11) {
      if (piVar5[2] != *(int *)(param_1 + 0x194)) {
        return false;
      }
      if (piVar5[3] != *(int *)(param_1 + 0x198)) {
        return false;
      }
      if (uVar11 != 2) {
        if (*(int *)(param_1 + 0x19c) != piVar5[4]) {
          return false;
        }
        if (piVar5[5] == *(int *)(param_1 + 0x1a0)) {
          if (uVar11 == 3) {
            return true;
          }
          if ((*(int *)(param_1 + 0x1a4) == piVar5[6]) && (piVar5[7] == *(int *)(param_1 + 0x1a8)))
          {
            if (uVar11 == 4) {
              return true;
            }
            if ((piVar5[8] == *(int *)(param_1 + 0x1ac)) && (piVar5[9] == *(int *)(param_1 + 0x1b0))
               ) {
              if (uVar11 == 5) {
                return true;
              }
              if ((piVar5[10] == *(int *)(param_1 + 0x1b4)) &&
                 (piVar5[0xb] == *(int *)(param_1 + 0x1b8))) {
                if (uVar11 == 6) {
                  return true;
                }
                if ((*(int *)(param_1 + 0x1bc) == piVar5[0xc]) &&
                   (piVar5[0xd] == *(int *)(param_1 + 0x1c0))) {
                  if (uVar11 == 7) {
                    return true;
                  }
                  if ((*(int *)(param_1 + 0x1c4) == piVar5[0xe]) &&
                     (*(int *)(param_1 + 0x1c8) == piVar5[0xf])) {
                    if (uVar11 == 8) {
                      return true;
                    }
                    if ((*(int *)(param_1 + 0x1cc) == piVar5[0x10]) &&
                       (*(int *)(param_1 + 0x1d0) == piVar5[0x11])) {
                      if (uVar11 < 10) {
                        return true;
                      }
                      if (*(int *)(param_1 + 0x1d4) == piVar5[0x12]) {
                        return *(int *)(param_1 + 0x1d8) == piVar5[0x13];
                      }
                    }
                  }
                }
              }
            }
          }
        }
        return false;
      }
    }
  }
  return true;
}

