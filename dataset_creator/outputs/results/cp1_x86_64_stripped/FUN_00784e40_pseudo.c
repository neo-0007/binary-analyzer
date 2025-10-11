
void FUN_00784e40(void)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  ulong *puVar17;
  ulong uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  ulong uVar21;
  
  if ((PTR_DAT_0093eb60[0x31e] & 4) == 0) {
    DAT_00939e60._0_4_ = 0xffffffff;
    DAT_00939e60._4_4_ = 0xffffffff;
    DAT_00939e68._0_4_ = 0xffffffff;
    DAT_00939e68._4_4_ = 0xffffffff;
  }
  else {
    FUN_00784840(PTR_DAT_0093eb60,&DAT_00939e60);
  }
  uVar9 = FUN_007848b0();
  puVar10 = (ulong *)FUN_007101b0(DAT_00939e48 << 5);
  DAT_00939e40 = puVar10;
  if (uVar9 == 0) {
    if (puVar10 == (ulong *)0x0) goto LAB_00784e93;
    DAT_00939e48 = 0;
    FUN_007848b0();
    if (DAT_00939e48 == 0) {
      return;
    }
    if (DAT_00939e48 == 1) {
      DAT_00939e50 = puVar10[1];
      return;
    }
  }
  else {
    uVar13 = 0x3f;
    if (0x3e < uVar9) {
      uVar13 = uVar9;
    }
    DAT_0094ada0 = (undefined1 (*) [16])FUN_007101b0((uVar13 + 1) * 0x20);
    if (DAT_0094ada0 == (undefined1 (*) [16])0x0) {
      DAT_0094ada0 = (undefined1 (*) [16])0x0;
LAB_00784e93:
                    /* WARNING: Subroutine does not return */
      FUN_007873c0("Fatal glibc error: cannot allocate memory for find-object data\n");
    }
    *(undefined8 *)DAT_0094ada0[1] = 0;
    *(ulong *)(DAT_0094ada0[1] + 8) = uVar13;
    *DAT_0094ada0 = (undefined1  [16])0x0;
    if (puVar10 == (ulong *)0x0) goto LAB_00784e93;
    DAT_00939e48 = 0;
    FUN_007848b0();
    if (DAT_00939e48 == 0) goto LAB_00785000;
    if (DAT_00939e48 == 1) {
      DAT_00939e50 = puVar10[1];
      goto LAB_00785000;
    }
  }
  uVar15 = DAT_00939e48;
  uVar13 = DAT_00939e48 - 1;
  puVar17 = puVar10;
  uVar21 = 0;
  do {
    uVar18 = uVar21 + 1;
    uVar12 = *puVar17;
    uVar11 = uVar18;
    puVar14 = puVar17;
    if (uVar18 < uVar15) {
      do {
        if (puVar10[uVar11 * 4] < uVar12) {
          uVar12 = puVar10[uVar11 * 4];
          uVar21 = uVar11;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar15);
      uVar12 = puVar10[uVar21 * 4];
      puVar14 = puVar10 + uVar21 * 4;
    }
    uVar11 = puVar17[1];
    uVar3 = puVar14[2];
    uVar4 = puVar14[3];
    uVar21 = puVar14[1];
    *puVar14 = *puVar17;
    puVar14[1] = uVar11;
    uVar11 = puVar17[3];
    puVar14[2] = puVar17[2];
    puVar14[3] = uVar11;
    *puVar17 = uVar12;
    puVar17[1] = uVar21;
    puVar17[2] = uVar3;
    puVar17[3] = uVar4;
    puVar17 = puVar17 + 4;
    uVar21 = uVar18;
  } while (uVar18 < uVar13);
  DAT_00939e50 = puVar10[uVar13 * 4 + 1];
  if (uVar9 == 0) {
    return;
  }
LAB_00785000:
  pauVar8 = DAT_0094ada0;
  uVar9 = *(ulong *)DAT_0094ada0[1];
  if (uVar9 < 2) {
    return;
  }
  uVar15 = 0;
  pauVar1 = DAT_0094ada0 + 2;
  uVar21 = 1;
  uVar13 = *(ulong *)*pauVar1;
  pauVar16 = pauVar1;
  pauVar19 = pauVar1;
  uVar12 = uVar21;
  if (uVar9 < 2) goto LAB_0078506a;
  do {
    do {
      if (*(ulong *)pauVar8[uVar21 * 2 + 2] < uVar13) {
        uVar13 = *(ulong *)pauVar8[uVar21 * 2 + 2];
        uVar15 = uVar21;
      }
      uVar21 = uVar21 + 1;
    } while (uVar9 != uVar21);
    uVar13 = *(ulong *)pauVar1[uVar15 * 2];
    pauVar16 = pauVar1 + uVar15 * 2;
    uVar21 = uVar12;
LAB_0078506a:
    do {
      uVar15 = uVar21;
      uVar5 = *(undefined8 *)(*pauVar19 + 8);
      uVar6 = *(undefined8 *)pauVar16[1];
      uVar7 = *(undefined8 *)(pauVar16[1] + 8);
      pauVar20 = pauVar19 + 2;
      uVar2 = *(undefined8 *)(*pauVar16 + 8);
      *(undefined8 *)*pauVar16 = *(undefined8 *)*pauVar19;
      *(undefined8 *)(*pauVar16 + 8) = uVar5;
      uVar5 = *(undefined8 *)(pauVar19[1] + 8);
      *(undefined8 *)pauVar16[1] = *(undefined8 *)pauVar19[1];
      *(undefined8 *)(pauVar16[1] + 8) = uVar5;
      *(ulong *)*pauVar19 = uVar13;
      *(undefined8 *)(*pauVar19 + 8) = uVar2;
      *(undefined8 *)pauVar19[1] = uVar6;
      *(undefined8 *)(pauVar19[1] + 8) = uVar7;
      if (uVar15 == uVar9 - 1) {
        return;
      }
      uVar21 = uVar15 + 1;
      uVar13 = *(ulong *)*pauVar20;
      pauVar16 = pauVar20;
      pauVar19 = pauVar20;
      uVar12 = uVar21;
    } while (uVar9 <= uVar21);
  } while( true );
}

