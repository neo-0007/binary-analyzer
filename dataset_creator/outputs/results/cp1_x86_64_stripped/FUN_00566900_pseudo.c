
void FUN_00566900(uint *param_1,ulong param_2,ulong *param_3,uint *param_4)

{
  undefined2 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  uint3 uVar8;
  uint3 uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  char cVar16;
  uint uVar17;
  ulong uVar18;
  byte bVar19;
  ulong uVar20;
  char cVar21;
  char cVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  uint *puVar26;
  uint7 uVar27;
  ulong uVar28;
  long lVar29;
  
  if (param_2 == 0) {
    return;
  }
  bVar19 = (byte)param_1[1];
  uVar20 = (ulong)bVar19;
  if (param_1[0x42] == 0xffffffff) {
    uVar28 = (ulong)(byte)((char)*param_1 + 1);
    cVar16 = *(char *)((long)param_1 + uVar28 + 8);
    if ((param_2 & 0xfffffffffffffff8) != 0) {
      do {
        uVar4 = (undefined4)*param_3;
        uVar5 = *(undefined4 *)((long)param_3 + 4);
        bVar19 = (char)uVar20 + cVar16;
        uVar20 = (ulong)bVar19;
        cVar21 = *(char *)((long)param_1 + uVar20 + 8);
        uVar18 = uVar28 + 1 & 0xff;
        cVar22 = *(char *)((long)param_1 + uVar18 + 8);
        *(char *)((long)param_1 + uVar20 + 8) = cVar16;
        *(char *)((long)param_1 + uVar28 + 8) = cVar21;
        if (uVar20 == uVar18) {
          cVar22 = cVar16;
        }
        uVar8 = (uint3)(((uint)(byte)((byte)uVar4 ^
                                     *(byte *)((long)param_1 + (ulong)(byte)(cVar21 + cVar16) + 8))
                        << 0x18) >> 8);
        bVar19 = bVar19 + cVar22;
        uVar20 = (ulong)bVar19;
        cVar16 = *(char *)((long)param_1 + uVar20 + 8);
        uVar28 = uVar18 + 1 & 0xff;
        cVar21 = *(char *)((long)param_1 + uVar28 + 8);
        *(char *)((long)param_1 + uVar20 + 8) = cVar22;
        *(char *)((long)param_1 + uVar18 + 8) = cVar16;
        if (uVar20 == uVar28) {
          cVar21 = cVar22;
        }
        uVar8 = uVar8 >> 8 |
                (uint3)((uint)(CONCAT31(uVar8,(byte)((uint)uVar4 >> 8) ^
                                              *(byte *)((long)param_1 +
                                                       (ulong)(byte)(cVar16 + cVar22) + 8)) << 0x18)
                       >> 8);
        bVar19 = bVar19 + cVar21;
        uVar20 = (ulong)bVar19;
        cVar16 = *(char *)((long)param_1 + uVar20 + 8);
        uVar18 = uVar28 + 1 & 0xff;
        cVar22 = *(char *)((long)param_1 + uVar18 + 8);
        *(char *)((long)param_1 + uVar20 + 8) = cVar21;
        *(char *)((long)param_1 + uVar28 + 8) = cVar16;
        if (uVar20 == uVar18) {
          cVar22 = cVar21;
        }
        uVar8 = uVar8 >> 8 |
                (uint3)((uint)(CONCAT31(uVar8,(byte)((uint)uVar4 >> 0x10) ^
                                              *(byte *)((long)param_1 +
                                                       (ulong)(byte)(cVar16 + cVar21) + 8)) << 0x18)
                       >> 8);
        bVar19 = bVar19 + cVar22;
        uVar20 = (ulong)bVar19;
        cVar16 = *(char *)((long)param_1 + uVar20 + 8);
        uVar28 = uVar18 + 1 & 0xff;
        cVar21 = *(char *)((long)param_1 + uVar28 + 8);
        *(char *)((long)param_1 + uVar20 + 8) = cVar22;
        *(char *)((long)param_1 + uVar18 + 8) = cVar16;
        if (uVar20 == uVar28) {
          cVar21 = cVar22;
        }
        bVar2 = *(byte *)((long)param_1 + (ulong)(byte)(cVar16 + cVar22) + 8);
        bVar19 = bVar19 + cVar21;
        uVar20 = (ulong)bVar19;
        cVar16 = *(char *)((long)param_1 + uVar20 + 8);
        uVar18 = uVar28 + 1 & 0xff;
        cVar22 = *(char *)((long)param_1 + uVar18 + 8);
        *(char *)((long)param_1 + uVar20 + 8) = cVar21;
        *(char *)((long)param_1 + uVar28 + 8) = cVar16;
        if (uVar20 == uVar18) {
          cVar22 = cVar21;
        }
        uVar9 = (uint3)(((uint)(byte)((byte)uVar5 ^
                                     *(byte *)((long)param_1 + (ulong)(byte)(cVar16 + cVar21) + 8))
                        << 0x18) >> 8);
        bVar19 = bVar19 + cVar22;
        uVar20 = (ulong)bVar19;
        cVar16 = *(char *)((long)param_1 + uVar20 + 8);
        uVar28 = uVar18 + 1 & 0xff;
        cVar21 = *(char *)((long)param_1 + uVar28 + 8);
        *(char *)((long)param_1 + uVar20 + 8) = cVar22;
        *(char *)((long)param_1 + uVar18 + 8) = cVar16;
        if (uVar20 == uVar28) {
          cVar21 = cVar22;
        }
        uVar9 = uVar9 >> 8 |
                (uint3)((uint)(CONCAT31(uVar9,(byte)((uint)uVar5 >> 8) ^
                                              *(byte *)((long)param_1 +
                                                       (ulong)(byte)(cVar16 + cVar22) + 8)) << 0x18)
                       >> 8);
        bVar19 = bVar19 + cVar21;
        uVar20 = (ulong)bVar19;
        cVar16 = *(char *)((long)param_1 + uVar20 + 8);
        uVar18 = uVar28 + 1 & 0xff;
        cVar22 = *(char *)((long)param_1 + uVar18 + 8);
        *(char *)((long)param_1 + uVar20 + 8) = cVar21;
        *(char *)((long)param_1 + uVar28 + 8) = cVar16;
        if (uVar20 == uVar18) {
          cVar22 = cVar21;
        }
        uVar9 = uVar9 >> 8 |
                (uint3)((uint)(CONCAT31(uVar9,(byte)((uint)uVar5 >> 0x10) ^
                                              *(byte *)((long)param_1 +
                                                       (ulong)(byte)(cVar16 + cVar21) + 8)) << 0x18)
                       >> 8);
        uVar20 = (ulong)(byte)(bVar19 + cVar22);
        cVar21 = *(char *)((long)param_1 + uVar20 + 8);
        uVar28 = uVar18 + 1 & 0xff;
        cVar16 = *(char *)((long)param_1 + uVar28 + 8);
        *(char *)((long)param_1 + uVar20 + 8) = cVar22;
        *(char *)((long)param_1 + uVar18 + 8) = cVar21;
        if (uVar20 == uVar28) {
          cVar16 = cVar22;
        }
        bVar19 = *(byte *)((long)param_1 + (ulong)(byte)(cVar21 + cVar22) + 8);
        param_2 = param_2 - 8;
        *param_4 = (uint)uVar8 | CONCAT31(uVar8,(byte)((uint)uVar4 >> 0x18) ^ bVar2) << 0x18;
        param_3 = param_3 + 1;
        param_4[1] = (uint)uVar9 | CONCAT31(uVar9,(byte)((uint)uVar5 >> 0x18) ^ bVar19) << 0x18;
        param_4 = param_4 + 2;
      } while ((param_2 & 0xfffffffffffffff8) != 0);
      if (param_2 == 0) goto LAB_00566f50;
    }
    do {
      uVar20 = (ulong)(byte)((char)uVar20 + cVar16);
      cVar21 = *(char *)((long)param_1 + uVar20 + 8);
      *(char *)((long)param_1 + uVar20 + 8) = cVar16;
      *(char *)((long)param_1 + uVar28 + 8) = cVar21;
      bVar19 = cVar21 + cVar16;
      uVar28 = (ulong)(byte)((char)uVar28 + 1);
      cVar16 = *(char *)((long)param_1 + uVar28 + 8);
      uVar18 = *param_3;
      param_3 = (ulong *)((long)param_3 + 1);
      *(byte *)param_4 = *(byte *)((long)param_1 + (ulong)bVar19 + 8) ^ (byte)uVar18;
      param_4 = (uint *)((long)param_4 + 1);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    goto LAB_00566f50;
  }
  uVar28 = (ulong)(byte)((char)*param_1 + 1);
  lVar29 = (long)param_4 - (long)param_3;
  uVar17 = param_1[uVar28 + 2];
  uVar18 = (ulong)uVar17;
  if ((param_2 & 0xfffffffffffffff0) != 0) {
    if ((DAT_0094b598 >> 0x1e & 1) == 0) {
      uVar24 = -uVar28 & 7;
      lVar25 = uVar28 + 1;
      if (uVar24 != 0) {
        param_2 = param_2 - uVar24;
        do {
          cVar16 = (char)uVar18;
          uVar20 = (ulong)(byte)((char)uVar20 + cVar16);
          uVar17 = param_1[uVar20 + 2];
          param_1[uVar20 + 2] = (uint)uVar18;
          param_1[uVar28 + 2] = uVar17;
          uVar6 = uVar18 >> 8;
          uVar28 = (ulong)(byte)((char)uVar28 + 1);
          uVar18 = (ulong)param_1[uVar28 + 2];
          *(byte *)((long)param_3 + lVar29) =
               (byte)param_1[CONCAT71((int7)uVar6,cVar16 + (char)uVar17) + 2] ^ (byte)*param_3;
          param_3 = (ulong *)((long)param_3 + 1);
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
        lVar25 = uVar28 + 1;
      }
      do {
        bVar19 = (char)uVar20 + (char)uVar18;
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = (uint)uVar18;
        uVar3 = param_1[lVar25 + 2];
        param_1[uVar28 + 2] = uVar17;
        uVar23 = param_1[(ulong)CONCAT31((int3)(uVar17 >> 8),(char)uVar17 + (char)uVar18) + 2];
        cVar16 = (char)uVar3;
        bVar19 = bVar19 + cVar16;
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = uVar3;
        uVar3 = param_1[lVar25 + 3];
        uVar27 = (uint7)(((ulong)(byte)uVar23 << 0x38) >> 8);
        param_1[uVar28 + 3] = uVar17;
        uVar23 = param_1[(ulong)CONCAT31((int3)(uVar17 >> 8),(char)uVar17 + cVar16) + 2];
        cVar16 = (char)uVar3;
        bVar19 = bVar19 + cVar16;
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = uVar3;
        uVar3 = param_1[lVar25 + 4];
        uVar27 = uVar27 >> 8 | (uint7)((ulong)(CONCAT71(uVar27,(char)uVar23) << 0x38) >> 8);
        param_1[uVar28 + 4] = uVar17;
        uVar23 = param_1[(ulong)CONCAT31((int3)(uVar17 >> 8),(char)uVar17 + cVar16) + 2];
        cVar16 = (char)uVar3;
        bVar19 = bVar19 + cVar16;
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = uVar3;
        uVar3 = param_1[lVar25 + 5];
        uVar27 = uVar27 >> 8 | (uint7)((ulong)(CONCAT71(uVar27,(char)uVar23) << 0x38) >> 8);
        param_1[uVar28 + 5] = uVar17;
        uVar23 = param_1[(ulong)CONCAT31((int3)(uVar17 >> 8),(char)uVar17 + cVar16) + 2];
        cVar16 = (char)uVar3;
        bVar19 = bVar19 + cVar16;
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = uVar3;
        uVar3 = param_1[lVar25 + 6];
        uVar27 = uVar27 >> 8 | (uint7)((ulong)(CONCAT71(uVar27,(char)uVar23) << 0x38) >> 8);
        param_1[uVar28 + 6] = uVar17;
        uVar23 = param_1[(ulong)CONCAT31((int3)(uVar17 >> 8),(char)uVar17 + cVar16) + 2];
        cVar16 = (char)uVar3;
        bVar19 = bVar19 + cVar16;
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = uVar3;
        uVar3 = param_1[lVar25 + 7];
        uVar27 = uVar27 >> 8 | (uint7)((ulong)(CONCAT71(uVar27,(char)uVar23) << 0x38) >> 8);
        param_1[uVar28 + 7] = uVar17;
        uVar23 = param_1[(ulong)CONCAT31((int3)(uVar17 >> 8),(char)uVar17 + cVar16) + 2];
        cVar16 = (char)uVar3;
        bVar19 = bVar19 + cVar16;
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = uVar3;
        uVar3 = param_1[lVar25 + 8];
        uVar27 = uVar27 >> 8 | (uint7)((ulong)(CONCAT71(uVar27,(char)uVar23) << 0x38) >> 8);
        param_1[uVar28 + 8] = uVar17;
        uVar23 = param_1[(ulong)CONCAT31((int3)(uVar17 >> 8),(char)uVar17 + cVar16) + 2];
        lVar25 = CONCAT71((int7)((ulong)lVar25 >> 8),(char)lVar25 + '\b');
        cVar16 = (char)uVar3;
        uVar20 = (ulong)(byte)(bVar19 + cVar16);
        uVar17 = param_1[uVar20 + 2];
        param_1[uVar20 + 2] = uVar3;
        uVar18 = (ulong)param_1[lVar25 + 1];
        uVar27 = uVar27 >> 8 | (uint7)((ulong)(CONCAT71(uVar27,(char)uVar23) << 0x38) >> 8);
        param_1[uVar28 + 9] = uVar17;
        uVar28 = (ulong)(byte)((char)uVar28 + 8);
        param_2 = param_2 - 8;
        *(ulong *)((long)param_3 + lVar29) =
             ((ulong)uVar27 |
             CONCAT71(uVar27,(char)param_1[(ulong)CONCAT31((int3)(uVar17 >> 8),(char)uVar17 + cVar16
                                                          ) + 2]) << 0x38) ^ *param_3;
        param_3 = param_3 + 1;
      } while ((param_2 & 0xfffffffffffffff8) != 0);
    }
    else {
      if ((param_2 & 0xffffffffffffffe0) == 0) goto LAB_00566d30;
      uVar24 = -uVar28 & 0xf;
      if (uVar24 != 0) {
        param_2 = param_2 - uVar24;
        do {
          cVar16 = (char)uVar18;
          bVar19 = (char)uVar20 + cVar16;
          uVar20 = (ulong)bVar19;
          uVar3 = param_1[uVar20 + 2];
          param_1[uVar20 + 2] = (uint)uVar18;
          param_1[uVar28 + 2] = uVar3;
          uVar6 = uVar18 >> 8;
          uVar28 = (ulong)(byte)((char)uVar28 + 1);
          uVar17 = param_1[uVar28 + 2];
          uVar18 = (ulong)uVar17;
          *(byte *)((long)param_3 + lVar29) =
               (byte)param_1[CONCAT71((int7)uVar6,cVar16 + (char)uVar3) + 2] ^ (byte)*param_3;
          param_3 = (ulong *)((long)param_3 + 1);
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      puVar26 = param_1 + uVar28 + 2;
      bVar19 = bVar19 + (char)uVar17;
      uVar3 = param_1[(ulong)bVar19 + 2];
      param_1[(ulong)bVar19 + 2] = uVar17;
      uVar23 = puVar26[1];
      *puVar26 = uVar3;
      bVar19 = bVar19 + (char)uVar23;
      uVar1 = (undefined2)param_1[(ulong)(byte)((char)uVar17 + (char)uVar3) + 2];
      while( true ) {
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = uVar23;
        puVar26[1] = uVar17;
        cVar16 = (char)puVar26[2];
        bVar19 = bVar19 + cVar16;
        uVar3 = param_1[(ulong)(byte)((char)uVar23 + (char)uVar17) + 2];
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = puVar26[2];
        puVar26[2] = uVar17;
        cVar21 = (char)puVar26[3];
        bVar19 = bVar19 + cVar21;
        uVar23 = param_1[(ulong)(byte)(cVar16 + (char)uVar17) + 2];
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = puVar26[3];
        puVar26[3] = uVar17;
        cVar16 = (char)puVar26[4];
        bVar19 = bVar19 + cVar16;
        uVar12 = param_1[(ulong)(byte)(cVar21 + (char)uVar17) + 2];
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = puVar26[4];
        puVar26[4] = uVar17;
        cVar21 = (char)puVar26[5];
        bVar19 = bVar19 + cVar21;
        uVar13 = param_1[(ulong)(byte)(cVar16 + (char)uVar17) + 2];
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = puVar26[5];
        puVar26[5] = uVar17;
        cVar16 = (char)puVar26[6];
        bVar19 = bVar19 + cVar16;
        uVar14 = param_1[(ulong)(byte)(cVar21 + (char)uVar17) + 2];
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = puVar26[6];
        puVar26[6] = uVar17;
        cVar21 = (char)puVar26[7];
        bVar19 = bVar19 + cVar21;
        uVar24 = CONCAT26((short)param_1[(ulong)(byte)(cVar16 + (char)uVar17) + 2],
                          CONCAT24((short)uVar13,CONCAT22((short)uVar23,uVar1)));
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = puVar26[7];
        puVar26[7] = uVar17;
        cVar16 = (char)puVar26[8];
        bVar19 = bVar19 + cVar16;
        lVar25 = CONCAT26((short)param_1[(ulong)(byte)(cVar21 + (char)uVar17) + 2],
                          CONCAT24((short)uVar14,CONCAT22((short)uVar12,(short)uVar3)));
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = puVar26[8];
        puVar26[8] = uVar17;
        cVar21 = (char)puVar26[9];
        bVar19 = bVar19 + cVar21;
        uVar3 = param_1[(ulong)(byte)(cVar16 + (char)uVar17) + 2];
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = puVar26[9];
        puVar26[9] = uVar17;
        cVar16 = (char)puVar26[10];
        bVar19 = bVar19 + cVar16;
        uVar23 = param_1[(ulong)(byte)(cVar21 + (char)uVar17) + 2];
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = puVar26[10];
        puVar26[10] = uVar17;
        cVar21 = (char)puVar26[0xb];
        bVar19 = bVar19 + cVar21;
        uVar12 = param_1[(ulong)(byte)(cVar16 + (char)uVar17) + 2];
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = puVar26[0xb];
        puVar26[0xb] = uVar17;
        cVar16 = (char)puVar26[0xc];
        bVar19 = bVar19 + cVar16;
        uVar13 = param_1[(ulong)(byte)(cVar21 + (char)uVar17) + 2];
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = puVar26[0xc];
        puVar26[0xc] = uVar17;
        cVar21 = (char)puVar26[0xd];
        bVar19 = bVar19 + cVar21;
        uVar14 = param_1[(ulong)(byte)(cVar16 + (char)uVar17) + 2];
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = puVar26[0xd];
        puVar26[0xd] = uVar17;
        cVar16 = (char)puVar26[0xe];
        bVar19 = bVar19 + cVar16;
        uVar15 = param_1[(ulong)(byte)(cVar21 + (char)uVar17) + 2];
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = puVar26[0xe];
        puVar26[0xe] = uVar17;
        cVar21 = (char)puVar26[0xf];
        bVar19 = bVar19 + cVar21;
        uVar6 = CONCAT26((short)param_1[(ulong)(byte)(cVar16 + (char)uVar17) + 2],
                         CONCAT24((short)uVar14,CONCAT22((short)uVar12,(short)uVar3)));
        uVar28 = (ulong)(byte)((char)uVar28 + 0x10);
        uVar10 = *param_3;
        uVar11 = param_3[1];
        uVar17 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = puVar26[0xf];
        puVar26[0xf] = uVar17;
        puVar26 = param_1 + uVar28 + 2;
        lVar7 = CONCAT26((short)param_1[(ulong)(byte)(cVar21 + (char)uVar17) + 2],
                         CONCAT24((short)uVar15,CONCAT22((short)uVar13,(short)uVar23)));
        uVar17 = *puVar26;
        uVar18 = (ulong)uVar17;
        param_2 = param_2 - 0x10;
        uVar20 = (ulong)bVar19;
        if ((param_2 & 0xfffffffffffffff0) == 0) break;
        bVar19 = bVar19 + (char)uVar17;
        uVar3 = param_1[(ulong)bVar19 + 2];
        param_1[(ulong)bVar19 + 2] = uVar17;
        uVar23 = puVar26[1];
        *puVar26 = uVar3;
        bVar19 = bVar19 + (char)uVar23;
        uVar1 = (undefined2)param_1[(ulong)(byte)((char)uVar17 + (char)uVar3) + 2];
        *(ulong *)((long)param_3 + lVar29) = uVar10 ^ uVar24 ^ lVar25 * 0x100;
        ((ulong *)((long)param_3 + lVar29))[1] = uVar11 ^ uVar6 ^ lVar7 << 8;
        param_3 = param_3 + 2;
      }
      *(ulong *)((long)param_3 + lVar29) = uVar10 ^ uVar24 ^ lVar25 * 0x100;
      ((ulong *)((long)param_3 + lVar29))[1] = uVar11 ^ uVar6 ^ lVar7 << 8;
      param_3 = param_3 + 2;
    }
    if (param_2 == 0) goto LAB_00566f50;
  }
LAB_00566d30:
  do {
    cVar16 = (char)uVar18;
    uVar20 = (ulong)(byte)((char)uVar20 + cVar16);
    uVar17 = param_1[uVar20 + 2];
    param_1[uVar20 + 2] = (uint)uVar18;
    param_1[uVar28 + 2] = uVar17;
    uVar24 = uVar18 >> 8;
    uVar28 = (ulong)(byte)((char)uVar28 + 1);
    uVar18 = (ulong)param_1[uVar28 + 2];
    *(byte *)((long)param_3 + lVar29) =
         (byte)param_1[CONCAT71((int7)uVar24,cVar16 + (char)uVar17) + 2] ^ (byte)*param_3;
    param_3 = (ulong *)((long)param_3 + 1);
    param_2 = param_2 - 1;
  } while (param_2 != 0);
LAB_00566f50:
  *param_1 = (uint)(byte)((char)uVar28 - 1);
  param_1[1] = (uint)uVar20;
  return;
}

