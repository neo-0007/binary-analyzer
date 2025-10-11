
ulong FUN_00706b40(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar10 = param_3;
  if (param_3 == 0) {
    return 0;
  }
  do {
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    if (puVar2 < *(undefined8 **)(param_1 + 0x30)) {
      uVar9 = (long)*(undefined8 **)(param_1 + 0x30) - (long)puVar2;
      if (uVar10 < uVar9) {
        uVar9 = uVar10;
      }
      if (uVar9 < 0x15) {
        if (uVar9 != 0) {
          if (((ulong)((long)puVar2 - (long)((long)param_2 + 1)) < 0xf) || (uVar9 - 1 < 7)) {
            uVar6 = 0;
            do {
              *(undefined1 *)((long)puVar2 + uVar6) = *(undefined1 *)((long)param_2 + uVar6);
              uVar6 = uVar6 + 1;
            } while (uVar9 != uVar6);
          }
          else if (uVar9 - 1 < 0xf) {
            puVar8 = param_2 + 1;
            lVar7 = uVar9 - 9;
            *puVar2 = *param_2;
            puVar5 = puVar2 + 1;
            if (uVar9 != 8) goto LAB_00706c66;
          }
          else {
            uVar4 = param_2[1];
            puVar8 = param_2 + 2;
            puVar5 = puVar2 + 2;
            lVar7 = uVar9 - 0x11;
            *puVar2 = *param_2;
            puVar2[1] = uVar4;
            if (uVar9 != 0x10) {
LAB_00706c66:
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
          param_2 = (undefined8 *)((long)param_2 + uVar9);
          *(ulong *)(param_1 + 0x28) = (long)puVar2 + uVar9;
        }
      }
      else {
        uVar4 = thunk_FUN_00713820(puVar2,param_2,uVar9);
        *(undefined8 *)(param_1 + 0x28) = uVar4;
        param_2 = (undefined8 *)((long)param_2 + uVar9);
      }
      uVar10 = uVar10 - uVar9;
    }
    if (uVar10 == 0) {
      return param_3;
    }
    lVar7 = *(long *)(param_1 + 0xd8);
    if (0x827 < lVar7 - 0x93f160U) {
      FUN_00703130();
    }
    uVar1 = *(undefined1 *)param_2;
    param_2 = (undefined8 *)((long)param_2 + 1);
    iVar3 = (**(code **)(lVar7 + 0x18))(param_1,uVar1);
    if (iVar3 == -1) {
      return param_3 - uVar10;
    }
    uVar10 = uVar10 - 1;
  } while( true );
}

