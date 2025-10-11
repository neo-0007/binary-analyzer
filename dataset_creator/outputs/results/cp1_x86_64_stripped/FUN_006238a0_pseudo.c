
undefined8 FUN_006238a0(int param_1,uint param_2,long param_3,byte *param_4,byte *param_5)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  long in_FS_OFFSET;
  long local_d8;
  uint local_b8;
  int local_9c;
  byte *local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  byte *local_58;
  undefined1 local_50;
  undefined1 local_4f;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = 0;
  local_98 = (byte *)0x0;
  if (param_1 == 1) {
    uVar6 = param_3 + 0xb8b1aabcbcd4d500;
    bVar1 = uVar6 < 2;
    bVar4 = param_2 == 6 && bVar1;
    if (param_2 == 6 && bVar1) {
      local_d8 = *(long *)(param_4 + -0x18);
      pbVar8 = *(byte **)(param_4 + -0x10);
      pbVar20 = (byte *)(ulong)*(uint *)(param_4 + -0x24);
      if (pbVar8 != (byte *)0x0) {
LAB_00623af0:
        if ((int)pbVar20 < 0) {
          FUN_006237c0(param_5,local_d8,&local_78);
          local_68 = FUN_00623750(local_50,param_5);
          uVar7 = FUN_00623750(local_50,param_5);
          *(undefined8 *)(param_4 + -0x10) = uVar7;
        }
        goto LAB_00623b00;
      }
    }
    else {
      local_d8 = FUN_006ccea0(param_5);
      if (local_d8 == 0) goto LAB_00623b42;
      pbVar8 = (byte *)FUN_006237c0(param_5,local_d8,&local_78);
      local_68 = FUN_00623750(local_50,param_5);
      lVar9 = FUN_006cce70(param_5,&local_9c);
      uVar10 = lVar9 - (ulong)(local_9c == 0);
      if (pbVar8 < local_58) {
        do {
          uVar3 = local_4f;
          uVar7 = FUN_00623750(local_4f,0);
          uVar7 = FUN_006234b0(uVar3,uVar7,pbVar8,&local_90);
          uVar3 = local_4f;
          uVar11 = FUN_00623750(local_4f,0);
          uVar7 = FUN_006234b0(uVar3,uVar11,uVar7,&local_88);
          uVar3 = local_4f;
          uVar11 = FUN_00623750(local_4f,0);
          pbVar8 = (byte *)FUN_006234b0(uVar3,uVar11,uVar7);
          uVar18 = 0;
          bVar13 = 0;
          do {
            bVar14 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            bVar2 = bVar13 & 0x3f;
            bVar13 = bVar13 + 7;
            uVar18 = uVar18 | (ulong)(bVar14 & 0x7f) << bVar2;
          } while ((char)bVar14 < '\0');
          if (uVar10 < (ulong)(local_90 + local_78)) break;
          if (uVar10 < (ulong)(local_90 + local_78 + local_88)) {
            if (local_80 == 0) goto LAB_00623b42;
            pbVar8 = (byte *)(local_80 + local_70);
            if (uVar18 == 0) {
              if (pbVar8 == (byte *)0x0) goto LAB_00623b42;
              goto LAB_00623b8f;
            }
            pbVar19 = local_58 + (uVar18 - 1);
            if (pbVar8 == (byte *)0x0) goto LAB_00623b42;
            if (pbVar19 == (byte *)0x0) goto LAB_00623b8f;
            local_b8 = param_2 & 8;
            if ((param_2 & 8) == 0) {
              if (uVar6 < 2) {
                local_98 = param_4 + 0x20;
                if ((*param_4 & 1) != 0) {
                  local_98 = *(byte **)(param_4 + -0x50);
                }
                ppuVar12 = *(undefined ***)(local_98 + -0x70);
              }
              else {
                ppuVar12 = &PTR_PTR_00933a50;
              }
            }
            else {
              ppuVar12 = &PTR_PTR_00933a40;
            }
            goto LAB_00623c50;
          }
        } while (pbVar8 < local_58);
      }
      if ((param_2 & 1) != 0) {
        pbVar8 = (byte *)0x0;
        pbVar19 = (byte *)0x0;
        pbVar20 = (byte *)0x0;
LAB_00623ab3:
        uVar7 = 6;
        if (uVar6 < 2) {
LAB_00623ac4:
          *(long *)(param_4 + -0x18) = local_d8;
          *(int *)(param_4 + -0x24) = (int)pbVar20;
          *(byte **)(param_4 + -8) = local_98;
          uVar7 = 6;
          *(byte **)(param_4 + -0x20) = pbVar19;
          *(byte **)(param_4 + -0x10) = pbVar8;
        }
        goto LAB_00623945;
      }
      if (((param_2 & 8) != 0) || (1 < uVar6)) {
                    /* WARNING: Subroutine does not return */
        FUN_00623f30();
      }
    }
    FUN_006c2df0(param_4);
  }
  uVar7 = 3;
  goto LAB_00623945;
