
int * FUN_006e7110(int param_1,int param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  
  if (param_1 == 0) {
    piVar6 = (int *)FUN_007101b0(0x20);
    if (piVar6 != (int *)0x0) {
      *piVar6 = 0;
      piVar6[1] = param_2;
      return piVar6;
    }
  }
  else {
    uVar9 = param_1 - 1;
    lVar10 = (long)(int)uVar9;
    if ((param_3[lVar10] != 0) &&
       (((param_1 == 1 || ((param_3[lVar10 + -1] != 0 && ((param_1 == 2 || (*param_3 != 0)))))) &&
        (piVar6 = (int *)FUN_007101b0(0x20), piVar6 != (int *)0x0)))) {
      *piVar6 = param_1;
      piVar6[1] = param_2;
      uVar8 = param_1 * 8;
      param_3 = param_3 + (lVar10 - (ulong)uVar9);
      plVar7 = (long *)(piVar6 + (ulong)uVar9 * -2 + lVar10 * 2 + 2);
      *plVar7 = *param_3;
      *(undefined8 *)((long)plVar7 + ((ulong)uVar8 - 8)) =
           *(undefined8 *)((long)param_3 + ((ulong)uVar8 - 8));
      lVar10 = (long)plVar7 - ((ulong)(plVar7 + 1) & 0xfffffffffffffff8);
      uVar9 = uVar8 + (int)lVar10 & 0xfffffff8;
      if (uVar9 < 8) {
        return piVar6;
      }
      uVar8 = 0;
      do {
        uVar11 = (ulong)uVar8;
        uVar8 = uVar8 + 8;
        *(undefined8 *)(((ulong)(plVar7 + 1) & 0xfffffffffffffff8) + uVar11) =
             *(undefined8 *)((long)param_3 + (uVar11 - lVar10));
      } while (uVar8 < uVar9);
      return piVar6;
    }
    do {
      piVar6 = (int *)param_3[lVar10];
      if (piVar6 != (int *)0x0) {
        iVar1 = *piVar6;
        if (iVar1 == 2) {
LAB_006e7264:
          piVar2 = *(int **)(piVar6 + 4);
          if (piVar2 != (int *)0x0) {
            iVar1 = *piVar2;
            if (iVar1 == 2) {
LAB_006e7369:
              piVar3 = *(int **)(piVar2 + 4);
              if (piVar3 != (int *)0x0) {
                iVar1 = *piVar3;
                if (iVar1 == 2) {
LAB_006e75d9:
                  FUN_006e6430(*(undefined8 *)(piVar3 + 4));
LAB_006e75e2:
                  piVar4 = *(int **)(piVar3 + 2);
                  if (piVar4 != (int *)0x0) {
                    iVar1 = *piVar4;
                    if (iVar1 == 2) {
LAB_006e77e9:
                      FUN_006e6430(*(undefined8 *)(piVar4 + 4));
LAB_006e77f2:
                      FUN_006e6430(*(undefined8 *)(piVar4 + 2));
                    }
                    else {
                      if (iVar1 == 3) {
                        FUN_006e6430(*(undefined8 *)(piVar4 + 6));
                        goto LAB_006e77e9;
                      }
                      if (iVar1 == 1) goto LAB_006e77f2;
                    }
                    FUN_007104f0(piVar4);
                    FUN_007104f0(piVar3);
                    goto LAB_006e73a0;
                  }
                }
                else {
                  if (iVar1 == 3) {
                    FUN_006e6430(*(undefined8 *)(piVar3 + 6));
                    goto LAB_006e75d9;
                  }
                  if (iVar1 == 1) goto LAB_006e75e2;
                }
                FUN_007104f0(piVar3);
              }
LAB_006e73a0:
              piVar3 = *(int **)(piVar2 + 2);
              if (piVar3 != (int *)0x0) {
                iVar1 = *piVar3;
                if (iVar1 == 2) {
LAB_006e7519:
                  piVar4 = *(int **)(piVar3 + 4);
                  if (piVar4 != (int *)0x0) {
                    iVar1 = *piVar4;
                    if (iVar1 == 2) {
LAB_006e77a9:
                      FUN_006e6430(*(undefined8 *)(piVar4 + 4));
LAB_006e77b2:
                      FUN_006e6430(*(undefined8 *)(piVar4 + 2));
                    }
                    else {
                      if (iVar1 == 3) {
                        FUN_006e6430(*(undefined8 *)(piVar4 + 6));
                        goto LAB_006e77a9;
                      }
                      if (iVar1 == 1) goto LAB_006e77b2;
                    }
                    FUN_007104f0(piVar4);
                  }
LAB_006e7548:
                  piVar4 = *(int **)(piVar3 + 2);
                  if (piVar4 != (int *)0x0) {
                    iVar1 = *piVar4;
                    if (iVar1 == 2) {
LAB_006e7639:
                      FUN_006e6430(*(undefined8 *)(piVar4 + 4));
LAB_006e7642:
                      piVar5 = *(int **)(piVar4 + 2);
                      if (piVar5 != (int *)0x0) {
                        iVar1 = *piVar5;
                        if (iVar1 == 2) {
LAB_006e7813:
                          FUN_006e6430(*(undefined8 *)(piVar5 + 4));
LAB_006e7826:
                          FUN_006e6430(*(undefined8 *)(piVar5 + 2));
                        }
                        else {
                          if (iVar1 == 3) {
                            FUN_006e6430(*(undefined8 *)(piVar5 + 6));
                            goto LAB_006e7813;
                          }
                          if (iVar1 == 1) goto LAB_006e7826;
                        }
                        FUN_007104f0(piVar5);
                      }
                    }
                    else {
                      if (iVar1 == 3) {
                        FUN_006e6430(*(undefined8 *)(piVar4 + 6));
                        goto LAB_006e7639;
                      }
                      if (iVar1 == 1) goto LAB_006e7642;
                    }
                    FUN_007104f0(piVar4);
                  }
                }
                else {
                  if (iVar1 == 3) {
                    FUN_006e6430(*(undefined8 *)(piVar3 + 6));
                    goto LAB_006e7519;
                  }
                  if (iVar1 == 1) goto LAB_006e7548;
                }
                FUN_007104f0(piVar3);
              }
            }
            else {
              if (iVar1 == 3) {
                FUN_006e6430(*(undefined8 *)(piVar2 + 6));
                goto LAB_006e7369;
              }
              if (iVar1 == 1) goto LAB_006e73a0;
            }
            FUN_007104f0(piVar2);
          }
LAB_006e7294:
          piVar2 = *(int **)(piVar6 + 2);
          if (piVar2 != (int *)0x0) {
            iVar1 = *piVar2;
            if (iVar1 == 2) {
LAB_006e72f7:
              piVar3 = *(int **)(piVar2 + 4);
              if (piVar3 != (int *)0x0) {
                iVar1 = *piVar3;
                if (iVar1 == 2) {
LAB_006e74a9:
                  piVar4 = *(int **)(piVar3 + 4);
                  if (piVar4 != (int *)0x0) {
                    iVar1 = *piVar4;
                    if (iVar1 == 2) {
LAB_006e77c9:
                      FUN_006e6430(*(undefined8 *)(piVar4 + 4));
LAB_006e77d2:
                      FUN_006e6430(*(undefined8 *)(piVar4 + 2));
                    }
                    else {
                      if (iVar1 == 3) {
                        FUN_006e6430(*(undefined8 *)(piVar4 + 6));
                        goto LAB_006e77c9;
                      }
                      if (iVar1 == 1) goto LAB_006e77d2;
                    }
                    FUN_007104f0(piVar4);
                  }
LAB_006e74d8:
                  piVar4 = *(int **)(piVar3 + 2);
                  if (piVar4 != (int *)0x0) {
                    iVar1 = *piVar4;
                    if (iVar1 == 2) {
LAB_006e76d9:
                      FUN_006e6430(*(undefined8 *)(piVar4 + 4));
LAB_006e76e2:
                      piVar5 = *(int **)(piVar4 + 2);
                      if (piVar5 != (int *)0x0) {
                        iVar1 = *piVar5;
                        if (iVar1 == 2) {
LAB_006e7893:
                          FUN_006e6430(*(undefined8 *)(piVar5 + 4));
LAB_006e78a6:
                          FUN_006e6430(*(undefined8 *)(piVar5 + 2));
                        }
                        else {
                          if (iVar1 == 3) {
                            FUN_006e6430(*(undefined8 *)(piVar5 + 6));
                            goto LAB_006e7893;
                          }
                          if (iVar1 == 1) goto LAB_006e78a6;
                        }
                        FUN_007104f0(piVar5);
                      }
                    }
                    else {
                      if (iVar1 == 3) {
                        FUN_006e6430(*(undefined8 *)(piVar4 + 6));
                        goto LAB_006e76d9;
                      }
                      if (iVar1 == 1) goto LAB_006e76e2;
                    }
                    FUN_007104f0(piVar4);
                  }
                }
                else {
                  if (iVar1 == 3) {
                    FUN_006e6430(*(undefined8 *)(piVar3 + 6));
                    goto LAB_006e74a9;
                  }
                  if (iVar1 == 1) goto LAB_006e74d8;
                }
                FUN_007104f0(piVar3);
              }
LAB_006e7326:
              piVar3 = *(int **)(piVar2 + 2);
              if (piVar3 != (int *)0x0) {
                iVar1 = *piVar3;
                if (iVar1 == 2) {
LAB_006e73e9:
                  piVar4 = *(int **)(piVar3 + 4);
                  if (piVar4 != (int *)0x0) {
                    iVar1 = *piVar4;
                    if (iVar1 == 2) {
LAB_006e7689:
                      FUN_006e6430(*(undefined8 *)(piVar4 + 4));
LAB_006e7692:
                      piVar5 = *(int **)(piVar4 + 2);
                      if (piVar5 != (int *)0x0) {
                        iVar1 = *piVar5;
                        if (iVar1 == 2) {
LAB_006e7853:
                          FUN_006e6430(*(undefined8 *)(piVar5 + 4));
LAB_006e7866:
                          FUN_006e6430(*(undefined8 *)(piVar5 + 2));
                        }
                        else {
                          if (iVar1 == 3) {
                            FUN_006e6430(*(undefined8 *)(piVar5 + 6));
                            goto LAB_006e7853;
                          }
                          if (iVar1 == 1) goto LAB_006e7866;
                        }
                        FUN_007104f0(piVar5);
                      }
                    }
                    else {
                      if (iVar1 == 3) {
                        FUN_006e6430(*(undefined8 *)(piVar4 + 6));
                        goto LAB_006e7689;
                      }
                      if (iVar1 == 1) goto LAB_006e7692;
                    }
                    FUN_007104f0(piVar4);
                  }
LAB_006e7418:
                  piVar4 = *(int **)(piVar3 + 2);
                  if (piVar4 != (int *)0x0) {
                    iVar1 = *piVar4;
                    if (iVar1 == 2) {
LAB_006e7451:
                      FUN_006e6430(*(undefined8 *)(piVar4 + 4));
LAB_006e745a:
                      piVar5 = *(int **)(piVar4 + 2);
                      if (piVar5 != (int *)0x0) {
                        iVar1 = *piVar5;
                        if (iVar1 == 2) {
LAB_006e7733:
                          FUN_006e6430(*(undefined8 *)(piVar5 + 4));
LAB_006e7746:
                          FUN_006e6430(*(undefined8 *)(piVar5 + 2));
                        }
                        else {
                          if (iVar1 == 3) {
                            FUN_006e6430(*(undefined8 *)(piVar5 + 6));
                            goto LAB_006e7733;
                          }
                          if (iVar1 == 1) goto LAB_006e7746;
                        }
                        FUN_007104f0(piVar5);
                        FUN_007104f0(piVar4);
                        goto LAB_006e734d;
                      }
                    }
                    else {
                      if (iVar1 == 3) {
                        FUN_006e6430(*(undefined8 *)(piVar4 + 6));
                        goto LAB_006e7451;
                      }
                      if (iVar1 == 1) goto LAB_006e745a;
                    }
                    FUN_007104f0(piVar4);
                  }
                }
                else {
                  if (iVar1 == 3) {
                    FUN_006e6430(*(undefined8 *)(piVar3 + 6));
                    goto LAB_006e73e9;
                  }
                  if (iVar1 == 1) goto LAB_006e7418;
                }
LAB_006e734d:
                FUN_007104f0(piVar3);
              }
            }
            else {
              if (iVar1 == 3) {
                piVar3 = *(int **)(piVar2 + 6);
                if (piVar3 == (int *)0x0) goto LAB_006e72f7;
                iVar1 = *piVar3;
                if (iVar1 == 2) {
LAB_006e7789:
                  FUN_006e6430(*(undefined8 *)(piVar3 + 4));
LAB_006e7792:
                  FUN_006e6430(*(undefined8 *)(piVar3 + 2));
                }
                else {
                  if (iVar1 == 3) {
                    FUN_006e6430(*(undefined8 *)(piVar3 + 6));
                    goto LAB_006e7789;
                  }
                  if (iVar1 == 1) goto LAB_006e7792;
                }
                FUN_007104f0(piVar3);
                goto LAB_006e72f7;
              }
              if (iVar1 == 1) goto LAB_006e7326;
            }
            FUN_007104f0(piVar2);
          }
        }
        else {
          if (iVar1 == 3) {
            piVar2 = *(int **)(piVar6 + 6);
            if (piVar2 == (int *)0x0) goto LAB_006e7264;
            iVar1 = *piVar2;
            if (iVar1 == 2) {
LAB_006e7589:
              FUN_006e6430(*(undefined8 *)(piVar2 + 4));
LAB_006e7592:
              piVar3 = *(int **)(piVar2 + 2);
              if (piVar3 != (int *)0x0) {
                iVar1 = *piVar3;
                if (iVar1 == 2) {
LAB_006e7769:
                  FUN_006e6430(*(undefined8 *)(piVar3 + 4));
LAB_006e7772:
                  FUN_006e6430(*(undefined8 *)(piVar3 + 2));
                }
                else {
                  if (iVar1 == 3) {
                    FUN_006e6430(*(undefined8 *)(piVar3 + 6));
                    goto LAB_006e7769;
                  }
                  if (iVar1 == 1) goto LAB_006e7772;
                }
                FUN_007104f0(piVar3);
              }
            }
            else {
              if (iVar1 == 3) {
                FUN_006e6430(*(undefined8 *)(piVar2 + 6));
                goto LAB_006e7589;
              }
              if (iVar1 == 1) goto LAB_006e7592;
            }
            FUN_007104f0(piVar2);
            goto LAB_006e7264;
          }
          if (iVar1 == 1) goto LAB_006e7294;
        }
        FUN_007104f0(piVar6);
      }
      lVar10 = lVar10 + -1;
    } while ((int)lVar10 != -1);
  }
  return (int *)0x0;
}

