
void FUN_006e6430(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = *param_1;
  if (iVar1 == 2) {
LAB_006e64a0:
    piVar2 = *(int **)(param_1 + 4);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      if (iVar1 == 2) {
LAB_006e65ba:
        piVar3 = *(int **)(piVar2 + 4);
        if (piVar3 != (int *)0x0) {
          iVar1 = *piVar3;
          if (iVar1 == 2) {
LAB_006e6859:
            FUN_006e6430(*(undefined8 *)(piVar3 + 4));
LAB_006e6862:
            piVar4 = *(int **)(piVar3 + 2);
            if (piVar4 != (int *)0x0) {
              iVar1 = *piVar4;
              if (iVar1 == 2) {
LAB_006e69a9:
                FUN_006e6430(*(undefined8 *)(piVar4 + 4));
LAB_006e69b2:
                FUN_006e6430(*(undefined8 *)(piVar4 + 2));
              }
              else {
                if (iVar1 == 3) {
                  FUN_006e6430(*(undefined8 *)(piVar4 + 6));
                  goto LAB_006e69a9;
                }
                if (iVar1 == 1) goto LAB_006e69b2;
              }
              FUN_007104f0(piVar4);
            }
          }
          else {
            if (iVar1 == 3) {
              FUN_006e6430(*(undefined8 *)(piVar3 + 6));
              goto LAB_006e6859;
            }
            if (iVar1 == 1) goto LAB_006e6862;
          }
          FUN_007104f0(piVar3);
        }
LAB_006e65eb:
        piVar3 = *(int **)(piVar2 + 2);
        if (piVar3 != (int *)0x0) {
          iVar1 = *piVar3;
          if (iVar1 == 2) {
LAB_006e66a9:
            piVar4 = *(int **)(piVar3 + 4);
            if (piVar4 != (int *)0x0) {
              iVar1 = *piVar4;
              if (iVar1 == 2) {
LAB_006e6969:
                FUN_006e6430(*(undefined8 *)(piVar4 + 4));
LAB_006e6972:
                FUN_006e6430(*(undefined8 *)(piVar4 + 2));
              }
              else {
                if (iVar1 == 3) {
                  FUN_006e6430(*(undefined8 *)(piVar4 + 6));
                  goto LAB_006e6969;
                }
                if (iVar1 == 1) goto LAB_006e6972;
              }
              FUN_007104f0(piVar4);
            }
LAB_006e66d8:
            piVar4 = *(int **)(piVar3 + 2);
            if (piVar4 != (int *)0x0) {
              iVar1 = *piVar4;
              if (iVar1 == 2) {
LAB_006e68c9:
                FUN_006e6430(*(undefined8 *)(piVar4 + 4));
LAB_006e68d2:
                FUN_006e6430(*(undefined8 *)(piVar4 + 2));
              }
              else {
                if (iVar1 == 3) {
                  FUN_006e6430(*(undefined8 *)(piVar4 + 6));
                  goto LAB_006e68c9;
                }
                if (iVar1 == 1) goto LAB_006e68d2;
              }
              FUN_007104f0(piVar4);
              FUN_007104f0(piVar3);
              goto LAB_006e64c8;
            }
          }
          else {
            if (iVar1 == 3) {
              FUN_006e6430(*(undefined8 *)(piVar3 + 6));
              goto LAB_006e66a9;
            }
            if (iVar1 == 1) goto LAB_006e66d8;
          }
          FUN_007104f0(piVar3);
        }
      }
      else {
        if (iVar1 == 3) {
          FUN_006e6430(*(undefined8 *)(piVar2 + 6));
          goto LAB_006e65ba;
        }
        if (iVar1 == 1) goto LAB_006e65eb;
      }
LAB_006e64c8:
      FUN_007104f0(piVar2);
    }
  }
  else {
    if (iVar1 == 3) {
      piVar2 = *(int **)(param_1 + 6);
      if (piVar2 == (int *)0x0) goto LAB_006e64a0;
      iVar1 = *piVar2;
      if (iVar1 == 2) {
LAB_006e6802:
        FUN_006e6430(*(undefined8 *)(piVar2 + 4));
LAB_006e680c:
        piVar3 = *(int **)(piVar2 + 2);
        if (piVar3 != (int *)0x0) {
          iVar1 = *piVar3;
          if (iVar1 == 2) {
LAB_006e6949:
            FUN_006e6430(*(undefined8 *)(piVar3 + 4));
LAB_006e6952:
            FUN_006e6430(*(undefined8 *)(piVar3 + 2));
          }
          else {
            if (iVar1 == 3) {
              FUN_006e6430(*(undefined8 *)(piVar3 + 6));
              goto LAB_006e6949;
            }
            if (iVar1 == 1) goto LAB_006e6952;
          }
          FUN_007104f0(piVar3);
        }
      }
      else {
        if (iVar1 == 3) {
          FUN_006e6430(*(undefined8 *)(piVar2 + 6));
          goto LAB_006e6802;
        }
        if (iVar1 == 1) goto LAB_006e680c;
      }
      FUN_007104f0(piVar2);
      goto LAB_006e64a0;
    }
    if (iVar1 != 1) goto LAB_006e645a;
  }
  piVar2 = *(int **)(param_1 + 2);
  if (piVar2 == (int *)0x0) goto LAB_006e645a;
  iVar1 = *piVar2;
  if (iVar1 == 2) {
LAB_006e6531:
    piVar3 = *(int **)(piVar2 + 4);
    if (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      if (iVar1 == 2) {
LAB_006e6729:
        piVar4 = *(int **)(piVar3 + 4);
        if (piVar4 != (int *)0x0) {
          iVar1 = *piVar4;
          if (iVar1 == 2) {
LAB_006e6989:
            FUN_006e6430(*(undefined8 *)(piVar4 + 4));
LAB_006e6992:
            FUN_006e6430(*(undefined8 *)(piVar4 + 2));
          }
          else {
            if (iVar1 == 3) {
              FUN_006e6430(*(undefined8 *)(piVar4 + 6));
              goto LAB_006e6989;
            }
            if (iVar1 == 1) goto LAB_006e6992;
          }
          FUN_007104f0(piVar4);
        }
LAB_006e6758:
        piVar4 = *(int **)(piVar3 + 2);
        if (piVar4 != (int *)0x0) {
          iVar1 = *piVar4;
          if (iVar1 == 2) {
LAB_006e68a9:
            FUN_006e6430(*(undefined8 *)(piVar4 + 4));
LAB_006e68b2:
            FUN_006e6430(*(undefined8 *)(piVar4 + 2));
          }
          else {
            if (iVar1 == 3) {
              FUN_006e6430(*(undefined8 *)(piVar4 + 6));
              goto LAB_006e68a9;
            }
            if (iVar1 == 1) goto LAB_006e68b2;
          }
          FUN_007104f0(piVar4);
          FUN_007104f0(piVar3);
          goto LAB_006e6568;
        }
      }
      else {
        if (iVar1 == 3) {
          FUN_006e6430(*(undefined8 *)(piVar3 + 6));
          goto LAB_006e6729;
        }
        if (iVar1 == 1) goto LAB_006e6758;
      }
      FUN_007104f0(piVar3);
    }
LAB_006e6568:
    piVar3 = *(int **)(piVar2 + 2);
    if (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      if (iVar1 == 2) {
LAB_006e6631:
        piVar4 = *(int **)(piVar3 + 4);
        if (piVar4 != (int *)0x0) {
          iVar1 = *piVar4;
          if (iVar1 == 2) {
LAB_006e68e9:
            FUN_006e6430(*(undefined8 *)(piVar4 + 4));
LAB_006e68f2:
            FUN_006e6430(*(undefined8 *)(piVar4 + 2));
          }
          else {
            if (iVar1 == 3) {
              FUN_006e6430(*(undefined8 *)(piVar4 + 6));
              goto LAB_006e68e9;
            }
            if (iVar1 == 1) goto LAB_006e68f2;
          }
          FUN_007104f0(piVar4);
        }
LAB_006e6660:
        piVar4 = *(int **)(piVar3 + 2);
        if (piVar4 != (int *)0x0) {
          iVar1 = *piVar4;
          if (iVar1 == 2) {
LAB_006e67b1:
            FUN_006e6430(*(undefined8 *)(piVar4 + 4));
LAB_006e67ba:
            piVar5 = *(int **)(piVar4 + 2);
            if (piVar5 != (int *)0x0) {
              iVar1 = *piVar5;
              if (iVar1 == 2) {
LAB_006e6909:
                FUN_006e6430(*(undefined8 *)(piVar5 + 4));
LAB_006e6912:
                FUN_006e6430(*(undefined8 *)(piVar5 + 2));
              }
              else {
                if (iVar1 == 3) {
                  FUN_006e6430(*(undefined8 *)(piVar5 + 6));
                  goto LAB_006e6909;
                }
                if (iVar1 == 1) goto LAB_006e6912;
              }
              FUN_007104f0(piVar5);
            }
          }
          else {
            if (iVar1 == 3) {
              FUN_006e6430(*(undefined8 *)(piVar4 + 6));
              goto LAB_006e67b1;
            }
            if (iVar1 == 1) goto LAB_006e67ba;
          }
          FUN_007104f0(piVar4);
        }
      }
      else {
        if (iVar1 == 3) {
          FUN_006e6430(*(undefined8 *)(piVar3 + 6));
          goto LAB_006e6631;
        }
        if (iVar1 == 1) goto LAB_006e6660;
      }
      FUN_007104f0(piVar3);
      FUN_007104f0(piVar2);
      goto LAB_006e645a;
    }
  }
  else {
    if (iVar1 == 3) {
      piVar3 = *(int **)(piVar2 + 6);
      if (piVar3 == (int *)0x0) goto LAB_006e6531;
      iVar1 = *piVar3;
      if (iVar1 == 2) {
LAB_006e6929:
        FUN_006e6430(*(undefined8 *)(piVar3 + 4));
LAB_006e6932:
        FUN_006e6430(*(undefined8 *)(piVar3 + 2));
      }
      else {
        if (iVar1 == 3) {
          FUN_006e6430(*(undefined8 *)(piVar3 + 6));
          goto LAB_006e6929;
        }
        if (iVar1 == 1) goto LAB_006e6932;
      }
      FUN_007104f0(piVar3);
      goto LAB_006e6531;
    }
    if (iVar1 == 1) goto LAB_006e6568;
  }
  FUN_007104f0(piVar2);
LAB_006e645a:
  FUN_007104f0(param_1);
  return;
}

