
/* WARNING: Removing unreachable block (ram,0x0050bf5f) */
/* WARNING: Removing unreachable block (ram,0x0050bed4) */

int FUN_0050abc0(long param_1,long param_2,long param_3,ulong param_4,long param_5,long param_6,
                undefined8 param_7)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  undefined8 *puVar23;
  ulong *puVar24;
  ulong uVar25;
  undefined1 *puVar26;
  long in_FS_OFFSET;
  long *local_1e0;
  ulong local_1d0;
  ulong *local_1c0;
  byte *local_1b0;
  long local_1a0;
  long local_190;
  int local_188;
  ulong local_178;
  long local_160;
  long local_158;
  byte *local_150;
  long *local_148;
  ulong local_140 [4];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50;
  long local_48;
  
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  if (0xffffffe < param_4) {
    FUN_0051f420();
    iVar9 = 0;
    FUN_0051f540("../crypto/ec/ecp_nistz256.c",0x3d1,"ecp_nistz256_points_mul");
    FUN_0051f8f0(0x10,0xc0100,0);
    goto LAB_0050ad4e;
  }
  FUN_004b2c00(param_7);
  local_178 = param_4;
  local_160 = param_5;
  local_158 = param_6;
  if (param_3 == 0) {
    if (param_4 == 0) {
LAB_0050b67d:
      local_1a0 = 0;
      local_190 = 0;
LAB_0050b6a4:
      local_1c0 = &local_e0;
      iVar9 = FUN_004b7470(*(undefined8 *)(param_2 + 0x10),local_1c0,4);
      if (((iVar9 != 0) &&
          (iVar9 = FUN_004b7470(*(undefined8 *)(param_2 + 0x18),&local_c0,4), iVar9 != 0)) &&
         (iVar9 = FUN_004b7470(*(undefined8 *)(param_2 + 0x20),&local_a0,4), iVar9 != 0)) {
        iVar9 = 1;
        uVar11 = FUN_0050a550(*(undefined8 *)(param_2 + 0x20));
        *(uint *)(param_2 + 0x28) = uVar11 & 1;
      }
    }
    else {
      puVar24 = &local_e0;
      bVar8 = true;
      local_1a0 = 0;
      local_190 = 0;
LAB_0050adc2:
      local_1c0 = &local_e0;
      if (local_178 * 0x10 + 6 < 0x1555556) {
        local_1d0 = FUN_0041ad90(local_178 * 0x600 + 0x220,"../crypto/ec/ecp_nistz256.c",0x27c);
        if (local_1d0 == 0) goto LAB_0050b800;
        local_1b0 = (byte *)FUN_0041ad90(local_178 * 0x21,"../crypto/ec/ecp_nistz256.c",0x27e);
        if ((local_1b0 != (byte *)0x0) &&
           (local_1e0 = (long *)FUN_0041ad90(local_178 * 8,"../crypto/ec/ecp_nistz256.c",0x27f),
           local_1e0 != (long *)0x0)) {
          lVar14 = (local_1d0 & 0xffffffffffffffc0) + 0x40;
          puVar6 = (ulong *)(lVar14 + local_178 * 0x600);
          uVar25 = 0;
          lVar12 = lVar14;
          local_150 = local_1b0;
          local_148 = local_1e0;
          do {
            iVar9 = FUN_004b7bb0(*(undefined8 *)(local_158 + uVar25 * 8));
            if ((iVar9 < 0x101) &&
               (iVar9 = FUN_004b7d60(*(undefined8 *)(local_158 + uVar25 * 8)), iVar9 == 0)) {
              lVar13 = *(long *)(local_158 + uVar25 * 8);
            }
            else {
              lVar13 = FUN_004b2df0(param_7);
              if (lVar13 == 0) goto LAB_0050b84c;
              iVar9 = FUN_004b8a20(lVar13,*(undefined8 *)(local_158 + uVar25 * 8),
                                   *(undefined8 *)(param_1 + 0x10),param_7);
              if (iVar9 == 0) {
                FUN_0051f420();
                FUN_0051f540("../crypto/ec/ecp_nistz256.c",0x291,"ecp_nistz256_windowed_mul");
                FUN_0051f8f0(0x10,0x80003,0);
                goto LAB_0050b84c;
              }
            }
            iVar19 = 0;
            *local_148 = lVar13;
            iVar10 = FUN_004b7380();
            pbVar20 = local_150;
            iVar9 = iVar19;
            if (iVar10 * -8 < 0) {
              do {
                lVar13 = FUN_004b7440(*local_148);
                iVar19 = iVar9 + 8;
                uVar18 = *(undefined8 *)(lVar13 + (long)(iVar9 >> 3) * 8);
                *pbVar20 = (byte)uVar18;
                pbVar20[1] = (byte)((ulong)uVar18 >> 8);
                pbVar20[2] = (byte)((ulong)uVar18 >> 0x10);
                pbVar20[3] = (byte)((ulong)uVar18 >> 0x18);
                pbVar20[4] = (byte)((ulong)uVar18 >> 0x20);
                pbVar20[5] = (byte)((ulong)uVar18 >> 0x28);
                pbVar20[7] = (byte)((ulong)uVar18 >> 0x38);
                pbVar20[6] = (byte)((ulong)uVar18 >> 0x30);
                iVar10 = FUN_004b7380();
                pbVar20 = pbVar20 + 8;
                iVar9 = iVar19;
              } while (SBORROW4(iVar19,iVar10 * 8) != iVar19 + iVar10 * -8 < 0);
            }
            if (iVar19 < 0x21) {
              uVar11 = 0x21 - iVar19;
              pbVar20 = local_150 + iVar19;
              if (uVar11 < 8) {
                if ((uVar11 != 0) && (*pbVar20 = 0, (uVar11 & 2) != 0)) {
                  (pbVar20 + ((ulong)uVar11 - 2))[0] = 0;
                  (pbVar20 + ((ulong)uVar11 - 2))[1] = 0;
                }
              }
              else {
                pbVar20[0] = 0;
                pbVar20[1] = 0;
                pbVar20[2] = 0;
                pbVar20[3] = 0;
                pbVar20[4] = 0;
                pbVar20[5] = 0;
                pbVar20[6] = 0;
                pbVar20[7] = 0;
                pbVar21 = pbVar20 + ((ulong)uVar11 - 8);
                pbVar21[0] = 0;
                pbVar21[1] = 0;
                pbVar21[2] = 0;
                pbVar21[3] = 0;
                pbVar21[4] = 0;
                pbVar21[5] = 0;
                pbVar21[6] = 0;
                pbVar21[7] = 0;
                uVar11 = uVar11 + ((int)pbVar20 - (int)((ulong)(pbVar20 + 8) & 0xfffffffffffffff8))
                         & 0xfffffff8;
                if (7 < uVar11) {
                  uVar16 = 0;
                  do {
                    uVar17 = (ulong)uVar16;
                    uVar16 = uVar16 + 8;
                    *(undefined8 *)(((ulong)(pbVar20 + 8) & 0xfffffffffffffff8) + uVar17) = 0;
                  } while (uVar16 < uVar11);
                }
              }
            }
            iVar9 = FUN_004b73e0(puVar6,*(undefined8 *)(*(long *)(local_160 + uVar25 * 8) + 0x10),4)
            ;
            if (iVar9 == 0) {
LAB_0050be43:
              FUN_0051f420();
              FUN_0051f540("../crypto/ec/ecp_nistz256.c",0x2ad,"ecp_nistz256_windowed_mul");
              FUN_0051f8f0(0x10,0x92,0);
              goto LAB_0050b84c;
            }
            puVar1 = puVar6 + 4;
            iVar9 = FUN_004b73e0(puVar1,*(undefined8 *)(*(long *)(local_160 + uVar25 * 8) + 0x18),4)
            ;
            if ((iVar9 == 0) ||
               (iVar9 = FUN_004b73e0(puVar6 + 8,
                                     *(undefined8 *)(*(long *)(local_160 + uVar25 * 8) + 0x20),4),
               iVar9 == 0)) goto LAB_0050be43;
            puVar2 = puVar6 + 0xc;
            FUN_005f7c20(lVar12,puVar6,1);
            uVar25 = uVar25 + 1;
            FUN_005f81a0(puVar2,puVar6);
            FUN_005f7c20(lVar12,puVar2,2);
            puVar3 = puVar6 + 0x18;
            FUN_005f84c0(puVar3,puVar2,puVar6);
            FUN_005f7c20(lVar12,puVar3,3);
            FUN_005f81a0(puVar2,puVar2);
            FUN_005f7c20(lVar12,puVar2,4);
            FUN_005f81a0(puVar3,puVar3);
            FUN_005f7c20(lVar12,puVar3,6);
            puVar4 = puVar6 + 0x24;
            FUN_005f84c0(puVar4,puVar2,puVar6);
            FUN_005f7c20(lVar12,puVar4,5);
            puVar5 = puVar6 + 0x30;
            FUN_005f84c0(puVar5,puVar3,puVar6);
            FUN_005f7c20(lVar12,puVar5,7);
            FUN_005f81a0(puVar2,puVar2);
            FUN_005f7c20(lVar12,puVar2,8);
            FUN_005f81a0(puVar3,puVar3);
            FUN_005f7c20(lVar12,puVar3,0xc);
            FUN_005f81a0(puVar4,puVar4);
            FUN_005f7c20(lVar12,puVar4,10);
            FUN_005f81a0(puVar5,puVar5);
            FUN_005f7c20(lVar12,puVar5,0xe);
            FUN_005f84c0(puVar3,puVar3,puVar6);
            FUN_005f7c20(lVar12,puVar3,0xd);
            FUN_005f84c0(puVar4,puVar4,puVar6);
            FUN_005f7c20(lVar12,puVar4,0xb);
            FUN_005f84c0(puVar5,puVar5,puVar6);
            FUN_005f7c20(lVar12,puVar5,0xf);
            FUN_005f84c0(puVar3,puVar2,puVar6);
            FUN_005f7c20(lVar12,puVar3,9);
            FUN_005f81a0(puVar2,puVar2);
            FUN_005f7c20(lVar12,puVar2,0x10);
            lVar12 = lVar12 + 0x600;
            local_150 = local_150 + 0x21;
            local_148 = local_148 + 1;
          } while (uVar25 < local_178);
          puVar2 = puVar6 + 0x10;
          FUN_005f7c80(puVar6,lVar14,(local_1b0[0x1f] >> 6 & 1) - ((char)local_1b0[0x1f] >> 7));
          uVar25 = puVar6[1];
          local_188 = 0xff;
          *puVar24 = *puVar6;
          puVar24[1] = uVar25;
          uVar25 = puVar6[3];
          puVar24[2] = puVar6[2];
          puVar24[3] = uVar25;
          uVar25 = puVar6[5];
          puVar24[4] = puVar6[4];
          puVar24[5] = uVar25;
          uVar25 = puVar6[7];
          puVar24[6] = puVar6[6];
          puVar24[7] = uVar25;
          uVar25 = puVar6[9];
          puVar24[8] = puVar6[8];
          puVar24[9] = uVar25;
          uVar25 = puVar6[0xb];
          puVar24[10] = puVar6[10];
          puVar24[0xb] = uVar25;
          do {
            uVar25 = (ulong)(local_188 == 0xff);
            if (uVar25 < local_178) {
              lVar12 = lVar14 + uVar25 * 0x600;
              uVar11 = local_188 - 1U >> 3;
              local_158._0_1_ = (byte)(local_188 - 1U) & 7;
              uVar17 = (ulong)uVar11;
              pbVar20 = local_1b0 + uVar25 * 0x21 + uVar17;
              do {
                pbVar21 = pbVar20 + 0x21;
                uVar16 = (ushort)(CONCAT11(pbVar20[(uVar11 + 1) - uVar17],*pbVar20) >>
                                 (byte)local_158) & 0x3f;
                uVar22 = -(uVar16 >> 5);
                uVar16 = (uVar16 >> 5) - 1 & uVar16 | 0x3f - uVar16 & uVar22;
                FUN_005f7c80(puVar6,lVar12,(uVar16 >> 1) + (uVar16 & 1) & 0x7fffffff);
                FUN_005f6420(puVar2,puVar1);
                FUN_0050a160(puVar1,puVar2,uVar22 & 1);
                FUN_005f84c0(puVar24,puVar24,puVar6);
                lVar12 = lVar12 + 0x600;
                pbVar20 = pbVar21;
              } while (local_1b0 + uVar17 + local_178 * 0x21 != pbVar21);
            }
            local_188 = local_188 + -5;
            FUN_005f81a0(puVar24,puVar24);
            FUN_005f81a0(puVar24,puVar24);
            FUN_005f81a0(puVar24,puVar24);
            FUN_005f81a0(puVar24,puVar24);
            FUN_005f81a0(puVar24,puVar24);
          } while (local_188 != 0);
          uVar25 = 0;
          pbVar20 = local_1b0;
          do {
            bVar7 = *pbVar20;
            pbVar20 = pbVar20 + 0x21;
            uVar16 = (uint)bVar7 * 2 & 0x3f;
            uVar11 = -(uVar16 >> 5);
            uVar22 = 0x3f - uVar16 & uVar11;
            FUN_005f7c80(puVar6,lVar14,
                         (((uVar16 >> 5) - 1 & uVar16 | uVar22) >> 1) + (uVar22 & 1) & 0x7fffffff);
            FUN_005f6420(puVar2,puVar1);
            FUN_0050a160(puVar1,puVar2,uVar11 & 1);
            FUN_005f84c0(puVar24,puVar24,puVar6);
            uVar25 = uVar25 + 1;
            lVar14 = lVar14 + 0x600;
          } while (uVar25 < local_178);
          FUN_0041ad60(local_1d0,"../crypto/ec/ecp_nistz256.c",0x30f);
          FUN_0041ad60(local_1b0,"../crypto/ec/ecp_nistz256.c",0x310);
          FUN_0041ad60(local_1e0,"../crypto/ec/ecp_nistz256.c",0x311);
          if (!bVar8) {
            FUN_005f84c0(local_1c0,local_1c0,puVar24);
          }
          goto LAB_0050b6a4;
        }
      }
      else {
LAB_0050b800:
        local_1d0 = 0;
        local_1b0 = (byte *)0x0;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ecp_nistz256.c",0x280,"ecp_nistz256_windowed_mul");
      FUN_0051f8f0(0x10,0xc0100,0);
      local_1e0 = (long *)0x0;
LAB_0050b84c:
      iVar9 = 0;
      FUN_0041ad60(local_1d0,"../crypto/ec/ecp_nistz256.c",0x30f);
      FUN_0041ad60(local_1b0,"../crypto/ec/ecp_nistz256.c",0x310);
      FUN_0041ad60(local_1e0,"../crypto/ec/ecp_nistz256.c",0x311);
    }
  }
  else {
    lVar12 = FUN_004ef780(param_1);
    if (lVar12 == 0) {
      FUN_0051f420();
      iVar9 = 0;
      FUN_0051f540("../crypto/ec/ecp_nistz256.c",0x3da,"ecp_nistz256_points_mul");
      FUN_0051f8f0(0x10,0x71,0);
      local_1a0 = 0;
      local_190 = 0;
    }
    else {
      lVar14 = *(long *)(param_1 + 0xa0);
      if (lVar14 == 0) goto LAB_0050b89a;
      lVar13 = FUN_004efb90();
      if (lVar13 != 0) {
        FUN_005f7da0(&local_e0,*(undefined8 *)(lVar14 + 0x10),1);
        iVar9 = FUN_004b7470(*(undefined8 *)(lVar13 + 0x10),&local_e0,4);
        if (((iVar9 != 0) &&
            (iVar9 = FUN_004b7470(*(undefined8 *)(lVar13 + 0x18),&local_c0,4), iVar9 != 0)) &&
           (iVar9 = FUN_004b7470(*(undefined8 *)(lVar13 + 0x20),&DAT_00801980,4), iVar9 != 0)) {
          *(undefined4 *)(lVar13 + 0x28) = 1;
          iVar9 = FUN_004f10c0(param_1,lVar12,lVar13);
          if (iVar9 != 0) {
            FUN_004efcc0(lVar13);
LAB_0050b89a:
            iVar9 = FUN_0050aa70(lVar12);
            if (iVar9 != 0) {
              puVar15 = &DAT_005d1000;
              goto LAB_0050b8b4;
            }
            local_178 = param_4 + 1;
            lVar14 = local_178 * 8;
            local_190 = FUN_0041ad90(lVar14,"../crypto/ec/ecp_nistz256.c",0x464);
            iVar9 = 0;
            if (local_190 != 0) {
              local_1a0 = FUN_0041ad90(lVar14,"../crypto/ec/ecp_nistz256.c",0x46a);
              if (local_1a0 != 0) {
                thunk_FUN_00713a50(local_190,param_6,lVar14 + -8);
                *(long *)(local_190 + -8 + lVar14) = param_3;
                thunk_FUN_00713a50(local_1a0,param_5,lVar14 + -8);
                puVar24 = &local_e0;
                *(long *)(local_1a0 + -8 + lVar14) = lVar12;
                bVar8 = true;
                local_160 = local_1a0;
                local_158 = local_190;
                goto LAB_0050adc2;
              }
              FUN_0051f420();
              FUN_0051f540("../crypto/ec/ecp_nistz256.c",0x46c,"ecp_nistz256_points_mul");
              FUN_0051f8f0(0x10,0xc0100,0);
              goto LAB_0050ad0f;
            }
            FUN_0051f420();
            FUN_0051f540("../crypto/ec/ecp_nistz256.c",0x466,"ecp_nistz256_points_mul");
            uVar18 = 0xc0100;
LAB_0050be1a:
            iVar9 = 0;
            FUN_0051f8f0(0x10,uVar18,0);
            local_1a0 = 0;
            local_190 = 0;
            goto LAB_0050ad0f;
          }
          puVar15 = *(undefined **)(lVar14 + 0x10);
          FUN_004efcc0(lVar13);
          if (puVar15 == (undefined *)0x0) goto LAB_0050b89a;
LAB_0050b8b4:
          iVar9 = FUN_004b7bb0(param_3);
          if ((0x100 < iVar9) || (iVar9 = FUN_004b7d60(param_3), iVar9 != 0)) {
            lVar12 = FUN_004b2df0(param_7);
            if (lVar12 == 0) goto LAB_0050ace5;
            iVar9 = FUN_004b8a20(lVar12,param_3,*(undefined8 *)(param_1 + 0x10));
            param_3 = lVar12;
            if (iVar9 == 0) {
              FUN_0051f420();
              FUN_0051f540("../crypto/ec/ecp_nistz256.c",0x40a,"ecp_nistz256_points_mul");
              uVar18 = 0x80003;
              goto LAB_0050be1a;
            }
          }
          puVar26 = local_70;
          for (iVar9 = 0; iVar10 = FUN_004b7380(), iVar9 < iVar10 * 8; iVar9 = iVar9 + 8) {
            lVar12 = FUN_004b7440(param_3);
            uVar18 = *(undefined8 *)(lVar12 + (long)(iVar9 >> 3) * 8);
            *puVar26 = (char)uVar18;
            puVar26[1] = (char)((ulong)uVar18 >> 8);
            puVar26[2] = (char)((ulong)uVar18 >> 0x10);
            puVar26[3] = (char)((ulong)uVar18 >> 0x18);
            puVar26[4] = (char)((ulong)uVar18 >> 0x20);
            puVar26[5] = (char)((ulong)uVar18 >> 0x28);
            puVar26[7] = (char)((ulong)uVar18 >> 0x38);
            puVar26[6] = (char)((ulong)uVar18 >> 0x30);
            puVar26 = puVar26 + 8;
          }
          uVar11 = 0x21 - iVar9;
          lVar12 = (long)iVar9;
          puVar23 = (undefined8 *)(local_70 + lVar12);
          if (uVar11 < 8) {
            if ((uVar11 != 0) && (*(undefined1 *)puVar23 = 0, (uVar11 & 2) != 0)) {
              *(undefined2 *)(local_70 + (ulong)uVar11 + lVar12 + -2) = 0;
            }
          }
          else {
            *puVar23 = 0;
            *(undefined8 *)((long)&uStack_78 + (ulong)uVar11 + lVar12) = 0;
            uVar11 = uVar11 + ((int)puVar23 - (int)(local_70 + lVar12 + 8)) & 0xfffffff8;
            if (7 < uVar11) {
              uVar16 = 0;
              do {
                uVar25 = (ulong)uVar16;
                uVar16 = uVar16 + 8;
                *(undefined8 *)(local_70 + lVar12 + 8 + uVar25) = 0;
              } while (uVar16 < uVar11);
            }
          }
          bVar7 = local_70[0];
          puVar24 = local_140;
          uVar11 = (uint)local_70[0] + (uint)local_70[0] & 0xff;
          uVar16 = -(uVar11 >> 7);
          uVar11 = (uVar11 >> 7) - 1 & uVar11 | 0xff - uVar11 & uVar16;
          FUN_005f7da0(&local_e0,puVar15,(uVar11 & 1) + (uVar11 >> 1) & 0x7fffffff);
          FUN_005f6420(&local_a0,&local_c0);
          FUN_0050a160(&local_c0,&local_a0,uVar16 & 1);
          local_a8 = local_e0 | local_d8 | local_d0 | local_c8 | local_c0 | local_b8 | local_b0 |
                     local_a8;
          local_a8 = local_a8 | -local_a8;
          local_a0 = local_a8 >> 0x3f;
          local_90 = (long)local_a8 >> 0x3f;
          local_98 = local_90 & 0xffffffff00000000;
          local_88 = (ulong)((uint)((long)local_a8 >> 0x3f) & 0xfffffffe);
          uVar25 = 6;
          while( true ) {
            puVar15 = puVar15 + 0x1000;
            uVar22 = (int)uVar25 + 7;
            uVar11 = (ushort)(CONCAT11(local_70[(int)(uVar25 >> 3) + 1],bVar7) >> ((byte)uVar25 & 7)
                             ) & 0xff;
            uVar16 = -(uVar11 >> 7);
            uVar11 = (uVar11 >> 7) - 1 & uVar11 | 0xff - uVar11 & uVar16;
            FUN_005f7da0(puVar24,puVar15,(uVar11 >> 1) + (uVar11 & 1) & 0x7fffffff);
            FUN_005f6420(local_100,local_120);
            FUN_0050a160(local_120,local_100,uVar16 & 1);
            FUN_005f8c00(&local_e0,&local_e0,puVar24);
            if (uVar22 == 0x102) break;
            bVar7 = local_70[uVar22 >> 3];
            uVar25 = (ulong)uVar22;
          }
          if (param_4 == 0) goto LAB_0050b67d;
          bVar8 = false;
          local_1a0 = 0;
          local_190 = 0;
          goto LAB_0050adc2;
        }
        FUN_004efcc0(lVar13);
      }
LAB_0050ace5:
      iVar9 = 0;
      local_1a0 = 0;
      local_190 = 0;
    }
  }
LAB_0050ad0f:
  FUN_004b2d50(param_7);
  FUN_0041ad60(local_1a0,"../crypto/ec/ecp_nistz256.c",0x492);
  FUN_0041ad60(local_190,"../crypto/ec/ecp_nistz256.c",0x493);
LAB_0050ad4e:
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

