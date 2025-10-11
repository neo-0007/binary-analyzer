
undefined8 FUN_0048a8b0(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong *puVar10;
  ulong *puVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  
  uVar6 = FUN_0048a620();
  if ((int)uVar6 == 0) {
    uVar26 = param_3[0x1e];
    puVar11 = param_3 + (ulong)(uint)uVar26 * 2;
    puVar10 = param_3;
    do {
      uVar1 = puVar10[1];
      uVar2 = *puVar11;
      uVar3 = puVar11[1];
      *puVar11 = *puVar10;
      puVar11[1] = uVar1;
      *puVar10 = uVar2;
      puVar10[1] = uVar3;
      uVar3 = DAT_0048bcb8;
      uVar2 = DAT_0048bcb0;
      uVar1 = DAT_0048bca8;
      puVar10 = puVar10 + 2;
      puVar11 = puVar11 + -2;
    } while (puVar11 != puVar10);
    iVar27 = (uint)uVar26 - 1;
    do {
      puVar10 = param_3 + 2;
      uVar26 = *puVar10;
      uVar4 = param_3[3];
      uVar14 = uVar26 * 2 & uVar2 ^ (uVar1 & uVar26) - ((uVar1 & uVar26) >> 7) & uVar3;
      uVar21 = uVar4 * 2 & uVar2 ^ (uVar1 & uVar4) - ((uVar1 & uVar4) >> 7) & uVar3;
      uVar16 = uVar14 * 2 & uVar2 ^ (uVar1 & uVar14) - ((uVar1 & uVar14) >> 7) & uVar3;
      uVar23 = uVar21 * 2 & uVar2 ^ (uVar1 & uVar21) - ((uVar1 & uVar21) >> 7) & uVar3;
      uVar18 = uVar16 * 2 & uVar2 ^ (uVar1 & uVar16) - ((uVar1 & uVar16) >> 7) & uVar3;
      uVar25 = uVar23 * 2 & uVar2 ^ (uVar1 & uVar23) - ((uVar1 & uVar23) >> 7) & uVar3;
      uVar15 = uVar14 ^ uVar26 ^ uVar18;
      uVar22 = uVar21 ^ uVar4 ^ uVar25;
      uVar16 = uVar16 ^ uVar26 ^ uVar18;
      uVar23 = uVar23 ^ uVar4 ^ uVar25;
      uVar5 = (uint)(uVar26 ^ uVar18);
      uVar7 = (uint)(uVar4 ^ uVar25);
      uVar14 = uVar14 ^ uVar26 ^ uVar16;
      uVar9 = (uint)((uVar26 ^ uVar18) >> 0x20);
      uVar26 = uVar21 ^ uVar4 ^ uVar23;
      uVar8 = (uint)((uVar4 ^ uVar25) >> 0x20);
      uVar12 = (uint)uVar15;
      uVar19 = (uint)uVar22;
      uVar17 = (uint)(uVar15 >> 0x20);
      uVar24 = (uint)(uVar22 >> 0x20);
      uVar13 = (uint)(uVar16 >> 0x20);
      uVar20 = (uint)(uVar23 >> 0x20);
      *(uint *)puVar10 =
           (uVar5 << 8 | uVar5 >> 0x18) ^ (uint)uVar14 ^ (uVar12 << 0x18 | uVar12 >> 8) ^
           ((uint)uVar16 << 0x10 | (uint)uVar16 >> 0x10);
      *(uint *)((long)param_3 + 0x14) =
           (uVar9 << 8 | uVar9 >> 0x18) ^ (uint)(uVar14 >> 0x20) ^ (uVar17 << 0x18 | uVar17 >> 8) ^
           (uVar13 << 0x10 | uVar13 >> 0x10);
      *(uint *)(param_3 + 3) =
           (uVar7 << 8 | uVar7 >> 0x18) ^ (uint)uVar26 ^ (uVar19 << 0x18 | uVar19 >> 8) ^
           ((uint)uVar23 << 0x10 | (uint)uVar23 >> 0x10);
      *(uint *)((long)param_3 + 0x1c) =
           (uVar8 << 8 | uVar8 >> 0x18) ^ (uint)(uVar26 >> 0x20) ^ (uVar24 << 0x18 | uVar24 >> 8) ^
           (uVar20 << 0x10 | uVar20 >> 0x10);
      iVar27 = iVar27 + -1;
      param_3 = puVar10;
    } while (iVar27 != 0);
    uVar6 = 0;
  }
  return uVar6;
}

