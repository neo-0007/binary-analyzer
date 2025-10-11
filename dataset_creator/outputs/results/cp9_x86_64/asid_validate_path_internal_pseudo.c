
ulong asid_validate_path_internal(long param_1,long param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  int *piVar9;
  ulong uVar10;
  int *piVar11;
  int *local_48;
  
  if ((param_2 != 0) && (iVar3 = OPENSSL_sk_num(param_2), 0 < iVar3)) {
    if (param_1 == 0 && param_3 == (undefined8 *)0x0) {
      return 0;
    }
    if ((param_1 != 0) && (*(long *)(param_1 + 0x38) == 0)) goto LAB_00608095;
    if (param_3 == (undefined8 *)0x0) {
      lVar6 = OPENSSL_sk_value(param_2,0);
      param_3 = *(undefined8 **)(lVar6 + 0x130);
      if (param_3 == (undefined8 *)0x0) {
        return 1;
      }
      iVar3 = X509v3_asid_is_canonical(param_3);
      if (iVar3 == 0) {
LAB_006080c5:
        *(int *)(param_1 + 0xac) = iVar3;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(param_1 + 0xb0) = 0x29;
        *(long *)(param_1 + 0xb8) = lVar6;
        uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
        uVar10 = (ulong)uVar5;
        if (uVar5 == 0) {
          return 0;
        }
      }
      else {
        iVar3 = 1;
        uVar10 = 1;
      }
    }
    else {
      iVar3 = X509v3_asid_is_canonical(param_3);
      if (iVar3 == 0) {
        if (param_1 == 0) {
          return 0;
        }
        lVar6 = 0;
        iVar3 = -1;
        goto LAB_006080c5;
      }
      iVar3 = 0;
      lVar6 = 0;
      uVar10 = 1;
    }
    local_48 = (int *)*param_3;
    bVar1 = false;
    if (local_48 != (int *)0x0) {
      if (*local_48 == 0) {
        bVar1 = true;
        local_48 = (int *)0x0;
      }
      else if (*local_48 == 1) {
        local_48 = *(int **)(local_48 + 2);
      }
      else {
        local_48 = (int *)0x0;
      }
    }
    piVar11 = (int *)param_3[1];
    bVar2 = false;
    if (piVar11 != (int *)0x0) {
      if (*piVar11 == 0) {
        bVar2 = true;
        piVar11 = (int *)0x0;
      }
      else if (*piVar11 == 1) {
        piVar11 = *(int **)(piVar11 + 2);
      }
      else {
        piVar11 = (int *)0x0;
      }
    }
    iVar4 = OPENSSL_sk_num(param_2);
    if (iVar3 < iVar4) {
      do {
        lVar6 = OPENSSL_sk_value(param_2,iVar3);
        if (lVar6 == 0) goto LAB_00608090;
        if (*(long *)(lVar6 + 0x130) == 0) {
          if (local_48 == (int *)0x0 && piVar11 == (int *)0x0) {
            local_48 = (int *)0x0;
            piVar11 = (int *)0x0;
          }
          else {
            if (param_1 == 0) {
              return 0;
            }
            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
            *(int *)(param_1 + 0xac) = iVar3;
            *(long *)(param_1 + 0xb8) = lVar6;
            uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            uVar10 = (ulong)uVar5;
            if (uVar5 == 0) {
              return 0;
            }
          }
        }
        else {
          iVar4 = X509v3_asid_is_canonical();
          if (iVar4 == 0) {
            if (param_1 == 0) {
              return 0;
            }
            *(undefined4 *)(param_1 + 0xb0) = 0x29;
            *(int *)(param_1 + 0xac) = iVar3;
            *(long *)(param_1 + 0xb8) = lVar6;
            uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            uVar10 = (ulong)uVar5;
            if (uVar5 == 0) {
              return 0;
            }
          }
          plVar7 = *(long **)(lVar6 + 0x130);
          piVar9 = (int *)*plVar7;
          if (piVar9 == (int *)0x0) {
            if (local_48 == (int *)0x0) goto LAB_00607fbb;
            if (param_1 == 0) {
              return 0;
            }
            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
            *(int *)(param_1 + 0xac) = iVar3;
            *(long *)(param_1 + 0xb8) = lVar6;
            uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            uVar10 = (ulong)uVar5;
            if (uVar5 == 0) {
              return 0;
            }
            plVar7 = *(long **)(lVar6 + 0x130);
            piVar9 = (int *)*plVar7;
            if (piVar9 != (int *)0x0) {
              if (*piVar9 == 1) {
                iVar4 = asid_contains(*(undefined8 *)(piVar9 + 2),0);
                if (iVar4 == 0) {
                  local_48 = (int *)0x0;
                  goto LAB_00608326;
                }
                goto LAB_006083c0;
              }
              local_48 = (int *)0x0;
              bVar1 = false;
              goto LAB_00607fbb;
            }
            piVar9 = (int *)plVar7[1];
            bVar1 = false;
            local_48 = (int *)0x0;
            if (piVar9 != (int *)0x0) goto LAB_00607fc8;
LAB_006081b5:
            if (piVar11 != (int *)0x0) {
              if (param_1 == 0) {
                return 0;
              }
              *(undefined4 *)(param_1 + 0xb0) = 0x2e;
              *(int *)(param_1 + 0xac) = iVar3;
              *(long *)(param_1 + 0xb8) = lVar6;
              uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
              uVar10 = (ulong)uVar5;
              if (uVar5 == 0) {
                return 0;
              }
              piVar11 = *(int **)(*(long *)(lVar6 + 0x130) + 8);
              if (piVar11 != (int *)0x0) {
                if (*piVar11 != 1) {
                  bVar2 = false;
                  piVar11 = (int *)0x0;
                  goto LAB_00607fd1;
                }
                iVar4 = asid_contains(*(undefined8 *)(piVar11 + 2),0);
                if (iVar4 != 0) {
LAB_006083d0:
                  plVar7 = *(long **)(lVar6 + 0x130);
                  goto LAB_00608264;
                }
                piVar11 = (int *)0x0;
LAB_00608389:
                *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                *(int *)(param_1 + 0xac) = iVar3;
                *(long *)(param_1 + 0xb8) = lVar6;
                uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
                uVar10 = (ulong)uVar5;
                if (uVar5 == 0) {
                  return 0;
                }
              }
              bVar2 = false;
            }
          }
          else {
            if (*piVar9 == 1) {
              if (!bVar1) {
                iVar4 = asid_contains(*(undefined8 *)(piVar9 + 2),local_48);
                if (iVar4 == 0) {
                  if (param_1 == 0) {
                    return 0;
                  }
LAB_00608326:
                  *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                  *(int *)(param_1 + 0xac) = iVar3;
                  *(long *)(param_1 + 0xb8) = lVar6;
                  uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
                  uVar10 = (ulong)uVar5;
                  if (uVar5 == 0) {
                    return 0;
                  }
                  bVar1 = false;
                  plVar7 = *(long **)(lVar6 + 0x130);
                  goto LAB_00607fbb;
                }
LAB_006083c0:
                plVar7 = *(long **)(lVar6 + 0x130);
              }
              bVar1 = false;
              local_48 = *(int **)(*plVar7 + 8);
            }
LAB_00607fbb:
            piVar9 = (int *)plVar7[1];
            if (piVar9 == (int *)0x0) goto LAB_006081b5;
LAB_00607fc8:
            if (*piVar9 != 1) goto LAB_00607fd1;
            if (!bVar2) {
              iVar4 = asid_contains(*(undefined8 *)(piVar9 + 2),piVar11);
              if (iVar4 != 0) goto LAB_006083d0;
              if (param_1 == 0) {
                return 0;
              }
              goto LAB_00608389;
            }
LAB_00608264:
            bVar2 = false;
            piVar11 = *(int **)(plVar7[1] + 8);
          }
        }
LAB_00607fd1:
        iVar3 = iVar3 + 1;
        iVar4 = OPENSSL_sk_num(param_2);
      } while (iVar3 < iVar4);
    }
    if (lVar6 != 0) {
      puVar8 = *(undefined8 **)(lVar6 + 0x130);
      if (puVar8 == (undefined8 *)0x0) {
        return uVar10;
      }
      if (((int *)*puVar8 != (int *)0x0) && (*(int *)*puVar8 == 0)) {
        if (param_1 == 0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0xb0) = 0x2e;
        *(int *)(param_1 + 0xac) = iVar3;
        *(long *)(param_1 + 0xb8) = lVar6;
        uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
        uVar10 = (ulong)uVar5;
        if (uVar5 == 0) {
          return 0;
        }
        puVar8 = *(undefined8 **)(lVar6 + 0x130);
      }
      if ((int *)puVar8[1] == (int *)0x0) {
        return uVar10;
      }
      if (*(int *)puVar8[1] == 0) {
        if (param_1 == 0) {
          return 0;
        }
        *(int *)(param_1 + 0xac) = iVar3;
        *(long *)(param_1 + 0xb8) = lVar6;
        *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                    /* WARNING: Could not recover jumptable at 0x0060808a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
        return uVar10;
      }
      return uVar10;
    }
  }
LAB_00608090:
  if (param_1 == 0) {
    return 0;
  }
LAB_00608095:
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return 0;
}