LAB_00623c50:
  pbVar20 = (byte *)0x0;
  uVar15 = 0;
  pbVar17 = pbVar19;
  do {
    bVar13 = *pbVar17;
    pbVar17 = pbVar17 + 1;
    bVar14 = (byte)uVar15;
    uVar15 = uVar15 + 7;
    pbVar20 = (byte *)((ulong)pbVar20 | (ulong)(bVar13 & 0x7f) << (bVar14 & 0x3f));
  } while ((char)bVar13 < '\0');
  if ((uVar15 < 0x40) && ((bVar13 & 0x40) != 0)) {
    pbVar20 = (byte *)((ulong)pbVar20 | -(1L << ((byte)uVar15 & 0x3f)));
  }
  uVar10 = 0;
  uVar15 = 0;
  pbVar16 = pbVar17;
  do {
    bVar13 = *pbVar16;
    pbVar16 = pbVar16 + 1;
    bVar14 = (byte)uVar15;
    uVar15 = uVar15 + 7;
    uVar10 = uVar10 | (ulong)(bVar13 & 0x7f) << (bVar14 & 0x3f);
  } while ((char)bVar13 < '\0');
  if ((uVar15 < 0x40) && ((bVar13 & 0x40) != 0)) {
    uVar10 = uVar10 | -(1L << ((byte)uVar15 & 0x3f));
  }
  if (pbVar20 == (byte *)0x0) {
    bVar4 = true;
  }
  else if ((long)pbVar20 < 1) {
    if ((bVar1 && local_b8 == 0) && (ppuVar12 != (undefined **)0x0)) goto LAB_00623db0;
    uVar18 = 0;
    bVar13 = 0;
    pbVar16 = (byte *)(~(ulong)pbVar20 + local_60);
    do {
      bVar14 = *pbVar16;
      pbVar16 = pbVar16 + 1;
      bVar2 = bVar13 & 0x3f;
      bVar13 = bVar13 + 7;
      uVar18 = uVar18 | (ulong)(bVar14 & 0x7f) << bVar2;
    } while ((char)bVar14 < '\0');
    if (uVar18 == 0) {
LAB_00623d72:
      if ((param_2 & 1) != 0) goto LAB_00623ab3;
      if (local_b8 != 0) goto LAB_00623da1;
      while( true ) {
        if (uVar6 < 2) goto LAB_00623af0;
LAB_00623da1:
        if (-1 < (int)pbVar20) goto LAB_00623b00;
                    /* try { // try from 00623daa to 00623dae has its CatchHandler @ 00623e64 */
        FUN_00623fb0();
        pbVar17 = param_5;
        pbVar19 = pbVar20;
        pbVar20 = pbVar8;
LAB_00623db0:
        cVar5 = FUN_006236c0(&local_78,ppuVar12,local_98);
        if (cVar5 != '\0') break;
        if ((param_2 & 1) != 0) goto LAB_00623ac4;
      }
    }
  }
  else {
    lVar9 = FUN_00623600(&local_78,pbVar20);
    if ((lVar9 == 0) ||
       ((ppuVar12 != (undefined **)0x0 &&
        (cVar5 = FUN_00623430(lVar9,ppuVar12,&local_98), cVar5 != '\0')))) goto LAB_00623d72;
  }
  if (uVar10 == 0) goto LAB_00623df0;
  pbVar19 = pbVar17 + uVar10;
  goto LAB_00623c50;
LAB_00623df0:
  if (bVar4) {
LAB_00623b8f:
    pbVar20 = (byte *)(ulong)(param_2 & 1);
    if ((param_2 & 1) == 0) {
LAB_00623b00:
      FUN_006cce10(param_5,0,param_4);
      FUN_006cce10(param_5,1,(long)(int)pbVar20);
      FUN_006cce90(param_5,pbVar8);
      uVar7 = 7;
      goto LAB_00623945;
    }
  }
LAB_00623b42:
  uVar7 = 8;
LAB_00623945:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar7;
}

