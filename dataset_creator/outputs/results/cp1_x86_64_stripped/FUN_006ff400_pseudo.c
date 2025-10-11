
ulong FUN_006ff400(long param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  
  uVar12 = param_3;
  if (param_3 == 0) {
    return 0;
  }
  do {
    lVar4 = *(long *)(param_1 + 0xa0);
    puVar5 = *(undefined8 **)(lVar4 + 0x20);
    lVar7 = *(long *)(lVar4 + 0x28) - (long)puVar5;
    if (0 < lVar7) {
      uVar8 = lVar7 >> 2;
      if (uVar12 < uVar8) {
        uVar8 = uVar12;
      }
      if ((long)uVar8 < 0x15) {
        if (uVar8 != 0) {
          uVar1 = uVar8 - 1;
          if (((ulong)((long)puVar5 - (long)((long)param_2 + 4)) < 9) || (uVar1 < 3)) {
            lVar7 = 0;
            do {
              *(undefined4 *)((long)puVar5 + lVar7) = *(undefined4 *)((long)param_2 + lVar7);
              lVar7 = lVar7 + 4;
            } while (lVar7 != uVar8 * 4);
          }
          else {
            uVar9 = param_2[1];
            uVar10 = uVar8 >> 2;
            *puVar5 = *param_2;
            puVar5[1] = uVar9;
            if (uVar10 != 1) {
              uVar9 = param_2[3];
              puVar5[2] = param_2[2];
              puVar5[3] = uVar9;
              if (uVar10 != 2) {
                uVar9 = param_2[5];
                puVar5[4] = param_2[4];
                puVar5[5] = uVar9;
                if (uVar10 != 3) {
                  uVar9 = param_2[7];
                  puVar5[6] = param_2[6];
                  puVar5[7] = uVar9;
                  if (uVar10 == 5) {
                    uVar9 = param_2[9];
                    puVar5[8] = param_2[8];
                    puVar5[9] = uVar9;
                    goto LAB_006ff582;
                  }
                }
              }
            }
            uVar10 = uVar8 & 0xfffffffffffffffc;
            puVar2 = (undefined4 *)((long)param_2 + uVar10 * 4);
            puVar11 = (undefined4 *)(uVar10 * 4 + (long)puVar5);
            if (((uVar8 != uVar10) && (*puVar11 = *puVar2, uVar1 != uVar10)) &&
               (puVar11[1] = puVar2[1], uVar1 - uVar10 != 1)) {
              puVar11[2] = puVar2[2];
            }
          }
LAB_006ff582:
          uVar12 = uVar12 - uVar8;
          param_2 = (undefined8 *)((long)param_2 + uVar8 * 4);
          *(ulong *)(lVar4 + 0x20) = (long)puVar5 + uVar8 * 4;
        }
      }
      else {
        uVar12 = uVar12 - uVar8;
        uVar9 = FUN_00756680(puVar5,param_2,uVar8);
        param_2 = (undefined8 *)((long)param_2 + uVar8 * 4);
        *(undefined8 *)(lVar4 + 0x20) = uVar9;
      }
    }
    if (uVar12 == 0) {
      return param_3;
    }
    uVar3 = *(undefined4 *)param_2;
    param_2 = (undefined8 *)((long)param_2 + 4);
    if (*(int *)(param_1 + 0xc0) == 0) {
      FUN_00701c30(param_1,1);
    }
    lVar4 = *(long *)(param_1 + 0xd8);
    if (lVar4 - 0x93f160U < 0x828) {
      iVar6 = (**(code **)(lVar4 + 0x18))(param_1,uVar3);
    }
    else {
      FUN_00703130();
      iVar6 = (**(code **)(lVar4 + 0x18))(param_1,uVar3);
    }
    if (iVar6 == -1) {
      return param_3 - uVar12;
    }
    uVar12 = uVar12 - 1;
  } while( true );
}

