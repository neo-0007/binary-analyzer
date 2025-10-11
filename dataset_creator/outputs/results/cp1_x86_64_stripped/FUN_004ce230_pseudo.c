
void FUN_004ce230(long param_1,undefined1 *param_2,uint param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,uint *param_8,int param_9)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  long in_FS_OFFSET;
  uint *local_a8;
  undefined8 *local_88;
  uint local_70;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_3 < 0x41) {
    uVar8 = param_3 + 7;
    uVar13 = *param_8;
    uVar2 = (ulong)(uVar8 >> 3);
    uVar5 = param_8[1];
    bVar3 = (byte)((int)param_3 >> 0x1f);
    if (param_9 == 0) {
      if (uVar2 <= param_4) {
        if (-1 < (int)param_3) {
          uVar8 = param_3;
        }
        puVar10 = (undefined8 *)((long)&local_58 + (long)((int)uVar8 >> 3));
        uVar8 = uVar5;
        do {
          local_70 = param_3 & 7;
          local_88 = &local_58;
          local_a8 = &local_60;
          param_4 = param_4 - uVar2;
          local_60 = uVar13;
          local_5c = uVar8;
          FUN_004d10e0(local_a8,param_5,param_6,param_7);
          param_1 = param_1 + uVar2;
          switch(uVar2) {
          default:
            uVar9 = 0;
            uVar14 = 0;
            goto LAB_004ce519;
          case 1:
            uVar9 = 0;
            uVar14 = 0;
            goto LAB_004ce50d;
          case 2:
            uVar9 = 0;
            uVar14 = 0;
            goto LAB_004ce500;
          case 3:
            uVar9 = 0;
            uVar14 = 0;
            goto LAB_004ce4f3;
          case 4:
            uVar9 = 0;
            goto LAB_004ce4e8;
          case 5:
            uVar9 = 0;
            goto LAB_004ce4dc;
          case 6:
            uVar9 = 0;
            goto LAB_004ce4cf;
          case 7:
            uVar9 = 0;
            break;
          case 8:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar9 = (uint)*pbVar1 << 0x18;
          }
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar9 = (uint)*pbVar1 << 0x10 | uVar9;
LAB_004ce4cf:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar9 = (uint)*pbVar1 << 8 | uVar9;
LAB_004ce4dc:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar9 = *pbVar1 | uVar9;
LAB_004ce4e8:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar14 = (uint)*pbVar1 << 0x18;
LAB_004ce4f3:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar14 = (uint)*pbVar1 << 0x10 | uVar14;
LAB_004ce500:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar14 = (uint)*pbVar1 << 8 | uVar14;
LAB_004ce50d:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar14 = *pbVar1 | uVar14;
LAB_004ce519:
          param_1 = param_1 + uVar2;
          uVar5 = uVar14;
          uVar4 = uVar8;
          if ((param_3 != 0x20) && (uVar5 = uVar9, uVar4 = uVar14, param_3 != 0x40)) {
            local_58 = CONCAT44(uVar8,uVar13);
            local_50 = uVar14;
            local_4c = uVar9;
            if (local_70 == 0) {
              local_58 = *puVar10;
            }
            else {
              puVar6 = (uint *)thunk_FUN_00713610(local_88,puVar10,9);
              do {
                puVar7 = (uint *)((long)puVar6 + 1);
                *(byte *)puVar6 =
                     (byte)*puVar6 << (sbyte)local_70 |
                     (byte)((int)(uint)*(byte *)((long)puVar6 + 1) >>
                           (((bVar3 >> 5) - ((char)param_3 + (bVar3 >> 5) & 7)) + 8 & 0x1f));
                puVar6 = puVar7;
              } while (puVar7 != &local_50);
            }
            uVar5 = local_58._4_4_;
            uVar4 = (uint)local_58;
          }
          uVar13 = uVar4;
          uVar14 = uVar14 ^ local_60;
          uVar9 = uVar9 ^ local_5c;
          param_2 = param_2 + uVar2;
          puVar12 = param_2;
          switch(uVar2) {
          default:
            goto switchD_004ce5df_caseD_0;
          case 1:
            goto LAB_004ce3c0;
          case 2:
            goto switchD_004ce5df_caseD_2;
          case 3:
            goto LAB_004ce3a9;
          case 4:
            goto switchD_004ce5df_caseD_4;
          case 5:
            break;
          case 8:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar9 >> 0x18);
          case 7:
            puVar12 = param_2 + -1;
            *puVar12 = (char)(uVar9 >> 0x10);
          case 6:
            param_2 = puVar12 + -1;
            puVar12[-1] = (char)(uVar9 >> 8);
          }
          param_2[-1] = (char)uVar9;
          puVar12 = param_2 + -1;
switchD_004ce5df_caseD_4:
          param_2 = puVar12 + -1;
          puVar12[-1] = (char)(uVar14 >> 0x18);
LAB_004ce3a9:
          puVar12 = param_2 + -1;
          param_2[-1] = (char)(uVar14 >> 0x10);
switchD_004ce5df_caseD_2:
          param_2 = puVar12 + -1;
          puVar12[-1] = (char)(uVar14 >> 8);
LAB_004ce3c0:
          param_2[-1] = (char)uVar14;
          param_2 = param_2 + -1;
switchD_004ce5df_caseD_0:
          param_2 = param_2 + uVar2;
          uVar8 = uVar5;
        } while (uVar2 <= param_4);
      }
    }
    else if (uVar2 <= param_4) {
      if (-1 < (int)param_3) {
        uVar8 = param_3;
      }
      puVar10 = (undefined8 *)((long)((int)uVar8 >> 3) + (long)&local_58);
      do {
        param_4 = param_4 - uVar2;
        local_60 = uVar13;
        local_5c = uVar5;
        FUN_004d10e0(&local_60,param_5,param_6);
        param_1 = param_1 + uVar2;
        switch(uVar2) {
        default:
          uVar8 = 0;
          uVar9 = 0;
          lVar11 = param_1;
          goto LAB_004ce6a5;
        case 1:
          uVar8 = 0;
          uVar9 = 0;
          goto LAB_004ce69b;
        case 2:
          uVar8 = 0;
          uVar9 = 0;
          goto LAB_004ce68e;
        case 3:
          uVar8 = 0;
          uVar9 = 0;
          goto LAB_004ce681;
        case 4:
          uVar8 = 0;
          goto LAB_004ce676;
        case 5:
          uVar8 = 0;
          goto LAB_004ce66c;
        case 6:
          uVar8 = 0;
          goto LAB_004ce65f;
        case 7:
          uVar8 = 0;
          break;
        case 8:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar8 = (uint)*pbVar1 << 0x18;
        }
        pbVar1 = (byte *)(param_1 + -1);
        param_1 = param_1 + -1;
        uVar8 = (uint)*pbVar1 << 0x10 | uVar8;
LAB_004ce65f:
        pbVar1 = (byte *)(param_1 + -1);
        param_1 = param_1 + -1;
        uVar8 = (uint)*pbVar1 << 8 | uVar8;
LAB_004ce66c:
        uVar8 = *(byte *)(param_1 + -1) | uVar8;
        param_1 = param_1 + -1;
LAB_004ce676:
        pbVar1 = (byte *)(param_1 + -1);
        param_1 = param_1 + -1;
        uVar9 = (uint)*pbVar1 << 0x18;
LAB_004ce681:
        pbVar1 = (byte *)(param_1 + -1);
        param_1 = param_1 + -1;
        uVar9 = (uint)*pbVar1 << 0x10 | uVar9;
LAB_004ce68e:
        pbVar1 = (byte *)(param_1 + -1);
        param_1 = param_1 + -1;
        uVar9 = (uint)*pbVar1 << 8 | uVar9;
LAB_004ce69b:
        lVar11 = param_1 + -1;
        uVar9 = *(byte *)(param_1 + -1) | uVar9;
LAB_004ce6a5:
        param_1 = lVar11 + uVar2;
        uVar9 = uVar9 ^ local_60;
        uVar8 = uVar8 ^ local_5c;
        param_2 = param_2 + uVar2;
        switch(uVar2) {
        default:
          goto switchD_004ce6c2_caseD_0;
        case 1:
          goto LAB_004ce711;
        case 2:
          goto switchD_004ce6c2_caseD_2;
        case 3:
          puVar12 = param_2;
          goto LAB_004ce6fd;
        case 4:
          goto switchD_004ce6c2_caseD_4;
        case 5:
          break;
        case 8:
          param_2 = param_2 + -1;
          *param_2 = (char)(uVar8 >> 0x18);
        case 7:
          param_2 = param_2 + -1;
          *param_2 = (char)(uVar8 >> 0x10);
        case 6:
          param_2[-1] = (char)(uVar8 >> 8);
          param_2 = param_2 + -1;
        }
        param_2[-1] = (char)uVar8;
        param_2 = param_2 + -1;
switchD_004ce6c2_caseD_4:
        param_2[-1] = (char)(uVar9 >> 0x18);
        puVar12 = param_2 + -1;
LAB_004ce6fd:
        param_2 = puVar12 + -1;
        puVar12[-1] = (char)(uVar9 >> 0x10);
switchD_004ce6c2_caseD_2:
        param_2[-1] = (char)(uVar9 >> 8);
        param_2 = param_2 + -1;
LAB_004ce711:
        param_2[-1] = (char)uVar9;
        param_2 = param_2 + -1;
switchD_004ce6c2_caseD_0:
        param_2 = param_2 + uVar2;
        uVar14 = uVar9;
        uVar4 = uVar5;
        if ((param_3 != 0x20) && (uVar14 = uVar8, uVar4 = uVar9, param_3 != 0x40)) {
          local_58 = CONCAT44(uVar5,uVar13);
          local_50 = uVar9;
          local_4c = uVar8;
          if ((param_3 & 7) == 0) {
            local_58 = *puVar10;
          }
          else {
            puVar6 = (uint *)thunk_FUN_00713610(&local_58,puVar10,9);
            do {
              puVar7 = (uint *)((long)puVar6 + 1);
              *(byte *)puVar6 =
                   (byte)((int)(uint)*(byte *)((long)puVar6 + 1) >>
                         (((bVar3 >> 5) - ((char)param_3 + (bVar3 >> 5) & 7)) + 8 & 0x1f)) |
                   (byte)*puVar6 << (sbyte)(param_3 & 7);
              puVar6 = puVar7;
            } while (puVar7 != &local_50);
          }
          uVar14 = local_58._4_4_;
          uVar4 = (uint)local_58;
        }
        uVar13 = uVar4;
        uVar5 = uVar14;
      } while (uVar2 <= param_4);
    }
    *param_8 = uVar13;
    param_8[1] = uVar5;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

