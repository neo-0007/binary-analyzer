
/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte * FUN_00715310(undefined1 *param_1,byte *param_2,byte *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte bVar21;
  byte *pbVar22;
  byte bVar23;
  long *plVar24;
  undefined1 *puVar25;
  long *plVar27;
  uint *puVar28;
  byte *pbVar29;
  byte *pbVar30;
  ulong uVar31;
  uint uVar32;
  long lVar33;
  byte *pbVar34;
  byte *pbVar35;
  uint uVar36;
  long lVar37;
  long in_FS_OFFSET;
  bool bVar38;
  undefined1 local_40f8 [16376];
  undefined8 local_100;
  long local_f8;
  uint local_ec;
  ulong local_e8;
  byte *local_e0;
  byte *local_d8;
  long local_d0;
  byte *local_c8;
  byte *local_c0;
  undefined8 local_b8;
  byte *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  byte *local_98;
  byte *local_90;
  byte *local_88;
  byte *local_80;
  byte *local_78;
  undefined1 *local_70;
  byte *local_68;
  byte *local_60;
  byte *local_58;
  undefined1 local_50 [5];
  undefined4 uStack_4b;
  byte local_47 [2];
  undefined2 uStack_45;
  undefined1 auStack_43 [19];
  undefined1 *puVar26;
  
  plVar27 = &local_f8;
  plVar24 = &local_f8;
  local_70 = param_1;
  local_a0 = param_2;
  local_68 = param_3;
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  auStack_43[3] = (undefined1)lVar4;
  uVar7 = auStack_43._0_4_;
  lVar33 = *(long *)(param_4 + 0x18);
  local_88 = (byte *)(ulong)*(uint *)(lVar33 + 0x40);
  auStack_43._3_8_ = lVar4;
  if ((byte *)(ulong)*(uint *)(lVar33 + 0x40) == (byte *)0x0) {
    local_100 = 0x715525;
    _local_50 = (byte *)thunk_FUN_007129d0(param_2);
    plVar27 = &local_f8;
    if (local_68 != (byte *)0x0) {
      pbVar29 = local_68;
      if (_local_50 + 1 <= local_68) {
        pbVar29 = _local_50 + 1;
      }
      local_100 = 0x715552;
      thunk_FUN_007a3070(local_70,local_a0,pbVar29);
      plVar27 = &local_f8;
    }
  }
  else {
    if (*param_2 != 0) {
      lVar4 = *(long *)(lVar33 + 0x58);
      local_d0 = *(long *)(lVar33 + 0x48);
      local_58 = *(byte **)(lVar33 + 0x60);
      local_80 = *(byte **)(lVar33 + 0x50);
      local_60 = *(byte **)(lVar33 + 0x68);
      if (((ulong)*(byte **)(lVar33 + 0x50) & 3) != 0) {
                    /* WARNING: Subroutine does not return */
        local_100 = 0x715578;
        FUN_006e2220("((uintptr_t) l_data.table) % __alignof__ (l_data.table[0]) == 0","strxfrm_l.c"
                     ,0x2c0,"__strxfrm_l");
      }
      if (((ulong)*(byte **)(lVar33 + 0x68) & 3) != 0) {
                    /* WARNING: Subroutine does not return */
        local_100 = 0x715597;
        FUN_006e2220("((uintptr_t) l_data.indirect) % __alignof__ (l_data.indirect[0]) == 0",
                     "strxfrm_l.c",0x2c3,"__strxfrm_l");
      }
      plVar6 = &local_f8;
      while (plVar24 != (long *)local_40f8) {
        plVar27 = (long *)((long)plVar6 + -0x1000);
        *(undefined8 *)((long)plVar6 + -8) = *(undefined8 *)((long)plVar6 + -8);
        plVar24 = (long *)((long)plVar6 + -0x1000);
        plVar6 = (long *)((long)plVar6 + -0x1000);
      }
      puVar25 = (undefined1 *)((long)plVar27 + -0x10);
      *(undefined8 *)((long)plVar27 + -8) = *(undefined8 *)((long)plVar27 + -8);
      uVar12 = (ulong)((long)plVar27 + -1) & 0xfffffffffffffff0;
      puVar26 = (undefined1 *)((long)plVar27 + -0x10);
      puVar2 = (undefined1 *)((long)plVar27 + -0x10);
      while (puVar26 != (undefined1 *)((long)plVar27 + -0x1010)) {
        puVar25 = puVar2 + -0x1000;
        *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
        puVar26 = puVar2 + -0x1000;
        puVar2 = puVar2 + -0x1000;
      }
      *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
      local_78 = (byte *)((ulong)(puVar25 + -1) & 0xfffffffffffffff0);
      pbVar29 = local_a0;
      pbVar22 = (byte *)0x0;
LAB_0071541f:
      pbVar34 = pbVar29 + 1;
      uVar9 = *(uint *)(local_80 + (ulong)*pbVar29 * 4);
      if ((long)(int)uVar9 < 0) {
        puVar28 = (uint *)(local_58 + -(long)(int)uVar9);
LAB_00715441:
        do {
          uVar9 = *puVar28;
          bVar21 = (byte)puVar28[1];
          while( true ) {
            uVar31 = (ulong)bVar21;
            if ((int)uVar9 < 0) break;
            if (uVar31 == 0) {
LAB_00715669:
              pbVar34 = pbVar34 + uVar31;
              goto LAB_007155b2;
            }
            uVar19 = 0;
            while (*(byte *)((long)puVar28 + uVar19 + 5) == pbVar29[uVar19 + 1]) {
              uVar19 = uVar19 + 1;
              if (uVar31 == uVar19) goto LAB_00715669;
            }
            puVar28 = (uint *)((long)puVar28 + uVar31 + 5);
            uVar9 = bVar21 + 1 & 3;
            if (uVar9 == 0) goto LAB_00715441;
            puVar28 = (uint *)((long)puVar28 + (4 - (ulong)uVar9));
            uVar9 = *puVar28;
            bVar21 = (byte)puVar28[1];
          }
          if (uVar31 == 0) {
LAB_007155a0:
            lVar33 = 0;
            goto LAB_007155a2;
          }
          uVar19 = 0;
          while( true ) {
            bVar21 = *(byte *)((long)puVar28 + uVar19 + 5);
            if (bVar21 != pbVar29[uVar19 + 1]) break;
            uVar19 = uVar19 + 1;
            if (uVar31 == uVar19) goto LAB_007155a0;
          }
          if (bVar21 <= pbVar29[uVar19 + 1]) {
            uVar19 = 0;
            while (*(byte *)((long)puVar28 + uVar19 + 5 + uVar31) == pbVar29[uVar19 + 1]) {
              uVar19 = uVar19 + 1;
              if (uVar31 == uVar19) goto LAB_0071561f;
            }
            if ((uVar31 == uVar19) ||
               (pbVar34[uVar19] <= *(byte *)((long)puVar28 + uVar19 + uVar31 + 5)))
            goto LAB_0071561f;
          }
          puVar28 = (uint *)((long)puVar28 + (uVar31 * 2 - (ulong)((int)(uVar31 * 2) + 1U & 3)) + 9)
          ;
        } while( true );
      }
      goto LAB_007155b2;
    }
    _local_50 = (byte *)0x0;
    plVar27 = &local_f8;
    if (param_3 != (byte *)0x0) {
      *param_1 = 0;
      plVar27 = &local_f8;
    }
  }
  goto LAB_007154f7;
LAB_00715673:
  local_c8 = (byte *)0x0;
  local_b8 = (byte *)0x0;
  local_78[0xfff] = 0;
LAB_00715697:
  auStack_43._0_4_ = uVar7;
  uVar7 = auStack_43._0_4_;
  bVar21 = *local_a0;
  iVar17 = *(int *)(local_80 + (ulong)bVar21 * 4);
  uVar12 = (ulong)iVar17;
  if ((long)uVar12 < 0) {
    pbVar29 = local_58 + -uVar12;
LAB_007156c9:
    do {
      bVar23 = pbVar29[4];
      iVar17 = *(int *)pbVar29;
      while (uVar31 = (ulong)bVar23, -1 < iVar17) {
        if (uVar31 == 0) goto LAB_00715785;
        uVar19 = 0;
        while (pbVar29[uVar19 + 5] == local_a0[uVar19 + 1]) {
          uVar19 = uVar19 + 1;
          if (uVar31 == uVar19) goto LAB_00715785;
        }
        pbVar29 = pbVar29 + uVar31 + 5;
        uVar9 = bVar23 + 1 & 3;
        if (uVar9 == 0) goto LAB_007156c9;
        pbVar29 = pbVar29 + (4 - (ulong)uVar9);
        bVar23 = pbVar29[4];
        iVar17 = *(int *)pbVar29;
      }
      if (uVar31 == 0) {
LAB_00715775:
        lVar33 = 0;
        goto LAB_00715777;
      }
      uVar19 = 0;
      while( true ) {
        if (pbVar29[uVar19 + 5] != local_a0[uVar19 + 1]) break;
        uVar19 = uVar19 + 1;
        if (uVar31 == uVar19) goto LAB_00715775;
      }
      if (pbVar29[uVar19 + 5] <= local_a0[uVar19 + 1]) {
        uVar19 = 0;
        while (pbVar29[uVar19 + 5 + uVar31] == local_a0[uVar19 + 1]) {
          uVar19 = uVar19 + 1;
          if (uVar31 == uVar19) goto LAB_007163b4;
        }
        if ((uVar31 == uVar19) || (local_a0[uVar19 + 1] <= pbVar29[uVar19 + uVar31 + 5]))
        goto LAB_007163b4;
      }
      pbVar29 = pbVar29 + (uVar31 * 2 - (ulong)((int)(uVar31 * 2) + 1U & 3)) + 9;
    } while( true );
  }
  goto LAB_00715785;
LAB_007163b4:
  uVar18 = 0;
  uVar19 = uVar18;
  if (pbVar29[5] == local_a0[1]) {
    do {
      uVar18 = uVar19 + 1;
      lVar14 = uVar19 + 2;
      lVar33 = uVar19 + 6;
      uVar19 = uVar18;
    } while (pbVar29[lVar33] == local_a0[lVar14]);
  }
  lVar33 = 0;
  do {
    lVar14 = uVar18 + 5;
    lVar37 = uVar18 + 1;
    uVar18 = uVar18 + 1;
    lVar33 = (long)(int)((uint)local_a0[lVar37] - (uint)pbVar29[lVar14]) + lVar33 * 0x100;
  } while (uVar18 < uVar31);
LAB_00715777:
  iVar17 = *(int *)(local_60 + (lVar33 - iVar17) * 4);
LAB_00715785:
  lVar33 = auStack_43._3_8_;
  if ((*(byte *)((ulong)(iVar17 >> 0x18 & 0xff) * (long)local_88 + local_d0 +
                (long)(int)(uint)local_b8) & 4) == 0) {
    if (bVar21 != 0) {
      local_90 = (byte *)0x0;
      local_d8 = local_b8 + local_d0;
      _local_50 = local_c8;
      pbVar29 = (byte *)0x0;
      pbVar22 = local_a0;
LAB_00716742:
      local_78 = pbVar22 + 1;
      if ((long)uVar12 < 0) {
        pbVar34 = local_58 + -uVar12;
LAB_0071675a:
        do {
          iVar17 = *(int *)pbVar34;
          bVar21 = pbVar34[4];
          while( true ) {
            uVar31 = (ulong)bVar21;
            uVar12 = (ulong)iVar17;
            if (iVar17 < 0) break;
            if (uVar31 == 0) {
LAB_00717925:
              local_78 = local_78 + uVar31;
              goto LAB_00716816;
            }
            uVar19 = 0;
            while (pbVar34[uVar19 + 5] == pbVar22[uVar19 + 1]) {
              uVar19 = uVar19 + 1;
              if (uVar31 == uVar19) goto LAB_00717925;
            }
            pbVar34 = pbVar34 + uVar31 + 5;
            uVar9 = bVar21 + 1 & 3;
            if (uVar9 == 0) goto LAB_0071675a;
            pbVar34 = pbVar34 + (4 - (ulong)uVar9);
            iVar17 = *(int *)pbVar34;
            bVar21 = pbVar34[4];
          }
          if (uVar31 == 0) {
LAB_00716804:
            lVar14 = 0;
            goto LAB_00716807;
          }
          uVar19 = 0;
          while( true ) {
            if (pbVar34[uVar19 + 5] != pbVar22[uVar19 + 1]) break;
            uVar19 = uVar19 + 1;
            if (uVar31 == uVar19) goto LAB_00716804;
          }
          if (pbVar34[uVar19 + 5] <= pbVar22[uVar19 + 1]) {
            uVar19 = 0;
            while (pbVar34[uVar19 + 5 + uVar31] == pbVar22[uVar19 + 1]) {
              uVar19 = uVar19 + 1;
              if (uVar31 == uVar19) goto LAB_007168e8;
            }
            if ((uVar31 == uVar19) || (local_78[uVar19] <= pbVar34[uVar19 + uVar31 + 5]))
            goto LAB_007168e8;
          }
          pbVar34 = pbVar34 + (uVar31 * 2 - (ulong)((int)(uVar31 * 2) + 1U & 3)) + 9;
        } while( true );
      }
      goto LAB_00716816;
    }
  }
  else if (bVar21 != 0) {
    pbVar29 = (byte *)0x0;
    local_90 = (byte *)0x0;
    local_78 = (byte *)CONCAT44(local_78._4_4_,1);
    _local_50 = local_c8;
    local_d8 = local_b8 + local_d0;
    local_a8 = local_47;
    pbVar22 = local_a0;
    auStack_43._0_4_ = uVar7;
LAB_007157f8:
    auStack_43._3_8_ = lVar33;
    uVar7 = auStack_43._0_4_;
    local_b0 = pbVar22 + 1;
    if ((long)uVar12 < 0) {
      pbVar34 = local_58 + -uVar12;
LAB_00715813:
      do {
        iVar17 = *(int *)pbVar34;
        bVar21 = pbVar34[4];
        while( true ) {
          uVar31 = (ulong)bVar21;
          uVar12 = (ulong)iVar17;
          if (iVar17 < 0) break;
          if (uVar31 == 0) {
LAB_00717919:
            local_b0 = local_b0 + uVar31;
            goto LAB_007158c8;
          }
          uVar19 = 0;
          while (pbVar34[uVar19 + 5] == pbVar22[uVar19 + 1]) {
            uVar19 = uVar19 + 1;
            if (uVar31 == uVar19) goto LAB_00717919;
          }
          pbVar34 = pbVar34 + uVar31 + 5;
          uVar9 = bVar21 + 1 & 3;
          if (uVar9 == 0) goto LAB_00715813;
          pbVar34 = pbVar34 + (4 - (ulong)uVar9);
          iVar17 = *(int *)pbVar34;
          bVar21 = pbVar34[4];
        }
        if (uVar31 == 0) {
LAB_007158b3:
          lVar33 = 0;
          goto LAB_007158b6;
        }
        uVar19 = 0;
        while( true ) {
          if (pbVar34[uVar19 + 5] != pbVar22[uVar19 + 1]) break;
          uVar19 = uVar19 + 1;
          if (uVar31 == uVar19) goto LAB_007158b3;
        }
        if (pbVar34[uVar19 + 5] <= pbVar22[uVar19 + 1]) {
          uVar19 = 0;
          while (pbVar34[uVar19 + 5 + uVar31] == pbVar22[uVar19 + 1]) {
            uVar19 = uVar19 + 1;
            if (uVar31 == uVar19) goto LAB_00715a93;
          }
          if ((uVar31 == uVar19) || (local_b0[uVar19] <= pbVar34[uVar19 + uVar31 + 5]))
          goto LAB_00715a93;
        }
        pbVar34 = pbVar34 + (uVar31 * 2 - (ulong)((int)(uVar31 * 2) + 1U & 3)) + 9;
      } while( true );
    }
    goto LAB_007158c8;
  }
  _local_50 = local_c8;
LAB_00716f58:
  auStack_43._0_4_ = uVar7;
  auStack_43._3_8_ = lVar33;
  uVar7 = auStack_43._0_4_;
  local_b8 = local_b8 + 1;
  if (_local_50 < local_68) {
    local_70[(long)_local_50] = local_b8 < local_88;
  }
  if (local_88 == local_b8) goto LAB_00718bb2;
  local_c8 = _local_50 + 1;
  goto LAB_00715697;
LAB_007168e8:
  uVar18 = 0;
  uVar19 = uVar18;
  if (pbVar22[1] == pbVar34[5]) {
    do {
      uVar18 = uVar19 + 1;
      lVar37 = uVar19 + 2;
      lVar14 = uVar19 + 6;
      uVar19 = uVar18;
    } while (pbVar34[lVar14] == pbVar22[lVar37]);
  }
  lVar14 = 0;
  do {
    lVar3 = uVar18 + 1;
    lVar37 = uVar18 + 5;
    uVar18 = uVar18 + 1;
    lVar14 = lVar14 * 0x100 + (long)(int)((uint)pbVar22[lVar3] - (uint)pbVar34[lVar37]);
  } while (uVar18 < uVar31);
LAB_00716807:
  local_78 = local_78 + uVar31;
  uVar12 = (ulong)*(uint *)(local_60 + (lVar14 - uVar12) * 4);
LAB_00716816:
  uVar9 = (uint)uVar12 & 0xffffff;
  iVar17 = uVar9 + 1;
  pbVar34 = (byte *)(ulong)*(byte *)(lVar4 + (int)uVar9);
  if (0 < (int)(uint)local_b8) {
    iVar10 = 0;
    do {
      iVar16 = (int)pbVar34 + iVar17;
      iVar10 = iVar10 + 1;
      iVar17 = iVar16 + 1;
      pbVar34 = (byte *)(ulong)*(byte *)(lVar4 + iVar16);
    } while (iVar10 != (uint)local_b8);
  }
  if ((local_d8[(ulong)((int)(uint)uVar12 >> 0x18 & 0xff) * (long)local_88] & 1) == 0) {
    if (pbVar29 == (byte *)0x0) {
      pbVar29 = pbVar22;
    }
    local_90 = local_90 + (long)pbVar34;
    bVar21 = *local_78;
    goto joined_r0x00716943;
  }
  if (pbVar29 != (byte *)0x0) {
    if (local_90 != (byte *)0x0) {
      local_98 = (byte *)CONCAT44(local_98._4_4_,iVar17);
      pbVar22 = local_90;
LAB_00716a57:
      pbVar35 = pbVar29 + 1;
      uVar9 = *(uint *)(local_80 + (ulong)*pbVar29 * 4);
      if ((long)(int)uVar9 < 0) {
        puVar28 = (uint *)(local_58 + -(long)(int)uVar9);
LAB_00716a80:
        do {
          uVar9 = *puVar28;
          bVar21 = (byte)puVar28[1];
          while( true ) {
            uVar12 = (ulong)bVar21;
            if ((int)uVar9 < 0) break;
            if (uVar12 == 0) {
LAB_00716ee9:
              pbVar35 = pbVar35 + uVar12;
              goto LAB_00716b36;
            }
            uVar31 = 0;
            while (*(byte *)((long)puVar28 + uVar31 + 5) == pbVar29[uVar31 + 1]) {
              uVar31 = uVar31 + 1;
              if (uVar12 == uVar31) goto LAB_00716ee9;
            }
            puVar28 = (uint *)((long)puVar28 + uVar12 + 5);
            uVar9 = bVar21 + 1 & 3;
            if (uVar9 == 0) goto LAB_00716a80;
            puVar28 = (uint *)((long)puVar28 + (4 - (ulong)uVar9));
            uVar9 = *puVar28;
            bVar21 = (byte)puVar28[1];
          }
          if (uVar12 == 0) {
LAB_00716b24:
            lVar14 = 0;
            goto LAB_00716b27;
          }
          uVar31 = 0;
          while( true ) {
            bVar21 = *(byte *)((long)puVar28 + uVar31 + 5);
            if (bVar21 != pbVar29[uVar31 + 1]) break;
            uVar31 = uVar31 + 1;
            if (uVar12 == uVar31) goto LAB_00716b24;
          }
          if (bVar21 <= pbVar29[uVar31 + 1]) {
            uVar31 = 0;
            while (*(byte *)((long)puVar28 + uVar31 + 5 + uVar12) == pbVar29[uVar31 + 1]) {
              uVar31 = uVar31 + 1;
              if (uVar12 == uVar31) goto LAB_00716bde;
            }
            if ((uVar12 == uVar31) ||
               (pbVar35[uVar31] <= *(byte *)((long)puVar28 + uVar31 + uVar12 + 5)))
            goto LAB_00716bde;
          }
          puVar28 = (uint *)((long)puVar28 + (uVar12 * 2 - (ulong)((int)(uVar12 * 2) + 1U & 3)) + 9)
          ;
        } while( true );
      }
      goto LAB_00716b36;
    }
LAB_00716b8d:
    _local_50 = local_90 + (long)_local_50;
    local_90 = (byte *)0x0;
  }
  pbVar29 = _local_50 + (long)pbVar34;
  pbVar22 = pbVar29;
  if ((pbVar29 < local_68) && (pbVar35 = pbVar34 + -1, pbVar22 = _local_50, pbVar34 != (byte *)0x0))
  {
    puVar13 = (undefined8 *)(local_70 + (long)_local_50);
    lVar14 = (long)iVar17;
    if (((ulong)((long)puVar13 - (lVar4 + 1 + lVar14)) < 0xf) || (pbVar35 < (byte *)0x7)) {
      lVar14 = lVar14 - (long)_local_50;
      do {
        pbVar22 = _local_50 + lVar14 + lVar4;
        _local_50 = _local_50 + 1;
        (local_70 + -1)[(long)_local_50] = *pbVar22;
        pbVar22 = pbVar29;
      } while (pbVar29 != _local_50);
    }
    else if (pbVar35 < (byte *)0xf) {
      pbVar30 = (byte *)0x0;
LAB_00717461:
      *(undefined8 *)((long)puVar13 + (long)pbVar30) = *(undefined8 *)(pbVar30 + lVar14 + lVar4);
      pbVar30 = (byte *)((ulong)pbVar34 & 0xfffffffffffffff8);
      iVar17 = iVar17 + (int)pbVar30;
      _local_50 = _local_50 + (long)pbVar30;
      pbVar35 = pbVar35 + -(long)pbVar30;
      pbVar22 = pbVar29;
      if (pbVar30 != pbVar34) {
LAB_00717485:
        local_70[(long)_local_50] = *(undefined1 *)(lVar4 + iVar17);
        pbVar22 = pbVar29;
        if (pbVar35 != (byte *)0x0) {
          (local_70 + 1)[(long)_local_50] = *(undefined1 *)(lVar4 + (iVar17 + 1));
          if (pbVar35 != (byte *)0x1) {
            (local_70 + 2)[(long)_local_50] = *(undefined1 *)(lVar4 + (iVar17 + 2));
            if (pbVar35 != (byte *)0x2) {
              (local_70 + 3)[(long)_local_50] = *(undefined1 *)(lVar4 + (iVar17 + 3));
              if (pbVar35 != (byte *)0x3) {
                (local_70 + 4)[(long)_local_50] = *(undefined1 *)(lVar4 + (iVar17 + 4));
                if (pbVar35 != (byte *)0x4) {
                  (local_70 + 5)[(long)_local_50] = *(undefined1 *)(lVar4 + (iVar17 + 5));
                  if (pbVar35 != (byte *)0x5) {
                    (local_70 + 6)[(long)_local_50] = *(undefined1 *)(lVar4 + (iVar17 + 6));
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      puVar1 = (undefined8 *)(lVar4 + lVar14);
      uVar5 = puVar1[1];
      uVar12 = (ulong)pbVar34 >> 4;
      *puVar13 = *puVar1;
      puVar13[1] = uVar5;
      if (uVar12 != 1) {
        uVar5 = puVar1[3];
        puVar13[2] = puVar1[2];
        puVar13[3] = uVar5;
        if (uVar12 != 2) {
          uVar5 = puVar1[5];
          puVar13[4] = puVar1[4];
          puVar13[5] = uVar5;
          if (uVar12 != 3) {
            uVar5 = puVar1[7];
            puVar13[6] = puVar1[6];
            puVar13[7] = uVar5;
            if (uVar12 != 4) {
              uVar5 = puVar1[9];
              puVar13[8] = puVar1[8];
              puVar13[9] = uVar5;
              if (uVar12 != 5) {
                uVar5 = puVar1[0xb];
                puVar13[10] = puVar1[10];
                puVar13[0xb] = uVar5;
                if (uVar12 != 6) {
                  uVar5 = puVar1[0xd];
                  puVar13[0xc] = puVar1[0xc];
                  puVar13[0xd] = uVar5;
                  if (uVar12 != 7) {
                    uVar5 = puVar1[0xf];
                    puVar13[0xe] = puVar1[0xe];
                    puVar13[0xf] = uVar5;
                    if (uVar12 != 8) {
                      uVar5 = puVar1[0x11];
                      puVar13[0x10] = puVar1[0x10];
                      puVar13[0x11] = uVar5;
                      if (uVar12 != 9) {
                        uVar5 = puVar1[0x13];
                        puVar13[0x12] = puVar1[0x12];
                        puVar13[0x13] = uVar5;
                        if (uVar12 != 10) {
                          uVar5 = puVar1[0x15];
                          puVar13[0x14] = puVar1[0x14];
                          puVar13[0x15] = uVar5;
                          if (uVar12 != 0xb) {
                            uVar5 = puVar1[0x17];
                            puVar13[0x16] = puVar1[0x16];
                            puVar13[0x17] = uVar5;
                            if (uVar12 != 0xc) {
                              uVar5 = puVar1[0x19];
                              puVar13[0x18] = puVar1[0x18];
                              puVar13[0x19] = uVar5;
                              if (uVar12 != 0xd) {
                                uVar5 = puVar1[0x1b];
                                puVar13[0x1a] = puVar1[0x1a];
                                puVar13[0x1b] = uVar5;
                                if (uVar12 == 0xf) {
                                  uVar5 = puVar1[0x1d];
                                  puVar13[0x1c] = puVar1[0x1c];
                                  puVar13[0x1d] = uVar5;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      pbVar30 = (byte *)((ulong)pbVar34 & 0xfffffffffffffff0);
      iVar17 = iVar17 + (int)pbVar30;
      _local_50 = _local_50 + (long)pbVar30;
      pbVar35 = pbVar35 + -(long)pbVar30;
      pbVar22 = pbVar29;
      if (pbVar34 != pbVar30) {
        pbVar34 = pbVar34 + -(long)pbVar30;
        if ((byte *)0x6 < pbVar34 + -1) goto LAB_00717461;
        goto LAB_00717485;
      }
    }
  }
  _local_50 = pbVar22;
  pbVar29 = (byte *)0x0;
  bVar21 = *local_78;
joined_r0x00716943:
  if (bVar21 == 0) goto LAB_00716949;
  uVar12 = (ulong)*(int *)(local_80 + (ulong)bVar21 * 4);
  pbVar22 = local_78;
  goto LAB_00716742;
LAB_00716bde:
  uVar19 = 0;
  uVar31 = uVar19;
  if (*(byte *)((long)puVar28 + 5) == pbVar29[1]) {
    do {
      uVar19 = uVar31 + 1;
      lVar37 = uVar31 + 2;
      lVar14 = uVar31 + 6;
      uVar31 = uVar19;
    } while (*(byte *)((long)puVar28 + lVar14) == pbVar29[lVar37]);
  }
  lVar14 = 0;
  do {
    lVar3 = uVar19 + 1;
    lVar37 = uVar19 + 5;
    uVar19 = uVar19 + 1;
    lVar14 = lVar14 * 0x100 +
             (long)(int)((uint)pbVar29[lVar3] - (uint)*(byte *)((long)puVar28 + lVar37));
  } while (uVar19 < uVar12);
LAB_00716b27:
  pbVar35 = pbVar35 + uVar12;
  uVar9 = *(uint *)(local_60 + (lVar14 - (int)uVar9) * 4);
LAB_00716b36:
  iVar10 = (uVar9 & 0xffffff) + 1;
  uVar12 = (ulong)*(byte *)(lVar4 + (int)(uVar9 & 0xffffff));
  if (0 < (int)(uint)local_b8) {
    iVar16 = 0;
    do {
      iVar11 = (int)uVar12 + iVar10;
      iVar16 = iVar16 + 1;
      iVar10 = iVar11 + 1;
      uVar12 = (ulong)*(byte *)(lVar4 + iVar11);
    } while (iVar16 != (uint)local_b8);
  }
  pbVar29 = pbVar22 + (long)_local_50;
  if ((local_68 <= pbVar29) || (uVar12 == 0)) goto LAB_00716b77;
  lVar37 = (long)iVar10;
  lVar14 = (long)pbVar29 - uVar12;
  puVar13 = (undefined8 *)(local_70 + lVar14);
  if (((ulong)((long)puVar13 - (lVar4 + 1 + lVar37)) < 0xf) || (uVar12 - 1 < 7)) {
    lVar3 = uVar12 + lVar37;
    lVar14 = lVar14 - lVar37;
    do {
      local_70[lVar37 + lVar14] = *(undefined1 *)(lVar4 + lVar37);
      lVar37 = lVar37 + 1;
    } while (lVar3 != lVar37);
    goto LAB_00716b77;
  }
  if (uVar12 - 1 < 0xf) {
    uVar19 = 0;
    uVar31 = uVar12;
LAB_00716ddb:
    *(undefined8 *)(local_70 + lVar14 + uVar19) = *(undefined8 *)(lVar4 + uVar19 + lVar37);
    uVar19 = uVar31 & 0xfffffffffffffff8;
    iVar10 = iVar10 + (int)uVar19;
    uVar18 = uVar31 - uVar19;
    if (uVar19 == uVar31) goto LAB_00716b77;
    uVar15 = uVar18 - 1;
  }
  else {
    puVar1 = (undefined8 *)(lVar4 + lVar37);
    uVar5 = puVar1[1];
    uVar31 = uVar12 >> 4;
    *puVar13 = *puVar1;
    puVar13[1] = uVar5;
    if (uVar31 != 1) {
      uVar5 = puVar1[3];
      puVar13[2] = puVar1[2];
      puVar13[3] = uVar5;
      if (uVar31 != 2) {
        uVar5 = puVar1[5];
        puVar13[4] = puVar1[4];
        puVar13[5] = uVar5;
        if (uVar31 != 3) {
          uVar5 = puVar1[7];
          puVar13[6] = puVar1[6];
          puVar13[7] = uVar5;
          if (uVar31 != 4) {
            uVar5 = puVar1[9];
            puVar13[8] = puVar1[8];
            puVar13[9] = uVar5;
            if (uVar31 != 5) {
              uVar5 = puVar1[0xb];
              puVar13[10] = puVar1[10];
              puVar13[0xb] = uVar5;
              if (uVar31 != 6) {
                uVar5 = puVar1[0xd];
                puVar13[0xc] = puVar1[0xc];
                puVar13[0xd] = uVar5;
                if (uVar31 != 7) {
                  uVar5 = puVar1[0xf];
                  puVar13[0xe] = puVar1[0xe];
                  puVar13[0xf] = uVar5;
                  if (uVar31 != 8) {
                    uVar5 = puVar1[0x11];
                    puVar13[0x10] = puVar1[0x10];
                    puVar13[0x11] = uVar5;
                    if (uVar31 != 9) {
                      uVar5 = puVar1[0x13];
                      puVar13[0x12] = puVar1[0x12];
                      puVar13[0x13] = uVar5;
                      if (uVar31 != 10) {
                        uVar5 = puVar1[0x15];
                        puVar13[0x14] = puVar1[0x14];
                        puVar13[0x15] = uVar5;
                        if (uVar31 != 0xb) {
                          uVar5 = puVar1[0x17];
                          puVar13[0x16] = puVar1[0x16];
                          puVar13[0x17] = uVar5;
                          if (uVar31 != 0xc) {
                            uVar5 = puVar1[0x19];
                            puVar13[0x18] = puVar1[0x18];
                            puVar13[0x19] = uVar5;
                            if (uVar31 != 0xd) {
                              uVar5 = puVar1[0x1b];
                              puVar13[0x1a] = puVar1[0x1a];
                              puVar13[0x1b] = uVar5;
                              if (uVar31 == 0xf) {
                                uVar5 = puVar1[0x1d];
                                puVar13[0x1c] = puVar1[0x1c];
                                puVar13[0x1d] = uVar5;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar19 = uVar12 & 0xfffffffffffffff0;
    iVar10 = iVar10 + (int)uVar19;
    uVar18 = uVar12 - uVar19;
    if (uVar12 == uVar19) goto LAB_00716b77;
    uVar15 = uVar18 - 1;
    uVar31 = uVar18;
    if (6 < uVar15) goto LAB_00716ddb;
  }
  local_70[(long)pbVar29 - uVar18] = *(undefined1 *)(lVar4 + iVar10);
  if (uVar15 != 0) {
    local_70[(long)pbVar29 - uVar15] = *(undefined1 *)(lVar4 + (iVar10 + 1));
    if (uVar18 - 2 != 0) {
      local_70[(long)pbVar29 - (uVar18 - 2)] = *(undefined1 *)(lVar4 + (iVar10 + 2));
      if (uVar18 - 3 != 0) {
        local_70[(long)pbVar29 - (uVar18 - 3)] = *(undefined1 *)(lVar4 + (iVar10 + 3));
        if (uVar18 - 4 != 0) {
          local_70[(long)pbVar29 - (uVar18 - 4)] = *(undefined1 *)(lVar4 + (iVar10 + 4));
          if (uVar18 - 5 != 0) {
            local_70[(long)pbVar29 - (uVar18 - 5)] = *(undefined1 *)(lVar4 + (iVar10 + 5));
            if (uVar18 - 6 != 0) {
              local_70[(long)pbVar29 - (uVar18 - 6)] = *(undefined1 *)(lVar4 + (iVar10 + 6));
            }
          }
        }
      }
    }
  }
LAB_00716b77:
  pbVar22 = pbVar22 + -uVar12;
  pbVar29 = pbVar35;
  local_a8 = pbVar34;
  if (pbVar22 == (byte *)0x0) goto LAB_00716b8d;
  goto LAB_00716a57;
LAB_00716949:
  if (pbVar29 != (byte *)0x0) {
    pbVar22 = local_90;
    if (local_90 != (byte *)0x0) {
LAB_00716969:
      pbVar34 = pbVar29 + 1;
      uVar9 = *(uint *)(local_80 + (ulong)*pbVar29 * 4);
      if ((long)(int)uVar9 < 0) {
        puVar28 = (uint *)(local_58 + -(long)(int)uVar9);
LAB_0071698b:
        do {
          uVar9 = *puVar28;
          bVar21 = (byte)puVar28[1];
          while( true ) {
            uVar12 = (ulong)bVar21;
            if ((int)uVar9 < 0) break;
            if (uVar12 == 0) {
LAB_00718ba9:
              pbVar34 = pbVar34 + uVar12;
              goto LAB_00716f03;
            }
            uVar31 = 0;
            while (*(byte *)((long)puVar28 + uVar31 + 5) == pbVar29[uVar31 + 1]) {
              uVar31 = uVar31 + 1;
              if (uVar12 == uVar31) goto LAB_00718ba9;
            }
            puVar28 = (uint *)((long)puVar28 + uVar12 + 5);
            uVar9 = bVar21 + 1 & 3;
            if (uVar9 == 0) goto LAB_0071698b;
            puVar28 = (uint *)((long)puVar28 + (4 - (ulong)uVar9));
            uVar9 = *puVar28;
            bVar21 = (byte)puVar28[1];
          }
          if (uVar12 == 0) {
LAB_00716ef2:
            lVar14 = 0;
            goto LAB_00716ef4;
          }
          uVar31 = 0;
          while( true ) {
            bVar21 = *(byte *)((long)puVar28 + uVar31 + 5);
            if (bVar21 != pbVar29[uVar31 + 1]) break;
            uVar31 = uVar31 + 1;
            if (uVar12 == uVar31) goto LAB_00716ef2;
          }
          if (bVar21 <= pbVar29[uVar31 + 1]) {
            uVar31 = 0;
            while (*(byte *)((long)puVar28 + uVar31 + 5 + uVar12) == pbVar29[uVar31 + 1]) {
              uVar31 = uVar31 + 1;
              if (uVar12 == uVar31) goto LAB_00716fd7;
            }
            if ((uVar12 == uVar31) ||
               (pbVar34[uVar31] <= *(byte *)((long)puVar28 + uVar31 + uVar12 + 5)))
            goto LAB_00716fd7;
          }
          puVar28 = (uint *)((long)puVar28 + (uVar12 * 2 - (ulong)((int)(uVar12 * 2) + 1U & 3)) + 9)
          ;
        } while( true );
      }
      goto LAB_00716f03;
    }
LAB_00716f4d:
    _local_50 = _local_50 + (long)local_90;
  }
  goto LAB_00716f58;
LAB_00716fd7:
  uVar19 = 0;
  uVar31 = uVar19;
  if (*(byte *)((long)puVar28 + 5) == pbVar29[1]) {
    do {
      uVar19 = uVar31 + 1;
      lVar37 = uVar31 + 2;
      lVar14 = uVar31 + 6;
      uVar31 = uVar19;
    } while (*(byte *)((long)puVar28 + lVar14) == pbVar29[lVar37]);
  }
  lVar14 = 0;
  do {
    lVar37 = uVar19 + 5;
    lVar3 = uVar19 + 1;
    uVar19 = uVar19 + 1;
    lVar14 = (long)(int)((uint)pbVar29[lVar3] - (uint)*(byte *)((long)puVar28 + lVar37)) +
             lVar14 * 0x100;
  } while (uVar19 < uVar12);
LAB_00716ef4:
  pbVar34 = pbVar34 + uVar12;
  uVar9 = *(uint *)(local_60 + (lVar14 - (int)uVar9) * 4);
LAB_00716f03:
  iVar17 = (uVar9 & 0xffffff) + 1;
  uVar12 = (ulong)*(byte *)(lVar4 + (int)(uVar9 & 0xffffff));
  if (0 < (int)(uint)local_b8) {
    iVar10 = 0;
    do {
      iVar16 = (int)uVar12 + iVar17;
      iVar10 = iVar10 + 1;
      iVar17 = iVar16 + 1;
      uVar12 = (ulong)*(byte *)(lVar4 + iVar16);
    } while (iVar10 != (uint)local_b8);
  }
  pbVar29 = _local_50 + (long)pbVar22;
  if ((local_68 <= pbVar29) || (uVar12 == 0)) goto LAB_00716f44;
  lVar14 = (long)iVar17;
  lVar37 = (long)pbVar29 - uVar12;
  puVar13 = (undefined8 *)(local_70 + lVar37);
  if (((ulong)((long)puVar13 - (lVar4 + 1 + lVar14)) < 0xf) || (uVar12 - 1 < 7)) {
    lVar3 = uVar12 + lVar14;
    lVar37 = lVar37 - lVar14;
    do {
      local_70[lVar14 + lVar37] = *(undefined1 *)(lVar4 + lVar14);
      lVar14 = lVar14 + 1;
    } while (lVar3 != lVar14);
    goto LAB_00716f44;
  }
  if (uVar12 - 1 < 0xf) {
    uVar19 = 0;
    uVar31 = uVar12;
LAB_007171c8:
    *(undefined8 *)(local_70 + lVar37 + uVar19) = *(undefined8 *)(lVar4 + uVar19 + lVar14);
    uVar19 = uVar31 & 0xfffffffffffffff8;
    iVar17 = iVar17 + (int)uVar19;
    uVar18 = uVar31 - uVar19;
    if (uVar31 == uVar19) goto LAB_00716f44;
    uVar15 = uVar18 - 1;
  }
  else {
    puVar1 = (undefined8 *)(lVar4 + lVar14);
    uVar5 = puVar1[1];
    uVar31 = uVar12 >> 4;
    *puVar13 = *puVar1;
    puVar13[1] = uVar5;
    if (uVar31 != 1) {
      uVar5 = puVar1[3];
      puVar13[2] = puVar1[2];
      puVar13[3] = uVar5;
      if (uVar31 != 2) {
        uVar5 = puVar1[5];
        puVar13[4] = puVar1[4];
        puVar13[5] = uVar5;
        if (uVar31 != 3) {
          uVar5 = puVar1[7];
          puVar13[6] = puVar1[6];
          puVar13[7] = uVar5;
          if (uVar31 != 4) {
            uVar5 = puVar1[9];
            puVar13[8] = puVar1[8];
            puVar13[9] = uVar5;
            if (uVar31 != 5) {
              uVar5 = puVar1[0xb];
              puVar13[10] = puVar1[10];
              puVar13[0xb] = uVar5;
              if (uVar31 != 6) {
                uVar5 = puVar1[0xd];
                puVar13[0xc] = puVar1[0xc];
                puVar13[0xd] = uVar5;
                if (uVar31 != 7) {
                  uVar5 = puVar1[0xf];
                  puVar13[0xe] = puVar1[0xe];
                  puVar13[0xf] = uVar5;
                  if (uVar31 != 8) {
                    uVar5 = puVar1[0x11];
                    puVar13[0x10] = puVar1[0x10];
                    puVar13[0x11] = uVar5;
                    if (uVar31 != 9) {
                      uVar5 = puVar1[0x13];
                      puVar13[0x12] = puVar1[0x12];
                      puVar13[0x13] = uVar5;
                      if (uVar31 != 10) {
                        uVar5 = puVar1[0x15];
                        puVar13[0x14] = puVar1[0x14];
                        puVar13[0x15] = uVar5;
                        if (uVar31 != 0xb) {
                          uVar5 = puVar1[0x17];
                          puVar13[0x16] = puVar1[0x16];
                          puVar13[0x17] = uVar5;
                          if (uVar31 != 0xc) {
                            uVar5 = puVar1[0x19];
                            puVar13[0x18] = puVar1[0x18];
                            puVar13[0x19] = uVar5;
                            if (uVar31 != 0xd) {
                              uVar5 = puVar1[0x1b];
                              puVar13[0x1a] = puVar1[0x1a];
                              puVar13[0x1b] = uVar5;
                              if (uVar31 == 0xf) {
                                uVar5 = puVar1[0x1d];
                                puVar13[0x1c] = puVar1[0x1c];
                                puVar13[0x1d] = uVar5;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar19 = uVar12 & 0xfffffffffffffff0;
    iVar17 = iVar17 + (int)uVar19;
    uVar18 = uVar12 - uVar19;
    if (uVar19 == uVar12) goto LAB_00716f44;
    uVar15 = uVar18 - 1;
    uVar31 = uVar18;
    if (6 < uVar15) goto LAB_007171c8;
  }
  local_70[(long)pbVar29 - uVar18] = *(undefined1 *)(lVar4 + iVar17);
  if (uVar15 != 0) {
    local_70[(long)pbVar29 - uVar15] = *(undefined1 *)(lVar4 + (iVar17 + 1));
    if (uVar18 - 2 != 0) {
      local_70[(long)pbVar29 - (uVar18 - 2)] = *(undefined1 *)(lVar4 + (iVar17 + 2));
      if (uVar18 - 3 != 0) {
        local_70[(long)pbVar29 - (uVar18 - 3)] = *(undefined1 *)(lVar4 + (iVar17 + 3));
        if (uVar18 - 4 != 0) {
          local_70[(long)pbVar29 - (uVar18 - 4)] = *(undefined1 *)(lVar4 + (iVar17 + 4));
          if (uVar18 - 5 != 0) {
            local_70[(long)pbVar29 - (uVar18 - 5)] = *(undefined1 *)(lVar4 + (iVar17 + 5));
            if (uVar18 - 6 != 0) {
              local_70[(long)pbVar29 - (uVar18 - 6)] = *(undefined1 *)(lVar4 + (iVar17 + 6));
            }
          }
        }
      }
    }
  }
LAB_00716f44:
  pbVar22 = pbVar22 + -uVar12;
  pbVar29 = pbVar34;
  if (pbVar22 == (byte *)0x0) goto LAB_00716f4d;
  goto LAB_00716969;
LAB_00715a93:
  uVar18 = 0;
  uVar19 = uVar18;
  if (pbVar22[1] == pbVar34[5]) {
    do {
      uVar18 = uVar19 + 1;
      lVar14 = uVar19 + 2;
      lVar33 = uVar19 + 6;
      uVar19 = uVar18;
    } while (pbVar34[lVar33] == pbVar22[lVar14]);
  }
  lVar33 = 0;
  do {
    lVar37 = uVar18 + 1;
    lVar14 = uVar18 + 5;
    uVar18 = uVar18 + 1;
    lVar33 = lVar33 * 0x100 + (long)(int)((uint)pbVar22[lVar37] - (uint)pbVar34[lVar14]);
  } while (uVar18 < uVar31);
LAB_007158b6:
  local_b0 = local_b0 + uVar31;
  uVar12 = (ulong)*(uint *)(local_60 + (lVar33 - uVar12) * 4);
LAB_007158c8:
  uVar9 = (uint)uVar12 & 0xffffff;
  iVar17 = uVar9 + 1;
  uVar31 = (ulong)*(byte *)(lVar4 + (int)uVar9);
  if (0 < (int)(uint)local_b8) {
    iVar10 = 0;
    do {
      iVar16 = iVar17 + (int)uVar31;
      iVar10 = iVar10 + 1;
      iVar17 = iVar16 + 1;
      uVar31 = (ulong)*(byte *)(lVar4 + iVar16);
    } while (iVar10 != (uint)local_b8);
  }
  local_e0 = (byte *)CONCAT44(local_e0._4_4_,iVar17);
  if (((local_b8 + local_d0)[((ulong)(uint)((int)(uint)uVar12 >> 0x18) & 0xff) * (long)local_88] & 1
      ) == 0) {
    if (pbVar29 == (byte *)0x0) {
      pbVar29 = pbVar22;
    }
    local_90 = local_90 + 1;
    bVar21 = *local_b0;
    lVar33 = auStack_43._3_8_;
    goto joined_r0x00715af0;
  }
  if ((pbVar29 != (byte *)0x0) && (local_90 != (byte *)0x0)) {
    local_98 = pbVar29 + 1;
    local_e8 = uVar31;
LAB_00715c1f:
    uVar9 = *(uint *)(local_80 + (ulong)*pbVar29 * 4);
    pbVar22 = local_98;
    if ((long)(int)uVar9 < 0) {
      puVar28 = (uint *)(local_58 + -(long)(int)uVar9);
LAB_00715c48:
      do {
        uVar9 = *puVar28;
        bVar21 = (byte)puVar28[1];
        while( true ) {
          uVar12 = (ulong)bVar21;
          if ((int)uVar9 < 0) break;
          if (uVar12 == 0) {
LAB_0071640e:
            pbVar22 = local_98 + uVar12;
            goto LAB_00715cff;
          }
          uVar31 = 0;
          while (*(byte *)((long)puVar28 + uVar31 + 5) == pbVar29[uVar31 + 1]) {
            uVar31 = uVar31 + 1;
            if (uVar12 == uVar31) goto LAB_0071640e;
          }
          puVar28 = (uint *)((long)puVar28 + uVar12 + 5);
          uVar9 = bVar21 + 1 & 3;
          if (uVar9 == 0) goto LAB_00715c48;
          puVar28 = (uint *)((long)puVar28 + (4 - (ulong)uVar9));
          uVar9 = *puVar28;
          bVar21 = (byte)puVar28[1];
        }
        if (uVar12 == 0) {
LAB_00715cec:
          lVar33 = 0;
          goto LAB_00715cee;
        }
        uVar31 = 0;
        while( true ) {
          bVar21 = *(byte *)((long)puVar28 + uVar31 + 5);
          if (bVar21 != pbVar29[uVar31 + 1]) break;
          uVar31 = uVar31 + 1;
          if (uVar12 == uVar31) goto LAB_00715cec;
        }
        if (pbVar29[uVar31 + 1] < bVar21) {
          puVar28 = (uint *)((long)puVar28 + (uVar12 * 2 - (ulong)((int)(uVar12 * 2) + 1U & 3)) + 9)
          ;
          goto LAB_00715c48;
        }
        uVar31 = 0;
        while (*(byte *)((long)puVar28 + uVar31 + 5 + uVar12) == pbVar29[uVar31 + 1]) {
          uVar31 = uVar31 + 1;
          if (uVar12 == uVar31) goto LAB_007160a2;
        }
        if ((uVar12 == uVar31) ||
           (local_98[uVar31] <= *(byte *)((long)puVar28 + uVar31 + uVar12 + 5))) goto LAB_007160a2;
        puVar28 = (uint *)((long)puVar28 + (uVar12 * 2 - (ulong)((int)(uVar12 * 2) + 1U & 3)) + 9);
      } while( true );
    }
    goto LAB_00715cff;
  }
LAB_00715930:
  iVar10 = (int)local_78;
  if (uVar31 == 0) {
    local_78 = (byte *)CONCAT44(local_78._4_4_,(int)local_78 + 1);
  }
  else {
    bVar38 = (int)local_78 < 0x80;
    if (bVar38) {
      uVar12 = 1;
      local_47[0] = (byte)local_78;
      pbVar29 = _local_50 + 1;
      if (pbVar29 + uVar31 < local_68) {
        uVar12 = 1;
        local_70[(long)_local_50] = (byte)local_78;
        goto LAB_007164a6;
      }
    }
    else {
      bVar21 = (byte)(iVar10 >> 6);
      if (((ulong)local_78 & 0xfffff800) == 0) {
        local_47[0] = 0xc0;
        uVar12 = 2;
        local_47[1] = (byte)local_78 & 0x3f | 0x80;
      }
      else {
        if (((ulong)local_78 & 0xffff0000) == 0) {
          iVar16 = 2;
          local_47[0] = 0xe0;
          uVar12 = 3;
        }
        else if (((ulong)local_78 & 0xffe00000) == 0) {
          iVar16 = 3;
          local_47[0] = 0xf0;
          uVar12 = 4;
        }
        else {
          iVar16 = 5 - (uint)(((ulong)local_78 & 0xfc000000) == 0);
          local_47[0] = (-(((ulong)local_78 & 0xfc000000) == 0) & 0xfcU) - 4;
          uVar12 = 6 - (ulong)(((ulong)local_78 & 0xfc000000) == 0);
        }
        local_47[iVar16] = (byte)local_78 & 0x3f | 0x80;
        bVar23 = (byte)(iVar10 >> 0xc);
        local_47[iVar16 + -1] = bVar21 & 0x3f | 0x80;
        bVar21 = bVar23;
        if (iVar16 + -2 != 0) {
          local_47[iVar16 + -2] = bVar23 & 0x3f | 0x80;
          bVar21 = (byte)(iVar10 >> 0x12);
          iVar16 = iVar16 + -3;
          if (iVar16 != 0) {
            local_47[iVar16] = bVar21 & 0x3f | 0x80;
            bVar21 = (byte)((ulong)local_78 >> 0x18);
            if (iVar16 != 1) {
              bVar23 = bVar21 & 0x3f;
              bVar21 = (char)bVar21 >> 6;
              local_47[1] = bVar23 | 0x80;
            }
          }
        }
      }
      local_47[0] = local_47[0] | bVar21;
      pbVar29 = _local_50 + uVar12;
      if (pbVar29 + uVar31 < local_68) {
        uVar9 = (uint)uVar12;
        uVar19 = uVar12 & 0xffffffff;
        pbVar22 = local_70 + (long)_local_50;
        if (uVar9 < 8) {
          if ((uVar12 & 4) == 0) {
            if ((uVar9 != 0) && (*pbVar22 = local_47[0], (uVar12 & 2) != 0)) {
              *(undefined2 *)(pbVar22 + (uVar19 - 2)) = *(undefined2 *)(local_50 + uVar19 + 7);
            }
          }
          else {
            *(uint *)pbVar22 = CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0]));
            *(undefined4 *)(pbVar22 + (uVar19 - 4)) = *(undefined4 *)(local_50 + uVar19 + 5);
          }
        }
        else {
          *(ulong *)pbVar22 = CONCAT44(uVar7,CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0])));
          *(undefined8 *)(pbVar22 + ((uVar12 & 0xffffffff) - 8)) =
               *(undefined8 *)(local_50 + (uVar12 & 0xffffffff) + 1);
          lVar33 = (long)pbVar22 - ((ulong)(pbVar22 + 8) & 0xfffffffffffffff8);
          uVar9 = uVar9 + (int)lVar33 & 0xfffffff8;
          if (7 < uVar9) {
            uVar32 = 0;
            do {
              uVar19 = (ulong)uVar32;
              uVar32 = uVar32 + 8;
              *(undefined8 *)(((ulong)(pbVar22 + 8) & 0xfffffffffffffff8) + uVar19) =
                   *(undefined8 *)(local_47 + (uVar19 - lVar33));
            } while (uVar32 < uVar9);
          }
        }
LAB_007164a6:
        lVar33 = (long)iVar17;
        puVar13 = (undefined8 *)(local_70 + (long)pbVar29);
        if (((ulong)((long)puVar13 - (lVar4 + 1 + lVar33)) < 0xf) || (uVar31 - 1 < 7)) {
          uVar19 = 0;
          do {
            *(undefined1 *)((long)puVar13 + uVar19) = *(undefined1 *)(lVar33 + lVar4 + uVar19);
            uVar19 = uVar19 + 1;
          } while (uVar31 != uVar19);
        }
        else if (uVar31 - 1 < 0xf) {
          uVar18 = 0;
          uVar19 = uVar31;
LAB_00716633:
          *(undefined8 *)((long)puVar13 + uVar18) = *(undefined8 *)(lVar4 + uVar18 + lVar33);
          uVar18 = uVar18 + (uVar19 & 0xfffffffffffffff8);
          if ((uVar19 & 0xfffffffffffffff8) != uVar19) {
LAB_00716652:
            *(undefined1 *)((long)puVar13 + uVar18) = *(undefined1 *)(lVar4 + uVar18 + lVar33);
            if (uVar18 + 1 < uVar31) {
              *(undefined1 *)((long)puVar13 + uVar18 + 1) =
                   *(undefined1 *)(lVar4 + uVar18 + 1 + lVar33);
              if (uVar18 + 2 < uVar31) {
                *(undefined1 *)((long)puVar13 + uVar18 + 2) =
                     *(undefined1 *)(lVar4 + uVar18 + 2 + lVar33);
                if (uVar18 + 3 < uVar31) {
                  *(undefined1 *)((long)puVar13 + uVar18 + 3) =
                       *(undefined1 *)(lVar4 + uVar18 + 3 + lVar33);
                  if (uVar18 + 4 < uVar31) {
                    *(undefined1 *)((long)puVar13 + uVar18 + 4) =
                         *(undefined1 *)(lVar4 + uVar18 + 4 + lVar33);
                    if (uVar18 + 5 < uVar31) {
                      *(undefined1 *)((long)puVar13 + uVar18 + 5) =
                           *(undefined1 *)(lVar4 + uVar18 + 5 + lVar33);
                      uVar18 = uVar18 + 6;
                      if (uVar18 < uVar31) {
                        *(undefined1 *)((long)puVar13 + uVar18) =
                             *(undefined1 *)(lVar4 + uVar18 + lVar33);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          puVar1 = (undefined8 *)(lVar4 + lVar33);
          uVar5 = puVar1[1];
          uVar19 = uVar31 >> 4;
          *puVar13 = *puVar1;
          puVar13[1] = uVar5;
          if (uVar19 != 1) {
            uVar5 = puVar1[3];
            puVar13[2] = puVar1[2];
            puVar13[3] = uVar5;
            if (uVar19 != 2) {
              uVar5 = puVar1[5];
              puVar13[4] = puVar1[4];
              puVar13[5] = uVar5;
              if (uVar19 != 3) {
                uVar5 = puVar1[7];
                puVar13[6] = puVar1[6];
                puVar13[7] = uVar5;
                if (uVar19 != 4) {
                  uVar5 = puVar1[9];
                  puVar13[8] = puVar1[8];
                  puVar13[9] = uVar5;
                  if (uVar19 != 5) {
                    uVar5 = puVar1[0xb];
                    puVar13[10] = puVar1[10];
                    puVar13[0xb] = uVar5;
                    if (uVar19 != 6) {
                      uVar5 = puVar1[0xd];
                      puVar13[0xc] = puVar1[0xc];
                      puVar13[0xd] = uVar5;
                      if (uVar19 != 7) {
                        uVar5 = puVar1[0xf];
                        puVar13[0xe] = puVar1[0xe];
                        puVar13[0xf] = uVar5;
                        if (uVar19 != 8) {
                          uVar5 = puVar1[0x11];
                          puVar13[0x10] = puVar1[0x10];
                          puVar13[0x11] = uVar5;
                          if (uVar19 != 9) {
                            uVar5 = puVar1[0x13];
                            puVar13[0x12] = puVar1[0x12];
                            puVar13[0x13] = uVar5;
                            if (uVar19 != 10) {
                              uVar5 = puVar1[0x15];
                              puVar13[0x14] = puVar1[0x14];
                              puVar13[0x15] = uVar5;
                              if (uVar19 != 0xb) {
                                uVar5 = puVar1[0x17];
                                puVar13[0x16] = puVar1[0x16];
                                puVar13[0x17] = uVar5;
                                if (uVar19 != 0xc) {
                                  uVar5 = puVar1[0x19];
                                  puVar13[0x18] = puVar1[0x18];
                                  puVar13[0x19] = uVar5;
                                  if (uVar19 != 0xd) {
                                    uVar5 = puVar1[0x1b];
                                    puVar13[0x1a] = puVar1[0x1a];
                                    puVar13[0x1b] = uVar5;
                                    if (uVar19 == 0xf) {
                                      uVar5 = puVar1[0x1d];
                                      puVar13[0x1c] = puVar1[0x1c];
                                      puVar13[0x1d] = uVar5;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uVar18 = uVar31 & 0xfffffffffffffff0;
          if ((uVar31 & 0xffffffffffffff0f) != 0) {
            uVar19 = uVar31 - uVar18;
            if (6 < (uVar31 - uVar18) - 1) goto LAB_00716633;
            goto LAB_00716652;
          }
        }
      }
    }
    local_78 = (byte *)CONCAT44(local_78._4_4_,1);
    _local_50 = _local_50 + uVar12 + uVar31;
  }
  pbVar29 = (byte *)0x0;
  bVar21 = *local_b0;
  lVar33 = auStack_43._3_8_;
joined_r0x00715af0:
  auStack_43._0_3_ = (undefined3)uVar7;
  auStack_43[3] = (undefined1)lVar33;
  if (bVar21 == 0) goto LAB_00715af6;
  uVar12 = (ulong)*(int *)(local_80 + (ulong)bVar21 * 4);
  pbVar22 = local_b0;
  goto LAB_007157f8;
LAB_007160a2:
  uVar19 = 0;
  uVar31 = uVar19;
  if (pbVar29[1] == *(byte *)((long)puVar28 + 5)) {
    do {
      uVar19 = uVar31 + 1;
      lVar14 = uVar31 + 2;
      lVar33 = uVar31 + 6;
      uVar31 = uVar19;
    } while (*(byte *)((long)puVar28 + lVar33) == pbVar29[lVar14]);
  }
  lVar33 = 0;
  do {
    lVar37 = uVar19 + 1;
    lVar14 = uVar19 + 5;
    uVar19 = uVar19 + 1;
    lVar33 = lVar33 * 0x100 +
             (long)(int)((uint)pbVar29[lVar37] - (uint)*(byte *)((long)puVar28 + lVar14));
  } while (uVar19 < uVar12);
LAB_00715cee:
  pbVar22 = local_98 + uVar12;
  uVar9 = *(uint *)(local_60 + (lVar33 - (int)uVar9) * 4);
LAB_00715cff:
  iVar10 = (uVar9 & 0xffffff) + 1;
  uVar12 = (ulong)*(byte *)(lVar4 + (int)(uVar9 & 0xffffff));
  if (0 < (int)(uint)local_b8) {
    iVar16 = 0;
    do {
      iVar11 = (int)uVar12 + iVar10;
      iVar16 = iVar16 + 1;
      iVar10 = iVar11 + 1;
      uVar12 = (ulong)*(byte *)(lVar4 + iVar11);
    } while (iVar16 != (uint)local_b8);
  }
  if (local_90 != (byte *)0x1) {
    local_c0 = pbVar29;
    pbVar34 = (byte *)0x1;
LAB_00715d58:
    pbVar35 = pbVar22 + 1;
    uVar9 = *(uint *)(local_80 + (ulong)*pbVar22 * 4);
    if ((long)(int)uVar9 < 0) {
      puVar28 = (uint *)(local_58 + -(long)(int)uVar9);
LAB_00715d80:
      do {
        uVar9 = *puVar28;
        bVar21 = (byte)puVar28[1];
        while( true ) {
          uVar12 = (ulong)bVar21;
          if ((int)uVar9 < 0) break;
          if (uVar12 == 0) {
LAB_00716090:
            pbVar35 = pbVar35 + uVar12;
            goto LAB_00715e3a;
          }
          uVar31 = 0;
          while (*(byte *)((long)puVar28 + uVar31 + 5) == pbVar22[uVar31 + 1]) {
            uVar31 = uVar31 + 1;
            if (uVar12 == uVar31) goto LAB_00716090;
          }
          puVar28 = (uint *)((long)puVar28 + uVar12 + 5);
          uVar9 = bVar21 + 1 & 3;
          if (uVar9 == 0) goto LAB_00715d80;
          puVar28 = (uint *)((long)puVar28 + (4 - (ulong)uVar9));
          uVar9 = *puVar28;
          bVar21 = (byte)puVar28[1];
        }
        if (uVar12 == 0) {
LAB_00715e28:
          lVar33 = 0;
          goto LAB_00715e2b;
        }
        uVar31 = 0;
        while( true ) {
          bVar21 = *(byte *)((long)puVar28 + uVar31 + 5);
          if (bVar21 != pbVar22[uVar31 + 1]) break;
          uVar31 = uVar31 + 1;
          if (uVar12 == uVar31) goto LAB_00715e28;
        }
        if (bVar21 <= pbVar22[uVar31 + 1]) {
          uVar31 = 0;
          while (*(byte *)((long)puVar28 + uVar31 + 5 + uVar12) == pbVar22[uVar31 + 1]) {
            uVar31 = uVar31 + 1;
            if (uVar12 == uVar31) goto LAB_00715fde;
          }
          if ((uVar12 == uVar31) ||
             (pbVar35[uVar31] <= *(byte *)((long)puVar28 + uVar31 + uVar12 + 5))) goto LAB_00715fde;
        }
        puVar28 = (uint *)((long)puVar28 + (uVar12 * 2 - (ulong)((int)(uVar12 * 2) + 1U & 3)) + 9);
      } while( true );
    }
    goto LAB_00715e3a;
  }
LAB_00715e80:
  iVar16 = (int)local_78;
  if (uVar12 == 0) {
    local_78 = (byte *)CONCAT44(local_78._4_4_,(int)local_78 + 1);
    goto LAB_00715f82;
  }
  bVar38 = (int)local_78 < 0x80;
  if (bVar38) {
    uVar31 = 1;
    local_47[0] = (byte)local_78;
    pbVar22 = _local_50 + 1;
    if (pbVar22 + uVar12 < local_68) {
      local_70[(long)_local_50] = (byte)local_78;
      uVar31 = 1;
      goto LAB_00716123;
    }
  }
  else {
    bVar21 = (byte)(iVar16 >> 6);
    if (((ulong)local_78 & 0xfffff800) == 0) {
      local_47[0] = 0xc0;
      uVar31 = 2;
      local_47[1] = (byte)local_78 & 0x3f | 0x80;
    }
    else {
      if (((ulong)local_78 & 0xffff0000) == 0) {
        iVar11 = 2;
        local_47[0] = 0xe0;
        uVar31 = 3;
      }
      else if (((ulong)local_78 & 0xffe00000) == 0) {
        iVar11 = 3;
        local_47[0] = 0xf0;
        uVar31 = 4;
      }
      else {
        iVar11 = 5 - (uint)(((ulong)local_78 & 0xfc000000) == 0);
        local_47[0] = (-(((ulong)local_78 & 0xfc000000) == 0) & 0xfcU) - 4;
        uVar31 = 6 - (ulong)(((ulong)local_78 & 0xfc000000) == 0);
      }
      local_47[iVar11] = (byte)local_78 & 0x3f | 0x80;
      bVar23 = (byte)(iVar16 >> 0xc);
      local_47[iVar11 + -1] = bVar21 & 0x3f | 0x80;
      bVar21 = bVar23;
      if (iVar11 + -2 != 0) {
        local_47[iVar11 + -2] = bVar23 & 0x3f | 0x80;
        bVar21 = (byte)(iVar16 >> 0x12);
        iVar11 = iVar11 + -3;
        if (iVar11 != 0) {
          local_47[iVar11] = bVar21 & 0x3f | 0x80;
          bVar21 = (byte)((ulong)local_78 >> 0x18);
          if (iVar11 != 1) {
            bVar23 = bVar21 & 0x3f;
            bVar21 = (char)bVar21 >> 6;
            local_47[1] = bVar23 | 0x80;
          }
        }
      }
    }
    local_47[0] = local_47[0] | bVar21;
    pbVar22 = _local_50 + uVar31;
    if (pbVar22 + uVar12 < local_68) {
      uVar9 = (uint)uVar31;
      uVar19 = uVar31 & 0xffffffff;
      pbVar34 = local_70 + (long)_local_50;
      if (uVar9 < 8) {
        if ((uVar31 & 4) == 0) {
          if ((uVar9 != 0) && (*pbVar34 = local_47[0], (uVar31 & 2) != 0)) {
            *(undefined2 *)(pbVar34 + (uVar19 - 2)) = *(undefined2 *)(local_50 + uVar19 + 7);
          }
        }
        else {
          *(uint *)pbVar34 = CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0]));
          *(undefined4 *)(pbVar34 + (uVar19 - 4)) = *(undefined4 *)(local_50 + uVar19 + 5);
        }
      }
      else {
        *(ulong *)pbVar34 = CONCAT44(uVar7,CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0])));
        *(undefined8 *)(pbVar34 + ((uVar31 & 0xffffffff) - 8)) =
             *(undefined8 *)(local_50 + (uVar31 & 0xffffffff) + 1);
        lVar33 = (long)pbVar34 - ((ulong)(pbVar34 + 8) & 0xfffffffffffffff8);
        uVar9 = uVar9 + (int)lVar33 & 0xfffffff8;
        if (7 < uVar9) {
          uVar32 = 0;
          do {
            uVar19 = (ulong)uVar32;
            uVar32 = uVar32 + 8;
            *(undefined8 *)(((ulong)(pbVar34 + 8) & 0xfffffffffffffff8) + uVar19) =
                 *(undefined8 *)(local_47 + (uVar19 - lVar33));
          } while (uVar32 < uVar9);
        }
      }
LAB_00716123:
      lVar33 = (long)iVar10;
      puVar13 = (undefined8 *)(local_70 + (long)pbVar22);
      if (((ulong)((long)puVar13 - (lVar4 + 1 + lVar33)) < 0xf) || (uVar12 - 1 < 7)) {
        uVar19 = 0;
        do {
          *(undefined1 *)((long)puVar13 + uVar19) = *(undefined1 *)(lVar33 + lVar4 + uVar19);
          uVar19 = uVar19 + 1;
        } while (uVar12 != uVar19);
      }
      else if (uVar12 - 1 < 0xf) {
        uVar18 = 0;
        uVar19 = uVar12;
LAB_007162ac:
        *(undefined8 *)((long)puVar13 + uVar18) = *(undefined8 *)(lVar4 + uVar18 + lVar33);
        uVar18 = uVar18 + (uVar19 & 0xfffffffffffffff8);
        if ((uVar19 & 0xfffffffffffffff8) != uVar19) {
LAB_007162cb:
          *(undefined1 *)((long)puVar13 + uVar18) = *(undefined1 *)(lVar4 + uVar18 + lVar33);
          if (uVar18 + 1 < uVar12) {
            *(undefined1 *)((long)puVar13 + uVar18 + 1) =
                 *(undefined1 *)(lVar4 + uVar18 + 1 + lVar33);
            if (uVar18 + 2 < uVar12) {
              *(undefined1 *)((long)puVar13 + uVar18 + 2) =
                   *(undefined1 *)(lVar4 + uVar18 + 2 + lVar33);
              if (uVar18 + 3 < uVar12) {
                *(undefined1 *)((long)puVar13 + uVar18 + 3) =
                     *(undefined1 *)(lVar4 + uVar18 + 3 + lVar33);
                if (uVar18 + 4 < uVar12) {
                  *(undefined1 *)((long)puVar13 + uVar18 + 4) =
                       *(undefined1 *)(lVar4 + uVar18 + 4 + lVar33);
                  if (uVar18 + 5 < uVar12) {
                    *(undefined1 *)((long)puVar13 + uVar18 + 5) =
                         *(undefined1 *)(lVar4 + uVar18 + 5 + lVar33);
                    uVar18 = uVar18 + 6;
                    if (uVar18 < uVar12) {
                      *(undefined1 *)((long)puVar13 + uVar18) =
                           *(undefined1 *)(lVar4 + uVar18 + lVar33);
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        puVar1 = (undefined8 *)(lVar4 + lVar33);
        uVar5 = puVar1[1];
        uVar19 = uVar12 >> 4;
        *puVar13 = *puVar1;
        puVar13[1] = uVar5;
        if (uVar19 != 1) {
          uVar5 = puVar1[3];
          puVar13[2] = puVar1[2];
          puVar13[3] = uVar5;
          if (uVar19 != 2) {
            uVar5 = puVar1[5];
            puVar13[4] = puVar1[4];
            puVar13[5] = uVar5;
            if (uVar19 != 3) {
              uVar5 = puVar1[7];
              puVar13[6] = puVar1[6];
              puVar13[7] = uVar5;
              if (uVar19 != 4) {
                uVar5 = puVar1[9];
                puVar13[8] = puVar1[8];
                puVar13[9] = uVar5;
                if (uVar19 != 5) {
                  uVar5 = puVar1[0xb];
                  puVar13[10] = puVar1[10];
                  puVar13[0xb] = uVar5;
                  if (uVar19 != 6) {
                    uVar5 = puVar1[0xd];
                    puVar13[0xc] = puVar1[0xc];
                    puVar13[0xd] = uVar5;
                    if (uVar19 != 7) {
                      uVar5 = puVar1[0xf];
                      puVar13[0xe] = puVar1[0xe];
                      puVar13[0xf] = uVar5;
                      if (uVar19 != 8) {
                        uVar5 = puVar1[0x11];
                        puVar13[0x10] = puVar1[0x10];
                        puVar13[0x11] = uVar5;
                        if (uVar19 != 9) {
                          uVar5 = puVar1[0x13];
                          puVar13[0x12] = puVar1[0x12];
                          puVar13[0x13] = uVar5;
                          if (uVar19 != 10) {
                            uVar5 = puVar1[0x15];
                            puVar13[0x14] = puVar1[0x14];
                            puVar13[0x15] = uVar5;
                            if (uVar19 != 0xb) {
                              uVar5 = puVar1[0x17];
                              puVar13[0x16] = puVar1[0x16];
                              puVar13[0x17] = uVar5;
                              if (uVar19 != 0xc) {
                                uVar5 = puVar1[0x19];
                                puVar13[0x18] = puVar1[0x18];
                                puVar13[0x19] = uVar5;
                                if (uVar19 != 0xd) {
                                  uVar5 = puVar1[0x1b];
                                  puVar13[0x1a] = puVar1[0x1a];
                                  puVar13[0x1b] = uVar5;
                                  if (uVar19 == 0xf) {
                                    uVar5 = puVar1[0x1d];
                                    puVar13[0x1c] = puVar1[0x1c];
                                    puVar13[0x1d] = uVar5;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar18 = uVar12 & 0xfffffffffffffff0;
        if ((uVar12 & 0xffffffffffffff0f) != 0) {
          uVar19 = uVar12 - uVar18;
          if (6 < (uVar12 - uVar18) - 1) goto LAB_007162ac;
          goto LAB_007162cb;
        }
      }
    }
  }
  local_78 = (byte *)CONCAT44(local_78._4_4_,1);
  _local_50 = _local_50 + uVar31 + uVar12;
LAB_00715f82:
  local_90 = local_90 + -1;
  uVar31 = local_e8;
  if (local_90 == (byte *)0x0) goto LAB_00715930;
  goto LAB_00715c1f;
LAB_00715fde:
  uVar19 = 0;
  uVar31 = uVar19;
  if (*(byte *)((long)puVar28 + 5) == pbVar22[1]) {
    do {
      uVar19 = uVar31 + 1;
      lVar14 = uVar31 + 2;
      lVar33 = uVar31 + 6;
      uVar31 = uVar19;
    } while (*(byte *)((long)puVar28 + lVar33) == pbVar22[lVar14]);
  }
  lVar33 = 0;
  do {
    lVar37 = uVar19 + 1;
    lVar14 = uVar19 + 5;
    uVar19 = uVar19 + 1;
    lVar33 = lVar33 * 0x100 +
             (long)(int)((uint)pbVar22[lVar37] - (uint)*(byte *)((long)puVar28 + lVar14));
  } while (uVar19 < uVar12);
LAB_00715e2b:
  pbVar35 = pbVar35 + uVar12;
  uVar9 = *(uint *)(local_60 + (lVar33 - (int)uVar9) * 4);
LAB_00715e3a:
  iVar10 = (uVar9 & 0xffffff) + 1;
  uVar12 = (ulong)*(byte *)(lVar4 + (int)(uVar9 & 0xffffff));
  if (0 < (int)(uint)local_b8) {
    iVar16 = 0;
    do {
      iVar11 = (int)uVar12 + iVar10;
      iVar16 = iVar16 + 1;
      iVar10 = iVar11 + 1;
      uVar12 = (ulong)*(byte *)(lVar4 + iVar11);
    } while (iVar16 != (uint)local_b8);
  }
  pbVar34 = pbVar34 + 1;
  pbVar22 = pbVar35;
  if (pbVar34 == local_90) goto LAB_00715e80;
  goto LAB_00715d58;
LAB_00715af6:
  uVar7 = auStack_43._0_4_;
  if ((pbVar29 != (byte *)0x0) && (local_90 != (byte *)0x0)) {
    local_98 = pbVar29 + 1;
LAB_00715b1c:
    uVar9 = *(uint *)(local_80 + (ulong)*pbVar29 * 4);
    pbVar22 = local_98;
    if ((long)(int)uVar9 < 0) {
      puVar28 = (uint *)(local_58 + -(long)(int)uVar9);
LAB_00715b43:
      do {
        uVar9 = *puVar28;
        bVar21 = (byte)puVar28[1];
        while( true ) {
          uVar12 = (ulong)bVar21;
          if ((int)uVar9 < 0) break;
          if (uVar12 == 0) {
LAB_00718c0b:
            pbVar22 = local_98 + uVar12;
            goto LAB_0071752c;
          }
          uVar31 = 0;
          while (*(byte *)((long)puVar28 + uVar31 + 5) == pbVar29[uVar31 + 1]) {
            uVar31 = uVar31 + 1;
            if (uVar12 == uVar31) goto LAB_00718c0b;
          }
          puVar28 = (uint *)((long)puVar28 + uVar12 + 5);
          uVar9 = bVar21 + 1 & 3;
          if (uVar9 == 0) goto LAB_00715b43;
          puVar28 = (uint *)((long)puVar28 + (4 - (ulong)uVar9));
          uVar9 = *puVar28;
          bVar21 = (byte)puVar28[1];
        }
        if (uVar12 == 0) {
LAB_00717519:
          lVar14 = 0;
          goto LAB_0071751b;
        }
        uVar31 = 0;
        while( true ) {
          bVar21 = *(byte *)((long)puVar28 + uVar31 + 5);
          if (bVar21 != pbVar29[uVar31 + 1]) break;
          uVar31 = uVar31 + 1;
          if (uVar12 == uVar31) goto LAB_00717519;
        }
        if (bVar21 <= pbVar29[uVar31 + 1]) {
          uVar31 = 0;
          while (*(byte *)((long)puVar28 + uVar31 + 5 + uVar12) == pbVar29[uVar31 + 1]) {
            uVar31 = uVar31 + 1;
            if (uVar12 == uVar31) goto LAB_00717891;
          }
          if ((uVar12 == uVar31) ||
             (local_98[uVar31] <= *(byte *)((long)puVar28 + uVar31 + uVar12 + 5)))
          goto LAB_00717891;
        }
        puVar28 = (uint *)((long)puVar28 + (uVar12 * 2 - (ulong)((int)(uVar12 * 2) + 1U & 3)) + 9);
      } while( true );
    }
    goto LAB_0071752c;
  }
  goto LAB_00716f58;
LAB_00717891:
  uVar19 = 0;
  uVar31 = uVar19;
  if (pbVar29[1] == *(byte *)((long)puVar28 + 5)) {
    do {
      uVar19 = uVar31 + 1;
      lVar37 = uVar31 + 2;
      lVar14 = uVar31 + 6;
      uVar31 = uVar19;
    } while (*(byte *)((long)puVar28 + lVar14) == pbVar29[lVar37]);
  }
  lVar14 = 0;
  do {
    lVar37 = uVar19 + 5;
    lVar3 = uVar19 + 1;
    uVar19 = uVar19 + 1;
    lVar14 = (long)(int)((uint)pbVar29[lVar3] - (uint)*(byte *)((long)puVar28 + lVar37)) +
             lVar14 * 0x100;
  } while (uVar19 < uVar12);
LAB_0071751b:
  pbVar22 = local_98 + uVar12;
  uVar9 = *(uint *)(local_60 + (lVar14 - (int)uVar9) * 4);
LAB_0071752c:
  iVar17 = (uVar9 & 0xffffff) + 1;
  uVar12 = (ulong)*(byte *)(lVar4 + (int)(uVar9 & 0xffffff));
  if (0 < (int)(uint)local_b8) {
    iVar10 = 0;
    do {
      iVar16 = (int)uVar12 + iVar17;
      iVar10 = iVar10 + 1;
      iVar17 = iVar16 + 1;
      uVar12 = (ulong)*(byte *)(lVar4 + iVar16);
    } while (iVar10 != (uint)local_b8);
  }
  if (local_90 != (byte *)0x1) {
    local_a8 = pbVar29;
    pbVar34 = (byte *)0x1;
    local_b0 = local_47;
LAB_00717584:
    pbVar35 = pbVar22 + 1;
    uVar9 = *(uint *)(local_80 + (ulong)*pbVar22 * 4);
    if ((long)(int)uVar9 < 0) {
      puVar28 = (uint *)(local_58 + -(long)(int)uVar9);
LAB_007175a8:
      do {
        uVar9 = *puVar28;
        bVar21 = (byte)puVar28[1];
        while( true ) {
          uVar12 = (ulong)bVar21;
          if ((int)uVar9 < 0) break;
          if (uVar12 == 0) {
LAB_007178e0:
            pbVar35 = pbVar35 + uVar12;
            goto LAB_0071765f;
          }
          uVar31 = 0;
          while (*(byte *)((long)puVar28 + uVar31 + 5) == pbVar22[uVar31 + 1]) {
            uVar31 = uVar31 + 1;
            if (uVar12 == uVar31) goto LAB_007178e0;
          }
          puVar28 = (uint *)((long)puVar28 + uVar12 + 5);
          uVar9 = bVar21 + 1 & 3;
          if (uVar9 == 0) goto LAB_007175a8;
          puVar28 = (uint *)((long)puVar28 + (4 - (ulong)uVar9));
          uVar9 = *puVar28;
          bVar21 = (byte)puVar28[1];
        }
        if (uVar12 == 0) {
LAB_0071764d:
          lVar14 = 0;
          goto LAB_00717650;
        }
        uVar31 = 0;
        while( true ) {
          bVar21 = *(byte *)((long)puVar28 + uVar31 + 5);
          if (bVar21 != pbVar22[uVar31 + 1]) break;
          uVar31 = uVar31 + 1;
          if (uVar12 == uVar31) goto LAB_0071764d;
        }
        if (bVar21 <= pbVar22[uVar31 + 1]) {
          uVar31 = 0;
          while (*(byte *)((long)puVar28 + uVar31 + 5 + uVar12) == pbVar22[uVar31 + 1]) {
            uVar31 = uVar31 + 1;
            if (uVar12 == uVar31) goto LAB_007177fe;
          }
          if ((uVar12 == uVar31) ||
             (pbVar35[uVar31] <= *(byte *)((long)puVar28 + uVar31 + uVar12 + 5))) goto LAB_007177fe;
        }
        puVar28 = (uint *)((long)puVar28 + (uVar12 * 2 - (ulong)((int)(uVar12 * 2) + 1U & 3)) + 9);
      } while( true );
    }
    goto LAB_0071765f;
  }
LAB_007176af:
  iVar10 = (int)local_78;
  if (uVar12 == 0) {
    local_78 = (byte *)CONCAT44(local_78._4_4_,(int)local_78 + 1);
    goto LAB_007177b2;
  }
  bVar38 = (int)local_78 < 0x80;
  if (bVar38) {
    local_47[0] = (byte)local_78;
    pbVar22 = _local_50 + 1;
    if (pbVar22 + uVar12 < local_68) {
      local_70[(long)_local_50] = (byte)local_78;
      uVar31 = 1;
      goto LAB_00718ca2;
    }
    uVar31 = 1;
  }
  else {
    bVar21 = (byte)(iVar10 >> 6);
    if (((ulong)local_78 & 0xfffff800) == 0) {
      local_47[0] = 0xc0;
      uVar31 = 2;
      local_47[1] = (byte)local_78 & 0x3f | 0x80;
    }
    else {
      if (((ulong)local_78 & 0xffff0000) == 0) {
        iVar16 = 2;
        local_47[0] = 0xe0;
        uVar31 = 3;
      }
      else if (((ulong)local_78 & 0xffe00000) == 0) {
        iVar16 = 3;
        local_47[0] = 0xf0;
        uVar31 = 4;
      }
      else {
        iVar16 = 5 - (uint)(((ulong)local_78 & 0xfc000000) == 0);
        local_47[0] = (-(((ulong)local_78 & 0xfc000000) == 0) & 0xfcU) - 4;
        uVar31 = 6 - (ulong)(((ulong)local_78 & 0xfc000000) == 0);
      }
      local_47[iVar16] = (byte)local_78 & 0x3f | 0x80;
      bVar23 = (byte)(iVar10 >> 0xc);
      local_47[iVar16 + -1] = bVar21 & 0x3f | 0x80;
      bVar21 = bVar23;
      if (iVar16 + -2 != 0) {
        local_47[iVar16 + -2] = bVar23 & 0x3f | 0x80;
        bVar21 = (byte)(iVar10 >> 0x12);
        iVar16 = iVar16 + -3;
        if (iVar16 != 0) {
          local_47[iVar16] = bVar21 & 0x3f | 0x80;
          bVar21 = (byte)((ulong)local_78 >> 0x18);
          if (iVar16 != 1) {
            bVar23 = bVar21 & 0x3f;
            bVar21 = (char)bVar21 >> 6;
            local_47[1] = bVar23 | 0x80;
          }
        }
      }
    }
    local_47[0] = local_47[0] | bVar21;
    pbVar22 = _local_50 + uVar31;
    if (pbVar22 + uVar12 < local_68) {
      uVar9 = (uint)uVar31;
      uVar19 = uVar31 & 0xffffffff;
      pbVar34 = local_70 + (long)_local_50;
      if (uVar9 < 8) {
        if ((uVar31 & 4) == 0) {
          if ((uVar9 != 0) && (*pbVar34 = local_47[0], (uVar31 & 2) != 0)) {
            *(undefined2 *)(pbVar34 + (uVar19 - 2)) = *(undefined2 *)(local_50 + uVar19 + 7);
          }
        }
        else {
          *(uint *)pbVar34 = CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0]));
          *(undefined4 *)(pbVar34 + (uVar19 - 4)) = *(undefined4 *)(local_50 + uVar19 + 5);
        }
      }
      else {
        *(ulong *)pbVar34 =
             CONCAT44(auStack_43._0_4_,CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0])));
        *(undefined8 *)(pbVar34 + ((uVar31 & 0xffffffff) - 8)) =
             *(undefined8 *)(local_50 + (uVar31 & 0xffffffff) + 1);
        lVar14 = (long)pbVar34 - ((ulong)(pbVar34 + 8) & 0xfffffffffffffff8);
        uVar9 = uVar9 + (int)lVar14 & 0xfffffff8;
        if (7 < uVar9) {
          uVar32 = 0;
          do {
            uVar19 = (ulong)uVar32;
            uVar32 = uVar32 + 8;
            *(undefined8 *)(((ulong)(pbVar34 + 8) & 0xfffffffffffffff8) + uVar19) =
                 *(undefined8 *)(local_47 + (uVar19 - lVar14));
          } while (uVar32 < uVar9);
        }
      }
LAB_00718ca2:
      lVar14 = (long)iVar17;
      pbVar22 = pbVar22 + (long)local_70;
      if (((ulong)((long)pbVar22 - (lVar4 + 1 + lVar14)) < 0xf) || (uVar12 - 1 < 7)) {
        uVar19 = 0;
        do {
          pbVar22[uVar19] = *(byte *)(lVar14 + lVar4 + uVar19);
          uVar19 = uVar19 + 1;
        } while (uVar12 != uVar19);
      }
      else if (uVar12 - 1 < 0xf) {
        uVar18 = 0;
        uVar19 = uVar12;
LAB_00718e27:
        *(undefined8 *)(pbVar22 + uVar18) = *(undefined8 *)(lVar4 + uVar18 + lVar14);
        uVar18 = uVar18 + (uVar19 & 0xfffffffffffffff8);
        if ((uVar19 & 0xfffffffffffffff8) != uVar19) {
LAB_00718e46:
          pbVar22[uVar18] = *(byte *)(lVar4 + uVar18 + lVar14);
          if (uVar18 + 1 < uVar12) {
            pbVar22[uVar18 + 1] = *(byte *)(lVar4 + uVar18 + 1 + lVar14);
            if (uVar18 + 2 < uVar12) {
              pbVar22[uVar18 + 2] = *(byte *)(lVar4 + uVar18 + 2 + lVar14);
              if (uVar18 + 3 < uVar12) {
                pbVar22[uVar18 + 3] = *(byte *)(lVar4 + uVar18 + 3 + lVar14);
                if (uVar18 + 4 < uVar12) {
                  pbVar22[uVar18 + 4] = *(byte *)(lVar4 + uVar18 + 4 + lVar14);
                  if (uVar18 + 5 < uVar12) {
                    pbVar22[uVar18 + 5] = *(byte *)(lVar4 + uVar18 + 5 + lVar14);
                    uVar18 = uVar18 + 6;
                    if (uVar18 < uVar12) {
                      pbVar22[uVar18] = *(byte *)(lVar4 + uVar18 + lVar14);
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        puVar13 = (undefined8 *)(lVar4 + lVar14);
        uVar5 = puVar13[1];
        uVar19 = uVar12 >> 4;
        *(undefined8 *)pbVar22 = *puVar13;
        *(undefined8 *)(pbVar22 + 8) = uVar5;
        if (uVar19 != 1) {
          uVar5 = puVar13[3];
          *(undefined8 *)(pbVar22 + 0x10) = puVar13[2];
          *(undefined8 *)(pbVar22 + 0x18) = uVar5;
          if (uVar19 != 2) {
            uVar5 = puVar13[5];
            *(undefined8 *)(pbVar22 + 0x20) = puVar13[4];
            *(undefined8 *)(pbVar22 + 0x28) = uVar5;
            if (uVar19 != 3) {
              uVar5 = puVar13[7];
              *(undefined8 *)(pbVar22 + 0x30) = puVar13[6];
              *(undefined8 *)(pbVar22 + 0x38) = uVar5;
              if (uVar19 != 4) {
                uVar5 = puVar13[9];
                *(undefined8 *)(pbVar22 + 0x40) = puVar13[8];
                *(undefined8 *)(pbVar22 + 0x48) = uVar5;
                if (uVar19 != 5) {
                  uVar5 = puVar13[0xb];
                  *(undefined8 *)(pbVar22 + 0x50) = puVar13[10];
                  *(undefined8 *)(pbVar22 + 0x58) = uVar5;
                  if (uVar19 != 6) {
                    uVar5 = puVar13[0xd];
                    *(undefined8 *)(pbVar22 + 0x60) = puVar13[0xc];
                    *(undefined8 *)(pbVar22 + 0x68) = uVar5;
                    if (uVar19 != 7) {
                      uVar5 = puVar13[0xf];
                      *(undefined8 *)(pbVar22 + 0x70) = puVar13[0xe];
                      *(undefined8 *)(pbVar22 + 0x78) = uVar5;
                      if (uVar19 != 8) {
                        uVar5 = puVar13[0x11];
                        *(undefined8 *)(pbVar22 + 0x80) = puVar13[0x10];
                        *(undefined8 *)(pbVar22 + 0x88) = uVar5;
                        if (uVar19 != 9) {
                          uVar5 = puVar13[0x13];
                          *(undefined8 *)(pbVar22 + 0x90) = puVar13[0x12];
                          *(undefined8 *)(pbVar22 + 0x98) = uVar5;
                          if (uVar19 != 10) {
                            uVar5 = puVar13[0x15];
                            *(undefined8 *)(pbVar22 + 0xa0) = puVar13[0x14];
                            *(undefined8 *)(pbVar22 + 0xa8) = uVar5;
                            if (uVar19 != 0xb) {
                              uVar5 = puVar13[0x17];
                              *(undefined8 *)(pbVar22 + 0xb0) = puVar13[0x16];
                              *(undefined8 *)(pbVar22 + 0xb8) = uVar5;
                              if (uVar19 != 0xc) {
                                uVar5 = puVar13[0x19];
                                *(undefined8 *)(pbVar22 + 0xc0) = puVar13[0x18];
                                *(undefined8 *)(pbVar22 + 200) = uVar5;
                                if (uVar19 != 0xd) {
                                  uVar5 = puVar13[0x1b];
                                  *(undefined8 *)(pbVar22 + 0xd0) = puVar13[0x1a];
                                  *(undefined8 *)(pbVar22 + 0xd8) = uVar5;
                                  if (uVar19 == 0xf) {
                                    uVar5 = puVar13[0x1d];
                                    *(undefined8 *)(pbVar22 + 0xe0) = puVar13[0x1c];
                                    *(undefined8 *)(pbVar22 + 0xe8) = uVar5;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar18 = uVar12 & 0xfffffffffffffff0;
        if ((uVar12 & 0xffffffffffffff0f) != 0) {
          uVar19 = uVar12 - uVar18;
          if (6 < (uVar12 - uVar18) - 1) goto LAB_00718e27;
          goto LAB_00718e46;
        }
      }
    }
  }
  local_78 = (byte *)CONCAT44(local_78._4_4_,1);
  _local_50 = _local_50 + uVar31 + uVar12;
LAB_007177b2:
  local_90 = local_90 + -1;
  if (local_90 == (byte *)0x0) goto LAB_00716f58;
  goto LAB_00715b1c;
LAB_007177fe:
  uVar19 = 0;
  uVar31 = uVar19;
  if (pbVar22[1] == *(byte *)((long)puVar28 + 5)) {
    do {
      uVar19 = uVar31 + 1;
      lVar37 = uVar31 + 2;
      lVar14 = uVar31 + 6;
      uVar31 = uVar19;
    } while (*(byte *)((long)puVar28 + lVar14) == pbVar22[lVar37]);
  }
  lVar14 = 0;
  do {
    lVar3 = uVar19 + 1;
    lVar37 = uVar19 + 5;
    uVar19 = uVar19 + 1;
    lVar14 = lVar14 * 0x100 +
             (long)(int)((uint)pbVar22[lVar3] - (uint)*(byte *)((long)puVar28 + lVar37));
  } while (uVar19 < uVar12);
LAB_00717650:
  pbVar35 = pbVar35 + uVar12;
  uVar9 = *(uint *)(local_60 + (lVar14 - (int)uVar9) * 4);
LAB_0071765f:
  iVar17 = (uVar9 & 0xffffff) + 1;
  uVar12 = (ulong)*(byte *)(lVar4 + (int)(uVar9 & 0xffffff));
  if (0 < (int)(uint)local_b8) {
    iVar10 = 0;
    do {
      iVar16 = (int)uVar12 + iVar17;
      iVar10 = iVar10 + 1;
      iVar17 = iVar16 + 1;
      uVar12 = (ulong)*(byte *)(lVar4 + iVar16);
    } while (iVar10 != (uint)local_b8);
  }
  pbVar34 = pbVar34 + 1;
  pbVar22 = pbVar35;
  if (pbVar34 == local_90) goto LAB_007176af;
  goto LAB_00717584;
LAB_00718bb2:
  plVar27 = (long *)(puVar25 + -0x10);
  if ((_local_50 + 1 < (byte *)0x3) ||
     (plVar27 = (long *)(puVar25 + -0x10), pbVar29 = _local_50, _local_50 != local_c8))
  goto LAB_007154f7;
  goto joined_r0x00718a5c;
LAB_0071561f:
  uVar18 = 0;
  uVar19 = uVar18;
  if (*(byte *)((long)puVar28 + 5) == pbVar29[1]) {
    do {
      uVar18 = uVar19 + 1;
      lVar14 = uVar19 + 2;
      lVar33 = uVar19 + 6;
      uVar19 = uVar18;
    } while (*(byte *)((long)puVar28 + lVar33) == pbVar29[lVar14]);
  }
  lVar33 = 0;
  do {
    lVar37 = uVar18 + 1;
    lVar14 = uVar18 + 5;
    uVar18 = uVar18 + 1;
    lVar33 = lVar33 * 0x100 +
             (long)(int)((uint)pbVar29[lVar37] - (uint)*(byte *)((long)puVar28 + lVar14));
  } while (uVar18 < uVar31);
LAB_007155a2:
  pbVar34 = pbVar34 + uVar31;
  uVar9 = *(uint *)(local_60 + (lVar33 - (int)uVar9) * 4);
LAB_007155b2:
  bVar21 = *pbVar34;
  *(uint *)(uVar12 + (long)pbVar22 * 4) = uVar9 & 0xffffff;
  local_78[(long)pbVar22] = (byte)(uVar9 >> 0x18);
  local_c8 = pbVar22 + 1;
  if (bVar21 != 0) {
    pbVar29 = pbVar34;
    pbVar22 = local_c8;
    if (local_c8 == (byte *)0xfff) goto LAB_00715673;
    goto LAB_0071541f;
  }
  lVar33 = (long)pbVar22 * 4 + -4;
  local_c0 = local_47;
  local_78[(long)local_c8] = 0;
  local_d8 = (byte *)(uVar12 + lVar33);
  local_e0 = (byte *)(uVar12 + 4 + lVar33);
  local_b0 = (byte *)0x0;
  local_f8 = (ulong)*local_78 * (long)local_88 + local_d0;
  local_60 = (byte *)(uVar12 - 4);
  _local_50 = (byte *)0x0;
  pbVar34 = local_b0;
  do {
    local_b0 = pbVar34;
    uVar12 = (ulong)_local_50[local_f8];
    pbVar29 = local_b0;
    if ((_local_50[local_f8] & 4) == 0) {
      pbVar34 = (byte *)0xffffffffffffffff;
      local_a0 = _local_50 + local_d0;
      pbVar35 = (byte *)0x0;
      local_58 = local_60;
      do {
        if ((uVar12 & 1) == 0) {
          if (pbVar34 == (byte *)0xffffffffffffffff) {
            pbVar34 = pbVar35;
          }
        }
        else {
          if ((pbVar34 != (byte *)0xffffffffffffffff) && (pbVar34 < pbVar35)) {
            local_90 = local_60 + (long)pbVar34 * 4;
            pbVar34 = local_58;
            do {
              while( true ) {
                iVar17 = *(int *)pbVar34;
                lVar33 = (long)iVar17;
                uVar9 = (uint)*(byte *)(lVar4 + lVar33);
                uVar12 = (ulong)uVar9;
                iVar10 = iVar17 + 1;
                *(int *)pbVar34 = iVar10;
                pbVar30 = pbVar29 + uVar12;
                local_98 = pbVar35;
                if (pbVar30 < local_68) break;
                *(uint *)pbVar34 = iVar10 + uVar9;
                pbVar29 = pbVar30;
LAB_00717b1e:
                pbVar34 = pbVar34 + -4;
                if (local_90 == pbVar34) goto LAB_00717a7d;
              }
              uVar31 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_00717b1e;
              puVar2 = local_70 + (long)pbVar29;
              if (((ulong)((long)puVar2 - (lVar4 + 2 + lVar33)) < 0xf) || (uVar31 < 7)) {
                lVar33 = lVar33 - (long)pbVar29;
                do {
                  pbVar20 = pbVar29 + lVar33 + lVar4 + 1;
                  pbVar29 = pbVar29 + 1;
                  (local_70 + -1)[(long)pbVar29] = *pbVar20;
                } while (pbVar30 != pbVar29);
              }
              else if (uVar31 < 0xf) {
                uVar18 = 0;
                pbVar20 = pbVar29;
                uVar19 = uVar31;
LAB_00717bce:
                *(undefined8 *)(local_70 + uVar18 + (long)pbVar29) =
                     *(undefined8 *)(uVar18 + 1 + lVar33 + lVar4);
                uVar18 = uVar12 & 0xfffffffffffffff8;
                pbVar20 = pbVar20 + uVar18;
                uVar19 = uVar19 - uVar18;
                iVar10 = iVar10 + (int)uVar18;
                if (uVar12 != uVar18) {
LAB_00717bf5:
                  local_70[(long)pbVar20] = *(undefined1 *)(lVar4 + iVar10);
                  if (uVar19 != 0) {
                    (local_70 + 1)[(long)pbVar20] = *(undefined1 *)(lVar4 + (iVar10 + 1));
                    if (uVar19 != 1) {
                      (local_70 + 2)[(long)pbVar20] = *(undefined1 *)(lVar4 + (iVar10 + 2));
                      if (uVar19 != 2) {
                        (local_70 + 3)[(long)pbVar20] = *(undefined1 *)(lVar4 + (iVar10 + 3));
                        if (uVar19 != 3) {
                          (local_70 + 4)[(long)pbVar20] = *(undefined1 *)(lVar4 + (iVar10 + 4));
                          if (uVar19 != 4) {
                            (local_70 + 5)[(long)pbVar20] = *(undefined1 *)(lVar4 + (iVar10 + 5));
                            if (uVar19 != 5) {
                              (local_70 + 6)[(long)pbVar20] = *(undefined1 *)(lVar4 + (iVar10 + 6));
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar19 = 0;
                do {
                  puVar13 = (undefined8 *)(lVar4 + 1 + lVar33 + uVar19);
                  uVar5 = puVar13[1];
                  *(undefined8 *)(puVar2 + uVar19) = *puVar13;
                  *(undefined8 *)((long)(puVar2 + uVar19) + 8) = uVar5;
                  uVar19 = uVar19 + 0x10;
                } while (uVar19 != (uVar9 & 0xf0));
                uVar18 = uVar12 & 0xfffffffffffffff0;
                pbVar20 = pbVar29 + uVar18;
                uVar19 = uVar31 - uVar18;
                iVar10 = iVar10 + (int)uVar18;
                if (uVar12 != uVar18) {
                  uVar12 = uVar12 - uVar18;
                  if (6 < uVar12 - 1) goto LAB_00717bce;
                  goto LAB_00717bf5;
                }
              }
              pbVar20 = pbVar34 + -4;
              *(int *)pbVar34 = iVar17 + 2 + (int)uVar31;
              pbVar34 = pbVar20;
              pbVar29 = pbVar30;
            } while (local_90 != pbVar20);
          }
LAB_00717a7d:
          iVar17 = *(int *)(local_58 + 4);
          lVar33 = (long)iVar17;
          bVar21 = *(byte *)(lVar4 + lVar33);
          uVar12 = (ulong)bVar21;
          iVar10 = iVar17 + 1;
          *(int *)(local_58 + 4) = iVar10;
          pbVar30 = pbVar29 + uVar12;
          if (pbVar30 < local_68) {
            uVar31 = uVar12 - 1;
            if (uVar12 == 0) {
              pbVar34 = (byte *)0xffffffffffffffff;
            }
            else {
              puVar2 = local_70 + (long)pbVar29;
              if (((ulong)((long)puVar2 - (lVar4 + 2 + lVar33)) < 0xf) || (uVar31 < 7)) {
                lVar33 = lVar33 - (long)pbVar29;
                do {
                  pbVar34 = pbVar29 + lVar33 + lVar4 + 1;
                  pbVar29 = pbVar29 + 1;
                  (local_70 + -1)[(long)pbVar29] = *pbVar34;
                } while (pbVar30 != pbVar29);
              }
              else if (uVar31 < 0xf) {
                uVar18 = 0;
                pbVar34 = pbVar29;
                uVar19 = uVar31;
LAB_007180a5:
                *(undefined8 *)(local_70 + uVar18 + (long)pbVar29) =
                     *(undefined8 *)(uVar18 + 1 + lVar33 + lVar4);
                uVar18 = uVar12 & 0xfffffffffffffff8;
                pbVar34 = pbVar34 + uVar18;
                uVar19 = uVar19 - uVar18;
                iVar10 = iVar10 + (int)uVar18;
                if (uVar18 != uVar12) {
LAB_007180cc:
                  local_70[(long)pbVar34] = *(undefined1 *)(lVar4 + iVar10);
                  if (uVar19 != 0) {
                    (local_70 + 1)[(long)pbVar34] = *(undefined1 *)(lVar4 + (iVar10 + 1));
                    if (uVar19 != 1) {
                      (local_70 + 2)[(long)pbVar34] = *(undefined1 *)(lVar4 + (iVar10 + 2));
                      if (uVar19 != 2) {
                        (local_70 + 3)[(long)pbVar34] = *(undefined1 *)(lVar4 + (iVar10 + 3));
                        if (uVar19 != 3) {
                          (local_70 + 4)[(long)pbVar34] = *(undefined1 *)(lVar4 + (iVar10 + 4));
                          if (uVar19 != 4) {
                            (local_70 + 5)[(long)pbVar34] = *(undefined1 *)(lVar4 + (iVar10 + 5));
                            if (uVar19 != 5) {
                              (local_70 + 6)[(long)pbVar34] = *(undefined1 *)(lVar4 + (iVar10 + 6));
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar19 = 0;
                do {
                  puVar13 = (undefined8 *)(lVar4 + 1 + lVar33 + uVar19);
                  uVar5 = puVar13[1];
                  *(undefined8 *)(puVar2 + uVar19) = *puVar13;
                  *(undefined8 *)((long)(puVar2 + uVar19) + 8) = uVar5;
                  uVar19 = uVar19 + 0x10;
                } while ((bVar21 & 0xf0) != uVar19);
                uVar18 = uVar12 & 0xfffffffffffffff0;
                pbVar34 = pbVar29 + uVar18;
                uVar19 = uVar31 - uVar18;
                iVar10 = iVar10 + (int)uVar18;
                if (uVar12 != uVar18) {
                  uVar12 = uVar12 - uVar18;
                  if (6 < uVar12 - 1) goto LAB_007180a5;
                  goto LAB_007180cc;
                }
              }
              *(int *)(local_58 + 4) = iVar17 + 2 + (int)uVar31;
              pbVar34 = (byte *)0xffffffffffffffff;
              pbVar29 = pbVar30;
            }
          }
          else {
            *(uint *)(local_58 + 4) = iVar10 + (uint)bVar21;
            pbVar34 = (byte *)0xffffffffffffffff;
            pbVar29 = pbVar30;
          }
        }
        local_58 = local_58 + 4;
        uVar12 = (ulong)local_a0[(ulong)(local_78 + 1)[(long)pbVar35] * (long)local_88];
        bVar38 = pbVar22 != pbVar35;
        pbVar35 = pbVar35 + 1;
      } while (bVar38);
      if ((pbVar34 != (byte *)0xffffffffffffffff) && (pbVar34 < local_c8)) {
        local_58 = local_60 + (long)pbVar34 * 4;
        pbVar34 = local_e0;
        do {
          iVar17 = *(int *)pbVar34;
          lVar33 = (long)iVar17;
          uVar9 = (uint)*(byte *)(lVar4 + lVar33);
          uVar12 = (ulong)uVar9;
          iVar10 = iVar17 + 1;
          *(int *)pbVar34 = iVar10;
          pbVar35 = pbVar29 + uVar12;
          if (pbVar35 < local_68) {
            uVar31 = uVar12 - 1;
            if (uVar12 != 0) {
              puVar2 = local_70 + (long)pbVar29;
              if (((ulong)((long)puVar2 - (lVar4 + 2 + lVar33)) < 0xf) || (uVar31 < 7)) {
                lVar33 = lVar33 - (long)pbVar29;
                do {
                  pbVar30 = pbVar29 + lVar33 + lVar4 + 1;
                  pbVar29 = pbVar29 + 1;
                  (local_70 + -1)[(long)pbVar29] = *pbVar30;
                } while (pbVar35 != pbVar29);
              }
              else if (uVar31 < 0xf) {
                uVar18 = 0;
                pbVar30 = pbVar29;
                uVar19 = uVar31;
LAB_00718925:
                *(undefined8 *)(local_70 + uVar18 + (long)pbVar29) =
                     *(undefined8 *)(uVar18 + 1 + lVar33 + lVar4);
                uVar18 = uVar12 & 0xfffffffffffffff8;
                pbVar30 = pbVar30 + uVar18;
                uVar19 = uVar19 - uVar18;
                iVar10 = iVar10 + (int)uVar18;
                if (uVar12 != uVar18) {
LAB_0071894c:
                  local_70[(long)pbVar30] = *(undefined1 *)(lVar4 + iVar10);
                  if (uVar19 != 0) {
                    (local_70 + 1)[(long)pbVar30] = *(undefined1 *)(lVar4 + (iVar10 + 1));
                    if (uVar19 != 1) {
                      (local_70 + 2)[(long)pbVar30] = *(undefined1 *)(lVar4 + (iVar10 + 2));
                      if (uVar19 != 2) {
                        (local_70 + 3)[(long)pbVar30] = *(undefined1 *)(lVar4 + (iVar10 + 3));
                        if (uVar19 != 3) {
                          (local_70 + 4)[(long)pbVar30] = *(undefined1 *)(lVar4 + (iVar10 + 4));
                          if (uVar19 != 4) {
                            (local_70 + 5)[(long)pbVar30] = *(undefined1 *)(lVar4 + (iVar10 + 5));
                            if (uVar19 != 5) {
                              (local_70 + 6)[(long)pbVar30] = *(undefined1 *)(lVar4 + (iVar10 + 6));
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar19 = 0;
                do {
                  puVar13 = (undefined8 *)(lVar4 + 1 + lVar33 + uVar19);
                  uVar5 = puVar13[1];
                  *(undefined8 *)(puVar2 + uVar19) = *puVar13;
                  *(undefined8 *)((long)(puVar2 + uVar19) + 8) = uVar5;
                  uVar19 = uVar19 + 0x10;
                } while ((uVar9 & 0xf0) != uVar19);
                uVar18 = uVar12 & 0xfffffffffffffff0;
                pbVar30 = pbVar29 + uVar18;
                uVar19 = uVar31 - uVar18;
                iVar10 = iVar10 + (int)uVar18;
                if (uVar12 != uVar18) {
                  uVar12 = uVar12 - uVar18;
                  if (6 < uVar12 - 1) goto LAB_00718925;
                  goto LAB_0071894c;
                }
              }
              *(int *)pbVar34 = iVar17 + 2 + (int)uVar31;
              pbVar29 = pbVar35;
            }
          }
          else {
            *(uint *)pbVar34 = iVar10 + uVar9;
            pbVar29 = pbVar35;
          }
          pbVar34 = pbVar34 + -4;
        } while (local_58 != pbVar34);
      }
    }
    else {
      local_58 = (byte *)0x0;
      uVar31 = 1;
      local_a0 = _local_50 + local_d0;
      pbVar34 = (byte *)0xffffffffffffffff;
      local_98 = local_60;
      pbVar35 = local_58;
      do {
        local_58 = pbVar35;
        local_a8 = (byte *)(CONCAT44(local_a8._4_4_,(int)uVar12) & 0xffffffff00000001);
        if ((uVar12 & 1) == 0) {
          if (pbVar34 == (byte *)0xffffffffffffffff) {
            pbVar34 = local_58;
          }
        }
        else {
          if ((pbVar34 != (byte *)0xffffffffffffffff) && (pbVar34 < local_58)) {
            local_b8 = local_60 + (long)pbVar34 * 4;
            pbVar34 = local_98;
            do {
              local_90 = (byte *)(long)*(int *)pbVar34;
              pbVar35 = local_90 + lVar4;
              iVar17 = *(int *)pbVar34 + 1;
              bVar21 = *pbVar35;
              uVar9 = (uint)bVar21;
              uVar19 = (ulong)uVar9;
              *(int *)pbVar34 = iVar17;
              iVar10 = (int)uVar31;
              if (uVar19 == 0) {
                uVar9 = iVar10 + 1;
              }
              else {
                bVar23 = (byte)uVar31;
                if (iVar10 < 0x80) {
                  pbVar30 = pbVar29 + 1;
                  local_47[0] = bVar23;
                  if (pbVar30 + uVar19 < local_68) {
                    uVar18 = 1;
                    local_70[(long)pbVar29] = bVar23;
                    goto LAB_00718315;
                  }
                  uVar18 = 1;
                }
                else {
                  bVar8 = (byte)(iVar10 >> 6);
                  if ((uVar31 & 0xfffff800) == 0) {
                    local_47[0] = 0xc0;
                    uVar18 = 2;
                    local_47[1] = bVar23 & 0x3f | 0x80;
                  }
                  else {
                    if ((uVar31 & 0xffff0000) == 0) {
                      iVar16 = 2;
                      local_47[0] = 0xe0;
                      uVar18 = 3;
                    }
                    else if ((uVar31 & 0xffe00000) == 0) {
                      iVar16 = 3;
                      local_47[0] = 0xf0;
                      uVar18 = 4;
                    }
                    else {
                      iVar16 = 5 - (uint)((uVar31 & 0xfc000000) == 0);
                      local_47[0] = (-((uVar31 & 0xfc000000) == 0) & 0xfcU) - 4;
                      uVar18 = 6 - (ulong)((uVar31 & 0xfc000000) == 0);
                    }
                    local_47[iVar16] = bVar23 & 0x3f | 0x80;
                    local_47[iVar16 + -1] = bVar8 & 0x3f | 0x80;
                    bVar8 = (byte)(iVar10 >> 0xc);
                    if (iVar16 + -2 != 0) {
                      local_47[iVar16 + -2] = bVar8 & 0x3f | 0x80;
                      bVar8 = (byte)(iVar10 >> 0x12);
                      iVar16 = iVar16 + -3;
                      if (iVar16 != 0) {
                        local_47[iVar16] = bVar8 & 0x3f | 0x80;
                        bVar8 = (byte)(uVar31 >> 0x18);
                        if (iVar16 != 1) {
                          local_47[1] = bVar8 & 0x3f | 0x80;
                          bVar8 = (char)bVar8 >> 6;
                        }
                      }
                    }
                  }
                  local_47[0] = local_47[0] | bVar8;
                  pbVar30 = pbVar29 + uVar18;
                  if (pbVar30 + uVar19 < local_68) {
                    uVar32 = (uint)uVar18;
                    uVar31 = uVar18 & 0xffffffff;
                    pbVar20 = local_70 + (long)pbVar29;
                    if (uVar32 < 8) {
                      if ((uVar18 & 4) == 0) {
                        if ((uVar32 != 0) && (*pbVar20 = local_47[0], (uVar18 & 2) != 0)) {
                          *(undefined2 *)(pbVar20 + (uVar31 - 2)) =
                               *(undefined2 *)(local_50 + uVar31 + 7);
                        }
                      }
                      else {
                        *(uint *)pbVar20 = CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0]));
                        *(undefined4 *)(pbVar20 + (uVar31 - 4)) =
                             *(undefined4 *)(local_50 + uVar31 + 5);
                      }
                    }
                    else {
                      *(ulong *)pbVar20 =
                           CONCAT44(uVar7,CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0])));
                      *(undefined8 *)(pbVar20 + ((uVar18 & 0xffffffff) - 8)) =
                           *(undefined8 *)(local_50 + (uVar18 & 0xffffffff) + 1);
                      lVar33 = (long)pbVar20 - ((ulong)(pbVar20 + 8) & 0xfffffffffffffff8);
                      local_e8 = (long)local_c0 - lVar33;
                      uVar32 = uVar32 + (int)lVar33 & 0xfffffff8;
                      if (7 < uVar32) {
                        uVar36 = 0;
                        do {
                          uVar31 = (ulong)uVar36;
                          uVar36 = uVar36 + 8;
                          *(undefined8 *)(((ulong)(pbVar20 + 8) & 0xfffffffffffffff8) + uVar31) =
                               *(undefined8 *)(local_e8 + uVar31);
                          local_ec = uVar32;
                        } while (uVar36 < uVar32);
                      }
                    }
LAB_00718315:
                    pbVar30 = pbVar30 + (long)local_70;
                    lVar33 = (long)iVar17;
                    if (((ulong)((long)pbVar30 - (long)(local_90 + lVar4 + 2)) < 0xf) ||
                       (uVar19 - 1 < 7)) {
                      uVar31 = 0;
                      do {
                        pbVar30[uVar31] = pbVar35[uVar31 + 1];
                        uVar31 = uVar31 + 1;
                      } while (uVar19 != uVar31);
                    }
                    else if (uVar19 - 1 < 0xf) {
                      uVar15 = 0;
                      uVar31 = uVar19;
LAB_0071839d:
                      *(undefined8 *)(pbVar30 + uVar15) = *(undefined8 *)(pbVar35 + uVar15 + 1);
                      uVar15 = uVar15 + (uVar31 & 0xfffffffffffffff8);
                      if ((uVar31 & 0xfffffffffffffff8) != uVar31) {
LAB_007183b9:
                        pbVar30[uVar15] = *(byte *)(lVar4 + uVar15 + lVar33);
                        if (uVar15 + 1 < uVar19) {
                          pbVar30[uVar15 + 1] = *(byte *)(lVar4 + uVar15 + 1 + lVar33);
                          if (uVar15 + 2 < uVar19) {
                            pbVar30[uVar15 + 2] = *(byte *)(lVar4 + uVar15 + 2 + lVar33);
                            if (uVar15 + 3 < uVar19) {
                              pbVar30[uVar15 + 3] = *(byte *)(lVar4 + uVar15 + 3 + lVar33);
                              if (uVar15 + 4 < uVar19) {
                                pbVar30[uVar15 + 4] = *(byte *)(lVar4 + uVar15 + 4 + lVar33);
                                if (uVar15 + 5 < uVar19) {
                                  uVar31 = uVar15 + 6;
                                  pbVar30[uVar15 + 5] = *(byte *)(lVar4 + uVar15 + 5 + lVar33);
                                  if (uVar31 < uVar19) {
                                    pbVar30[uVar31] = *(byte *)(lVar4 + uVar31 + lVar33);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      uVar31 = 0;
                      do {
                        uVar5 = *(undefined8 *)(local_90 + uVar31 + lVar4 + 1 + 8);
                        *(undefined8 *)(pbVar30 + uVar31) =
                             *(undefined8 *)(local_90 + uVar31 + lVar4 + 1);
                        *(undefined8 *)(pbVar30 + uVar31 + 8) = uVar5;
                        uVar31 = uVar31 + 0x10;
                      } while ((uVar9 & 0xf0) != uVar31);
                      uVar15 = uVar19 & 0xfffffffffffffff0;
                      if ((bVar21 & 0xf) != 0) {
                        uVar31 = uVar19 - uVar15;
                        if (6 < (uVar19 - uVar15) - 1) goto LAB_0071839d;
                        goto LAB_007183b9;
                      }
                    }
                  }
                }
                pbVar29 = pbVar29 + uVar18 + uVar19;
                *(uint *)pbVar34 = uVar9 + iVar17;
                uVar9 = (uint)local_a8;
              }
              uVar31 = (ulong)uVar9;
              pbVar34 = pbVar34 + -4;
            } while (pbVar34 != local_b8);
          }
          lVar33 = (long)*(int *)(local_98 + 4);
          pbVar34 = (byte *)(lVar4 + lVar33);
          iVar17 = *(int *)(local_98 + 4) + 1;
          bVar21 = *pbVar34;
          uVar19 = (ulong)bVar21;
          *(int *)(local_98 + 4) = iVar17;
          iVar10 = (int)uVar31;
          if (uVar19 == 0) {
            uVar31 = (ulong)(iVar10 + 1);
            pbVar34 = (byte *)0xffffffffffffffff;
          }
          else {
            bVar23 = (byte)uVar31;
            if (iVar10 < 0x80) {
              pbVar35 = pbVar29 + 1;
              uVar18 = 1;
              local_47[0] = bVar23;
              if (pbVar35 + uVar19 < local_68) {
                uVar18 = 1;
                local_70[(long)pbVar29] = bVar23;
                goto LAB_00718196;
              }
            }
            else {
              bVar8 = (byte)(iVar10 >> 6);
              if ((uVar31 & 0xfffff800) == 0) {
                local_47[0] = 0xc0;
                uVar18 = 2;
                local_47[1] = bVar23 & 0x3f | 0x80;
              }
              else {
                if ((uVar31 & 0xffff0000) == 0) {
                  iVar16 = 2;
                  local_47[0] = 0xe0;
                  uVar18 = 3;
                }
                else if ((uVar31 & 0xffe00000) == 0) {
                  iVar16 = 3;
                  local_47[0] = 0xf0;
                  uVar18 = 4;
                }
                else {
                  iVar16 = 5 - (uint)((uVar31 & 0xfc000000) == 0);
                  local_47[0] = (-((uVar31 & 0xfc000000) == 0) & 0xfcU) - 4;
                  uVar18 = 6 - (ulong)((uVar31 & 0xfc000000) == 0);
                }
                local_47[iVar16] = bVar23 & 0x3f | 0x80;
                local_47[iVar16 + -1] = bVar8 & 0x3f | 0x80;
                bVar8 = (byte)(iVar10 >> 0xc);
                if (iVar16 + -2 != 0) {
                  local_47[iVar16 + -2] = bVar8 & 0x3f | 0x80;
                  bVar8 = (byte)(iVar10 >> 0x12);
                  iVar16 = iVar16 + -3;
                  if (iVar16 != 0) {
                    local_47[iVar16] = bVar8 & 0x3f | 0x80;
                    bVar8 = (byte)(uVar31 >> 0x18);
                    if (iVar16 != 1) {
                      local_47[1] = bVar8 & 0x3f | 0x80;
                      bVar8 = (char)bVar8 >> 6;
                    }
                  }
                }
              }
              pbVar35 = pbVar29 + uVar18;
              local_47[0] = local_47[0] | bVar8;
              if (pbVar35 + uVar19 < local_68) {
                pbVar30 = local_70 + (long)pbVar29;
                uVar9 = (uint)uVar18;
                uVar31 = uVar18 & 0xffffffff;
                if (uVar9 < 8) {
                  if ((uVar18 & 4) == 0) {
                    if ((uVar9 != 0) && (*pbVar30 = local_47[0], (uVar18 & 2) != 0)) {
                      *(undefined2 *)(pbVar30 + (uVar31 - 2)) =
                           *(undefined2 *)(local_50 + uVar31 + 7);
                    }
                  }
                  else {
                    *(uint *)pbVar30 = CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0]));
                    *(undefined4 *)(pbVar30 + (uVar31 - 4)) = *(undefined4 *)(local_50 + uVar31 + 5)
                    ;
                  }
                }
                else {
                  *(ulong *)pbVar30 =
                       CONCAT44(uVar7,CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0])));
                  *(undefined8 *)(pbVar30 + ((uVar18 & 0xffffffff) - 8)) =
                       *(undefined8 *)(local_50 + (uVar18 & 0xffffffff) + 1);
                  lVar14 = (long)pbVar30 - ((ulong)(pbVar30 + 8) & 0xfffffffffffffff8);
                  uVar9 = uVar9 + (int)lVar14;
                  if (7 < (uVar9 & 0xfffffff8)) {
                    local_90 = (byte *)((ulong)local_90 & 0xffffffff00000000);
                    local_b8 = (byte *)(CONCAT44(local_b8._4_4_,uVar9) & 0xfffffffffffffff8);
                    do {
                      *(undefined8 *)
                       (((ulong)(pbVar30 + 8) & 0xfffffffffffffff8) + ((ulong)local_90 & 0xffffffff)
                       ) = *(undefined8 *)(local_c0 + (((ulong)local_90 & 0xffffffff) - lVar14));
                      uVar9 = (int)local_90 + 8;
                      local_90 = (byte *)CONCAT44(local_90._4_4_,uVar9);
                    } while (uVar9 < (uint)local_b8);
                  }
                }
LAB_00718196:
                pbVar35 = pbVar35 + (long)local_70;
                lVar14 = (long)iVar17;
                if (((ulong)((long)pbVar35 - (lVar4 + 2 + lVar33)) < 0xf) || (uVar19 - 1 < 7)) {
                  uVar31 = 0;
                  do {
                    pbVar35[uVar31] = pbVar34[uVar31 + 1];
                    uVar31 = uVar31 + 1;
                  } while (uVar19 != uVar31);
                }
                else if (uVar19 - 1 < 0xf) {
                  uVar15 = 0;
                  uVar31 = uVar19;
LAB_00718211:
                  *(undefined8 *)(pbVar35 + uVar15) = *(undefined8 *)(pbVar34 + uVar15 + 1);
                  uVar15 = uVar15 + (uVar31 & 0xfffffffffffffff8);
                  if ((uVar31 & 0xfffffffffffffff8) != uVar31) {
LAB_0071822d:
                    pbVar35[uVar15] = *(byte *)(lVar4 + uVar15 + lVar14);
                    if (uVar15 + 1 < uVar19) {
                      pbVar35[uVar15 + 1] = *(byte *)(lVar4 + uVar15 + 1 + lVar14);
                      if (uVar15 + 2 < uVar19) {
                        pbVar35[uVar15 + 2] = *(byte *)(lVar4 + uVar15 + 2 + lVar14);
                        if (uVar15 + 3 < uVar19) {
                          pbVar35[uVar15 + 3] = *(byte *)(lVar4 + uVar15 + 3 + lVar14);
                          if (uVar15 + 4 < uVar19) {
                            pbVar35[uVar15 + 4] = *(byte *)(lVar4 + uVar15 + 4 + lVar14);
                            if (uVar15 + 5 < uVar19) {
                              uVar31 = uVar15 + 6;
                              pbVar35[uVar15 + 5] = *(byte *)(lVar4 + uVar15 + 5 + lVar14);
                              if (uVar31 < uVar19) {
                                pbVar35[uVar31] = *(byte *)(lVar4 + uVar31 + lVar14);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  uVar31 = 0;
                  do {
                    puVar13 = (undefined8 *)(lVar4 + 1 + lVar33 + uVar31);
                    uVar5 = puVar13[1];
                    *(undefined8 *)(pbVar35 + uVar31) = *puVar13;
                    *(undefined8 *)(pbVar35 + uVar31 + 8) = uVar5;
                    uVar31 = uVar31 + 0x10;
                  } while ((bVar21 & 0xf0) != uVar31);
                  uVar15 = uVar19 & 0xfffffffffffffff0;
                  if ((bVar21 & 0xf) != 0) {
                    uVar31 = uVar19 - uVar15;
                    if (6 < (uVar19 - uVar15) - 1) goto LAB_00718211;
                    goto LAB_0071822d;
                  }
                }
              }
            }
            uVar31 = uVar12 & 1;
            pbVar29 = pbVar29 + uVar18 + uVar19;
            *(uint *)(local_98 + 4) = (uint)bVar21 + iVar17;
            pbVar34 = (byte *)0xffffffffffffffff;
          }
        }
        local_98 = local_98 + 4;
        uVar12 = (ulong)local_a0[(ulong)(local_78 + 1)[(long)local_58] * (long)local_88];
        pbVar35 = local_58 + 1;
      } while (pbVar22 != local_58);
      if ((pbVar34 != (byte *)0xffffffffffffffff) && (pbVar34 < pbVar22)) {
        local_98 = local_60 + (long)pbVar34 * 4;
        pbVar34 = local_d8;
        do {
          lVar33 = (long)*(int *)pbVar34;
          pbVar35 = (byte *)(lVar4 + lVar33);
          iVar17 = *(int *)pbVar34 + 1;
          bVar21 = *pbVar35;
          uVar12 = (ulong)bVar21;
          *(int *)pbVar34 = iVar17;
          local_90 = (byte *)CONCAT71(local_90._1_7_,bVar21);
          iVar10 = (int)uVar31;
          if (uVar12 == 0) {
            uVar31 = (ulong)(iVar10 + 1);
          }
          else {
            bVar23 = (byte)uVar31;
            if (iVar10 < 0x80) {
              pbVar30 = pbVar29 + 1;
              local_47[0] = bVar23;
              if (pbVar30 + uVar12 < local_68) {
                uVar19 = 1;
                local_70[(long)pbVar29] = bVar23;
                goto LAB_00718698;
              }
              uVar19 = 1;
            }
            else {
              bVar8 = (byte)(iVar10 >> 6);
              if ((uVar31 & 0xfffff800) == 0) {
                local_47[0] = 0xc0;
                uVar19 = 2;
                local_47[1] = bVar23 & 0x3f | 0x80;
              }
              else {
                if ((uVar31 & 0xffff0000) == 0) {
                  iVar16 = 2;
                  local_47[0] = 0xe0;
                  uVar19 = 3;
                }
                else if ((uVar31 & 0xffe00000) == 0) {
                  iVar16 = 3;
                  local_47[0] = 0xf0;
                  uVar19 = 4;
                }
                else {
                  iVar16 = 5 - (uint)((uVar31 & 0xfc000000) == 0);
                  local_47[0] = (-((uVar31 & 0xfc000000) == 0) & 0xfcU) - 4;
                  uVar19 = 6 - (ulong)((uVar31 & 0xfc000000) == 0);
                }
                local_47[iVar16] = bVar23 & 0x3f | 0x80;
                local_47[iVar16 + -1] = bVar8 & 0x3f | 0x80;
                bVar8 = (byte)(iVar10 >> 0xc);
                if (iVar16 + -2 != 0) {
                  local_47[iVar16 + -2] = bVar8 & 0x3f | 0x80;
                  bVar8 = (byte)(iVar10 >> 0x12);
                  iVar16 = iVar16 + -3;
                  if (iVar16 != 0) {
                    local_47[iVar16] = bVar8 & 0x3f | 0x80;
                    bVar8 = (byte)(uVar31 >> 0x18);
                    if (iVar16 != 1) {
                      local_47[1] = bVar8 & 0x3f | 0x80;
                      bVar8 = (char)bVar8 >> 6;
                    }
                  }
                }
              }
              local_47[0] = local_47[0] | bVar8;
              pbVar30 = pbVar29 + uVar19;
              if (pbVar30 + uVar12 < local_68) {
                pbVar20 = local_70 + (long)pbVar29;
                uVar9 = (uint)uVar19;
                uVar31 = uVar19 & 0xffffffff;
                if (uVar9 < 8) {
                  if ((uVar19 & 4) == 0) {
                    if ((uVar9 != 0) && (*pbVar20 = local_47[0], (uVar19 & 2) != 0)) {
                      *(undefined2 *)(pbVar20 + (uVar31 - 2)) =
                           *(undefined2 *)(local_50 + uVar31 + 7);
                    }
                  }
                  else {
                    *(uint *)pbVar20 = CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0]));
                    *(undefined4 *)(pbVar20 + (uVar31 - 4)) = *(undefined4 *)(local_50 + uVar31 + 5)
                    ;
                  }
                }
                else {
                  *(ulong *)pbVar20 =
                       CONCAT44(uVar7,CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0])));
                  *(undefined8 *)(pbVar20 + ((uVar19 & 0xffffffff) - 8)) =
                       *(undefined8 *)(local_50 + (uVar19 & 0xffffffff) + 1);
                  lVar14 = (long)pbVar20 - ((ulong)(pbVar20 + 8) & 0xfffffffffffffff8);
                  uVar9 = uVar9 + (int)lVar14;
                  if (7 < (uVar9 & 0xfffffff8)) {
                    local_58 = (byte *)((ulong)local_58 & 0xffffffff00000000);
                    local_a0 = (byte *)(CONCAT44(local_a0._4_4_,uVar9) & 0xfffffffffffffff8);
                    do {
                      *(undefined8 *)
                       (((ulong)(pbVar20 + 8) & 0xfffffffffffffff8) + ((ulong)local_58 & 0xffffffff)
                       ) = *(undefined8 *)(local_c0 + (((ulong)local_58 & 0xffffffff) - lVar14));
                      uVar9 = (int)local_58 + 8;
                      local_58 = (byte *)CONCAT44(local_58._4_4_,uVar9);
                    } while (uVar9 < (uint)local_a0);
                  }
                }
LAB_00718698:
                pbVar30 = pbVar30 + (long)local_70;
                lVar14 = (long)iVar17;
                if (((ulong)((long)pbVar30 - (lVar4 + 2 + lVar33)) < 0xf) || (uVar12 - 1 < 7)) {
                  uVar31 = 0;
                  do {
                    pbVar30[uVar31] = pbVar35[uVar31 + 1];
                    uVar31 = uVar31 + 1;
                  } while (uVar12 != uVar31);
                }
                else if (uVar12 - 1 < 0xf) {
                  uVar18 = 0;
                  uVar31 = uVar12;
LAB_00718715:
                  *(undefined8 *)(pbVar30 + uVar18) = *(undefined8 *)(pbVar35 + uVar18 + 1);
                  uVar18 = uVar18 + (uVar31 & 0xfffffffffffffff8);
                  if (uVar31 != (uVar31 & 0xfffffffffffffff8)) {
LAB_00718731:
                    pbVar30[uVar18] = *(byte *)(lVar4 + uVar18 + lVar14);
                    if (uVar18 + 1 < uVar12) {
                      pbVar30[uVar18 + 1] = *(byte *)(lVar4 + uVar18 + 1 + lVar14);
                      if (uVar18 + 2 < uVar12) {
                        pbVar30[uVar18 + 2] = *(byte *)(lVar4 + uVar18 + 2 + lVar14);
                        if (uVar18 + 3 < uVar12) {
                          pbVar30[uVar18 + 3] = *(byte *)(lVar4 + uVar18 + 3 + lVar14);
                          if (uVar18 + 4 < uVar12) {
                            pbVar30[uVar18 + 4] = *(byte *)(lVar4 + uVar18 + 4 + lVar14);
                            if (uVar18 + 5 < uVar12) {
                              pbVar30[uVar18 + 5] = *(byte *)(lVar4 + uVar18 + 5 + lVar14);
                              uVar18 = uVar18 + 6;
                              if (uVar18 < uVar12) {
                                pbVar30[uVar18] = *(byte *)(lVar4 + uVar18 + lVar14);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  uVar31 = 0;
                  do {
                    puVar13 = (undefined8 *)(lVar4 + 1 + lVar33 + uVar31);
                    uVar5 = puVar13[1];
                    *(undefined8 *)(pbVar30 + uVar31) = *puVar13;
                    *(undefined8 *)(pbVar30 + uVar31 + 8) = uVar5;
                    uVar31 = uVar31 + 0x10;
                  } while ((bVar21 & 0xf0) != uVar31);
                  uVar18 = uVar12 & 0xfffffffffffffff0;
                  if ((bVar21 & 0xf) != 0) {
                    uVar31 = uVar12 - uVar18;
                    if (6 < (uVar12 - uVar18) - 1) goto LAB_00718715;
                    goto LAB_00718731;
                  }
                }
              }
            }
            uVar31 = 1;
            pbVar29 = pbVar29 + uVar19 + uVar12;
            *(uint *)pbVar34 = (uint)bVar21 + iVar17;
          }
          pbVar34 = pbVar34 + -4;
        } while (local_98 != pbVar34);
      }
    }
    _local_50 = _local_50 + 1;
    if (pbVar29 < local_68) {
      local_70[(long)pbVar29] = _local_50 < local_88;
    }
    pbVar34 = pbVar29 + 1;
  } while (local_88 != _local_50);
  plVar27 = (long *)(puVar25 + -0x10);
  local_80 = pbVar22;
  _local_50 = pbVar29;
  if ((pbVar29 + 1 < (byte *)0x3) || (plVar27 = (long *)(puVar25 + -0x10), pbVar29 != local_b0))
  goto LAB_007154f7;
joined_r0x00718a5c:
  _local_50 = pbVar29 + -1;
  plVar27 = (long *)(puVar25 + -0x10);
  if (pbVar29 <= local_68) {
    (local_70 + -1)[(long)pbVar29] = 0;
    plVar27 = (long *)(puVar25 + -0x10);
  }
LAB_007154f7:
  if (auStack_43._3_8_ == *(long *)(in_FS_OFFSET + 0x28)) {
    return _local_50;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)plVar27 + -8) = 0x7191d2;
  FUN_00771f60();
}

