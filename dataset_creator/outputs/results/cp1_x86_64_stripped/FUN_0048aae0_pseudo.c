
/* WARNING: Type propagation algorithm not settling */

void FUN_0048aae0(uint *param_1,uint *param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5,
                 int param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint uVar14;
  undefined4 extraout_EDX_02;
  uint extraout_EDX_03;
  uint uVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  byte bVar23;
  long alStack_1c8 [3];
  undefined1 auStack_1b0 [8];
  long alStack_1a8 [5];
  uint auStack_180 [2];
  undefined8 uStack_178;
  undefined8 auStack_170 [21];
  undefined8 uStack_c8;
  long alStack_c0 [2];
  undefined1 auStack_b0 [8];
  long alStack_a8 [5];
  uint auStack_80 [2];
  undefined8 uStack_78;
  
  if (param_3 != 0) {
    bVar23 = 0;
    puVar22 = (undefined8 *)&DAT_0048b080;
    if (param_6 == 0) {
      puVar22 = &DAT_0048bcc0;
    }
    if (((param_3 < 0x200) || ((param_3 & 0xf) != 0)) || ((DAT_0094b598 >> 0x1c & 1) != 0)) {
      lVar21 = -(-((long)param_4 + (-0x97 - (long)alStack_c0)) & 0x3c0U);
      *(undefined1 **)(auStack_b0 + lVar21) = &stack0xffffffffffffffc8;
      *(undefined8 **)((long)alStack_a8 + lVar21 + 0x20) = param_5;
      iVar12 = *(int *)(param_4 + 0x1e);
      *(undefined8 **)((long)alStack_c0 + lVar21) = param_4;
      *(ulong *)((long)alStack_c0 + lVar21 + 8U) = (long)param_4 + (ulong)(uint)(iVar12 << 4);
      if (param_6 == 0) {
        uVar4 = param_5[1];
        *(undefined8 *)((long)auStack_80 + lVar21) = *param_5;
        *(undefined8 *)((long)&uStack_78 + lVar21) = uVar4;
        while( true ) {
          uVar15 = param_1[1];
          uVar8 = param_1[2];
          *(uint **)((long)alStack_a8 + lVar21) = param_1;
          *(uint **)((long)alStack_a8 + lVar21 + 8) = param_2;
          *(ulong *)((long)alStack_a8 + lVar21 + 0x10) = param_3;
          *(undefined8 *)((long)&uStack_c8 + lVar21) = 0x48afa3;
          uVar10 = FUN_0048a240();
          puVar22 = *(undefined8 **)((long)alStack_a8 + lVar21);
          param_2 = *(uint **)((long)alStack_a8 + lVar21 + 8);
          uVar20 = *(ulong *)((long)alStack_a8 + lVar21 + 0x10);
          uVar10 = uVar10 ^ *(uint *)((long)auStack_80 + lVar21);
          uVar15 = uVar15 ^ *(uint *)((long)auStack_80 + lVar21 + 4);
          uVar8 = uVar8 ^ *(uint *)((long)&uStack_78 + lVar21);
          uVar14 = extraout_EDX_03 ^ *(uint *)((long)&uStack_78 + lVar21 + 4);
          uVar4 = *puVar22;
          uVar6 = puVar22[1];
          param_3 = uVar20 - 0x10;
          if (uVar20 < 0x10) break;
          if (param_3 == 0) {
            puVar22 = *(undefined8 **)((long)alStack_a8 + lVar21 + 0x20);
            *puVar22 = uVar4;
            puVar22[1] = uVar6;
            *param_2 = uVar10;
            param_2[1] = uVar15;
            param_2[2] = uVar8;
            param_2[3] = uVar14;
            return;
          }
          *(undefined8 *)((long)auStack_80 + lVar21) = uVar4;
          *(undefined8 *)((long)&uStack_78 + lVar21) = uVar6;
          *param_2 = uVar10;
          param_2[1] = uVar15;
          param_2[2] = uVar8;
          param_2[3] = uVar14;
          param_1 = (uint *)(puVar22 + 2);
          param_2 = param_2 + 4;
        }
        puVar22 = *(undefined8 **)((long)alStack_a8 + lVar21 + 0x20);
        *puVar22 = uVar4;
        puVar22[1] = uVar6;
        *(uint *)((long)auStack_80 + lVar21) = uVar10;
        *(uint *)((long)auStack_80 + lVar21 + 4) = uVar15;
        *(uint *)((long)&uStack_78 + lVar21) = uVar8;
        *(uint *)((long)&uStack_78 + lVar21 + 4) = uVar14;
        puVar16 = (undefined1 *)((long)auStack_80 + lVar21);
        for (; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined1 *)param_2 = *puVar16;
          puVar16 = puVar16 + (ulong)bVar23 * -2 + 1;
          param_2 = (uint *)((long)param_2 + (ulong)bVar23 * -2 + 1);
        }
      }
      else {
        uVar15 = *(uint *)((long)param_5 + 4);
        uVar19 = (ulong)*(uint *)(param_5 + 1);
        puVar18 = param_1;
        uVar20 = param_3;
        puVar7 = param_2;
        if ((param_3 & 0xfffffffffffffff0) == 0) goto code_r0x0048af2f;
        while( true ) {
          do {
            uVar15 = uVar15 ^ puVar18[1];
            uVar19 = (ulong)((uint)uVar19 ^ puVar18[2]);
            *(uint **)((long)alStack_a8 + lVar21) = puVar18;
            *(uint **)((long)alStack_a8 + lVar21 + 8) = param_2;
            *(ulong *)((long)alStack_a8 + lVar21 + 0x10) = param_3;
            *(undefined8 *)((long)&uStack_c8 + lVar21) = 0x48aecb;
            uVar11 = FUN_00489d30();
            lVar13 = *(long *)((long)alStack_a8 + lVar21);
            puVar5 = *(undefined4 **)((long)alStack_a8 + lVar21 + 8);
            lVar3 = *(long *)((long)alStack_a8 + lVar21 + 0x10);
            *puVar5 = uVar11;
            puVar5[1] = uVar15;
            puVar5[2] = (int)uVar19;
            puVar5[3] = extraout_EDX_02;
            param_1 = (uint *)(lVar13 + 0x10);
            param_2 = puVar5 + 4;
            param_3 = lVar3 - 0x10;
            puVar18 = param_1;
          } while ((param_3 & 0xfffffffffffffff0) != 0);
          uVar20 = param_3;
          puVar7 = param_2;
          if ((param_3 & 0xf) == 0) break;
code_r0x0048af2f:
          for (; puVar18 = puVar7, param_3 != 0; param_3 = param_3 - 1) {
            *(char *)param_2 = (char)*param_1;
            param_1 = (uint *)((long)param_1 + (ulong)bVar23 * -2 + 1);
            param_2 = (uint *)((long)param_2 + (ulong)bVar23 * -2 + 1);
            puVar7 = puVar18;
          }
          for (lVar13 = 0x10 - uVar20; lVar13 != 0; lVar13 = lVar13 + -1) {
            *(undefined1 *)param_2 = 0;
            param_2 = (uint *)((long)param_2 + (ulong)bVar23 * -2 + 1);
          }
          param_3 = 0x10;
          param_2 = puVar18;
        }
        puVar5 = *(undefined4 **)((long)alStack_a8 + lVar21 + 0x20);
        *puVar5 = uVar11;
        puVar5[1] = uVar15;
        puVar5[2] = (int)uVar19;
        puVar5[3] = extraout_EDX_02;
      }
    }
    else {
      uVar20 = (ulong)(alStack_1a8 + 4) & 0xfc0;
      if (uVar20 < ((ulong)(puVar22 + 0x120) & 0xfff)) {
        lVar21 = (uVar20 - ((ulong)puVar22 & 0xfff) & 0xfff) + 0x140;
      }
      else {
        lVar21 = uVar20 - ((ulong)(puVar22 + 0x120) & 0xfff);
      }
      lVar21 = -lVar21;
      *(undefined1 **)(auStack_1b0 + lVar21) = &stack0xffffffffffffffc8;
      *(uint **)((long)alStack_1a8 + lVar21) = param_1;
      *(uint **)((long)alStack_1a8 + lVar21 + 8) = param_2;
      *(ulong *)((long)alStack_1a8 + lVar21 + 0x10) = param_3;
      *(undefined8 **)((long)alStack_1a8 + lVar21 + 0x18) = param_4;
      *(undefined8 **)((long)alStack_1a8 + lVar21 + 0x20) = param_5;
      *(undefined4 *)((long)auStack_80 + lVar21) = 0;
      uVar11 = *(undefined4 *)(param_4 + 0x1e);
      uVar20 = (long)param_4 - (long)puVar22 & 0xfff;
      if ((uVar20 < 0x900) || (puVar22 = param_4, 0xf07 < uVar20)) {
        puVar22 = (undefined8 *)((long)auStack_170 + lVar21);
        puVar17 = (undefined8 *)((long)auStack_170 + lVar21);
        for (lVar13 = 0x1e; lVar13 != 0; lVar13 = lVar13 + -1) {
          *puVar17 = *param_4;
          param_4 = param_4 + 1;
          puVar17 = puVar17 + 1;
        }
        *(undefined4 *)puVar17 = uVar11;
      }
      *(undefined8 **)((long)alStack_1c8 + lVar21 + 8) = puVar22;
      iVar12 = 0x12;
      do {
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      if (param_6 == 0) {
        if (param_2 == param_1) {
          uVar4 = param_5[1];
          *(undefined8 *)((long)auStack_180 + lVar21) = *param_5;
          *(undefined8 *)((long)&uStack_178 + lVar21) = uVar4;
          while( true ) {
            uVar15 = param_1[1];
            uVar8 = param_1[2];
            *(uint **)((long)alStack_1a8 + lVar21) = param_1;
            *(undefined8 *)((long)alStack_1c8 + lVar21) = 0x48ad81;
            uVar10 = FUN_0048a060();
            puVar22 = *(undefined8 **)((long)alStack_1a8 + lVar21);
            uVar10 = uVar10 ^ *(uint *)((long)auStack_180 + lVar21);
            uVar15 = uVar15 ^ *(uint *)((long)auStack_180 + lVar21 + 4);
            uVar8 = uVar8 ^ *(uint *)((long)&uStack_178 + lVar21);
            uVar14 = extraout_EDX_01 ^ *(uint *)((long)auStack_170 + lVar21 + -4);
            uVar4 = puVar22[1];
            lVar13 = *(long *)((long)alStack_1a8 + lVar21 + 0x10) + -0x10;
            if (lVar13 == 0) break;
            *(undefined8 *)((long)auStack_180 + lVar21) = *puVar22;
            *(undefined8 *)((long)&uStack_178 + lVar21) = uVar4;
            *param_2 = uVar10;
            param_2[1] = uVar15;
            param_2[2] = uVar8;
            param_2[3] = uVar14;
            param_1 = (uint *)(puVar22 + 2);
            param_2 = param_2 + 4;
            *(long *)((long)alStack_1a8 + lVar21 + 0x10) = lVar13;
          }
          puVar17 = *(undefined8 **)((long)alStack_1a8 + lVar21 + 0x20);
          *puVar17 = *puVar22;
          puVar17[1] = uVar4;
          *param_2 = uVar10;
          param_2[1] = uVar15;
          param_2[2] = uVar8;
          param_2[3] = uVar14;
        }
        else {
          *(undefined8 **)((long)auStack_180 + lVar21) = param_5;
          do {
            uVar15 = param_1[1];
            uVar8 = param_1[2];
            *(uint **)((long)alStack_1a8 + lVar21) = param_1;
            *(undefined8 *)((long)alStack_1c8 + lVar21) = 0x48aced;
            uVar9 = FUN_0048a060();
            puVar18 = *(uint **)((long)auStack_180 + lVar21);
            puVar22 = *(undefined8 **)((long)alStack_1a8 + lVar21);
            uVar10 = *puVar18;
            uVar14 = puVar18[1];
            uVar1 = puVar18[2];
            uVar2 = puVar18[3];
            lVar13 = *(long *)((long)alStack_1a8 + lVar21 + 0x10) + -0x10;
            *(long *)((long)alStack_1a8 + lVar21 + 0x10) = lVar13;
            *(undefined8 **)((long)auStack_180 + lVar21) = puVar22;
            *param_2 = uVar9 ^ uVar10;
            param_2[1] = uVar15 ^ uVar14;
            param_2[2] = uVar8 ^ uVar1;
            param_2[3] = extraout_EDX_00 ^ uVar2;
            param_1 = (uint *)(puVar22 + 2);
            param_2 = param_2 + 4;
          } while (lVar13 != 0);
          puVar17 = *(undefined8 **)((long)alStack_1a8 + lVar21 + 0x20);
          uVar4 = puVar22[1];
          *puVar17 = *puVar22;
          puVar17[1] = uVar4;
        }
      }
      else {
        uVar15 = *(uint *)((long)param_5 + 4);
        uVar20 = (ulong)*(uint *)(param_5 + 1);
        do {
          uVar15 = uVar15 ^ param_1[1];
          uVar20 = (ulong)((uint)uVar20 ^ param_1[2]);
          *(uint **)((long)alStack_1a8 + lVar21) = param_1;
          *(undefined8 *)((long)alStack_1c8 + lVar21) = 0x48ac6d;
          uVar8 = FUN_00489b40();
          lVar13 = *(long *)((long)alStack_1a8 + lVar21);
          lVar3 = *(long *)((long)alStack_1a8 + lVar21 + 0x10);
          *param_2 = uVar8;
          param_2[1] = uVar15;
          param_2[2] = (uint)uVar20;
          param_2[3] = extraout_EDX;
          param_1 = (uint *)(lVar13 + 0x10);
          param_2 = param_2 + 4;
          uVar19 = lVar3 - 0x10;
          *(ulong *)((long)alStack_1a8 + lVar21 + 0x10) = uVar19;
        } while ((uVar19 & 0xfffffffffffffff0) != 0);
        puVar18 = *(uint **)((long)alStack_1a8 + lVar21 + 0x20);
        *puVar18 = uVar8;
        puVar18[1] = uVar15;
        puVar18[2] = (uint)uVar20;
        puVar18[3] = extraout_EDX;
      }
      if (*(int *)((long)auStack_80 + lVar21) != 0) {
        puVar22 = (undefined8 *)((long)auStack_170 + lVar21);
        for (lVar13 = 0x1e; lVar13 != 0; lVar13 = lVar13 + -1) {
          *puVar22 = 0;
          puVar22 = puVar22 + (ulong)bVar23 * -2 + 1;
        }
      }
    }
  }
  return;
}

