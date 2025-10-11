
ulong _IO_wdefault_xsgetn(uint *param_1,wchar_t *param_2,ulong param_3)

{
  wchar_t *pwVar1;
  uint uVar2;
  undefined8 *puVar3;
  wchar_t *__s2;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  ulong __n;
  uint uVar8;
  wchar_t *pwVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  
  uVar12 = param_3;
  do {
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    __s2 = (wchar_t *)*puVar3;
    if (0 < puVar3[1] - (long)__s2) {
      __n = puVar3[1] - (long)__s2 >> 2;
      if (uVar12 < __n) {
        __n = uVar12;
      }
      if ((long)__n < 0x15) {
        if (__n != 0) {
          uVar2 = (uint)__n;
          uVar14 = uVar2 - 1;
          if (((ulong)((long)param_2 - (long)(__s2 + 1)) < 9) || (uVar14 < 3)) {
            uVar10 = 0;
            do {
              param_2[uVar10] = __s2[uVar10];
              uVar10 = uVar10 + 1;
            } while ((__n & 0xffffffff) != uVar10);
          }
          else {
            uVar5 = *(undefined8 *)(__s2 + 2);
            uVar8 = uVar2 >> 2;
            *(undefined8 *)param_2 = *(undefined8 *)__s2;
            *(undefined8 *)(param_2 + 2) = uVar5;
            if (uVar8 != 1) {
              uVar5 = *(undefined8 *)(__s2 + 6);
              *(undefined8 *)(param_2 + 4) = *(undefined8 *)(__s2 + 4);
              *(undefined8 *)(param_2 + 6) = uVar5;
              if (uVar8 != 2) {
                uVar5 = *(undefined8 *)(__s2 + 10);
                *(undefined8 *)(param_2 + 8) = *(undefined8 *)(__s2 + 8);
                *(undefined8 *)(param_2 + 10) = uVar5;
                if (uVar8 != 3) {
                  uVar5 = *(undefined8 *)(__s2 + 0xe);
                  *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(__s2 + 0xc);
                  *(undefined8 *)(param_2 + 0xe) = uVar5;
                  if (uVar8 == 5) {
                    uVar5 = *(undefined8 *)(__s2 + 0x12);
                    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(__s2 + 0x10);
                    *(undefined8 *)(param_2 + 0x12) = uVar5;
                    goto LAB_006f639e;
                  }
                }
              }
            }
            uVar8 = uVar2 & 0xfffffffc;
            pwVar1 = param_2 + uVar8;
            pwVar9 = __s2 + uVar8;
            if (((uVar8 != uVar2) && (*pwVar1 = *pwVar9, uVar14 != uVar8)) &&
               (pwVar1[1] = pwVar9[1], uVar14 - uVar8 != 1)) {
              pwVar1[2] = pwVar9[2];
            }
          }
LAB_006f639e:
          uVar12 = uVar12 - __n;
          param_2 = param_2 + (__n & 0xffffffff);
          *puVar3 = __s2 + (__n & 0xffffffff);
        }
      }
      else {
        uVar12 = uVar12 - __n;
        param_2 = wmempcpy(param_2,__s2,__n);
        **(long **)(param_1 + 0x28) = **(long **)(param_1 + 0x28) + __n * 4;
      }
    }
    if (uVar12 == 0) {
      return param_3;
    }
    if ((int)param_1[0x30] < 0) break;
    if (param_1[0x30] == 0) {
      iVar7 = _IO_fwide(param_1,1);
      if (iVar7 != 1) break;
      if (param_1[0x30] != 0) goto LAB_006f6169;
      _IO_fwide(param_1,1);
      uVar2 = *param_1;
    }
    else {
LAB_006f6169:
      uVar2 = *param_1;
    }
    if (((uVar2 & 0x800) != 0) && (iVar7 = _IO_switch_to_wget_mode(param_1), iVar7 == -1)) break;
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    piVar11 = (int *)*puVar3;
    piVar4 = (int *)puVar3[1];
    if (piVar11 < piVar4) {
LAB_006f6230:
      iVar7 = *piVar11;
    }
    else {
      piVar13 = piVar4;
      if ((*param_1 & 0x100) != 0) {
        piVar13 = (int *)puVar3[10];
        *param_1 = *param_1 & 0xfffffeff;
        piVar11 = (int *)puVar3[8];
        puVar3[10] = piVar4;
        uVar5 = puVar3[2];
        puVar3[2] = piVar11;
        puVar3[8] = uVar5;
        *puVar3 = piVar11;
        puVar3[1] = piVar13;
        if (piVar11 < piVar13) goto LAB_006f6230;
      }
      if (*(long *)(param_1 + 0x18) == 0) {
        if (*(long *)(param_1 + 0x12) != 0) {
          free((void *)puVar3[8]);
          lVar6 = *(long *)(param_1 + 0x28);
          *(undefined8 *)(lVar6 + 0x50) = 0;
          *(undefined1 (*) [16])(lVar6 + 0x40) = (undefined1  [16])0x0;
        }
      }
      else {
        iVar7 = save_for_wbackup(param_1,piVar13);
        if (iVar7 != 0) break;
      }
      lVar6 = *(long *)(param_1 + 0x36);
      if (0x827 < lVar6 - 0x932180U) {
        _IO_vtable_check();
      }
      iVar7 = (**(code **)(lVar6 + 0x20))(param_1);
    }
  } while (iVar7 != -1);
  return param_3 - uVar12;
}

