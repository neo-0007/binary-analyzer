
ulong _IO_default_xsputn(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 uVar1;
  undefined8 *__dest;
  undefined8 uVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong __n;
  ulong uVar9;
  
  uVar9 = param_3;
  if (param_3 == 0) {
    return 0;
  }
  do {
    __dest = *(undefined8 **)(param_1 + 0x28);
    if (__dest < *(undefined8 **)(param_1 + 0x30)) {
      __n = (long)*(undefined8 **)(param_1 + 0x30) - (long)__dest;
      if (uVar9 < __n) {
        __n = uVar9;
      }
      if (__n < 0x15) {
        if (__n != 0) {
          if (((ulong)((long)__dest - (long)((long)param_2 + 1)) < 0xf) || (__n - 1 < 7)) {
            uVar6 = 0;
            do {
              *(undefined1 *)((long)__dest + uVar6) = *(undefined1 *)((long)param_2 + uVar6);
              uVar6 = uVar6 + 1;
            } while (__n != uVar6);
          }
          else if (__n - 1 < 0xf) {
            puVar8 = param_2 + 1;
            lVar7 = __n - 9;
            *__dest = *param_2;
            puVar5 = __dest + 1;
            if (__n != 8) goto LAB_006fd256;
          }
          else {
            uVar2 = param_2[1];
            puVar8 = param_2 + 2;
            puVar5 = __dest + 2;
            lVar7 = __n - 0x11;
            *__dest = *param_2;
            __dest[1] = uVar2;
            if (__n != 0x10) {
LAB_006fd256:
              *(undefined1 *)puVar5 = *(undefined1 *)puVar8;
              if ((((lVar7 != 0) &&
                   (*(undefined1 *)((long)puVar5 + 1) = *(undefined1 *)((long)puVar8 + 1),
                   lVar7 != 1)) &&
                  (*(undefined1 *)((long)puVar5 + 2) = *(undefined1 *)((long)puVar8 + 2), lVar7 != 2
                  )) && (((*(undefined1 *)((long)puVar5 + 3) = *(undefined1 *)((long)puVar8 + 3),
                          lVar7 != 3 &&
                          (*(undefined1 *)((long)puVar5 + 4) = *(undefined1 *)((long)puVar8 + 4),
                          lVar7 != 4)) &&
                         (*(undefined1 *)((long)puVar5 + 5) = *(undefined1 *)((long)puVar8 + 5),
                         lVar7 != 5)))) {
                *(undefined1 *)((long)puVar5 + 6) = *(undefined1 *)((long)puVar8 + 6);
              }
            }
          }
          param_2 = (undefined8 *)((long)param_2 + __n);
          *(ulong *)(param_1 + 0x28) = (long)__dest + __n;
        }
      }
      else {
        pvVar4 = mempcpy(__dest,param_2,__n);
        *(void **)(param_1 + 0x28) = pvVar4;
        param_2 = (undefined8 *)((long)param_2 + __n);
      }
      uVar9 = uVar9 - __n;
    }
    if (uVar9 == 0) {
      return param_3;
    }
    lVar7 = *(long *)(param_1 + 0xd8);
    if (0x827 < lVar7 - 0x932180U) {
      _IO_vtable_check();
    }
    uVar1 = *(undefined1 *)param_2;
    param_2 = (undefined8 *)((long)param_2 + 1);
    iVar3 = (**(code **)(lVar7 + 0x18))(param_1,uVar1);
    if (iVar3 == -1) {
      return param_3 - uVar9;
    }
    uVar9 = uVar9 - 1;
  } while( true );
}

