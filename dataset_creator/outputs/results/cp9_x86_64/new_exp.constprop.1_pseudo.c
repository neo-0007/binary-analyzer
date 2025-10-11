
undefined4 * new_exp_constprop_1(undefined4 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  int *__ptr;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  long lVar8;
  
  lVar8 = param_2[1];
  if (lVar8 != 0) {
    lVar2 = *param_2;
    if (lVar2 != 0) {
      puVar7 = (undefined4 *)malloc(0x20);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 2;
        puVar7[1] = param_1;
        *(long *)(puVar7 + 2) = lVar2;
        *(long *)(puVar7 + 4) = lVar8;
        return puVar7;
      }
    }
  }
  lVar8 = 1;
  do {
    __ptr = (int *)param_2[lVar8];
    if (__ptr != (int *)0x0) {
      iVar1 = *__ptr;
      if (iVar1 == 2) {
LAB_006dd093:
        piVar3 = *(int **)(__ptr + 4);
        if (piVar3 != (int *)0x0) {
          iVar1 = *piVar3;
          if (iVar1 == 2) {
LAB_006dd192:
            piVar4 = *(int **)(piVar3 + 4);
            if (piVar4 != (int *)0x0) {
              iVar1 = *piVar4;
              if (iVar1 == 2) {
LAB_006dd411:
                __gettext_free_exp(*(undefined8 *)(piVar4 + 4));
LAB_006dd41a:
                piVar5 = *(int **)(piVar4 + 2);
                if (piVar5 != (int *)0x0) {
                  iVar1 = *piVar5;
                  if (iVar1 == 2) {
LAB_006dd5e9:
                    __gettext_free_exp(*(undefined8 *)(piVar5 + 4));
LAB_006dd5f2:
                    __gettext_free_exp(*(undefined8 *)(piVar5 + 2));
                  }
                  else {
                    if (iVar1 == 3) {
                      __gettext_free_exp(*(undefined8 *)(piVar5 + 6));
                      goto LAB_006dd5e9;
                    }
                    if (iVar1 == 1) goto LAB_006dd5f2;
                  }
                  free(piVar5);
                }
              }
              else {
                if (iVar1 == 3) {
                  __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
                  goto LAB_006dd411;
                }
                if (iVar1 == 1) goto LAB_006dd41a;
              }
              free(piVar4);
            }
LAB_006dd1c2:
            piVar4 = *(int **)(piVar3 + 2);
            if (piVar4 != (int *)0x0) {
              iVar1 = *piVar4;
              if (iVar1 == 2) {
LAB_006dd2e9:
                piVar5 = *(int **)(piVar4 + 4);
                if (piVar5 != (int *)0x0) {
                  iVar1 = *piVar5;
                  if (iVar1 == 2) {
LAB_006dd5c9:
                    __gettext_free_exp(*(undefined8 *)(piVar5 + 4));
LAB_006dd5d2:
                    __gettext_free_exp(*(undefined8 *)(piVar5 + 2));
                  }
                  else {
                    if (iVar1 == 3) {
                      __gettext_free_exp(*(undefined8 *)(piVar5 + 6));
                      goto LAB_006dd5c9;
                    }
                    if (iVar1 == 1) goto LAB_006dd5d2;
                  }
                  free(piVar5);
                }
LAB_006dd318:
                piVar5 = *(int **)(piVar4 + 2);
                if (piVar5 != (int *)0x0) {
                  iVar1 = *piVar5;
                  if (iVar1 == 2) {
LAB_006dd501:
                    __gettext_free_exp(*(undefined8 *)(piVar5 + 4));
LAB_006dd50a:
                    piVar6 = *(int **)(piVar5 + 2);
                    if (piVar6 != (int *)0x0) {
                      iVar1 = *piVar6;
                      if (iVar1 == 2) {
LAB_006dd631:
                        __gettext_free_exp(*(undefined8 *)(piVar6 + 4));
LAB_006dd642:
                        __gettext_free_exp(*(undefined8 *)(piVar6 + 2));
                      }
                      else {
                        if (iVar1 == 3) {
                          __gettext_free_exp(*(undefined8 *)(piVar6 + 6));
                          goto LAB_006dd631;
                        }
                        if (iVar1 == 1) goto LAB_006dd642;
                      }
                      free(piVar6);
                    }
                  }
                  else {
                    if (iVar1 == 3) {
                      __gettext_free_exp(*(undefined8 *)(piVar5 + 6));
                      goto LAB_006dd501;
                    }
                    if (iVar1 == 1) goto LAB_006dd50a;
                  }
                  free(piVar5);
                }
              }
              else {
                if (iVar1 == 3) {
                  __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
                  goto LAB_006dd2e9;
                }
                if (iVar1 == 1) goto LAB_006dd318;
              }
              free(piVar4);
            }
          }
          else {
            if (iVar1 == 3) {
              __gettext_free_exp(*(undefined8 *)(piVar3 + 6));
              goto LAB_006dd192;
            }
            if (iVar1 == 1) goto LAB_006dd1c2;
          }
          free(piVar3);
        }
LAB_006dd0c3:
        piVar3 = *(int **)(__ptr + 2);
        if (piVar3 != (int *)0x0) {
          iVar1 = *piVar3;
          if (iVar1 == 2) {
LAB_006dd120:
            piVar4 = *(int **)(piVar3 + 4);
            if (piVar4 != (int *)0x0) {
              iVar1 = *piVar4;
              if (iVar1 == 2) {
LAB_006dd279:
                piVar5 = *(int **)(piVar4 + 4);
                if (piVar5 != (int *)0x0) {
                  iVar1 = *piVar5;
                  if (iVar1 == 2) {
LAB_006dd609:
                    __gettext_free_exp(*(undefined8 *)(piVar5 + 4));
LAB_006dd612:
                    __gettext_free_exp(*(undefined8 *)(piVar5 + 2));
                  }
                  else {
                    if (iVar1 == 3) {
                      __gettext_free_exp(*(undefined8 *)(piVar5 + 6));
                      goto LAB_006dd609;
                    }
                    if (iVar1 == 1) goto LAB_006dd612;
                  }
                  free(piVar5);
                }
LAB_006dd2a8:
                piVar5 = *(int **)(piVar4 + 2);
                if (piVar5 != (int *)0x0) {
                  iVar1 = *piVar5;
                  if (iVar1 == 2) {
LAB_006dd461:
                    __gettext_free_exp(*(undefined8 *)(piVar5 + 4));
LAB_006dd46a:
                    piVar6 = *(int **)(piVar5 + 2);
                    if (piVar6 != (int *)0x0) {
                      iVar1 = *piVar6;
                      if (iVar1 == 2) {
LAB_006dd6b1:
                        __gettext_free_exp(*(undefined8 *)(piVar6 + 4));
LAB_006dd6c2:
                        __gettext_free_exp(*(undefined8 *)(piVar6 + 2));
                      }
                      else {
                        if (iVar1 == 3) {
                          __gettext_free_exp(*(undefined8 *)(piVar6 + 6));
                          goto LAB_006dd6b1;
                        }
                        if (iVar1 == 1) goto LAB_006dd6c2;
                      }
                      free(piVar6);
                    }
                  }
                  else {
                    if (iVar1 == 3) {
                      __gettext_free_exp(*(undefined8 *)(piVar5 + 6));
                      goto LAB_006dd461;
                    }
                    if (iVar1 == 1) goto LAB_006dd46a;
                  }
                  free(piVar5);
                }
              }
              else {
                if (iVar1 == 3) {
                  __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
                  goto LAB_006dd279;
                }
                if (iVar1 == 1) goto LAB_006dd2a8;
              }
              free(piVar4);
            }
LAB_006dd150:
            piVar4 = *(int **)(piVar3 + 2);
            if (piVar4 != (int *)0x0) {
              iVar1 = *piVar4;
              if (iVar1 == 2) {
LAB_006dd209:
                piVar5 = *(int **)(piVar4 + 4);
                if (piVar5 != (int *)0x0) {
                  iVar1 = *piVar5;
                  if (iVar1 == 2) {
LAB_006dd4b1:
                    __gettext_free_exp(*(undefined8 *)(piVar5 + 4));
LAB_006dd4ba:
                    piVar6 = *(int **)(piVar5 + 2);
                    if (piVar6 != (int *)0x0) {
                      iVar1 = *piVar6;
                      if (iVar1 == 2) {
LAB_006dd671:
                        __gettext_free_exp(*(undefined8 *)(piVar6 + 4));
LAB_006dd682:
                        __gettext_free_exp(*(undefined8 *)(piVar6 + 2));
                      }
                      else {
                        if (iVar1 == 3) {
                          __gettext_free_exp(*(undefined8 *)(piVar6 + 6));
                          goto LAB_006dd671;
                        }
                        if (iVar1 == 1) goto LAB_006dd682;
                      }
                      free(piVar6);
                    }
                  }
                  else {
                    if (iVar1 == 3) {
                      __gettext_free_exp(*(undefined8 *)(piVar5 + 6));
                      goto LAB_006dd4b1;
                    }
                    if (iVar1 == 1) goto LAB_006dd4ba;
                  }
                  free(piVar5);
                }
LAB_006dd238:
                piVar5 = *(int **)(piVar4 + 2);
                if (piVar5 != (int *)0x0) {
                  iVar1 = *piVar5;
                  if (iVar1 == 2) {
LAB_006dd359:
                    __gettext_free_exp(*(undefined8 *)(piVar5 + 4));
LAB_006dd362:
                    piVar6 = *(int **)(piVar5 + 2);
                    if (piVar6 != (int *)0x0) {
                      iVar1 = *piVar6;
                      if (iVar1 == 2) {
LAB_006dd559:
                        __gettext_free_exp(*(undefined8 *)(piVar6 + 4));
LAB_006dd56a:
                        __gettext_free_exp(*(undefined8 *)(piVar6 + 2));
                      }
                      else {
                        if (iVar1 == 3) {
                          __gettext_free_exp(*(undefined8 *)(piVar6 + 6));
                          goto LAB_006dd559;
                        }
                        if (iVar1 == 1) goto LAB_006dd56a;
                      }
                      free(piVar6);
                    }
                  }
                  else {
                    if (iVar1 == 3) {
                      __gettext_free_exp(*(undefined8 *)(piVar5 + 6));
                      goto LAB_006dd359;
                    }
                    if (iVar1 == 1) goto LAB_006dd362;
                  }
                  free(piVar5);
                }
              }
              else {
                if (iVar1 == 3) {
                  __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
                  goto LAB_006dd209;
                }
                if (iVar1 == 1) goto LAB_006dd238;
              }
              free(piVar4);
            }
          }
          else {
            if (iVar1 == 3) {
              piVar4 = *(int **)(piVar3 + 6);
              if (piVar4 == (int *)0x0) goto LAB_006dd120;
              iVar1 = *piVar4;
              if (iVar1 == 2) {
LAB_006dd589:
                __gettext_free_exp(*(undefined8 *)(piVar4 + 4));
LAB_006dd592:
                __gettext_free_exp(*(undefined8 *)(piVar4 + 2));
              }
              else {
                if (iVar1 == 3) {
                  __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
                  goto LAB_006dd589;
                }
                if (iVar1 == 1) goto LAB_006dd592;
              }
              free(piVar4);
              goto LAB_006dd120;
            }
            if (iVar1 == 1) goto LAB_006dd150;
          }
          free(piVar3);
        }
      }
      else {
        if (iVar1 == 3) {
          piVar3 = *(int **)(__ptr + 6);
          if (piVar3 == (int *)0x0) goto LAB_006dd093;
          iVar1 = *piVar3;
          if (iVar1 == 2) {
LAB_006dd3aa:
            __gettext_free_exp(*(undefined8 *)(piVar3 + 4));
LAB_006dd3b4:
            piVar4 = *(int **)(piVar3 + 2);
            if (piVar4 != (int *)0x0) {
              iVar1 = *piVar4;
              if (iVar1 == 2) {
LAB_006dd5a9:
                __gettext_free_exp(*(undefined8 *)(piVar4 + 4));
LAB_006dd5b2:
                __gettext_free_exp(*(undefined8 *)(piVar4 + 2));
              }
              else {
                if (iVar1 == 3) {
                  __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
                  goto LAB_006dd5a9;
                }
                if (iVar1 == 1) goto LAB_006dd5b2;
              }
              free(piVar4);
            }
          }
          else {
            if (iVar1 == 3) {
              __gettext_free_exp(*(undefined8 *)(piVar3 + 6));
              goto LAB_006dd3aa;
            }
            if (iVar1 == 1) goto LAB_006dd3b4;
          }
          free(piVar3);
          goto LAB_006dd093;
        }
        if (iVar1 == 1) goto LAB_006dd0c3;
      }
      free(__ptr);
    }
    if (lVar8 == 0) {
      return (undefined4 *)0x0;
    }
    lVar8 = 0;
  } while( true );
}

