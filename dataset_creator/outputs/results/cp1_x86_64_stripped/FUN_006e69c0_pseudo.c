
undefined4 * FUN_006e69c0(undefined4 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  long lVar9;
  
  lVar9 = param_2[1];
  if (lVar9 != 0) {
    lVar2 = *param_2;
    if (lVar2 != 0) {
      puVar8 = (undefined4 *)FUN_007101b0(0x20);
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 2;
        puVar8[1] = param_1;
        *(long *)(puVar8 + 2) = lVar2;
        *(long *)(puVar8 + 4) = lVar9;
        return puVar8;
      }
    }
  }
  lVar9 = 1;
  do {
    piVar3 = (int *)param_2[lVar9];
    if (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      if (iVar1 == 2) {
LAB_006e6aa3:
        piVar4 = *(int **)(piVar3 + 4);
        if (piVar4 != (int *)0x0) {
          iVar1 = *piVar4;
          if (iVar1 == 2) {
LAB_006e6ba2:
            piVar5 = *(int **)(piVar4 + 4);
            if (piVar5 != (int *)0x0) {
              iVar1 = *piVar5;
              if (iVar1 == 2) {
LAB_006e6e21:
                FUN_006e6430(*(undefined8 *)(piVar5 + 4));
LAB_006e6e2a:
                piVar6 = *(int **)(piVar5 + 2);
                if (piVar6 != (int *)0x0) {
                  iVar1 = *piVar6;
                  if (iVar1 == 2) {
LAB_006e6ff9:
                    FUN_006e6430(*(undefined8 *)(piVar6 + 4));
LAB_006e7002:
                    FUN_006e6430(*(undefined8 *)(piVar6 + 2));
                  }
                  else {
                    if (iVar1 == 3) {
                      FUN_006e6430(*(undefined8 *)(piVar6 + 6));
                      goto LAB_006e6ff9;
                    }
                    if (iVar1 == 1) goto LAB_006e7002;
                  }
                  FUN_007104f0(piVar6);
                }
              }
              else {
                if (iVar1 == 3) {
                  FUN_006e6430(*(undefined8 *)(piVar5 + 6));
                  goto LAB_006e6e21;
                }
                if (iVar1 == 1) goto LAB_006e6e2a;
              }
              FUN_007104f0(piVar5);
            }
LAB_006e6bd2:
            piVar5 = *(int **)(piVar4 + 2);
            if (piVar5 != (int *)0x0) {
              iVar1 = *piVar5;
              if (iVar1 == 2) {
LAB_006e6cf9:
                piVar6 = *(int **)(piVar5 + 4);
                if (piVar6 != (int *)0x0) {
                  iVar1 = *piVar6;
                  if (iVar1 == 2) {
LAB_006e6fd9:
                    FUN_006e6430(*(undefined8 *)(piVar6 + 4));
LAB_006e6fe2:
                    FUN_006e6430(*(undefined8 *)(piVar6 + 2));
                  }
                  else {
                    if (iVar1 == 3) {
                      FUN_006e6430(*(undefined8 *)(piVar6 + 6));
                      goto LAB_006e6fd9;
                    }
                    if (iVar1 == 1) goto LAB_006e6fe2;
                  }
                  FUN_007104f0(piVar6);
                }
LAB_006e6d28:
                piVar6 = *(int **)(piVar5 + 2);
                if (piVar6 != (int *)0x0) {
                  iVar1 = *piVar6;
                  if (iVar1 == 2) {
LAB_006e6f11:
                    FUN_006e6430(*(undefined8 *)(piVar6 + 4));
LAB_006e6f1a:
                    piVar7 = *(int **)(piVar6 + 2);
                    if (piVar7 != (int *)0x0) {
                      iVar1 = *piVar7;
                      if (iVar1 == 2) {
LAB_006e7041:
                        FUN_006e6430(*(undefined8 *)(piVar7 + 4));
LAB_006e7052:
                        FUN_006e6430(*(undefined8 *)(piVar7 + 2));
                      }
                      else {
                        if (iVar1 == 3) {
                          FUN_006e6430(*(undefined8 *)(piVar7 + 6));
                          goto LAB_006e7041;
                        }
                        if (iVar1 == 1) goto LAB_006e7052;
                      }
                      FUN_007104f0(piVar7);
                    }
                  }
                  else {
                    if (iVar1 == 3) {
                      FUN_006e6430(*(undefined8 *)(piVar6 + 6));
                      goto LAB_006e6f11;
                    }
                    if (iVar1 == 1) goto LAB_006e6f1a;
                  }
                  FUN_007104f0(piVar6);
                }
              }
              else {
                if (iVar1 == 3) {
                  FUN_006e6430(*(undefined8 *)(piVar5 + 6));
                  goto LAB_006e6cf9;
                }
                if (iVar1 == 1) goto LAB_006e6d28;
              }
              FUN_007104f0(piVar5);
            }
          }
          else {
            if (iVar1 == 3) {
              FUN_006e6430(*(undefined8 *)(piVar4 + 6));
              goto LAB_006e6ba2;
            }
            if (iVar1 == 1) goto LAB_006e6bd2;
          }
          FUN_007104f0(piVar4);
        }
LAB_006e6ad3:
        piVar4 = *(int **)(piVar3 + 2);
        if (piVar4 != (int *)0x0) {
          iVar1 = *piVar4;
          if (iVar1 == 2) {
LAB_006e6b30:
            piVar5 = *(int **)(piVar4 + 4);
            if (piVar5 != (int *)0x0) {
              iVar1 = *piVar5;
              if (iVar1 == 2) {
LAB_006e6c89:
                piVar6 = *(int **)(piVar5 + 4);
                if (piVar6 != (int *)0x0) {
                  iVar1 = *piVar6;
                  if (iVar1 == 2) {
LAB_006e7019:
                    FUN_006e6430(*(undefined8 *)(piVar6 + 4));
LAB_006e7022:
                    FUN_006e6430(*(undefined8 *)(piVar6 + 2));
                  }
                  else {
                    if (iVar1 == 3) {
                      FUN_006e6430(*(undefined8 *)(piVar6 + 6));
                      goto LAB_006e7019;
                    }
                    if (iVar1 == 1) goto LAB_006e7022;
                  }
                  FUN_007104f0(piVar6);
                }
LAB_006e6cb8:
                piVar6 = *(int **)(piVar5 + 2);
                if (piVar6 != (int *)0x0) {
                  iVar1 = *piVar6;
                  if (iVar1 == 2) {
LAB_006e6e71:
                    FUN_006e6430(*(undefined8 *)(piVar6 + 4));
LAB_006e6e7a:
                    piVar7 = *(int **)(piVar6 + 2);
                    if (piVar7 != (int *)0x0) {
                      iVar1 = *piVar7;
                      if (iVar1 == 2) {
LAB_006e70c1:
                        FUN_006e6430(*(undefined8 *)(piVar7 + 4));
LAB_006e70d2:
                        FUN_006e6430(*(undefined8 *)(piVar7 + 2));
                      }
                      else {
                        if (iVar1 == 3) {
                          FUN_006e6430(*(undefined8 *)(piVar7 + 6));
                          goto LAB_006e70c1;
                        }
                        if (iVar1 == 1) goto LAB_006e70d2;
                      }
                      FUN_007104f0(piVar7);
                    }
                  }
                  else {
                    if (iVar1 == 3) {
                      FUN_006e6430(*(undefined8 *)(piVar6 + 6));
                      goto LAB_006e6e71;
                    }
                    if (iVar1 == 1) goto LAB_006e6e7a;
                  }
                  FUN_007104f0(piVar6);
                }
              }
              else {
                if (iVar1 == 3) {
                  FUN_006e6430(*(undefined8 *)(piVar5 + 6));
                  goto LAB_006e6c89;
                }
                if (iVar1 == 1) goto LAB_006e6cb8;
              }
              FUN_007104f0(piVar5);
            }
LAB_006e6b60:
            piVar5 = *(int **)(piVar4 + 2);
            if (piVar5 != (int *)0x0) {
              iVar1 = *piVar5;
              if (iVar1 == 2) {
LAB_006e6c19:
                piVar6 = *(int **)(piVar5 + 4);
                if (piVar6 != (int *)0x0) {
                  iVar1 = *piVar6;
                  if (iVar1 == 2) {
LAB_006e6ec1:
                    FUN_006e6430(*(undefined8 *)(piVar6 + 4));
LAB_006e6eca:
                    piVar7 = *(int **)(piVar6 + 2);
                    if (piVar7 != (int *)0x0) {
                      iVar1 = *piVar7;
                      if (iVar1 == 2) {
LAB_006e7081:
                        FUN_006e6430(*(undefined8 *)(piVar7 + 4));
LAB_006e7092:
                        FUN_006e6430(*(undefined8 *)(piVar7 + 2));
                      }
                      else {
                        if (iVar1 == 3) {
                          FUN_006e6430(*(undefined8 *)(piVar7 + 6));
                          goto LAB_006e7081;
                        }
                        if (iVar1 == 1) goto LAB_006e7092;
                      }
                      FUN_007104f0(piVar7);
                    }
                  }
                  else {
                    if (iVar1 == 3) {
                      FUN_006e6430(*(undefined8 *)(piVar6 + 6));
                      goto LAB_006e6ec1;
                    }
                    if (iVar1 == 1) goto LAB_006e6eca;
                  }
                  FUN_007104f0(piVar6);
                }
LAB_006e6c48:
                piVar6 = *(int **)(piVar5 + 2);
                if (piVar6 != (int *)0x0) {
                  iVar1 = *piVar6;
                  if (iVar1 == 2) {
LAB_006e6d69:
                    FUN_006e6430(*(undefined8 *)(piVar6 + 4));
LAB_006e6d72:
                    piVar7 = *(int **)(piVar6 + 2);
                    if (piVar7 != (int *)0x0) {
                      iVar1 = *piVar7;
                      if (iVar1 == 2) {
LAB_006e6f69:
                        FUN_006e6430(*(undefined8 *)(piVar7 + 4));
LAB_006e6f7a:
                        FUN_006e6430(*(undefined8 *)(piVar7 + 2));
                      }
                      else {
                        if (iVar1 == 3) {
                          FUN_006e6430(*(undefined8 *)(piVar7 + 6));
                          goto LAB_006e6f69;
                        }
                        if (iVar1 == 1) goto LAB_006e6f7a;
                      }
                      FUN_007104f0(piVar7);
                    }
                  }
                  else {
                    if (iVar1 == 3) {
                      FUN_006e6430(*(undefined8 *)(piVar6 + 6));
                      goto LAB_006e6d69;
                    }
                    if (iVar1 == 1) goto LAB_006e6d72;
                  }
                  FUN_007104f0(piVar6);
                }
              }
              else {
                if (iVar1 == 3) {
                  FUN_006e6430(*(undefined8 *)(piVar5 + 6));
                  goto LAB_006e6c19;
                }
                if (iVar1 == 1) goto LAB_006e6c48;
              }
              FUN_007104f0(piVar5);
            }
          }
          else {
            if (iVar1 == 3) {
              piVar5 = *(int **)(piVar4 + 6);
              if (piVar5 == (int *)0x0) goto LAB_006e6b30;
              iVar1 = *piVar5;
              if (iVar1 == 2) {
LAB_006e6f99:
                FUN_006e6430(*(undefined8 *)(piVar5 + 4));
LAB_006e6fa2:
                FUN_006e6430(*(undefined8 *)(piVar5 + 2));
              }
              else {
                if (iVar1 == 3) {
                  FUN_006e6430(*(undefined8 *)(piVar5 + 6));
                  goto LAB_006e6f99;
                }
                if (iVar1 == 1) goto LAB_006e6fa2;
              }
              FUN_007104f0(piVar5);
              goto LAB_006e6b30;
            }
            if (iVar1 == 1) goto LAB_006e6b60;
          }
          FUN_007104f0(piVar4);
        }
      }
      else {
        if (iVar1 == 3) {
          piVar4 = *(int **)(piVar3 + 6);
          if (piVar4 == (int *)0x0) goto LAB_006e6aa3;
          iVar1 = *piVar4;
          if (iVar1 == 2) {
LAB_006e6dba:
            FUN_006e6430(*(undefined8 *)(piVar4 + 4));
LAB_006e6dc4:
            piVar5 = *(int **)(piVar4 + 2);
            if (piVar5 != (int *)0x0) {
              iVar1 = *piVar5;
              if (iVar1 == 2) {
LAB_006e6fb9:
                FUN_006e6430(*(undefined8 *)(piVar5 + 4));
LAB_006e6fc2:
                FUN_006e6430(*(undefined8 *)(piVar5 + 2));
              }
              else {
                if (iVar1 == 3) {
                  FUN_006e6430(*(undefined8 *)(piVar5 + 6));
                  goto LAB_006e6fb9;
                }
                if (iVar1 == 1) goto LAB_006e6fc2;
              }
              FUN_007104f0(piVar5);
            }
          }
          else {
            if (iVar1 == 3) {
              FUN_006e6430(*(undefined8 *)(piVar4 + 6));
              goto LAB_006e6dba;
            }
            if (iVar1 == 1) goto LAB_006e6dc4;
          }
          FUN_007104f0(piVar4);
          goto LAB_006e6aa3;
        }
        if (iVar1 == 1) goto LAB_006e6ad3;
      }
      FUN_007104f0(piVar3);
    }
    if (lVar9 == 0) {
      return (undefined4 *)0x0;
    }
    lVar9 = 0;
  } while( true );
}

