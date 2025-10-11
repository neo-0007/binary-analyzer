
ulong FUN_0060fd10(int param_1,undefined4 *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  
  switch(*param_2) {
  case 0:
    uVar11 = 0x33;
    if (param_1 == 1) {
      uVar11 = FUN_0060f880(*(undefined8 *)(*(long *)(param_2 + 2) + 8),
                            **(undefined4 **)(param_3 + 8),
                            *(undefined8 *)(*(undefined4 **)(param_3 + 8) + 2));
      return uVar11;
    }
    break;
  case 1:
    iVar3 = **(int **)(param_3 + 8);
    pcVar10 = *(char **)(*(int **)(param_3 + 8) + 2);
    lVar7 = *(long *)(*(int **)(param_2 + 2) + 2);
    if (iVar3 < 1) {
      if (iVar3 == 0) goto LAB_006100a0;
      pcVar8 = pcVar10 + (long)iVar3 + -1;
    }
    else {
      pcVar8 = pcVar10 + (long)iVar3 + -1;
      iVar1 = iVar3;
      do {
        if (*pcVar8 == '@') goto LAB_0060fe52;
        pcVar8 = pcVar8 + -1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
LAB_006100a0:
      pcVar8 = (char *)0x0;
    }
LAB_0060fe52:
    iVar1 = **(int **)(param_2 + 2);
    if (iVar1 < 1) {
      if (iVar1 != 0) {
        pcVar9 = (char *)(lVar7 + -1 + (long)iVar1);
LAB_0060fe85:
        if (pcVar8 == (char *)0x0) {
          pcVar8 = pcVar10;
          if ((0 < iVar3) && (*pcVar10 == '.')) {
            if (iVar3 < iVar1) {
              lVar5 = (long)iVar3;
              pcVar9 = (char *)((iVar1 - iVar3) + lVar7);
              goto LAB_0060ff24;
            }
            goto LAB_0060fdb0;
          }
        }
        else {
          if (pcVar10 != pcVar8) {
            lVar5 = (long)pcVar8 - (long)pcVar10;
            if (lVar5 == (long)pcVar9 - lVar7) {
              lVar12 = thunk_FUN_007134f0(pcVar10,0);
              if (lVar12 != 0) {
                return 0x35;
              }
              lVar12 = thunk_FUN_007134f0(lVar7,0,lVar5);
              if (lVar12 != 0) {
                return 0x35;
              }
              iVar2 = thunk_FUN_00712ab0(pcVar10,lVar7,lVar5);
              if (iVar2 == 0) goto LAB_0060fefe;
            }
            goto LAB_0060fdb0;
          }
LAB_0060fefe:
          pcVar8 = pcVar8 + 1;
        }
        pcVar9 = pcVar9 + 1;
        lVar5 = (long)iVar3 - ((long)pcVar8 - (long)pcVar10);
        pcVar10 = pcVar8;
        if (lVar5 == (long)iVar1 - ((long)pcVar9 - lVar7)) goto LAB_0060ff24;
        goto LAB_0060fdb0;
      }
    }
    else {
      pcVar9 = (char *)(lVar7 + -1 + (long)iVar1);
      iVar2 = iVar1;
      do {
        if (*pcVar9 == '@') goto LAB_0060fe85;
        pcVar9 = pcVar9 + -1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    goto LAB_00610090;
  case 2:
    iVar3 = **(int **)(param_2 + 2);
    pcVar9 = *(char **)(*(int **)(param_2 + 2) + 2);
    iVar1 = **(int **)(param_3 + 8);
    lVar5 = (long)iVar1;
    pcVar10 = *(char **)(*(int **)(param_3 + 8) + 2);
    if (iVar1 != 0) {
      if ((iVar3 < iVar1) ||
         (((iVar1 < iVar3 && (pcVar9 = pcVar9 + (iVar3 - iVar1), *pcVar10 != '.')) &&
          (pcVar9[-1] != '.')))) goto LAB_0060fdb0;
LAB_0060ff24:
      iVar3 = FUN_0060f830(pcVar10,pcVar9,lVar5);
      if (iVar3 != 0) goto LAB_0060fdb0;
    }
LAB_0060ffc0:
    uVar11 = 0;
    break;
  default:
    uVar11 = 0x33;
    break;
  case 4:
    lVar5 = *(long *)(param_3 + 8);
    lVar7 = *(long *)(param_2 + 2);
    if (((*(int *)(lVar7 + 8) != 0) && (iVar3 = FUN_005ad530(lVar7,0), iVar3 < 0)) ||
       ((*(int *)(lVar5 + 8) != 0 && (iVar3 = FUN_005ad530(lVar5,0), iVar3 < 0)))) {
      return 0x11;
    }
    if (*(int *)(lVar5 + 0x20) <= *(int *)(lVar7 + 0x20)) {
      iVar3 = thunk_FUN_00713570(*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(lVar7 + 0x18));
joined_r0x00610083:
      if (iVar3 == 0) goto LAB_0060ffc0;
    }
    goto LAB_0060fdb0;
  case 6:
    iVar3 = **(int **)(param_2 + 2);
    lVar12 = (long)iVar3;
    lVar7 = *(long *)(*(int **)(param_2 + 2) + 2);
    lVar5 = thunk_FUN_007134f0(lVar7,0x3a,lVar12);
    if (lVar5 != 0) {
      if (lVar12 - (lVar5 - lVar7) < 3) {
        return 0x35;
      }
      if (*(char *)(lVar5 + 1) != '/') {
        return 0x35;
      }
      if (*(char *)(lVar5 + 2) != '/') {
        return 0x35;
      }
      lVar5 = lVar5 + 3;
      lVar12 = lVar12 - (lVar5 - lVar7);
      lVar6 = thunk_FUN_007134f0(lVar5,0x3a,lVar12);
      if ((lVar6 == 0) && (lVar6 = thunk_FUN_007134f0(lVar5,0x2f,lVar12), lVar6 == 0)) {
        iVar3 = iVar3 - (int)(lVar5 - lVar7);
      }
      else {
        iVar3 = (int)lVar6 - (int)lVar5;
      }
      if (iVar3 == 0) {
        return 0x35;
      }
      iVar1 = **(int **)(param_3 + 8);
      if ((iVar1 < 1) || (**(char **)(*(int **)(param_3 + 8) + 2) != '.')) {
        if (iVar1 == iVar3) {
          iVar3 = FUN_0060f830(lVar5);
          goto joined_r0x00610083;
        }
      }
      else if (iVar1 < iVar3) {
        uVar4 = FUN_0060f830(lVar5 + ((long)iVar3 - (long)iVar1));
        if (uVar4 == 0) {
          return (ulong)uVar4;
        }
      }
      goto LAB_0060fdb0;
    }
LAB_00610090:
    uVar11 = 0x35;
    break;
  case 7:
    iVar3 = **(int **)(param_2 + 2);
    if ((iVar3 != 4) && (iVar3 != 0x10)) {
      return 0x35;
    }
    iVar1 = **(int **)(param_3 + 8);
    if ((iVar1 != 8) && (iVar1 != 0x20)) {
      return 0x35;
    }
    lVar5 = *(long *)(*(int **)(param_3 + 8) + 2);
    if (iVar1 == iVar3 * 2) {
      if (0 < iVar3) {
        lVar7 = 0;
        do {
          if (((*(byte *)(*(long *)(*(int **)(param_2 + 2) + 2) + lVar7) ^ *(byte *)(lVar5 + lVar7))
              & *(byte *)(lVar5 + iVar3 + lVar7)) != 0) goto LAB_0060fdb0;
          lVar7 = lVar7 + 1;
        } while (iVar3 != lVar7);
      }
      goto LAB_0060ffc0;
    }
LAB_0060fdb0:
    uVar11 = 0x2f;
  }
  return uVar11;
}

