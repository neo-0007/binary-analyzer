
void FUN_005cc090(long param_1,undefined1 *param_2,uint param_3,ulong param_4,undefined8 param_5,
                 uint *param_6,int param_7)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  long local_90;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 - 1 < 0x40) {
    iVar5 = (int)param_3 >> 3;
    iVar15 = (int)(param_3 + 7) >> 3;
    uVar14 = *param_6;
    uVar9 = param_6[1];
    bVar2 = (byte)param_3 & 7;
    uVar16 = (ulong)iVar15;
    local_90 = param_1;
    if (param_7 == 0) {
      if (uVar16 <= param_4) {
        do {
          param_4 = param_4 - uVar16;
          local_60 = uVar14;
          local_5c = uVar9;
          FUN_004ce920(&local_60,param_5,1);
          local_90 = local_90 + uVar16;
          switch(iVar15) {
          default:
            uVar10 = 0;
            uVar6 = 0;
            lVar11 = local_90;
            goto LAB_005cc33b;
          case 2:
            uVar10 = 0;
            uVar6 = 0;
            goto LAB_005cc32e;
          case 3:
            uVar10 = 0;
            uVar6 = 0;
            goto LAB_005cc321;
          case 4:
            uVar10 = 0;
            goto LAB_005cc316;
          case 5:
            uVar10 = 0;
            goto LAB_005cc30c;
          case 6:
            uVar10 = 0;
            goto LAB_005cc2ff;
          case 7:
            uVar10 = 0;
            break;
          case 8:
            pbVar1 = (byte *)(local_90 + -1);
            local_90 = local_90 + -1;
            uVar10 = (uint)*pbVar1 << 0x18;
          }
          pbVar1 = (byte *)(local_90 + -1);
          local_90 = local_90 + -1;
          uVar10 = (uint)*pbVar1 << 0x10 | uVar10;
LAB_005cc2ff:
          pbVar1 = (byte *)(local_90 + -1);
          local_90 = local_90 + -1;
          uVar10 = (uint)*pbVar1 << 8 | uVar10;
LAB_005cc30c:
          pbVar1 = (byte *)(local_90 + -1);
          local_90 = local_90 + -1;
          uVar10 = *pbVar1 | uVar10;
LAB_005cc316:
          pbVar1 = (byte *)(local_90 + -1);
          local_90 = local_90 + -1;
          uVar6 = (uint)*pbVar1 << 0x18;
LAB_005cc321:
          uVar6 = (uint)*(byte *)(local_90 + -1) << 0x10 | uVar6;
          local_90 = local_90 + -1;
LAB_005cc32e:
          lVar11 = local_90 + -1;
          uVar6 = (uint)*(byte *)(local_90 + -1) << 8 | uVar6;
LAB_005cc33b:
          local_90 = lVar11 + (uVar16 - 1);
          uVar6 = *(byte *)(lVar11 + -1) | uVar6;
          uVar3 = uVar9;
          uVar4 = uVar6;
          if ((param_3 != 0x20) && (uVar3 = uVar6, uVar4 = uVar10, param_3 != 0x40)) {
            local_58 = CONCAT44(uVar9,uVar14);
            local_50 = uVar6;
            local_4c = uVar10;
            if ((param_3 & 7) == 0) {
              local_58 = *(undefined8 *)((long)&local_58 + (long)iVar5);
            }
            else {
              puVar7 = (uint *)&local_58;
              do {
                puVar8 = (uint *)((long)puVar7 + 1);
                *(byte *)puVar7 =
                     *(char *)((long)puVar7 + (long)iVar5) << (sbyte)(param_3 & 7) |
                     (byte)((int)(uint)*(byte *)((long)puVar7 + (long)iVar5 + 1) >>
                           (8 - bVar2 & 0x1f));
                puVar7 = puVar8;
              } while (puVar8 != &local_50);
            }
            uVar3 = (uint)local_58;
            uVar4 = local_58._4_4_;
          }
          uVar9 = uVar4;
          uVar14 = uVar3;
          uVar6 = uVar6 ^ local_60;
          uVar10 = uVar10 ^ local_5c;
          param_2 = param_2 + uVar16;
          puVar12 = param_2;
          switch(iVar15) {
          default:
            goto switchD_005cc3b9_caseD_0;
          case 2:
            goto LAB_005cc402;
          case 3:
            goto LAB_005cc3f5;
          case 4:
            goto switchD_005cc3b9_caseD_4;
          case 5:
            break;
          case 8:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar10 >> 0x18);
          case 7:
            puVar12 = param_2 + -1;
            *puVar12 = (char)(uVar10 >> 0x10);
          case 6:
            param_2 = puVar12 + -1;
            puVar12[-1] = (char)(uVar10 >> 8);
          }
          param_2[-1] = (char)uVar10;
          param_2 = param_2 + -1;
switchD_005cc3b9_caseD_4:
          param_2[-1] = (char)(uVar6 >> 0x18);
          puVar12 = param_2 + -1;
LAB_005cc3f5:
          param_2 = puVar12 + -1;
          puVar12[-1] = (char)(uVar6 >> 0x10);
LAB_005cc402:
          param_2[-1] = (char)(uVar6 >> 8);
          param_2 = param_2 + -1;
switchD_005cc3b9_caseD_0:
          param_2[-1] = (char)uVar6;
          param_2 = param_2 + (uVar16 - 1);
        } while (uVar16 <= param_4);
      }
    }
    else if (uVar16 <= param_4) {
      do {
        param_4 = param_4 - uVar16;
        local_60 = uVar14;
        local_5c = uVar9;
        FUN_004ce920(&local_60,param_5,1);
        lVar11 = local_90 + uVar16;
        switch(iVar15) {
        default:
          uVar10 = 0;
          uVar6 = 0;
          goto LAB_005cc4db;
        case 2:
          uVar10 = 0;
          uVar6 = 0;
          lVar13 = lVar11;
          goto LAB_005cc4ce;
        case 3:
          uVar10 = 0;
          uVar6 = 0;
          goto LAB_005cc4c1;
        case 4:
          uVar10 = 0;
          goto LAB_005cc4b6;
        case 5:
          uVar10 = 0;
          goto LAB_005cc4ac;
        case 6:
          uVar10 = 0;
          goto LAB_005cc49f;
        case 7:
          uVar10 = 0;
          break;
        case 8:
          pbVar1 = (byte *)(lVar11 + -1);
          lVar11 = lVar11 + -1;
          uVar10 = (uint)*pbVar1 << 0x18;
        }
        pbVar1 = (byte *)(lVar11 + -1);
        lVar11 = lVar11 + -1;
        uVar10 = (uint)*pbVar1 << 0x10 | uVar10;
LAB_005cc49f:
        pbVar1 = (byte *)(lVar11 + -1);
        lVar11 = lVar11 + -1;
        uVar10 = (uint)*pbVar1 << 8 | uVar10;
LAB_005cc4ac:
        uVar10 = *(byte *)(lVar11 + -1) | uVar10;
        lVar11 = lVar11 + -1;
LAB_005cc4b6:
        pbVar1 = (byte *)(lVar11 + -1);
        lVar11 = lVar11 + -1;
        uVar6 = (uint)*pbVar1 << 0x18;
LAB_005cc4c1:
        uVar6 = (uint)*(byte *)(lVar11 + -1) << 0x10 | uVar6;
        lVar13 = lVar11 + -1;
LAB_005cc4ce:
        lVar11 = lVar13 + -1;
        uVar6 = (uint)*(byte *)(lVar13 + -1) << 8 | uVar6;
LAB_005cc4db:
        local_90 = lVar11 + (uVar16 - 1);
        param_2 = param_2 + uVar16;
        uVar10 = uVar10 ^ local_5c;
        uVar6 = (*(byte *)(lVar11 + -1) | uVar6) ^ local_60;
        switch(iVar15) {
        default:
          goto switchD_005cc511_caseD_0;
        case 2:
          goto LAB_005cc1d4;
        case 3:
          puVar12 = param_2;
          goto LAB_005cc1c5;
        case 4:
          goto switchD_005cc511_caseD_4;
        case 5:
          break;
        case 8:
          param_2 = param_2 + -1;
          *param_2 = (char)(uVar10 >> 0x18);
        case 7:
          param_2 = param_2 + -1;
          *param_2 = (char)(uVar10 >> 0x10);
        case 6:
          param_2[-1] = (char)(uVar10 >> 8);
          param_2 = param_2 + -1;
        }
        param_2[-1] = (char)uVar10;
        param_2 = param_2 + -1;
switchD_005cc511_caseD_4:
        param_2[-1] = (char)(uVar6 >> 0x18);
        puVar12 = param_2 + -1;
LAB_005cc1c5:
        param_2 = puVar12 + -1;
        puVar12[-1] = (char)(uVar6 >> 0x10);
LAB_005cc1d4:
        param_2[-1] = (char)(uVar6 >> 8);
        param_2 = param_2 + -1;
switchD_005cc511_caseD_0:
        param_2[-1] = (char)uVar6;
        param_2 = param_2 + (uVar16 - 1);
        uVar3 = uVar9;
        uVar4 = uVar6;
        if ((param_3 != 0x20) && (uVar3 = uVar6, uVar4 = uVar10, param_3 != 0x40)) {
          local_58 = CONCAT44(uVar9,uVar14);
          local_50 = uVar6;
          local_4c = uVar10;
          if ((param_3 & 7) == 0) {
            local_58 = *(undefined8 *)((long)&local_58 + (long)iVar5);
          }
          else {
            puVar7 = (uint *)&local_58;
            do {
              puVar8 = (uint *)((long)puVar7 + 1);
              *(byte *)puVar7 =
                   *(byte *)((long)puVar7 + (long)iVar5) << (sbyte)(param_3 & 7) |
                   (byte)((int)(uint)*(byte *)((long)puVar7 + (long)iVar5 + 1) >> (8 - bVar2 & 0x1f)
                         );
              puVar7 = puVar8;
            } while (puVar8 != &local_50);
          }
          uVar3 = (uint)local_58;
          uVar4 = local_58._4_4_;
        }
        uVar9 = uVar4;
        uVar14 = uVar3;
      } while (uVar16 <= param_4);
    }
    *param_6 = uVar14;
    param_6[1] = uVar9;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

