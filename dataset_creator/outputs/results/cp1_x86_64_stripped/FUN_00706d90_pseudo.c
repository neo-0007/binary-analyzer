
ulong FUN_00706d90(uint *param_1,undefined8 *param_2,ulong param_3)

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
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  
  puVar11 = *(undefined8 **)(param_1 + 2);
  puVar7 = *(undefined8 **)(param_1 + 4);
  uVar12 = param_3;
LAB_00706db0:
  if (puVar7 <= puVar11) goto LAB_00706dd8;
  do {
    uVar10 = (long)puVar7 - (long)puVar11;
    if (uVar12 < (ulong)((long)puVar7 - (long)puVar11)) {
      uVar10 = uVar12;
    }
    if (uVar10 < 0x15) {
      if (uVar10 != 0) {
        iVar4 = (int)uVar10;
        if (((long)param_2 - ((long)puVar11 + 1U) < 0xf) || (iVar4 - 1U < 7)) {
          uVar5 = uVar10 & 0xffffffff;
          uVar8 = 0;
          do {
            *(undefined1 *)((long)param_2 + uVar8) = *(undefined1 *)((long)puVar11 + uVar8);
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar5);
          param_2 = (undefined8 *)((long)param_2 + uVar5);
          *(ulong *)(param_1 + 2) = uVar5 + (long)puVar11;
        }
        else if (iVar4 - 1U < 0xf) {
          puVar6 = param_2 + 1;
          puVar7 = puVar11 + 1;
          iVar9 = iVar4 + -9;
          *param_2 = *puVar11;
          if (iVar4 != 8) goto LAB_00706ff2;
          param_2 = (undefined8 *)((long)param_2 + (uVar10 & 0xffffffff));
          *(ulong *)(param_1 + 2) = (uVar10 & 0xffffffff) + (long)puVar11;
        }
        else {
          uVar1 = puVar11[1];
          puVar7 = puVar11 + 2;
          puVar6 = param_2 + 2;
          iVar9 = iVar4 + -0x11;
          *param_2 = *puVar11;
          param_2[1] = uVar1;
          if (iVar4 != 0x10) {
LAB_00706ff2:
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
          param_2 = (undefined8 *)((long)param_2 + (uVar10 & 0xffffffff));
          *(ulong *)(param_1 + 2) = (uVar10 & 0xffffffff) + (long)puVar11;
        }
      }
    }
    else {
      param_2 = (undefined8 *)thunk_FUN_00713820(param_2,puVar11,uVar10);
      *(ulong *)(param_1 + 2) = *(long *)(param_1 + 2) + uVar10;
    }
    uVar12 = uVar12 - uVar10;
LAB_00706dd8:
    do {
      if (uVar12 == 0) {
        return param_3;
      }
      if (param_1[0x30] == 0) {
        param_1[0x30] = 0xffffffff;
      }
      else if (param_1[0x30] != 0xffffffff) goto LAB_00706ec1;
      uVar3 = *param_1;
      if ((uVar3 & 0x800) == 0) {
        puVar11 = *(undefined8 **)(param_1 + 2);
        puVar6 = *(undefined8 **)(param_1 + 4);
      }
      else {
        puVar11 = *(undefined8 **)(param_1 + 10);
        if (*(undefined8 **)(param_1 + 8) < puVar11) {
          lVar2 = *(long *)(param_1 + 0x36);
          if (0x827 < lVar2 - 0x93f160U) {
            FUN_00703130();
          }
          iVar4 = (**(code **)(lVar2 + 0x18))(param_1,0xffffffff);
          if (iVar4 == -1) goto LAB_00706ec1;
          uVar3 = *param_1;
          puVar11 = *(undefined8 **)(param_1 + 10);
        }
        puVar6 = *(undefined8 **)(param_1 + 4);
        if ((uVar3 & 0x100) == 0) {
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0xe);
          if (puVar6 < puVar11) {
            *(undefined8 **)(param_1 + 4) = puVar11;
            puVar6 = puVar11;
          }
        }
        else {
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x14);
        }
        uVar3 = uVar3 & 0xfffff7ff;
        *(undefined8 **)(param_1 + 2) = puVar11;
        *(undefined8 **)(param_1 + 0xc) = puVar11;
        *(undefined8 **)(param_1 + 8) = puVar11;
        *param_1 = uVar3;
      }
      puVar7 = puVar6;
      if (puVar11 < puVar6) goto LAB_00706db0;
      if ((uVar3 & 0x100) != 0) {
        puVar11 = *(undefined8 **)(param_1 + 0x12);
        uVar1 = *(undefined8 *)(param_1 + 6);
        *param_1 = uVar3 & 0xfffffeff;
        puVar7 = *(undefined8 **)(param_1 + 0x16);
        *(undefined8 **)(param_1 + 0x16) = puVar6;
        *(undefined8 **)(param_1 + 6) = puVar11;
        *(undefined8 *)(param_1 + 0x12) = uVar1;
        *(undefined8 **)(param_1 + 2) = puVar11;
        *(undefined8 **)(param_1 + 4) = puVar7;
        if (puVar11 < puVar7) goto LAB_00706db0;
      }
      if (*(long *)(param_1 + 0x18) == 0) {
        if (*(long *)(param_1 + 0x12) != 0) {
          FUN_007104f0();
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          *(undefined1 (*) [16])(param_1 + 0x12) = (undefined1  [16])0x0;
        }
      }
      else {
        iVar4 = FUN_00705d10(param_1);
        if (iVar4 != 0) goto LAB_00706ec1;
      }
      lVar2 = *(long *)(param_1 + 0x36);
      if (0x827 < lVar2 - 0x93f160U) {
        FUN_00703130();
      }
      iVar4 = (**(code **)(lVar2 + 0x20))(param_1);
      if (iVar4 == -1) {
LAB_00706ec1:
        return param_3 - uVar12;
      }
      puVar11 = *(undefined8 **)(param_1 + 2);
      puVar7 = *(undefined8 **)(param_1 + 4);
    } while (puVar7 <= puVar11);
  } while( true );
}

