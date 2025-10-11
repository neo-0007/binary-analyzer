
/* WARNING: Removing unreachable block (ram,0x006cc2df) */

void FUN_006cba70(byte *param_1,byte *param_2,long param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  byte bVar19;
  undefined1 auStack_58 [8];
  undefined8 *local_50;
  undefined8 local_40 [2];
  
  bVar19 = 0;
  param_4[0x24] = 0;
  if (param_2 <= param_1) {
    return;
  }
  puVar16 = (undefined8 *)0x0;
  puVar12 = auStack_58;
  lVar3 = *(long *)(param_3 + 0xc0);
  lVar4 = *(long *)(param_3 + 0x98);
  do {
    uVar18 = param_4[0x29];
    if ((ulong)(lVar4 - (lVar3 >> 0x3f)) <= uVar18) {
      return;
    }
    bVar8 = *param_1;
    pbVar6 = param_1 + 1;
    bVar9 = bVar8 & 0xc0;
    if (bVar9 == 0x40) {
      param_4[0x29] = (ulong)(bVar8 & 0x3f) * param_4[0x2c] + uVar18;
      goto LAB_006cbb18;
    }
    if (bVar9 == 0x80) {
      uVar18 = 0;
      bVar9 = 0;
      do {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar5 = bVar9 & 0x3f;
        bVar9 = bVar9 + 7;
        uVar18 = uVar18 | (ulong)(bVar1 & 0x7f) << bVar5;
      } while ((char)bVar1 < '\0');
      lVar11 = param_4[0x2b];
      if ((bVar8 & 0x3f) < 0x12) {
        *(undefined4 *)(param_4 + (ulong)(bVar8 & 0x3f) * 2 + 1) = 1;
        param_4[(ulong)(bVar8 & 0x3f) * 2] = uVar18 * lVar11;
      }
      goto LAB_006cbb18;
    }
    if (bVar9 == 0xc0) {
      if (0x11 < (bVar8 & 0x3f)) goto switchD_006cbaf7_caseD_0;
      *(undefined4 *)(param_4 + (ulong)(bVar8 & 0x3f) * 2 + 1) = 0;
      goto LAB_006cbb18;
    }
    switch(bVar8) {
    case 0:
    case 0x2d:
switchD_006cbaf7_caseD_0:
      break;
    case 1:
      uVar2 = *(undefined1 *)(param_4 + 0x2e);
      *(undefined8 *)(puVar12 + -8) = 0x6cbbfe;
      local_50 = puVar16;
      pbVar6 = (byte *)FUN_006cacb0(param_3,uVar2,pbVar6,local_40);
      param_4[0x29] = local_40[0];
      puVar16 = local_50;
      break;
    case 2:
      pbVar6 = param_1 + 2;
      param_4[0x29] = (ulong)param_1[1] * param_4[0x2c] + uVar18;
      break;
    case 3:
      pbVar6 = param_1 + 3;
      param_4[0x29] = (ulong)*(ushort *)(param_1 + 1) * param_4[0x2c] + uVar18;
      break;
    case 4:
      pbVar6 = param_1 + 5;
      param_4[0x29] = (ulong)*(uint *)(param_1 + 1) * param_4[0x2c] + uVar18;
      break;
    case 5:
      uVar18 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      uVar17 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar17 = uVar17 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      goto LAB_006cbe00;
    case 6:
      uVar18 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      goto LAB_006cc10b;
    case 7:
      uVar18 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      if (uVar18 < 0x12) {
        *(undefined4 *)(param_4 + uVar18 * 2 + 1) = 6;
      }
      break;
    case 8:
      uVar18 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
LAB_006cc10b:
      if (uVar18 < 0x12) {
        *(undefined4 *)(param_4 + uVar18 * 2 + 1) = 0;
      }
      break;
    case 9:
      uVar18 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      uVar17 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar17 = uVar17 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      if (uVar18 < 0x12) {
        *(undefined4 *)(param_4 + uVar18 * 2 + 1) = 2;
        param_4[uVar18 * 2] = uVar17;
      }
      break;
    case 10:
      if (puVar16 == (undefined8 *)0x0) {
        puVar13 = puVar12 + -0x150;
        *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
        puVar7 = (undefined8 *)((ulong)(puVar12 + -0x141) & 0xfffffffffffffff0);
      }
      else {
        puVar7 = puVar16;
        puVar13 = puVar12;
        puVar16 = (undefined8 *)puVar16[0x24];
      }
      puVar14 = param_4;
      puVar15 = puVar7;
      for (lVar11 = 0x29; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar15 = *puVar14;
        puVar14 = puVar14 + (ulong)bVar19 * -2 + 1;
        puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
      }
      param_4[0x24] = puVar7;
      puVar12 = puVar13;
      break;
    case 0xb:
      puVar7 = (undefined8 *)param_4[0x24];
      puVar14 = puVar7;
      puVar15 = param_4;
      for (lVar11 = 0x29; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar15 = *puVar14;
        puVar14 = puVar14 + (ulong)bVar19 * -2 + 1;
        puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
      }
      puVar7[0x24] = puVar16;
      puVar16 = puVar7;
      break;
    case 0xc:
      uVar18 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      param_4[0x26] = uVar18;
      bVar8 = 0;
      uVar18 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      param_4[0x25] = uVar18;
      *(undefined4 *)(param_4 + 0x28) = 1;
      break;
    case 0xd:
      uVar18 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      param_4[0x26] = uVar18;
      *(undefined4 *)(param_4 + 0x28) = 1;
      break;
    case 0xe:
      uVar18 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      param_4[0x25] = uVar18;
      break;
    case 0xf:
      param_4[0x27] = pbVar6;
      uVar18 = 0;
      bVar8 = 0;
      *(undefined4 *)(param_4 + 0x28) = 2;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      pbVar6 = pbVar6 + uVar18;
      break;
    case 0x10:
      uVar18 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      if (uVar18 < 0x12) {
        *(undefined4 *)(param_4 + uVar18 * 2 + 1) = 3;
        param_4[uVar18 * 2] = pbVar6;
      }
      uVar18 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      pbVar6 = pbVar6 + uVar18;
      break;
    case 0x11:
      uVar18 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      uVar17 = 0;
      uVar10 = 0;
      do {
        bVar8 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar9 = (byte)uVar10;
        uVar10 = uVar10 + 7;
        uVar17 = uVar17 | (ulong)(bVar8 & 0x7f) << (bVar9 & 0x3f);
      } while ((char)bVar8 < '\0');
      if ((uVar10 < 0x40) && ((bVar8 & 0x40) != 0)) {
        uVar17 = uVar17 | -1L << ((byte)uVar10 & 0x3f);
      }
LAB_006cbe00:
      lVar11 = param_4[0x2b];
      if (uVar18 < 0x12) {
        *(undefined4 *)(param_4 + uVar18 * 2 + 1) = 1;
        param_4[uVar18 * 2] = uVar17 * lVar11;
      }
      break;
    case 0x12:
      uVar18 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      param_4[0x26] = uVar18;
      uVar10 = 0;
      uVar18 = 0;
      do {
        bVar8 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar9 = (byte)uVar10;
        uVar10 = uVar10 + 7;
        uVar18 = uVar18 | (ulong)(bVar8 & 0x7f) << (bVar9 & 0x3f);
      } while ((char)bVar8 < '\0');
      if ((uVar10 < 0x40) && ((bVar8 & 0x40) != 0)) {
        uVar18 = uVar18 | -1L << ((byte)uVar10 & 0x3f);
      }
      *(undefined4 *)(param_4 + 0x28) = 1;
      goto LAB_006cbe9c;
    case 0x13:
      uVar18 = 0;
      uVar10 = 0;
      do {
        bVar8 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar9 = (byte)uVar10;
        uVar10 = uVar10 + 7;
        uVar18 = uVar18 | (ulong)(bVar8 & 0x7f) << (bVar9 & 0x3f);
      } while ((char)bVar8 < '\0');
      if ((uVar10 < 0x40) && ((bVar8 & 0x40) != 0)) {
        uVar18 = uVar18 | -1L << ((byte)uVar10 & 0x3f);
      }
LAB_006cbe9c:
      param_4[0x25] = uVar18 * param_4[0x2b];
      break;
    case 0x14:
      uVar18 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      uVar17 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar17 = uVar17 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      goto LAB_006cbf6b;
    case 0x15:
      uVar18 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      uVar17 = 0;
      uVar10 = 0;
      do {
        bVar8 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar9 = (byte)uVar10;
        uVar10 = uVar10 + 7;
        uVar17 = uVar17 | (ulong)(bVar8 & 0x7f) << (bVar9 & 0x3f);
      } while ((char)bVar8 < '\0');
      if ((uVar10 < 0x40) && ((bVar8 & 0x40) != 0)) {
        uVar17 = uVar17 | -1L << ((byte)uVar10 & 0x3f);
      }
LAB_006cbf6b:
      lVar11 = param_4[0x2b];
      if (uVar18 < 0x12) {
        *(undefined4 *)(param_4 + uVar18 * 2 + 1) = 4;
        param_4[uVar18 * 2] = uVar17 * lVar11;
      }
      break;
    case 0x16:
      uVar18 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      if (uVar18 < 0x12) {
        *(undefined4 *)(param_4 + uVar18 * 2 + 1) = 5;
        param_4[uVar18 * 2] = pbVar6;
      }
      uVar18 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      pbVar6 = pbVar6 + uVar18;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      *(code **)(puVar12 + -8) = FUN_00404692;
      FUN_00404713();
    case 0x2e:
      uVar18 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      *(ulong *)(param_3 + 0xd0) = uVar18;
      break;
    case 0x2f:
      uVar18 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar18 = uVar18 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      uVar17 = 0;
      bVar8 = 0;
      do {
        bVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        uVar17 = uVar17 | (ulong)(bVar9 & 0x7f) << bVar1;
      } while ((char)bVar9 < '\0');
      lVar11 = param_4[0x2b];
      if (uVar18 < 0x12) {
        *(undefined4 *)(param_4 + uVar18 * 2 + 1) = 1;
        param_4[uVar18 * 2] = -(uVar17 * lVar11);
      }
    }
LAB_006cbb18:
    param_1 = pbVar6;
    if (param_2 <= pbVar6) {
      return;
    }
  } while( true );
}

