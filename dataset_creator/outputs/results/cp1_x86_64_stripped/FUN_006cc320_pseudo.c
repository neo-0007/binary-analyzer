
undefined8 FUN_006cc320(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint *puVar5;
  byte *pbVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  char cVar12;
  long *plVar13;
  ulong uVar14;
  uint *puVar15;
  char *pcVar16;
  byte *pbVar17;
  byte *pbVar18;
  long local_40 [2];
  
  plVar13 = param_2;
  for (lVar11 = 0x30; lVar11 != 0; lVar11 = lVar11 + -1) {
    *plVar13 = 0;
    plVar13 = plVar13 + 1;
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(long *)(param_1 + 0x98) == 0) {
    return 5;
  }
  puVar5 = (uint *)FUN_006cf960((*(long *)(param_1 + 0x98) + -1) -
                                (*(long *)(param_1 + 0xc0) >> 0x3f),param_1 + 0xa8);
  if (puVar5 == (uint *)0x0) {
    lVar11 = *(long *)(param_1 + 0x90);
    if (**(char **)(param_1 + 0x98) != 'H') {
      return 5;
    }
    if (*(long *)(*(char **)(param_1 + 0x98) + 1) == 0x50f0000000fc0c7) {
      lVar1 = *(long *)(lVar11 + 0xa0);
      *(undefined4 *)(param_2 + 0x28) = 1;
      param_2[0x26] = 7;
      *(undefined4 *)(param_2 + 1) = 1;
      *param_2 = (lVar11 + 0x90) - lVar1;
      param_2[0x25] = lVar1 - lVar11;
      param_2[2] = (lVar11 + 0x88) - lVar1;
      param_2[0x10] = (lVar11 + 0x28) - lVar1;
      param_2[4] = (lVar11 + 0x98) - lVar1;
      param_2[0x12] = (lVar11 + 0x30) - lVar1;
      param_2[6] = (lVar11 + 0x80) - lVar1;
      param_2[0x14] = (lVar11 + 0x38) - lVar1;
      param_2[8] = (lVar11 + 0x70) - lVar1;
      param_2[0x16] = (lVar11 + 0x40) - lVar1;
      param_2[10] = (lVar11 + 0x68) - lVar1;
      param_2[0x18] = (lVar11 + 0x48) - lVar1;
      *(undefined4 *)(param_2 + 3) = 1;
      param_2[0x1a] = (lVar11 + 0x50) - lVar1;
      *(undefined4 *)(param_2 + 5) = 1;
      param_2[0x1c] = (lVar11 + 0x58) - lVar1;
      *(undefined4 *)(param_2 + 7) = 1;
      *(undefined4 *)(param_2 + 9) = 1;
      *(undefined4 *)(param_2 + 0xb) = 1;
      *(undefined4 *)(param_2 + 0xd) = 1;
      param_2[0xc] = (lVar11 + 0x78) - lVar1;
      *(undefined4 *)(param_2 + 0x11) = 1;
      *(undefined4 *)(param_2 + 0x13) = 1;
      *(undefined4 *)(param_2 + 0x15) = 1;
      *(undefined4 *)(param_2 + 0x17) = 1;
      *(undefined4 *)(param_2 + 0x19) = 1;
      *(undefined4 *)(param_2 + 0x1b) = 1;
      *(undefined4 *)(param_2 + 0x1d) = 1;
      *(undefined4 *)(param_2 + 0x1f) = 1;
      param_2[0x20] = (lVar11 + 0xa8) - lVar1;
      param_2[0x1e] = (lVar11 + 0x60) - lVar1;
      *(undefined4 *)(param_2 + 0x21) = 1;
      param_2[0x2d] = 0x10;
      *(undefined1 *)((long)param_2 + 0x173) = 1;
      return 0;
    }
    return 5;
  }
  param_2[0x29] = *(long *)(param_1 + 0xb8);
  puVar15 = (uint *)((long)puVar5 + (4 - (long)(int)puVar5[1]));
  pcVar16 = (char *)((long)puVar15 + 9);
  lVar11 = thunk_FUN_007129d0(pcVar16);
  pbVar6 = (byte *)((long)puVar15 + lVar11 + 10);
  if ((*(char *)((long)puVar15 + 9) == 'e') && (*(char *)((long)puVar15 + 10) == 'h')) {
    lVar11 = *(long *)pbVar6;
    pcVar16 = (char *)((long)puVar15 + 0xb);
    pbVar6 = pbVar6 + 8;
    param_2[0x2f] = lVar11;
  }
  uVar3 = puVar15[2];
  if (3 < (byte)uVar3) {
    if (*pbVar6 != 8) {
      return 3;
    }
    if (pbVar6[1] != 0) {
      return 3;
    }
    pbVar6 = pbVar6 + 2;
  }
  uVar14 = 0;
  bVar4 = 0;
  do {
    bVar9 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    bVar2 = bVar4 & 0x3f;
    bVar4 = bVar4 + 7;
    uVar14 = uVar14 | (ulong)(bVar9 & 0x7f) << bVar2;
  } while ((char)bVar9 < '\0');
  param_2[0x2c] = uVar14;
  uVar10 = 0;
  uVar14 = 0;
  do {
    pbVar8 = pbVar6;
    bVar4 = *pbVar8;
    pbVar6 = pbVar8 + 1;
    bVar9 = (byte)uVar10;
    uVar10 = uVar10 + 7;
    uVar14 = uVar14 | (ulong)(bVar4 & 0x7f) << (bVar9 & 0x3f);
  } while ((char)bVar4 < '\0');
  if ((uVar10 < 0x40) && ((bVar4 & 0x40) != 0)) {
    uVar14 = uVar14 | -1L << ((byte)uVar10 & 0x3f);
  }
  param_2[0x2b] = uVar14;
  bVar4 = 0;
  uVar14 = 0;
  if ((byte)uVar3 == 1) {
    uVar14 = (ulong)*pbVar6;
    pbVar6 = pbVar8 + 2;
  }
  else {
    do {
      bVar9 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      bVar2 = bVar4 & 0x3f;
      bVar4 = bVar4 + 7;
      uVar14 = uVar14 | (ulong)(bVar9 & 0x7f) << bVar2;
    } while ((char)bVar9 < '\0');
  }
  param_2[0x2d] = uVar14;
  pbVar18 = (byte *)0x0;
  *(undefined1 *)((long)param_2 + 0x171) = 0xff;
  cVar12 = *pcVar16;
  pbVar8 = pbVar6;
  if (cVar12 == 'z') {
    bVar4 = 0;
    do {
      bVar9 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      bVar2 = bVar4 & 0x3f;
      bVar4 = bVar4 + 7;
      pbVar18 = (byte *)((ulong)pbVar18 | (ulong)(bVar9 & 0x7f) << bVar2);
    } while ((char)bVar9 < '\0');
    *(undefined1 *)((long)param_2 + 0x172) = 1;
    cVar12 = pcVar16[1];
    pbVar18 = pbVar18 + (long)pbVar6;
    pcVar16 = pcVar16 + 1;
    pbVar8 = pbVar18;
  }
  if (cVar12 != '\0') {
    do {
      pcVar16 = pcVar16 + 1;
      pbVar17 = pbVar18;
      switch(cVar12) {
      default:
        goto switchD_006cc4be_caseD_43;
      case 'L':
        bVar4 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        *(byte *)((long)param_2 + 0x171) = bVar4;
      case 'B':
        cVar12 = *pcVar16;
        break;
      case 'P':
        pbVar6 = (byte *)FUN_006cacb0(param_1,*pbVar6,pbVar6 + 1,local_40);
        param_2[0x2a] = local_40[0];
        cVar12 = *pcVar16;
        break;
      case 'R':
        bVar4 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        *(byte *)(param_2 + 0x2e) = bVar4;
        cVar12 = *pcVar16;
        break;
      case 'S':
        *(undefined1 *)((long)param_2 + 0x173) = 1;
        cVar12 = *pcVar16;
      }
    } while (cVar12 != '\0');
    pbVar17 = pbVar6;
    pbVar8 = pbVar18;
    if (pbVar18 == (byte *)0x0) {
switchD_006cc4be_caseD_43:
      pbVar8 = pbVar17;
      if (pbVar17 == (byte *)0x0) {
        return 3;
      }
    }
  }
  FUN_006cba70(pbVar8,(long)puVar15 + (ulong)*puVar15 + 4,param_1,param_2);
  if (*(byte *)(param_2 + 0x2e) == 0xff) {
    lVar11 = 8;
  }
  else {
    bVar4 = *(byte *)(param_2 + 0x2e) & 7;
    if (bVar4 == 2) {
      lVar11 = 0xc;
    }
    else {
      if (bVar4 < 3) {
        if (bVar4 != 0) {
          uVar7 = FUN_00404692();
          return uVar7;
        }
      }
      else {
        lVar11 = 0x10;
        if (bVar4 == 3) goto LAB_006cc53d;
        if (bVar4 != 4) {
                    /* WARNING: Subroutine does not return */
          FUN_00404713();
        }
      }
      lVar11 = 0x18;
    }
  }
LAB_006cc53d:
  pbVar6 = (byte *)(lVar11 + (long)puVar5);
  cVar12 = *(char *)((long)param_2 + 0x171);
  if (*(char *)((long)param_2 + 0x172) == '\0') {
    pbVar8 = pbVar6;
    if (cVar12 != -1) {
      pbVar8 = (byte *)FUN_006cacb0(param_1,cVar12,pbVar6,local_40);
      *(long *)(param_1 + 0xa0) = local_40[0];
    }
  }
  else {
    uVar14 = 0;
    bVar4 = 0;
    do {
      bVar9 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      bVar2 = bVar4 & 0x3f;
      bVar4 = bVar4 + 7;
      uVar14 = uVar14 | (ulong)(bVar9 & 0x7f) << bVar2;
    } while ((char)bVar9 < '\0');
    pbVar8 = pbVar6 + uVar14;
    if (cVar12 != -1) {
      FUN_006cacb0(param_1,cVar12,pbVar6,local_40);
      *(long *)(param_1 + 0xa0) = local_40[0];
    }
  }
  FUN_006cba70(pbVar8,(long)puVar5 + (ulong)*puVar5 + 4,param_1,param_2);
  return 0;
}

