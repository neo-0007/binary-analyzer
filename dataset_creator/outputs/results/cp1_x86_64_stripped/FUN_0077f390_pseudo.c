
undefined8
FUN_0077f390(long param_1,long param_2,long *param_3,char *param_4,ulong param_5,undefined4 *param_6
            )

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  char *pcVar16;
  char *pcVar17;
  long *plVar18;
  long *plVar19;
  char *pcVar20;
  byte *pbVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *pbVar24;
  long in_FS_OFFSET;
  bool bVar25;
  
  uVar22 = param_5 & 0xfffffffffffffff8;
  param_3[1] = 0;
  if (uVar22 < 2) {
LAB_0077f7e1:
    *param_6 = 0x22;
    uVar13 = 0xfffffffe;
  }
  else {
    bVar25 = false;
LAB_0077f3d8:
    param_4[uVar22 - 1] = -1;
    pcVar6 = (char *)FUN_00703150(param_4,param_5 & 0xfffffff8,param_1);
    if (pcVar6 != (char *)0x0) {
      if (param_4[uVar22 - 1] == -1) {
        if ((!bVar25) ||
           ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)*param_4 * 2) & 0x20) == 0))
        goto LAB_0077f430;
        goto LAB_0077f41e;
      }
      goto LAB_0077f7e1;
    }
    uVar13 = 0;
  }
  return uVar13;
LAB_0077f430:
  puVar7 = (undefined1 *)FUN_00401200(param_4,&DAT_0082ea21);
  if (puVar7 != (undefined1 *)0x0) {
    *puVar7 = 0;
  }
  bVar3 = *(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)*pcVar6 * 2);
  while ((bVar3 & 0x20) != 0) {
    pcVar17 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    bVar3 = *(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)*pcVar17 * 2);
  }
  *param_3 = (long)param_4;
  cVar2 = *pcVar6;
  if ((cVar2 != '\0') && (pcVar17 = param_4, cVar2 != ':')) {
    do {
      pcVar20 = pcVar6;
      pcVar16 = pcVar17;
      pcVar17 = pcVar16 + 1;
      *pcVar16 = cVar2;
      cVar2 = pcVar20[1];
      pcVar6 = pcVar20 + 1;
    } while (cVar2 != '\0' && cVar2 != ':');
    if ((cVar2 != '\0') && ((char *)*param_3 != pcVar17)) {
      *pcVar17 = '\0';
      pbVar21 = (byte *)(pcVar16 + 2);
      lVar10 = *param_3;
      if (uVar22 < (ulong)((long)pbVar21 - lVar10)) goto LAB_0077f7e1;
      if ((param_2 == 0) || (iVar4 = thunk_FUN_007a30f0(), iVar4 == 0)) {
        uVar8 = (ulong)(byte)pcVar20[2];
        uVar22 = uVar22 - ((long)pbVar21 - lVar10);
        pbVar23 = (byte *)(pcVar20 + 2);
        goto LAB_0077f530;
      }
LAB_0077f41e:
      bVar25 = true;
    }
  }
  goto LAB_0077f3d8;
code_r0x0077f707:
  if (*pbVar23 == 0xff) {
    puVar7 = (undefined1 *)FUN_00401200(pbVar11,&DAT_0082ea21);
    if (puVar7 != (undefined1 *)0x0) {
      *puVar7 = 0;
    }
    lVar12 = *(long *)(in_FS_OFFSET + -0x40);
    bVar3 = *pbVar11;
    do {
      bVar1 = *(byte *)(lVar12 + 1 + (long)(char)bVar3 * 2);
      while ((bVar1 & 0x20) == 0) {
        pbVar23 = pbVar21;
        if (bVar3 != 0x2c) {
          if (bVar3 == 0) goto LAB_0077f6c6;
          do {
            pbVar11 = pbVar11 + 1;
            *pbVar23 = bVar3;
            pbVar23 = pbVar23 + 1;
            bVar3 = *pbVar11;
            if (bVar3 == 0) goto LAB_0077f76f;
          } while (bVar3 != 0x2c);
        }
        pbVar11 = pbVar11 + 1;
LAB_0077f76f:
        if (pbVar21 == pbVar23) {
          bVar3 = *pbVar11;
        }
        else {
          *pbVar23 = 0;
          lVar12 = (long)(pbVar23 + 1) - (long)pbVar21;
          if (uVar22 < lVar12 + 8U) goto LAB_0077f7cf;
          param_3[1] = param_3[1] + 1;
          uVar22 = (uVar22 - 8) - lVar12;
          bVar3 = *pbVar11;
          pbVar21 = pbVar23 + 1;
        }
        if (bVar3 == 0) goto LAB_0077f6c6;
        lVar12 = *(long *)(in_FS_OFFSET + -0x40);
        bVar1 = *(byte *)(lVar12 + 1 + (long)(char)bVar3 * 2);
      }
      bVar3 = pbVar11[1];
      pbVar11 = pbVar11 + 1;
    } while( true );
  }
