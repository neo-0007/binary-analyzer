
int * d_find_pack(long param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == (int *)0x0) {
    return (int *)0x0;
  }
LAB_006b724e:
  switch(*param_2) {
  case 0:
  case 6:
    goto LAB_006b7272;
  case 1:
  case 2:
  case 3:
  case 4:
    break;
  case 5:
    if (*(long *)(param_1 + 0x120) == 0) {
      *(undefined4 *)(param_1 + 0x130) = 1;
      return (int *)0x0;
    }
    uVar3 = *(ulong *)(param_2 + 4) & 0xffffffff;
    piVar1 = *(int **)(*(long *)(*(long *)(param_1 + 0x120) + 8) + 0x18);
    if (-1 < (int)*(ulong *)(param_2 + 4)) {
      while( true ) {
        if (piVar1 == (int *)0x0) {
          return (int *)0x0;
        }
        if (*piVar1 != 0x2f) {
          return (int *)0x0;
        }
        if ((int)uVar3 == 0) break;
        piVar1 = *(int **)(piVar1 + 6);
        uVar3 = (ulong)((int)uVar3 - 1);
      }
      piVar1 = *(int **)(piVar1 + 4);
    }
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar1 != 0x2f) {
      return (int *)0x0;
    }
    return piVar1;
  case 7:
  case 8:
    goto switchD_006b725d_caseD_7;
  default:
    uVar2 = *param_2 - 0x18;
    if (uVar2 < 0x36) {
      if ((1L << ((byte)uVar2 & 0x3f) & 0x338c0004108001U) != 0) {
        return (int *)0x0;
      }
      if (uVar2 == 0x1b) goto switchD_006b725d_caseD_7;
    }
  }
  piVar1 = (int *)d_find_pack(param_1,*(undefined8 *)(param_2 + 4));
  if (piVar1 != (int *)0x0) {
    return piVar1;
  }
switchD_006b725d_caseD_7:
  param_2 = *(int **)(param_2 + 6);
  if (param_2 == (int *)0x0) {
LAB_006b7272:
    return (int *)0x0;
  }
  goto LAB_006b724e;
}

