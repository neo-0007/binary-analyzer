
void ge_p2_dbl(int *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long in_FS_OFFSET;
  int local_68 [10];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fe_sq();
  piVar22 = param_1 + 0x14;
  fe_sq(piVar22,param_2 + 0x28);
  iVar11 = *(int *)(param_2 + 0x74);
  lVar23 = (long)*(int *)(param_2 + 100);
  iVar12 = *(int *)(param_2 + 0x6c);
  lVar31 = (long)iVar12;
  lVar30 = (long)*(int *)(param_2 + 0x58);
  iVar13 = *(int *)(param_2 + 0x54);
  iVar14 = *(int *)(param_2 + 0x50);
  lVar32 = (long)*(int *)(param_2 + 0x70);
  lVar20 = (long)*(int *)(param_2 + 0x68);
  lVar24 = (long)(iVar12 * 2);
  lVar28 = (long)(iVar13 * 2);
  lVar15 = (long)*(int *)(param_2 + 0x5c);
  lVar29 = (long)(*(int *)(param_2 + 0x5c) * 2);
  lVar35 = (long)(*(int *)(param_2 + 0x58) * 2);
  lVar21 = (long)(iVar14 * 2);
  lVar16 = (long)*(int *)(param_2 + 0x60);
  lVar25 = (long)(iVar11 * 0x26);
  lVar33 = (long)(*(int *)(param_2 + 100) * 2);
  lVar34 = (long)(*(int *)(param_2 + 0x70) * 0x13);
  lVar37 = (long)(*(int *)(param_2 + 0x60) * 2);
  lVar26 = (long)(iVar12 * 0x26);
  lVar36 = (long)(*(int *)(param_2 + 0x68) + *(int *)(param_2 + 0x68) * 0x12);
  lVar6 = (lVar29 * lVar26 + lVar35 * lVar34 + lVar28 * lVar25 + (long)iVar14 * (long)iVar14 +
           lVar37 * lVar36 + (*(int *)(param_2 + 100) * 0x26) * lVar23) * 2;
  uVar1 = lVar6 + 0x2000000;
  lVar5 = (lVar26 * lVar31 +
          (*(int *)(param_2 + 0x68) * 2) * lVar34 +
          lVar33 * lVar25 + lVar30 * lVar30 + lVar28 * lVar29 + lVar21 * lVar16) * 2;
  lVar7 = ((long)uVar1 >> 0x1a) +
          (lVar33 * lVar36 + lVar16 * lVar26 + lVar29 * lVar34 + lVar30 * lVar25 + iVar13 * lVar21)
          * 2;
  uVar2 = lVar5 + 0x2000000;
  lVar17 = lVar7 + 0x1000000;
  lVar8 = ((long)uVar2 >> 0x1a) +
          (lVar20 * lVar25 + lVar15 * lVar35 + lVar16 * lVar28 + lVar23 * lVar21 + lVar24 * lVar34)
          * 2;
  lVar3 = lVar8 + 0x1000000;
  lVar9 = (lVar17 >> 0x19) +
          (lVar33 * lVar26 + lVar37 * lVar34 + iVar13 * lVar28 + lVar21 * lVar30 + lVar29 * lVar25 +
          lVar36 * lVar20) * 2;
  lVar36 = lVar9 + 0x2000000;
  lVar10 = (lVar3 >> 0x19) +
           (lVar24 * lVar25 + lVar35 * lVar16 + lVar28 * lVar33 + lVar21 * lVar20 + lVar15 * lVar29
           + lVar34 * lVar32) * 2;
  lVar4 = lVar10 + 0x2000000;
  lVar30 = (lVar36 >> 0x1a) +
           (lVar33 * lVar34 + lVar16 * lVar25 + lVar30 * lVar28 + lVar15 * lVar21 + lVar20 * lVar26)
           * 2;
  lVar15 = lVar30 + 0x1000000;
  lVar34 = (lVar4 >> 0x1a) +
           (lVar16 * lVar29 + lVar23 * lVar35 + lVar20 * lVar28 + lVar31 * lVar21 + lVar32 * lVar25)
           * 2;
  lVar26 = lVar34 + 0x1000000;
  lVar27 = (lVar15 >> 0x19) + (lVar5 - (uVar2 & 0xfffffffffc000000));
  lVar24 = (lVar26 >> 0x19) +
           (lVar16 * lVar16 + lVar33 * lVar29 + lVar35 * lVar20 + lVar24 * lVar28 + lVar32 * lVar21
           + lVar25 * iVar11) * 2;
  lVar5 = lVar27 + 0x2000000;
  lVar16 = lVar24 + 0x2000000;
  lVar21 = (lVar16 >> 0x1a) +
           (lVar20 * lVar29 + lVar21 * iVar11 + lVar32 * lVar28 + lVar31 * lVar35 + lVar23 * lVar37)
           * 2;
  lVar20 = lVar21 + 0x1000000;
  lVar23 = (lVar20 >> 0x19) * 0x13 + (lVar6 - (uVar1 & 0xfffffffffc000000));
  lVar6 = lVar23 + 0x2000000;
  param_1[0x1e] = (int)lVar23 - ((uint)lVar6 & 0xfc000000);
  param_1[0x1f] = (int)(lVar6 >> 0x1a) + ((int)lVar7 - ((uint)lVar17 & 0xfe000000));
  param_1[0x20] = (int)lVar9 - ((uint)lVar36 & 0xfc000000);
  param_1[0x23] = (int)(lVar5 >> 0x1a) + ((int)lVar8 - ((uint)lVar3 & 0xfe000000));
  param_1[0x21] = (int)lVar30 - ((uint)lVar15 & 0xfe000000);
  param_1[0x22] = (int)lVar27 - ((uint)lVar5 & 0xfc000000);
  param_1[0x25] = (int)lVar34 - ((uint)lVar26 & 0xfe000000);
  param_1[0x26] = (int)lVar24 - ((uint)lVar16 & 0xfc000000);
  param_1[0x27] = (int)lVar21 - ((uint)lVar20 & 0xfe000000);
  param_1[0x24] = (int)lVar10 - ((uint)lVar4 & 0xfc000000);
  lVar17 = 0x28;
  do {
    *(int *)((long)param_1 + lVar17) =
         *(int *)(param_2 + lVar17) + *(int *)(param_2 + -0x28 + lVar17);
    lVar17 = lVar17 + 4;
  } while (lVar17 != 0x50);
  fe_sq(local_68,param_1 + 10);
  piVar19 = param_1;
  do {
    piVar18 = piVar19 + 1;
    piVar19[10] = *piVar19 + piVar19[0x14];
    piVar19 = piVar18;
  } while (param_1 + 10 != piVar18);
  piVar19 = param_1 + 0x1e;
  do {
    *piVar22 = *piVar22 - piVar22[-0x14];
    piVar22 = piVar22 + 1;
  } while (piVar19 != piVar22);
  lVar17 = 0;
  do {
    *(int *)((long)param_1 + lVar17) =
         *(int *)((long)local_68 + lVar17) - *(int *)((long)param_1 + lVar17 + 0x28);
    lVar17 = lVar17 + 4;
  } while (lVar17 != 0x28);
  do {
    *piVar19 = *piVar19 - piVar19[-10];
    piVar19 = piVar19 + 1;
  } while (param_1 + 0x28 != piVar19);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