LAB_0077f7cf:
  FUN_007104f0(lVar10);
  FUN_006fd190(pbVar9);
  goto LAB_0077f7e1;
LAB_0077f530:
  do {
    bVar3 = *(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(char)uVar8 * 2);
    while ((bVar3 & 0x20) != 0) {
      uVar8 = (ulong)(char)pbVar23[1];
      pbVar23 = pbVar23 + 1;
      bVar3 = *(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + uVar8 * 2);
    }
    if ((char)uVar8 == '\0') break;
    pbVar9 = pbVar21;
    if ((char)uVar8 == ',') goto LAB_0077f5f6;
    do {
      pbVar24 = pbVar23;
      pbVar11 = pbVar9;
      pbVar23 = pbVar24 + 1;
      pbVar9 = pbVar11 + 1;
      *pbVar11 = (byte)uVar8;
      bVar3 = *pbVar23;
      uVar8 = (ulong)bVar3;
      if (bVar3 == 0) break;
    } while (bVar3 != 0x2c);
    if (pbVar21 != pbVar9) {
      *pbVar9 = 0;
      if (bVar3 != 0) {
        pbVar23 = pbVar24 + 2;
      }
      iVar4 = thunk_FUN_00712ab0(pbVar21,":include:",9);
      if (iVar4 == 0) {
        pbVar9 = (byte *)FUN_007b0710(pbVar21 + 9);
        if ((pbVar9 == (byte *)0x0) || (lVar10 = FUN_007128a0(pbVar23), lVar10 == 0)) {
          uVar8 = (ulong)*pbVar23;
        }
        else {
LAB_0077f6c6:
          if ((*pbVar9 & 0x10) == 0) {
            if (uVar22 < 2) goto LAB_0077f7cf;
            pbVar23 = pbVar21 + (uVar22 - 1);
            *pbVar23 = 0xff;
            pbVar11 = (byte *)FUN_00703150(pbVar21,uVar22 & 0xffffffff,pbVar9);
            if (pbVar11 != (byte *)0x0) goto code_r0x0077f707;
          }
          else {
            pbVar23 = pbVar21 + (uVar22 - 1);
          }
          FUN_006fd190(pbVar9);
          *pbVar23 = 0;
          thunk_FUN_00712b50(pbVar21,lVar10,uVar22);
          FUN_007104f0(lVar10);
          if (*pbVar23 != 0) goto LAB_0077f7e1;
          uVar8 = (ulong)*pbVar21;
          pbVar23 = pbVar21;
        }
      }
      else {
        lVar10 = (long)(pbVar11 + 2) - (long)pbVar21;
        if (uVar22 < lVar10 + 8U) goto LAB_0077f7e1;
        param_3[1] = param_3[1] + 1;
        uVar8 = (ulong)*pbVar23;
        uVar22 = (uVar22 - 8) - lVar10;
        pbVar21 = pbVar11 + 2;
      }
    }
LAB_0077f5f6:
  } while ((char)uVar8 != '\0');
  pbVar23 = *(byte **)(param_1 + 8);
  if (pbVar23 < *(byte **)(param_1 + 0x10)) {
    *(byte **)(param_1 + 8) = pbVar23 + 1;
    uVar5 = (uint)*pbVar23;
    bVar25 = false;
  }
  else {
    uVar5 = FUN_007067b0(param_1);
    bVar25 = uVar5 == 0xffffffff;
  }
  if ((uVar5 == 10) || (bVar25)) {
    if (uVar5 == 0xffffffff) goto LAB_0077f841;
  }
  else if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(int)uVar5 * 2) & 0x20) != 0) {
    pbVar21[uVar22 - 1] = 0xff;
    pbVar23 = (byte *)FUN_00703150(pbVar21,uVar22 & 0xffffffff,param_1);
    if (pbVar23 == (byte *)0x0) {
      *pbVar21 = 0;
      pbVar23 = pbVar21;
    }
    else {
      if (pbVar21[uVar22 - 1] != 0xff) goto LAB_0077f7e1;
      puVar7 = (undefined1 *)FUN_00401200(pbVar23,&DAT_0082ea21);
      if (puVar7 != (undefined1 *)0x0) {
        *puVar7 = 0;
      }
      uVar8 = (ulong)*pbVar23;
    }
    goto LAB_0077f530;
  }
  FUN_006fe9b0(uVar5,param_1);
LAB_0077f841:
  lVar12 = param_3[1];
  lVar10 = *param_3;
  plVar14 = (long *)((ulong)(pbVar21 + 7) & 0xfffffffffffffff8);
  param_3[2] = (long)plVar14;
  if (lVar12 != 0) {
    plVar18 = plVar14;
    do {
      plVar19 = plVar18 + 1;
      lVar15 = thunk_FUN_007129d0(lVar10);
      lVar10 = lVar10 + 1 + lVar15;
      *plVar18 = lVar10;
      plVar18 = plVar19;
    } while (plVar14 + lVar12 != plVar19);
    return 1;
  }
  return 2;
}

