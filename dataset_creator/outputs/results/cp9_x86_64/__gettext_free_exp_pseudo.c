
void __gettext_free_exp(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *__ptr;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = *param_1;
  if (iVar1 == 2) {
LAB_006dca90:
    piVar2 = *(int **)(param_1 + 4);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      if (iVar1 == 2) {
LAB_006dcbaa:
        piVar3 = *(int **)(piVar2 + 4);
        if (piVar3 != (int *)0x0) {
          iVar1 = *piVar3;
          if (iVar1 == 2) {
LAB_006dce49:
            __gettext_free_exp(*(undefined8 *)(piVar3 + 4));
LAB_006dce52:
            piVar4 = *(int **)(piVar3 + 2);
            if (piVar4 != (int *)0x0) {
              iVar1 = *piVar4;
              if (iVar1 == 2) {
LAB_006dcf99:
                __gettext_free_exp(*(undefined8 *)(piVar4 + 4));
LAB_006dcfa2:
                __gettext_free_exp(*(undefined8 *)(piVar4 + 2));
              }
              else {
                if (iVar1 == 3) {
                  __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
                  goto LAB_006dcf99;
                }
                if (iVar1 == 1) goto LAB_006dcfa2;
              }
              free(piVar4);
            }
          }
          else {
            if (iVar1 == 3) {
              __gettext_free_exp(*(undefined8 *)(piVar3 + 6));
              goto LAB_006dce49;
            }
            if (iVar1 == 1) goto LAB_006dce52;
          }
          free(piVar3);
        }
LAB_006dcbdb:
        piVar3 = *(int **)(piVar2 + 2);
        if (piVar3 != (int *)0x0) {
          iVar1 = *piVar3;
          if (iVar1 == 2) {
LAB_006dcc99:
            piVar4 = *(int **)(piVar3 + 4);
            if (piVar4 != (int *)0x0) {
              iVar1 = *piVar4;
              if (iVar1 == 2) {
LAB_006dcf59:
                __gettext_free_exp(*(undefined8 *)(piVar4 + 4));
LAB_006dcf62:
                __gettext_free_exp(*(undefined8 *)(piVar4 + 2));
              }
              else {
                if (iVar1 == 3) {
                  __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
                  goto LAB_006dcf59;
                }
                if (iVar1 == 1) goto LAB_006dcf62;
              }
              free(piVar4);
            }
LAB_006dccc8:
            piVar4 = *(int **)(piVar3 + 2);
            if (piVar4 != (int *)0x0) {
              iVar1 = *piVar4;
              if (iVar1 == 2) {
LAB_006dceb9:
                __gettext_free_exp(*(undefined8 *)(piVar4 + 4));
LAB_006dcec2:
                __gettext_free_exp(*(undefined8 *)(piVar4 + 2));
              }
              else {
                if (iVar1 == 3) {
                  __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
                  goto LAB_006dceb9;
                }
                if (iVar1 == 1) goto LAB_006dcec2;
              }
              free(piVar4);
              free(piVar3);
              goto LAB_006dcab8;
            }
          }
          else {
            if (iVar1 == 3) {
              __gettext_free_exp(*(undefined8 *)(piVar3 + 6));
              goto LAB_006dcc99;
            }
            if (iVar1 == 1) goto LAB_006dccc8;
          }
          free(piVar3);
        }
      }
      else {
        if (iVar1 == 3) {
          __gettext_free_exp(*(undefined8 *)(piVar2 + 6));
          goto LAB_006dcbaa;
        }
        if (iVar1 == 1) goto LAB_006dcbdb;
      }
LAB_006dcab8:
      free(piVar2);
    }
  }
  else {
    if (iVar1 == 3) {
      piVar2 = *(int **)(param_1 + 6);
      if (piVar2 == (int *)0x0) goto LAB_006dca90;
      iVar1 = *piVar2;
      if (iVar1 == 2) {
LAB_006dcdf2:
        __gettext_free_exp(*(undefined8 *)(piVar2 + 4));
LAB_006dcdfc:
        piVar3 = *(int **)(piVar2 + 2);
        if (piVar3 != (int *)0x0) {
          iVar1 = *piVar3;
          if (iVar1 == 2) {
LAB_006dcf39:
            __gettext_free_exp(*(undefined8 *)(piVar3 + 4));
LAB_006dcf42:
            __gettext_free_exp(*(undefined8 *)(piVar3 + 2));
          }
          else {
            if (iVar1 == 3) {
              __gettext_free_exp(*(undefined8 *)(piVar3 + 6));
              goto LAB_006dcf39;
            }
            if (iVar1 == 1) goto LAB_006dcf42;
          }
          free(piVar3);
        }
      }
      else {
        if (iVar1 == 3) {
          __gettext_free_exp(*(undefined8 *)(piVar2 + 6));
          goto LAB_006dcdf2;
        }
        if (iVar1 == 1) goto LAB_006dcdfc;
      }
      free(piVar2);
      goto LAB_006dca90;
    }
    if (iVar1 != 1) goto LAB_006dca4a;
  }
  piVar2 = *(int **)(param_1 + 2);
  if (piVar2 == (int *)0x0) goto LAB_006dca4a;
  iVar1 = *piVar2;
  if (iVar1 == 2) {
LAB_006dcb21:
    piVar3 = *(int **)(piVar2 + 4);
    if (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      if (iVar1 == 2) {
LAB_006dcd19:
        piVar4 = *(int **)(piVar3 + 4);
        if (piVar4 != (int *)0x0) {
          iVar1 = *piVar4;
          if (iVar1 == 2) {
LAB_006dcf79:
            __gettext_free_exp(*(undefined8 *)(piVar4 + 4));
LAB_006dcf82:
            __gettext_free_exp(*(undefined8 *)(piVar4 + 2));
          }
          else {
            if (iVar1 == 3) {
              __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
              goto LAB_006dcf79;
            }
            if (iVar1 == 1) goto LAB_006dcf82;
          }
          free(piVar4);
        }
LAB_006dcd48:
        piVar4 = *(int **)(piVar3 + 2);
        if (piVar4 != (int *)0x0) {
          iVar1 = *piVar4;
          if (iVar1 == 2) {
LAB_006dce99:
            __gettext_free_exp(*(undefined8 *)(piVar4 + 4));
LAB_006dcea2:
            __gettext_free_exp(*(undefined8 *)(piVar4 + 2));
          }
          else {
            if (iVar1 == 3) {
              __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
              goto LAB_006dce99;
            }
            if (iVar1 == 1) goto LAB_006dcea2;
          }
          free(piVar4);
          free(piVar3);
          goto LAB_006dcb58;
        }
      }
      else {
        if (iVar1 == 3) {
          __gettext_free_exp(*(undefined8 *)(piVar3 + 6));
          goto LAB_006dcd19;
        }
        if (iVar1 == 1) goto LAB_006dcd48;
      }
      free(piVar3);
    }
LAB_006dcb58:
    piVar3 = *(int **)(piVar2 + 2);
    if (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      if (iVar1 == 2) {
LAB_006dcc21:
        piVar4 = *(int **)(piVar3 + 4);
        if (piVar4 != (int *)0x0) {
          iVar1 = *piVar4;
          if (iVar1 == 2) {
LAB_006dced9:
            __gettext_free_exp(*(undefined8 *)(piVar4 + 4));
LAB_006dcee2:
            __gettext_free_exp(*(undefined8 *)(piVar4 + 2));
          }
          else {
            if (iVar1 == 3) {
              __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
              goto LAB_006dced9;
            }
            if (iVar1 == 1) goto LAB_006dcee2;
          }
          free(piVar4);
        }
LAB_006dcc50:
        piVar4 = *(int **)(piVar3 + 2);
        if (piVar4 != (int *)0x0) {
          iVar1 = *piVar4;
          if (iVar1 == 2) {
LAB_006dcda1:
            __gettext_free_exp(*(undefined8 *)(piVar4 + 4));
LAB_006dcdaa:
            __ptr = *(int **)(piVar4 + 2);
            if (__ptr != (int *)0x0) {
              iVar1 = *__ptr;
              if (iVar1 == 2) {
LAB_006dcef9:
                __gettext_free_exp(*(undefined8 *)(__ptr + 4));
LAB_006dcf02:
                __gettext_free_exp(*(undefined8 *)(__ptr + 2));
              }
              else {
                if (iVar1 == 3) {
                  __gettext_free_exp(*(undefined8 *)(__ptr + 6));
                  goto LAB_006dcef9;
                }
                if (iVar1 == 1) goto LAB_006dcf02;
              }
              free(__ptr);
            }
          }
          else {
            if (iVar1 == 3) {
              __gettext_free_exp(*(undefined8 *)(piVar4 + 6));
              goto LAB_006dcda1;
            }
            if (iVar1 == 1) goto LAB_006dcdaa;
          }
          free(piVar4);
        }
      }
      else {
        if (iVar1 == 3) {
          __gettext_free_exp(*(undefined8 *)(piVar3 + 6));
          goto LAB_006dcc21;
        }
        if (iVar1 == 1) goto LAB_006dcc50;
      }
      free(piVar3);
      free(piVar2);
      goto LAB_006dca4a;
    }
  }
  else {
    if (iVar1 == 3) {
      piVar3 = *(int **)(piVar2 + 6);
      if (piVar3 == (int *)0x0) goto LAB_006dcb21;
      iVar1 = *piVar3;
      if (iVar1 == 2) {
LAB_006dcf19:
        __gettext_free_exp(*(undefined8 *)(piVar3 + 4));
LAB_006dcf22:
        __gettext_free_exp(*(undefined8 *)(piVar3 + 2));
      }
      else {
        if (iVar1 == 3) {
          __gettext_free_exp(*(undefined8 *)(piVar3 + 6));
          goto LAB_006dcf19;
        }
        if (iVar1 == 1) goto LAB_006dcf22;
      }
      free(piVar3);
      goto LAB_006dcb21;
    }
    if (iVar1 == 1) goto LAB_006dcb58;
  }
  free(piVar2);
LAB_006dca4a:
  free(param_1);
  return;
}

