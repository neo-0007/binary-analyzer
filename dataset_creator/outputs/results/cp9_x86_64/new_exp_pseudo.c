
int * new_exp(int param_1,int param_2,long *param_3)

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
    piVar6 = (int *)malloc(0x20);
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
        (piVar6 = (int *)malloc(0x20), piVar6 != (int *)0x0)))) {
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
LAB_006dd854:
          piVar2 = *(int **)(piVar6 + 4);
          if (piVar2 != (int *)0x0) {
            iVar1 = *piVar2;
            if (iVar1 == 2) {
LAB_006dd959:
              piVar3 = *(int **)(piVar2 + 4);
              if (piVar3 != (int *)0x0) {
                iVar1 = *piVar3;
                if (iVar1 == 2) {
LAB_006ddbc9:
                  __gettext_free_exp(*(undefined8 *)(piVar3 + 4));
LAB_006ddbd2:
                  piVar4 = *(int **)(piVar3 + 2);
                  if (piVar4 != (int *)0x0) {
                    iVar1 = *piVar4;
                    if (iVar1 == 2) {
LAB_006dddd9:
                      __gettext_free_exp(*(undefined8 *)(piVar4 + 4));
LAB_006ddde2:
                      __gettext_free_exp(*(undefined8 *)(piVar4 + 2));
                    }
                    else {
                      if (iVar1 == 3) {
                        __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
                        goto LAB_006dddd9;
                      }
                      if (iVar1 == 1) goto LAB_006ddde2;
                    }
                    free(piVar4);
                    free(piVar3);
                    goto LAB_006dd990;
                  }
                }
                else {
                  if (iVar1 == 3) {
                    __gettext_free_exp(*(undefined8 *)(piVar3 + 6));
                    goto LAB_006ddbc9;
                  }
                  if (iVar1 == 1) goto LAB_006ddbd2;
                }
                free(piVar3);
              }
LAB_006dd990:
              piVar3 = *(int **)(piVar2 + 2);
              if (piVar3 != (int *)0x0) {
                iVar1 = *piVar3;
                if (iVar1 == 2) {
LAB_006ddb09:
                  piVar4 = *(int **)(piVar3 + 4);
                  if (piVar4 != (int *)0x0) {
                    iVar1 = *piVar4;
                    if (iVar1 == 2) {
LAB_006ddd99:
                      __gettext_free_exp(*(undefined8 *)(piVar4 + 4));
LAB_006ddda2:
                      __gettext_free_exp(*(undefined8 *)(piVar4 + 2));
                    }
                    else {
                      if (iVar1 == 3) {
                        __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
                        goto LAB_006ddd99;
                      }
                      if (iVar1 == 1) goto LAB_006ddda2;
                    }
                    free(piVar4);
                  }
LAB_006ddb38:
                  piVar4 = *(int **)(piVar3 + 2);
                  if (piVar4 != (int *)0x0) {
                    iVar1 = *piVar4;
                    if (iVar1 == 2) {
LAB_006ddc29:
                      __gettext_free_exp(*(undefined8 *)(piVar4 + 4));
LAB_006ddc32:
                      piVar5 = *(int **)(piVar4 + 2);
                      if (piVar5 != (int *)0x0) {
                        iVar1 = *piVar5;
                        if (iVar1 == 2) {
LAB_006dde03:
                          __gettext_free_exp(*(undefined8 *)(piVar5 + 4));
LAB_006dde16:
                          __gettext_free_exp(*(undefined8 *)(piVar5 + 2));
                        }
                        else {
                          if (iVar1 == 3) {
                            __gettext_free_exp(*(undefined8 *)(piVar5 + 6));
                            goto LAB_006dde03;
                          }
                          if (iVar1 == 1) goto LAB_006dde16;
                        }
                        free(piVar5);
                      }
                    }
                    else {
                      if (iVar1 == 3) {
                        __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
                        goto LAB_006ddc29;
                      }
                      if (iVar1 == 1) goto LAB_006ddc32;
                    }
                    free(piVar4);
                  }
                }
                else {
                  if (iVar1 == 3) {
                    __gettext_free_exp(*(undefined8 *)(piVar3 + 6));
                    goto LAB_006ddb09;
                  }
                  if (iVar1 == 1) goto LAB_006ddb38;
                }
                free(piVar3);
              }
            }
            else {
              if (iVar1 == 3) {
                __gettext_free_exp(*(undefined8 *)(piVar2 + 6));
                goto LAB_006dd959;
              }
              if (iVar1 == 1) goto LAB_006dd990;
            }
            free(piVar2);
          }
LAB_006dd884:
          piVar2 = *(int **)(piVar6 + 2);
          if (piVar2 != (int *)0x0) {
            iVar1 = *piVar2;
            if (iVar1 == 2) {
LAB_006dd8e7:
              piVar3 = *(int **)(piVar2 + 4);
              if (piVar3 != (int *)0x0) {
                iVar1 = *piVar3;
                if (iVar1 == 2) {
LAB_006dda99:
                  piVar4 = *(int **)(piVar3 + 4);
                  if (piVar4 != (int *)0x0) {
                    iVar1 = *piVar4;
                    if (iVar1 == 2) {
LAB_006dddb9:
                      __gettext_free_exp(*(undefined8 *)(piVar4 + 4));
LAB_006dddc2:
                      __gettext_free_exp(*(undefined8 *)(piVar4 + 2));
                    }
                    else {
                      if (iVar1 == 3) {
                        __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
                        goto LAB_006dddb9;
                      }
                      if (iVar1 == 1) goto LAB_006dddc2;
                    }
                    free(piVar4);
                  }
LAB_006ddac8:
                  piVar4 = *(int **)(piVar3 + 2);
                  if (piVar4 != (int *)0x0) {
                    iVar1 = *piVar4;
                    if (iVar1 == 2) {
LAB_006ddcc9:
                      __gettext_free_exp(*(undefined8 *)(piVar4 + 4));
LAB_006ddcd2:
                      piVar5 = *(int **)(piVar4 + 2);
                      if (piVar5 != (int *)0x0) {
                        iVar1 = *piVar5;
                        if (iVar1 == 2) {
LAB_006dde83:
                          __gettext_free_exp(*(undefined8 *)(piVar5 + 4));
LAB_006dde96:
                          __gettext_free_exp(*(undefined8 *)(piVar5 + 2));
                        }
                        else {
                          if (iVar1 == 3) {
                            __gettext_free_exp(*(undefined8 *)(piVar5 + 6));
                            goto LAB_006dde83;
                          }
                          if (iVar1 == 1) goto LAB_006dde96;
                        }
                        free(piVar5);
                      }
                    }
                    else {
                      if (iVar1 == 3) {
                        __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
                        goto LAB_006ddcc9;
                      }
                      if (iVar1 == 1) goto LAB_006ddcd2;
                    }
                    free(piVar4);
                  }
                }
                else {
                  if (iVar1 == 3) {
                    __gettext_free_exp(*(undefined8 *)(piVar3 + 6));
                    goto LAB_006dda99;
                  }
                  if (iVar1 == 1) goto LAB_006ddac8;
                }
                free(piVar3);
              }
LAB_006dd916:
              piVar3 = *(int **)(piVar2 + 2);
              if (piVar3 != (int *)0x0) {
                iVar1 = *piVar3;
                if (iVar1 == 2) {
LAB_006dd9d9:
                  piVar4 = *(int **)(piVar3 + 4);
                  if (piVar4 != (int *)0x0) {
                    iVar1 = *piVar4;
                    if (iVar1 == 2) {
LAB_006ddc79:
                      __gettext_free_exp(*(undefined8 *)(piVar4 + 4));
LAB_006ddc82:
                      piVar5 = *(int **)(piVar4 + 2);
                      if (piVar5 != (int *)0x0) {
                        iVar1 = *piVar5;
                        if (iVar1 == 2) {
LAB_006dde43:
                          __gettext_free_exp(*(undefined8 *)(piVar5 + 4));
LAB_006dde56:
                          __gettext_free_exp(*(undefined8 *)(piVar5 + 2));
                        }
                        else {
                          if (iVar1 == 3) {
                            __gettext_free_exp(*(undefined8 *)(piVar5 + 6));
                            goto LAB_006dde43;
                          }
                          if (iVar1 == 1) goto LAB_006dde56;
                        }
                        free(piVar5);
                      }
                    }
                    else {
                      if (iVar1 == 3) {
                        __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
                        goto LAB_006ddc79;
                      }
                      if (iVar1 == 1) goto LAB_006ddc82;
                    }
                    free(piVar4);
                  }
LAB_006dda08:
                  piVar4 = *(int **)(piVar3 + 2);
                  if (piVar4 != (int *)0x0) {
                    iVar1 = *piVar4;
                    if (iVar1 == 2) {
LAB_006dda41:
                      __gettext_free_exp(*(undefined8 *)(piVar4 + 4));
LAB_006dda4a:
                      piVar5 = *(int **)(piVar4 + 2);
                      if (piVar5 != (int *)0x0) {
                        iVar1 = *piVar5;
                        if (iVar1 == 2) {
LAB_006ddd23:
                          __gettext_free_exp(*(undefined8 *)(piVar5 + 4));
LAB_006ddd36:
                          __gettext_free_exp(*(undefined8 *)(piVar5 + 2));
                        }
                        else {
                          if (iVar1 == 3) {
                            __gettext_free_exp(*(undefined8 *)(piVar5 + 6));
                            goto LAB_006ddd23;
                          }
                          if (iVar1 == 1) goto LAB_006ddd36;
                        }
                        free(piVar5);
                        free(piVar4);
                        goto LAB_006dd93d;
                      }
                    }
                    else {
                      if (iVar1 == 3) {
                        __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
                        goto LAB_006dda41;
                      }
                      if (iVar1 == 1) goto LAB_006dda4a;
                    }
                    free(piVar4);
                  }
                }
                else {
                  if (iVar1 == 3) {
                    __gettext_free_exp(*(undefined8 *)(piVar3 + 6));
                    goto LAB_006dd9d9;
                  }
                  if (iVar1 == 1) goto LAB_006dda08;
                }
LAB_006dd93d:
                free(piVar3);
              }
            }
            else {
              if (iVar1 == 3) {
                piVar3 = *(int **)(piVar2 + 6);
                if (piVar3 == (int *)0x0) goto LAB_006dd8e7;
                iVar1 = *piVar3;
                if (iVar1 == 2) {
LAB_006ddd79:
                  __gettext_free_exp(*(undefined8 *)(piVar3 + 4));
LAB_006ddd82:
                  __gettext_free_exp(*(undefined8 *)(piVar3 + 2));
                }
                else {
                  if (iVar1 == 3) {
                    __gettext_free_exp(*(undefined8 *)(piVar3 + 6));
                    goto LAB_006ddd79;
                  }
                  if (iVar1 == 1) goto LAB_006ddd82;
                }
                free(piVar3);
                goto LAB_006dd8e7;
              }
              if (iVar1 == 1) goto LAB_006dd916;
            }
            free(piVar2);
          }
        }
        else {
          if (iVar1 == 3) {
            piVar2 = *(int **)(piVar6 + 6);
            if (piVar2 == (int *)0x0) goto LAB_006dd854;
            iVar1 = *piVar2;
            if (iVar1 == 2) {
LAB_006ddb79:
              __gettext_free_exp(*(undefined8 *)(piVar2 + 4));
LAB_006ddb82:
              piVar3 = *(int **)(piVar2 + 2);
              if (piVar3 != (int *)0x0) {
                iVar1 = *piVar3;
                if (iVar1 == 2) {
LAB_006ddd59:
                  __gettext_free_exp(*(undefined8 *)(piVar3 + 4));
LAB_006ddd62:
                  __gettext_free_exp(*(undefined8 *)(piVar3 + 2));
                }
                else {
                  if (iVar1 == 3) {
                    __gettext_free_exp(*(undefined8 *)(piVar3 + 6));
                    goto LAB_006ddd59;
                  }
                  if (iVar1 == 1) goto LAB_006ddd62;
                }
                free(piVar3);
              }
            }
            else {
              if (iVar1 == 3) {
                __gettext_free_exp(*(undefined8 *)(piVar2 + 6));
                goto LAB_006ddb79;
              }
              if (iVar1 == 1) goto LAB_006ddb82;
            }
            free(piVar2);
            goto LAB_006dd854;
          }
          if (iVar1 == 1) goto LAB_006dd884;
        }
        free(piVar6);
      }
      lVar10 = lVar10 + -1;
    } while ((int)lVar10 != -1);
  }
  return (int *)0x0;
}

