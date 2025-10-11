
ulong _IO_wfile_xsputn(uint *param_1,wchar_t *param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  uint uVar8;
  uint uVar9;
  wchar_t *pwVar10;
  ulong uVar11;
  ulong __n;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  pwVar7 = *(wchar_t **)(lVar5 + 0x20);
  if ((*param_1 & 0xa00) == 0xa00) {
    __n = *(long *)(lVar5 + 0x38) - (long)pwVar7 >> 2;
    if (__n < param_3) {
      bVar4 = false;
    }
    else {
      pwVar10 = param_2 + param_3;
      do {
        if (pwVar10 <= param_2) {
          bVar4 = false;
          goto LAB_006f80c8;
        }
        pwVar10 = pwVar10 + -1;
      } while (*pwVar10 != L'\n');
      bVar4 = true;
      __n = ((long)pwVar10 - (long)param_2 >> 2) + 1;
    }
  }
  else {
    bVar4 = false;
    __n = *(long *)(lVar5 + 0x28) - (long)pwVar7 >> 2;
  }
  uVar11 = param_3;
  if (__n != 0) {
LAB_006f80c8:
    if (param_3 <= __n) {
      __n = param_3;
    }
    if (__n < 0x15) {
      uVar2 = (uint)__n;
      uVar8 = uVar2 - 1;
      if (((ulong)((long)pwVar7 - (long)(param_2 + 1)) < 9) || (uVar8 < 3)) {
        uVar11 = 0;
        do {
          pwVar7[uVar11] = param_2[uVar11];
          uVar11 = uVar11 + 1;
        } while ((__n & 0xffffffff) != uVar11);
      }
      else {
        uVar3 = *(undefined8 *)(param_2 + 2);
        uVar9 = (uint)(__n >> 2) & 0x3fffffff;
        *(undefined8 *)pwVar7 = *(undefined8 *)param_2;
        *(undefined8 *)(pwVar7 + 2) = uVar3;
        if (uVar9 != 1) {
          uVar3 = *(undefined8 *)(param_2 + 6);
          *(undefined8 *)(pwVar7 + 4) = *(undefined8 *)(param_2 + 4);
          *(undefined8 *)(pwVar7 + 6) = uVar3;
          if (uVar9 != 2) {
            uVar3 = *(undefined8 *)(param_2 + 10);
            *(undefined8 *)(pwVar7 + 8) = *(undefined8 *)(param_2 + 8);
            *(undefined8 *)(pwVar7 + 10) = uVar3;
            if (uVar9 != 3) {
              uVar3 = *(undefined8 *)(param_2 + 0xe);
              *(undefined8 *)(pwVar7 + 0xc) = *(undefined8 *)(param_2 + 0xc);
              *(undefined8 *)(pwVar7 + 0xe) = uVar3;
              if (uVar9 == 5) {
                uVar3 = *(undefined8 *)(param_2 + 0x12);
                *(undefined8 *)(pwVar7 + 0x10) = *(undefined8 *)(param_2 + 0x10);
                *(undefined8 *)(pwVar7 + 0x12) = uVar3;
                goto LAB_006f814a;
              }
            }
          }
        }
        uVar9 = uVar2 & 0xfffffffc;
        pwVar10 = param_2 + uVar9;
        pwVar6 = pwVar7 + uVar9;
        if (((uVar2 != uVar9) && (*pwVar6 = *pwVar10, uVar8 != uVar9)) &&
           (pwVar6[1] = pwVar10[1], uVar8 - uVar9 != 1)) {
          pwVar6[2] = pwVar10[2];
        }
      }
LAB_006f814a:
      pwVar7 = pwVar7 + (__n & 0xffffffff);
      uVar11 = __n & 0xffffffff;
    }
    else {
      pwVar7 = wmempcpy(pwVar7,param_2,__n);
      uVar11 = __n;
    }
    param_2 = param_2 + uVar11;
    *(wchar_t **)(lVar5 + 0x20) = pwVar7;
    uVar11 = param_3 - __n;
    if (uVar11 == 0) goto LAB_006f8054;
  }
  lVar5 = _IO_wdefault_xsputn(param_1,param_2);
  param_3 = param_3 + (lVar5 - uVar11);
LAB_006f8054:
  if (bVar4) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
    if (lVar5 != lVar1) {
      _IO_wdo_write(param_1,lVar1,lVar5 - lVar1 >> 2);
    }
  }
  return param_3;
}

