
undefined8 uw_frame_state_for(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint *puVar5;
  size_t sVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  char cVar12;
  long *plVar13;
  ulong uVar14;
  uint *puVar15;
  char *__s;
  byte *pbVar16;
  byte *pbVar17;
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
  puVar5 = (uint *)_Unwind_Find_FDE((*(long *)(param_1 + 0x98) + -1) -
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
  __s = (char *)((long)puVar15 + 9);
  sVar6 = strlen(__s);
  pbVar7 = (byte *)((long)puVar15 + sVar6 + 10);
  if ((*(char *)((long)puVar15 + 9) == 'e') && (*(char *)((long)puVar15 + 10) == 'h')) {
    lVar11 = *(long *)pbVar7;
    __s = (char *)((long)puVar15 + 0xb);
    pbVar7 = pbVar7 + 8;
    param_2[0x2f] = lVar11;
  }
  uVar3 = puVar15[2];
  if (3 < (byte)uVar3) {
    if (*pbVar7 != 8) {
      return 3;
    }
    if (pbVar7[1] != 0) {
      return 3;
    }
    pbVar7 = pbVar7 + 2;
  }
  uVar14 = 0;
  bVar4 = 0;
  do {
    bVar9 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    bVar2 = bVar4 & 0x3f;
    bVar4 = bVar4 + 7;
    uVar14 = uVar14 | (ulong)(bVar9 & 0x7f) << bVar2;
  } while ((char)bVar9 < '\0');
  param_2[0x2c] = uVar14;
  uVar10 = 0;
  uVar14 = 0;
  do {
    pbVar8 = pbVar7;
    bVar4 = *pbVar8;
    pbVar7 = pbVar8 + 1;
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
    uVar14 = (ulong)*pbVar7;
    pbVar7 = pbVar8 + 2;
  }
  else {
    do {
      bVar9 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      bVar2 = bVar4 & 0x3f;
      bVar4 = bVar4 + 7;
      uVar14 = uVar14 | (ulong)(bVar9 & 0x7f) << bVar2;
    } while ((char)bVar9 < '\0');
  }
  param_2[0x2d] = uVar14;
  pbVar17 = (byte *)0x0;
  *(undefined1 *)((long)param_2 + 0x171) = 0xff;
  cVar12 = *__s;
  pbVar8 = pbVar7;
  if (cVar12 == 'z') {
    bVar4 = 0;
    do {
      bVar9 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      bVar2 = bVar4 & 0x3f;
      bVar4 = bVar4 + 7;
      pbVar17 = (byte *)((ulong)pbVar17 | (ulong)(bVar9 & 0x7f) << bVar2);
    } while ((char)bVar9 < '\0');
    *(undefined1 *)((long)param_2 + 0x172) = 1;
    cVar12 = __s[1];
    pbVar17 = pbVar17 + (long)pbVar7;
    __s = __s + 1;
    pbVar8 = pbVar17;
  }
  if (cVar12 != '\0') {
    do {
      __s = __s + 1;
      pbVar16 = pbVar17;
      switch(cVar12) {
      default:
        goto switchD_006c2aae_caseD_43;
      case 'L':
        bVar4 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        *(byte *)((long)param_2 + 0x171) = bVar4;
      case 'B':
        cVar12 = *__s;
        break;
      case 'P':
        pbVar7 = (byte *)read_encoded_value(param_1,*pbVar7,pbVar7 + 1,local_40);
        param_2[0x2a] = local_40[0];
        cVar12 = *__s;
        break;
      case 'R':
        bVar4 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        *(byte *)(param_2 + 0x2e) = bVar4;
        cVar12 = *__s;
        break;
      case 'S':
        *(undefined1 *)((long)param_2 + 0x173) = 1;
        cVar12 = *__s;
      }
    } while (cVar12 != '\0');
    pbVar16 = pbVar7;
    pbVar8 = pbVar17;
    if (pbVar17 == (byte *)0x0) {
switchD_006c2aae_caseD_43:
      pbVar8 = pbVar16;
      if (pbVar16 == (byte *)0x0) {
        return 3;
      }
    }
  }
  execute_cfa_program(pbVar8,(long)puVar15 + (ulong)*puVar15 + 4,param_1,param_2);
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
                    /* WARNING: Subroutine does not return */
          uw_frame_state_for_cold();
        }
      }
      else {
        lVar11 = 0x10;
        if (bVar4 == 3) goto LAB_006c2b2d;
        if (bVar4 != 4) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      lVar11 = 0x18;
    }
  }
LAB_006c2b2d:
  pbVar7 = (byte *)(lVar11 + (long)puVar5);
  cVar12 = *(char *)((long)param_2 + 0x171);
  if (*(char *)((long)param_2 + 0x172) == '\0') {
    pbVar8 = pbVar7;
    if (cVar12 != -1) {
      pbVar8 = (byte *)read_encoded_value(param_1,cVar12,pbVar7,local_40);
      *(long *)(param_1 + 0xa0) = local_40[0];
    }
  }
  else {
    uVar14 = 0;
    bVar4 = 0;
    do {
      bVar9 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      bVar2 = bVar4 & 0x3f;
      bVar4 = bVar4 + 7;
      uVar14 = uVar14 | (ulong)(bVar9 & 0x7f) << bVar2;
    } while ((char)bVar9 < '\0');
    pbVar8 = pbVar7 + uVar14;
    if (cVar12 != -1) {
      read_encoded_value(param_1,cVar12,pbVar7,local_40);
      *(long *)(param_1 + 0xa0) = local_40[0];
    }
  }
  execute_cfa_program(pbVar8,(long)puVar5 + (ulong)*puVar5 + 4,param_1,param_2);
  return 0;
}

