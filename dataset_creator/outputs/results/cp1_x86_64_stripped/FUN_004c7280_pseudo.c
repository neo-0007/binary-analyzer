
/* WARNING: Type propagation algorithm not settling */

void FUN_004c7280(uint *param_1,uint *param_2,ulong param_3,long param_4,uint *param_5,int param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte bVar14;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulong uStack_88;
  long alStack_80 [3];
  uint auStack_68 [2];
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [32];
  
  bVar14 = 0;
  if (param_3 != 0) {
    lVar3 = -(-((param_4 + -0x7f) - (long)alStack_80) & 0x3c0U);
    uVar9 = *(uint *)(param_4 + 0x110);
    *(uint **)((long)&lStack_58 + lVar3) = param_5;
    *(undefined1 **)(auStack_50 + lVar3) = &stack0xffffffffffffffd0;
    lVar5 = 0x20;
    do {
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if (param_6 == 0) {
      *(ulong *)((long)alStack_80 + lVar3) = param_4 + (ulong)uVar9 * 0x40;
      *(undefined1 **)((long)alStack_80 + lVar3 + 8U) =
           (undefined1 *)((long)param_1 + (param_3 + 0xf & 0xfffffffffffffff0));
      *(ulong *)((long)alStack_80 + lVar3 + 0x10U) = param_3 & 0xf;
      uVar4 = *(undefined8 *)param_5;
      uVar7 = *(undefined8 *)(param_5 + 2);
      while( true ) {
        uVar9 = *param_1;
        uVar10 = param_1[1];
        uVar11 = param_1[2];
        uVar12 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        uVar9 = param_1[3];
        uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18
        ;
        *(undefined8 *)((long)auStack_68 + lVar3) = uVar4;
        uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
        ;
        *(undefined8 *)((long)&uStack_60 + lVar3) = uVar7;
        uVar13 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        *(undefined8 *)((long)&uStack_88 + lVar3) = 0x4c746e;
        FUN_004c5790();
        uVar6 = *(ulong *)((long)alStack_80 + lVar3 + 0x10U);
        uVar4 = *(undefined8 *)param_1;
        uVar7 = *(undefined8 *)(param_1 + 2);
        uVar9 = (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18
                ) ^ *(uint *)((long)auStack_68 + lVar3);
        uVar10 = (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                 uVar10 << 0x18) ^ *(uint *)((long)auStack_68 + lVar3 + 4);
        uVar11 = (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                 uVar11 << 0x18) ^ *(uint *)((long)&uStack_60 + lVar3);
        param_1 = param_1 + 4;
        uVar12 = (uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                 uVar13 << 0x18) ^ *(uint *)((long)&uStack_60 + lVar3 + 4);
        if (param_1 == *(uint **)((long)alStack_80 + lVar3 + 8U)) break;
        *param_2 = uVar9;
        param_2[1] = uVar10;
        param_2[2] = uVar11;
        param_2[3] = uVar12;
        param_2 = param_2 + 4;
      }
      puVar2 = *(undefined8 **)((long)&lStack_58 + lVar3);
      if (uVar6 == 0) {
        *param_2 = uVar9;
        param_2[1] = uVar10;
        param_2[2] = uVar11;
        param_2[3] = uVar12;
        *puVar2 = uVar4;
        puVar2[1] = uVar7;
      }
      else {
        *(uint *)((long)auStack_68 + lVar3) = uVar9;
        *(uint *)((long)auStack_68 + lVar3 + 4) = uVar10;
        *(uint *)((long)&uStack_60 + lVar3) = uVar11;
        *(uint *)((long)&uStack_60 + lVar3 + 4) = uVar12;
        *(ulong *)((long)&uStack_88 + lVar3) =
             (ulong)(in_NT & 1) * 0x4000 | (ulong)(bVar14 & 1) * 0x400 | (ulong)(in_IF & 1) * 0x200
             | (ulong)(in_TF & 1) * 0x100 | (ulong)((long)uVar6 < 0) * 0x80 |
             (ulong)(uVar6 == 0) * 0x40 | (ulong)(in_AF & 1) * 0x10 |
             (ulong)((POPCOUNT(uVar6 & 0xff) & 1U) == 0) * 4 | (ulong)(in_ID & 1) * 0x200000 |
             (ulong)(in_VIP & 1) * 0x100000 | (ulong)(in_VIF & 1) * 0x80000 |
             (ulong)(in_AC & 1) * 0x40000;
        puVar8 = (undefined1 *)((long)auStack_68 + lVar3);
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)param_2 = *puVar8;
          puVar8 = puVar8 + 1;
          param_2 = (uint *)((long)param_2 + 1);
        }
        *puVar2 = uVar4;
        puVar2[1] = uVar7;
      }
    }
    else {
      uVar6 = param_3 & 0xf;
      puVar1 = (uint *)((long)param_1 + (param_3 & 0xfffffffffffffff0));
      *(long *)((long)alStack_80 + lVar3) = param_4;
      *(uint **)((long)alStack_80 + lVar3 + 8U) = puVar1;
      *(ulong *)((long)alStack_80 + lVar3 + 0x10U) = uVar6;
      uVar9 = *param_5;
      uVar10 = param_5[1];
      uVar11 = param_5[2];
      uVar12 = param_5[3];
      if (puVar1 == param_1) goto LAB_004c73d0;
      while( true ) {
        do {
          uVar9 = uVar9 ^ *param_1;
          uVar10 = uVar10 ^ param_1[1];
          uVar11 = uVar11 ^ param_1[2];
          uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
          uVar12 = uVar12 ^ param_1[3];
          uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                   uVar10 << 0x18;
          uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                   uVar11 << 0x18;
          uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                   uVar12 << 0x18;
          *(undefined8 *)((long)&uStack_88 + lVar3) = 0x4c7374;
          FUN_004c5420();
          uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
          puVar1 = *(uint **)((long)alStack_80 + lVar3 + 8U);
          uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                   uVar10 << 0x18;
          uVar6 = *(ulong *)((long)alStack_80 + lVar3 + 0x10U);
          uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                   uVar11 << 0x18;
          *param_2 = uVar9;
          uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                   uVar12 << 0x18;
          param_2[1] = uVar10;
          param_2[2] = uVar11;
          param_1 = param_1 + 4;
          param_2[3] = uVar12;
          param_2 = param_2 + 4;
        } while (param_1 != puVar1);
        if (uVar6 == 0) break;
LAB_004c73d0:
        *(undefined8 *)((long)auStack_68 + lVar3) = 0;
        *(undefined8 *)((long)&uStack_60 + lVar3) = 0;
        *(undefined8 *)((long)alStack_80 + lVar3 + 0x10U) = 0;
        *(ulong *)((long)&uStack_88 + lVar3) =
             (ulong)(in_NT & 1) * 0x4000 | (ulong)(bVar14 & 1) * 0x400 | (ulong)(in_IF & 1) * 0x200
             | (ulong)(in_TF & 1) * 0x100 | 0x40 | (ulong)(in_AF & 1) * 0x10 | 4 |
             (ulong)(in_ID & 1) * 0x200000 | (ulong)(in_VIP & 1) * 0x100000 |
             (ulong)(in_VIF & 1) * 0x80000 | (ulong)(in_AC & 1) * 0x40000;
        puVar8 = (undefined1 *)((long)auStack_68 + lVar3);
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = (char)*param_1;
          param_1 = (uint *)((long)param_1 + 1);
          puVar8 = puVar8 + 1;
        }
        uVar6 = *(ulong *)((long)&uStack_88 + lVar3);
        in_NT = (uVar6 & 0x4000) != 0;
        bVar14 = (uVar6 & 0x400) != 0;
        in_IF = (uVar6 & 0x200) != 0;
        in_TF = (uVar6 & 0x100) != 0;
        in_AF = (uVar6 & 0x10) != 0;
        in_ID = (uVar6 & 0x200000) != 0;
        in_AC = (uVar6 & 0x40000) != 0;
        in_VIP = 0;
        in_VIF = 0;
        param_1 = (uint *)((long)auStack_68 + lVar3);
        *(long *)((long)alStack_80 + lVar3 + 8U) = (long)&lStack_58 + lVar3;
      }
      puVar1 = *(uint **)((long)&lStack_58 + lVar3);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
    }
  }
  return;
}

