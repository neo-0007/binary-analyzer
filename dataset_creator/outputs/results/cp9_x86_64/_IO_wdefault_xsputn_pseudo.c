
ulong _IO_wdefault_xsputn(long param_1,wchar_t *param_2,ulong param_3)

{
  ulong uVar1;
  wchar_t *pwVar2;
  wchar_t wVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong __n;
  wchar_t *pwVar8;
  ulong uVar9;
  wchar_t *pwVar10;
  ulong uVar11;
  
  uVar11 = param_3;
  if (param_3 == 0) {
    return 0;
  }
  do {
    lVar4 = *(long *)(param_1 + 0xa0);
    pwVar8 = *(wchar_t **)(lVar4 + 0x20);
    lVar7 = *(long *)(lVar4 + 0x28) - (long)pwVar8;
    if (0 < lVar7) {
      __n = lVar7 >> 2;
      if (uVar11 < __n) {
        __n = uVar11;
      }
      if ((long)__n < 0x15) {
        if (__n != 0) {
          uVar1 = __n - 1;
          if (((ulong)((long)pwVar8 - (long)(param_2 + 1)) < 9) || (uVar1 < 3)) {
            lVar7 = 0;
            do {
              *(undefined4 *)((long)pwVar8 + lVar7) = *(undefined4 *)((long)param_2 + lVar7);
              lVar7 = lVar7 + 4;
            } while (lVar7 != __n * 4);
          }
          else {
            uVar5 = *(undefined8 *)(param_2 + 2);
            uVar9 = __n >> 2;
            *(undefined8 *)pwVar8 = *(undefined8 *)param_2;
            *(undefined8 *)(pwVar8 + 2) = uVar5;
            if (uVar9 != 1) {
              uVar5 = *(undefined8 *)(param_2 + 6);
              *(undefined8 *)(pwVar8 + 4) = *(undefined8 *)(param_2 + 4);
              *(undefined8 *)(pwVar8 + 6) = uVar5;
              if (uVar9 != 2) {
                uVar5 = *(undefined8 *)(param_2 + 10);
                *(undefined8 *)(pwVar8 + 8) = *(undefined8 *)(param_2 + 8);
                *(undefined8 *)(pwVar8 + 10) = uVar5;
                if (uVar9 != 3) {
                  uVar5 = *(undefined8 *)(param_2 + 0xe);
                  *(undefined8 *)(pwVar8 + 0xc) = *(undefined8 *)(param_2 + 0xc);
                  *(undefined8 *)(pwVar8 + 0xe) = uVar5;
                  if (uVar9 == 5) {
                    uVar5 = *(undefined8 *)(param_2 + 0x12);
                    *(undefined8 *)(pwVar8 + 0x10) = *(undefined8 *)(param_2 + 0x10);
                    *(undefined8 *)(pwVar8 + 0x12) = uVar5;
                    goto LAB_006f5b72;
                  }
                }
              }
            }
            uVar9 = __n & 0xfffffffffffffffc;
            pwVar2 = param_2 + uVar9;
            pwVar10 = pwVar8 + uVar9;
            if (((__n != uVar9) && (*pwVar10 = *pwVar2, uVar1 != uVar9)) &&
               (pwVar10[1] = pwVar2[1], uVar1 - uVar9 != 1)) {
              pwVar10[2] = pwVar2[2];
            }
          }
LAB_006f5b72:
          uVar11 = uVar11 - __n;
          param_2 = param_2 + __n;
          *(wchar_t **)(lVar4 + 0x20) = pwVar8 + __n;
        }
      }
      else {
        uVar11 = uVar11 - __n;
        pwVar8 = wmempcpy(pwVar8,param_2,__n);
        param_2 = param_2 + __n;
        *(wchar_t **)(lVar4 + 0x20) = pwVar8;
      }
    }
    if (uVar11 == 0) {
      return param_3;
    }
    wVar3 = *param_2;
    param_2 = param_2 + 1;
    if (*(int *)(param_1 + 0xc0) == 0) {
      _IO_fwide(param_1,1);
    }
    lVar4 = *(long *)(param_1 + 0xd8);
    if (lVar4 - 0x932180U < 0x828) {
      iVar6 = (**(code **)(lVar4 + 0x18))(param_1,wVar3);
    }
    else {
      _IO_vtable_check();
      iVar6 = (**(code **)(lVar4 + 0x18))(param_1,wVar3);
    }
    if (iVar6 == -1) {
      return param_3 - uVar11;
    }
    uVar11 = uVar11 - 1;
  } while( true );
}

