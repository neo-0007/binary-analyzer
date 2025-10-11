
ulong _IO_default_xsgetn(uint *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int iVar9;
  ulong __n;
  undefined8 *__src;
  ulong uVar10;
  
  __src = *(undefined8 **)(param_1 + 2);
  puVar7 = *(undefined8 **)(param_1 + 4);
  uVar10 = param_3;
LAB_006fd3a0:
  if (puVar7 <= __src) goto LAB_006fd3c8;
  do {
    __n = (long)puVar7 - (long)__src;
    if (uVar10 < (ulong)((long)puVar7 - (long)__src)) {
      __n = uVar10;
    }
    if (__n < 0x15) {
      if (__n != 0) {
        iVar4 = (int)__n;
        if (((ulong)((long)param_2 - ((long)__src + 1)) < 0xf) || (iVar4 - 1U < 7)) {
          uVar5 = __n & 0xffffffff;
          uVar8 = 0;
          do {
            *(undefined1 *)((long)param_2 + uVar8) = *(undefined1 *)((long)__src + uVar8);
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar5);
          param_2 = (undefined8 *)((long)param_2 + uVar5);
          *(ulong *)(param_1 + 2) = uVar5 + (long)__src;
        }
        else if (iVar4 - 1U < 0xf) {
          puVar6 = param_2 + 1;
          puVar7 = __src + 1;
          iVar9 = iVar4 + -9;
          *param_2 = *__src;
          if (iVar4 != 8) goto LAB_006fd5e2;
          param_2 = (undefined8 *)((long)param_2 + (__n & 0xffffffff));
          *(ulong *)(param_1 + 2) = (__n & 0xffffffff) + (long)__src;
        }
        else {
          uVar1 = __src[1];
          puVar7 = __src + 2;
          puVar6 = param_2 + 2;
          iVar9 = iVar4 + -0x11;
          *param_2 = *__src;
          param_2[1] = uVar1;
          if (iVar4 != 0x10) {
LAB_006fd5e2:
            *(undefined1 *)puVar6 = *(undefined1 *)puVar7;
            if ((((iVar9 != 0) &&
                 (*(undefined1 *)((long)puVar6 + 1) = *(undefined1 *)((long)puVar7 + 1), iVar9 != 1)
                 ) && (*(undefined1 *)((long)puVar6 + 2) = *(undefined1 *)((long)puVar7 + 2),
                      iVar9 != 2)) &&
               (((*(undefined1 *)((long)puVar6 + 3) = *(undefined1 *)((long)puVar7 + 3), iVar9 != 3
                 && (*(undefined1 *)((long)puVar6 + 4) = *(undefined1 *)((long)puVar7 + 4),
                    iVar9 != 4)) &&
                (*(undefined1 *)((long)puVar6 + 5) = *(undefined1 *)((long)puVar7 + 5), iVar9 != 5))
               )) {
              *(undefined1 *)((long)puVar6 + 6) = *(undefined1 *)((long)puVar7 + 6);
            }
          }
          param_2 = (undefined8 *)((long)param_2 + (__n & 0xffffffff));
          *(ulong *)(param_1 + 2) = (__n & 0xffffffff) + (long)__src;
        }
      }
    }
    else {
      param_2 = (undefined8 *)mempcpy(param_2,__src,__n);
      *(ulong *)(param_1 + 2) = *(long *)(param_1 + 2) + __n;
    }
    uVar10 = uVar10 - __n;
LAB_006fd3c8:
    do {
      if (uVar10 == 0) {
        return param_3;
      }
      if (param_1[0x30] == 0) {
        param_1[0x30] = 0xffffffff;
      }
      else if (param_1[0x30] != 0xffffffff) goto LAB_006fd4b1;
      uVar3 = *param_1;
      if ((uVar3 & 0x800) == 0) {
        __src = *(undefined8 **)(param_1 + 2);
        puVar6 = *(undefined8 **)(param_1 + 4);
      }
      else {
        __src = *(undefined8 **)(param_1 + 10);
        if (*(undefined8 **)(param_1 + 8) < __src) {
          lVar2 = *(long *)(param_1 + 0x36);
          if (0x827 < lVar2 - 0x932180U) {
            _IO_vtable_check();
          }
          iVar4 = (**(code **)(lVar2 + 0x18))(param_1,0xffffffff);
          if (iVar4 == -1) goto LAB_006fd4b1;
          uVar3 = *param_1;
          __src = *(undefined8 **)(param_1 + 10);
        }
        puVar6 = *(undefined8 **)(param_1 + 4);
        if ((uVar3 & 0x100) == 0) {
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0xe);
          if (puVar6 < __src) {
            *(undefined8 **)(param_1 + 4) = __src;
            puVar6 = __src;
          }
        }
        else {
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x14);
        }
        uVar3 = uVar3 & 0xfffff7ff;
        *(undefined8 **)(param_1 + 2) = __src;
        *(undefined8 **)(param_1 + 0xc) = __src;
        *(undefined8 **)(param_1 + 8) = __src;
        *param_1 = uVar3;
      }
      puVar7 = puVar6;
      if (__src < puVar6) goto LAB_006fd3a0;
      if ((uVar3 & 0x100) != 0) {
        __src = *(undefined8 **)(param_1 + 0x12);
        uVar1 = *(undefined8 *)(param_1 + 6);
        *param_1 = uVar3 & 0xfffffeff;
        puVar7 = *(undefined8 **)(param_1 + 0x16);
        *(undefined8 **)(param_1 + 0x16) = puVar6;
        *(undefined8 **)(param_1 + 6) = __src;
        *(undefined8 *)(param_1 + 0x12) = uVar1;
        *(undefined8 **)(param_1 + 2) = __src;
        *(undefined8 **)(param_1 + 4) = puVar7;
        if (__src < puVar7) goto LAB_006fd3a0;
      }
      if (*(long *)(param_1 + 0x18) == 0) {
        if (*(void **)(param_1 + 0x12) != (void *)0x0) {
          free(*(void **)(param_1 + 0x12));
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          *(undefined1 (*) [16])(param_1 + 0x12) = (undefined1  [16])0x0;
        }
      }
      else {
        iVar4 = save_for_backup(param_1);
        if (iVar4 != 0) goto LAB_006fd4b1;
      }
      lVar2 = *(long *)(param_1 + 0x36);
      if (0x827 < lVar2 - 0x932180U) {
        _IO_vtable_check();
      }
      iVar4 = (**(code **)(lVar2 + 0x20))(param_1);
      if (iVar4 == -1) {
LAB_006fd4b1:
        return param_3 - uVar10;
      }
      __src = *(undefined8 **)(param_1 + 2);
      puVar7 = *(undefined8 **)(param_1 + 4);
    } while (puVar7 <= __src);
  } while( true );
}

