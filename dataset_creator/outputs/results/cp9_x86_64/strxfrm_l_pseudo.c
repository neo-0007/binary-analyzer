
/* WARNING: Restarted to delay deadcode elimination for space: stack */

size_t strxfrm_l(char *__dest,char *__src,size_t __n,__locale_t __l)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  __locale_data *p_Var4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  char *pcVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  byte *pbVar21;
  byte bVar22;
  byte *pbVar23;
  byte bVar24;
  long *plVar25;
  undefined1 *puVar26;
  long *plVar28;
  uint *puVar29;
  byte *pbVar30;
  byte *pbVar31;
  ulong uVar32;
  uint uVar33;
  long lVar34;
  byte *pbVar35;
  byte *pbVar36;
  uint uVar37;
  long lVar38;
  long in_FS_OFFSET;
  bool bVar39;
  undefined1 local_40f8 [16376];
  undefined *local_100;
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
  char *local_70;
  byte *local_68;
  byte *local_60;
  byte *local_58;
  undefined1 local_50 [5];
  undefined4 uStack_4b;
  byte local_47 [2];
  undefined2 uStack_45;
  undefined1 auStack_43 [19];
  undefined1 *puVar27;
  
  plVar28 = &local_f8;
  plVar25 = &local_f8;
  local_70 = __dest;
  local_a0 = (byte *)__src;
  local_68 = (byte *)__n;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  auStack_43[3] = (undefined1)lVar3;
  uVar8 = auStack_43._0_4_;
  p_Var4 = __l->__locales[3];
  local_88 = (byte *)(ulong)*(uint *)(p_Var4 + 0x40);
  auStack_43._3_8_ = lVar3;
  if ((byte *)(ulong)*(uint *)(p_Var4 + 0x40) == (byte *)0x0) {
    local_100 = (undefined *)0x70bb15;
    _local_50 = (byte *)strlen(__src);
    plVar28 = &local_f8;
    if (local_68 != (byte *)0x0) {
      pbVar30 = local_68;
      if (_local_50 + 1 <= local_68) {
        pbVar30 = _local_50 + 1;
      }
      local_100 = (undefined *)0x70bb42;
      stpncpy(local_70,(char *)local_a0,(size_t)pbVar30);
      plVar28 = &local_f8;
    }
  }
  else {
    if (*__src != '\0') {
      lVar3 = *(long *)(p_Var4 + 0x58);
      local_d0 = *(long *)(p_Var4 + 0x48);
      local_58 = *(byte **)(p_Var4 + 0x60);
      local_80 = *(byte **)(p_Var4 + 0x50);
      local_60 = *(byte **)(p_Var4 + 0x68);
      if (((ulong)*(byte **)(p_Var4 + 0x50) & 3) != 0) {
                    /* WARNING: Subroutine does not return */
        local_100 = (undefined *)0x70bb68;
        __assert_fail("((uintptr_t) l_data.table) % __alignof__ (l_data.table[0]) == 0",
                      "strxfrm_l.c",0x2c0,__PRETTY_FUNCTION___0);
      }
      if (((ulong)*(byte **)(p_Var4 + 0x68) & 3) != 0) {
                    /* WARNING: Subroutine does not return */
        local_100 = &UNK_0070bb87;
        __assert_fail("((uintptr_t) l_data.indirect) % __alignof__ (l_data.indirect[0]) == 0",
                      "strxfrm_l.c",0x2c3,__PRETTY_FUNCTION___0);
      }
      plVar6 = &local_f8;
      while (plVar25 != (long *)local_40f8) {
        plVar28 = (long *)((long)plVar6 + -0x1000);
        *(undefined8 *)((long)plVar6 + -8) = *(undefined8 *)((long)plVar6 + -8);
        plVar25 = (long *)((long)plVar6 + -0x1000);
        plVar6 = (long *)((long)plVar6 + -0x1000);
      }
      puVar26 = (undefined1 *)((long)plVar28 + -0x10);
      *(undefined8 *)((long)plVar28 + -8) = *(undefined8 *)((long)plVar28 + -8);
      uVar13 = (ulong)((long)plVar28 + -1) & 0xfffffffffffffff0;
      puVar27 = (undefined1 *)((long)plVar28 + -0x10);
      puVar7 = (undefined1 *)((long)plVar28 + -0x10);
      while (puVar27 != (undefined1 *)((long)plVar28 + -0x1010)) {
        puVar26 = puVar7 + -0x1000;
        *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
        puVar27 = puVar7 + -0x1000;
        puVar7 = puVar7 + -0x1000;
      }
      *(undefined8 *)(puVar26 + -8) = *(undefined8 *)(puVar26 + -8);
      local_78 = (byte *)((ulong)(puVar26 + -1) & 0xfffffffffffffff0);
      pbVar30 = local_a0;
      pbVar23 = (byte *)0x0;
LAB_0070ba0f:
      pbVar35 = pbVar30 + 1;
      uVar10 = *(uint *)(local_80 + (ulong)*pbVar30 * 4);
      if ((long)(int)uVar10 < 0) {
        puVar29 = (uint *)(local_58 + -(long)(int)uVar10);
LAB_0070ba31:
        do {
          uVar10 = *puVar29;
          bVar22 = (byte)puVar29[1];
          while( true ) {
            uVar32 = (ulong)bVar22;
            if ((int)uVar10 < 0) break;
            if (uVar32 == 0) {
LAB_0070bc59:
              pbVar35 = pbVar35 + uVar32;
              goto LAB_0070bba2;
            }
            uVar20 = 0;
            while (*(byte *)((long)puVar29 + uVar20 + 5) == pbVar30[uVar20 + 1]) {
              uVar20 = uVar20 + 1;
              if (uVar32 == uVar20) goto LAB_0070bc59;
            }
            puVar29 = (uint *)((long)puVar29 + uVar32 + 5);
            uVar10 = bVar22 + 1 & 3;
            if (uVar10 == 0) goto LAB_0070ba31;
            puVar29 = (uint *)((long)puVar29 + (4 - (ulong)uVar10));
            uVar10 = *puVar29;
            bVar22 = (byte)puVar29[1];
          }
          if (uVar32 == 0) {
LAB_0070bb90:
            lVar34 = 0;
            goto LAB_0070bb92;
          }
          uVar20 = 0;
          while( true ) {
            bVar22 = *(byte *)((long)puVar29 + uVar20 + 5);
            if (bVar22 != pbVar30[uVar20 + 1]) break;
            uVar20 = uVar20 + 1;
            if (uVar32 == uVar20) goto LAB_0070bb90;
          }
          if (bVar22 <= pbVar30[uVar20 + 1]) {
            uVar20 = 0;
            while (*(byte *)((long)puVar29 + uVar20 + 5 + uVar32) == pbVar30[uVar20 + 1]) {
              uVar20 = uVar20 + 1;
              if (uVar32 == uVar20) goto LAB_0070bc0f;
            }
            if ((uVar32 == uVar20) ||
               (pbVar35[uVar20] <= *(byte *)((long)puVar29 + uVar20 + uVar32 + 5)))
            goto LAB_0070bc0f;
          }
          puVar29 = (uint *)((long)puVar29 + (uVar32 * 2 - (ulong)((int)(uVar32 * 2) + 1U & 3)) + 9)
          ;
        } while( true );
      }
      goto LAB_0070bba2;
    }
    _local_50 = (byte *)0x0;
    plVar28 = &local_f8;
    if (__n != 0) {
      *__dest = '\0';
      plVar28 = &local_f8;
    }
  }
  goto LAB_0070bae7;
LAB_0070bc63:
  local_c8 = (byte *)0x0;
  local_b8 = (byte *)0x0;
  local_78[0xfff] = 0;
LAB_0070bc87:
  auStack_43._0_4_ = uVar8;
  uVar8 = auStack_43._0_4_;
  bVar22 = *local_a0;
  iVar18 = *(int *)(local_80 + (ulong)bVar22 * 4);
  uVar13 = (ulong)iVar18;
  if ((long)uVar13 < 0) {
    pbVar30 = local_58 + -uVar13;
LAB_0070bcb9:
    do {
      bVar24 = pbVar30[4];
      iVar18 = *(int *)pbVar30;
      while (uVar32 = (ulong)bVar24, -1 < iVar18) {
        if (uVar32 == 0) goto LAB_0070bd75;
        uVar20 = 0;
        while (pbVar30[uVar20 + 5] == local_a0[uVar20 + 1]) {
          uVar20 = uVar20 + 1;
          if (uVar32 == uVar20) goto LAB_0070bd75;
        }
        pbVar30 = pbVar30 + uVar32 + 5;
        uVar10 = bVar24 + 1 & 3;
        if (uVar10 == 0) goto LAB_0070bcb9;
        pbVar30 = pbVar30 + (4 - (ulong)uVar10);
        bVar24 = pbVar30[4];
        iVar18 = *(int *)pbVar30;
      }
      if (uVar32 == 0) {
LAB_0070bd65:
        lVar34 = 0;
        goto LAB_0070bd67;
      }
      uVar20 = 0;
      while( true ) {
        if (pbVar30[uVar20 + 5] != local_a0[uVar20 + 1]) break;
        uVar20 = uVar20 + 1;
        if (uVar32 == uVar20) goto LAB_0070bd65;
      }
      if (pbVar30[uVar20 + 5] <= local_a0[uVar20 + 1]) {
        uVar20 = 0;
        while (pbVar30[uVar20 + 5 + uVar32] == local_a0[uVar20 + 1]) {
          uVar20 = uVar20 + 1;
          if (uVar32 == uVar20) goto LAB_0070c9a4;
        }
        if ((uVar32 == uVar20) || (local_a0[uVar20 + 1] <= pbVar30[uVar20 + uVar32 + 5]))
        goto LAB_0070c9a4;
      }
      pbVar30 = pbVar30 + (uVar32 * 2 - (ulong)((int)(uVar32 * 2) + 1U & 3)) + 9;
    } while( true );
  }
  goto LAB_0070bd75;
LAB_0070c9a4:
  uVar19 = 0;
  uVar20 = uVar19;
  if (pbVar30[5] == local_a0[1]) {
    do {
      uVar19 = uVar20 + 1;
      lVar15 = uVar20 + 2;
      lVar34 = uVar20 + 6;
      uVar20 = uVar19;
    } while (pbVar30[lVar34] == local_a0[lVar15]);
  }
  lVar34 = 0;
  do {
    lVar15 = uVar19 + 5;
    lVar38 = uVar19 + 1;
    uVar19 = uVar19 + 1;
    lVar34 = (long)(int)((uint)local_a0[lVar38] - (uint)pbVar30[lVar15]) + lVar34 * 0x100;
  } while (uVar19 < uVar32);
LAB_0070bd67:
  iVar18 = *(int *)(local_60 + (lVar34 - iVar18) * 4);
LAB_0070bd75:
  lVar34 = auStack_43._3_8_;
  if ((*(byte *)((ulong)(iVar18 >> 0x18 & 0xff) * (long)local_88 + local_d0 +
                (long)(int)(uint)local_b8) & 4) == 0) {
    if (bVar22 != 0) {
      local_90 = (byte *)0x0;
      local_d8 = local_b8 + local_d0;
      _local_50 = local_c8;
      pbVar30 = (byte *)0x0;
      pbVar23 = local_a0;
LAB_0070cd32:
      local_78 = pbVar23 + 1;
      if ((long)uVar13 < 0) {
        pbVar35 = local_58 + -uVar13;
LAB_0070cd4a:
        do {
          iVar18 = *(int *)pbVar35;
          bVar22 = pbVar35[4];
          while( true ) {
            uVar32 = (ulong)bVar22;
            uVar13 = (ulong)iVar18;
            if (iVar18 < 0) break;
            if (uVar32 == 0) {
LAB_0070df15:
              local_78 = local_78 + uVar32;
              goto LAB_0070ce06;
            }
            uVar20 = 0;
            while (pbVar35[uVar20 + 5] == pbVar23[uVar20 + 1]) {
              uVar20 = uVar20 + 1;
              if (uVar32 == uVar20) goto LAB_0070df15;
            }
            pbVar35 = pbVar35 + uVar32 + 5;
            uVar10 = bVar22 + 1 & 3;
            if (uVar10 == 0) goto LAB_0070cd4a;
            pbVar35 = pbVar35 + (4 - (ulong)uVar10);
            iVar18 = *(int *)pbVar35;
            bVar22 = pbVar35[4];
          }
          if (uVar32 == 0) {
LAB_0070cdf4:
            lVar15 = 0;
            goto LAB_0070cdf7;
          }
          uVar20 = 0;
          while( true ) {
            if (pbVar35[uVar20 + 5] != pbVar23[uVar20 + 1]) break;
            uVar20 = uVar20 + 1;
            if (uVar32 == uVar20) goto LAB_0070cdf4;
          }
          if (pbVar35[uVar20 + 5] <= pbVar23[uVar20 + 1]) {
            uVar20 = 0;
            while (pbVar35[uVar20 + 5 + uVar32] == pbVar23[uVar20 + 1]) {
              uVar20 = uVar20 + 1;
              if (uVar32 == uVar20) goto LAB_0070ced8;
            }
            if ((uVar32 == uVar20) || (local_78[uVar20] <= pbVar35[uVar20 + uVar32 + 5]))
            goto LAB_0070ced8;
          }
          pbVar35 = pbVar35 + (uVar32 * 2 - (ulong)((int)(uVar32 * 2) + 1U & 3)) + 9;
        } while( true );
      }
      goto LAB_0070ce06;
    }
  }
  else if (bVar22 != 0) {
    pbVar30 = (byte *)0x0;
    local_90 = (byte *)0x0;
    local_78 = (byte *)CONCAT44(local_78._4_4_,1);
    _local_50 = local_c8;
    local_d8 = local_b8 + local_d0;
    local_a8 = local_47;
    pbVar23 = local_a0;
    auStack_43._0_4_ = uVar8;
LAB_0070bde8:
    auStack_43._3_8_ = lVar34;
    uVar8 = auStack_43._0_4_;
    local_b0 = pbVar23 + 1;
    if ((long)uVar13 < 0) {
      pbVar35 = local_58 + -uVar13;
LAB_0070be03:
      do {
        iVar18 = *(int *)pbVar35;
        bVar22 = pbVar35[4];
        while( true ) {
          uVar32 = (ulong)bVar22;
          uVar13 = (ulong)iVar18;
          if (iVar18 < 0) break;
          if (uVar32 == 0) {
LAB_0070df09:
            local_b0 = local_b0 + uVar32;
            goto LAB_0070beb8;
          }
          uVar20 = 0;
          while (pbVar35[uVar20 + 5] == pbVar23[uVar20 + 1]) {
            uVar20 = uVar20 + 1;
            if (uVar32 == uVar20) goto LAB_0070df09;
          }
          pbVar35 = pbVar35 + uVar32 + 5;
          uVar10 = bVar22 + 1 & 3;
          if (uVar10 == 0) goto LAB_0070be03;
          pbVar35 = pbVar35 + (4 - (ulong)uVar10);
          iVar18 = *(int *)pbVar35;
          bVar22 = pbVar35[4];
        }
        if (uVar32 == 0) {
LAB_0070bea3:
          lVar34 = 0;
          goto LAB_0070bea6;
        }
        uVar20 = 0;
        while( true ) {
          if (pbVar35[uVar20 + 5] != pbVar23[uVar20 + 1]) break;
          uVar20 = uVar20 + 1;
          if (uVar32 == uVar20) goto LAB_0070bea3;
        }
        if (pbVar35[uVar20 + 5] <= pbVar23[uVar20 + 1]) {
          uVar20 = 0;
          while (pbVar35[uVar20 + 5 + uVar32] == pbVar23[uVar20 + 1]) {
            uVar20 = uVar20 + 1;
            if (uVar32 == uVar20) goto LAB_0070c083;
          }
          if ((uVar32 == uVar20) || (local_b0[uVar20] <= pbVar35[uVar20 + uVar32 + 5]))
          goto LAB_0070c083;
        }
        pbVar35 = pbVar35 + (uVar32 * 2 - (ulong)((int)(uVar32 * 2) + 1U & 3)) + 9;
      } while( true );
    }
    goto LAB_0070beb8;
  }
  _local_50 = local_c8;
LAB_0070d548:
  auStack_43._0_4_ = uVar8;
  auStack_43._3_8_ = lVar34;
  uVar8 = auStack_43._0_4_;
  local_b8 = local_b8 + 1;
  if (_local_50 < local_68) {
    local_70[(long)_local_50] = local_b8 < local_88;
  }
  if (local_88 == local_b8) goto LAB_0070f1a2;
  local_c8 = _local_50 + 1;
  goto LAB_0070bc87;
LAB_0070ced8:
  uVar19 = 0;
  uVar20 = uVar19;
  if (pbVar23[1] == pbVar35[5]) {
    do {
      uVar19 = uVar20 + 1;
      lVar38 = uVar20 + 2;
      lVar15 = uVar20 + 6;
      uVar20 = uVar19;
    } while (pbVar35[lVar15] == pbVar23[lVar38]);
  }
  lVar15 = 0;
  do {
    lVar1 = uVar19 + 1;
    lVar38 = uVar19 + 5;
    uVar19 = uVar19 + 1;
    lVar15 = lVar15 * 0x100 + (long)(int)((uint)pbVar23[lVar1] - (uint)pbVar35[lVar38]);
  } while (uVar19 < uVar32);
LAB_0070cdf7:
  local_78 = local_78 + uVar32;
  uVar13 = (ulong)*(uint *)(local_60 + (lVar15 - uVar13) * 4);
LAB_0070ce06:
  uVar10 = (uint)uVar13 & 0xffffff;
  iVar18 = uVar10 + 1;
  pbVar35 = (byte *)(ulong)*(byte *)(lVar3 + (int)uVar10);
  if (0 < (int)(uint)local_b8) {
    iVar11 = 0;
    do {
      iVar17 = (int)pbVar35 + iVar18;
      iVar11 = iVar11 + 1;
      iVar18 = iVar17 + 1;
      pbVar35 = (byte *)(ulong)*(byte *)(lVar3 + iVar17);
    } while (iVar11 != (uint)local_b8);
  }
  if ((local_d8[(ulong)((int)(uint)uVar13 >> 0x18 & 0xff) * (long)local_88] & 1) == 0) {
    if (pbVar30 == (byte *)0x0) {
      pbVar30 = pbVar23;
    }
    local_90 = local_90 + (long)pbVar35;
    bVar22 = *local_78;
    goto joined_r0x0070cf33;
  }
  if (pbVar30 != (byte *)0x0) {
    if (local_90 != (byte *)0x0) {
      local_98 = (byte *)CONCAT44(local_98._4_4_,iVar18);
      pbVar23 = local_90;
LAB_0070d047:
      pbVar36 = pbVar30 + 1;
      uVar10 = *(uint *)(local_80 + (ulong)*pbVar30 * 4);
      if ((long)(int)uVar10 < 0) {
        puVar29 = (uint *)(local_58 + -(long)(int)uVar10);
LAB_0070d070:
        do {
          uVar10 = *puVar29;
          bVar22 = (byte)puVar29[1];
          while( true ) {
            uVar13 = (ulong)bVar22;
            if ((int)uVar10 < 0) break;
            if (uVar13 == 0) {
LAB_0070d4d9:
              pbVar36 = pbVar36 + uVar13;
              goto LAB_0070d126;
            }
            uVar32 = 0;
            while (*(byte *)((long)puVar29 + uVar32 + 5) == pbVar30[uVar32 + 1]) {
              uVar32 = uVar32 + 1;
              if (uVar13 == uVar32) goto LAB_0070d4d9;
            }
            puVar29 = (uint *)((long)puVar29 + uVar13 + 5);
            uVar10 = bVar22 + 1 & 3;
            if (uVar10 == 0) goto LAB_0070d070;
            puVar29 = (uint *)((long)puVar29 + (4 - (ulong)uVar10));
            uVar10 = *puVar29;
            bVar22 = (byte)puVar29[1];
          }
          if (uVar13 == 0) {
LAB_0070d114:
            lVar15 = 0;
            goto LAB_0070d117;
          }
          uVar32 = 0;
          while( true ) {
            bVar22 = *(byte *)((long)puVar29 + uVar32 + 5);
            if (bVar22 != pbVar30[uVar32 + 1]) break;
            uVar32 = uVar32 + 1;
            if (uVar13 == uVar32) goto LAB_0070d114;
          }
          if (bVar22 <= pbVar30[uVar32 + 1]) {
            uVar32 = 0;
            while (*(byte *)((long)puVar29 + uVar32 + 5 + uVar13) == pbVar30[uVar32 + 1]) {
              uVar32 = uVar32 + 1;
              if (uVar13 == uVar32) goto LAB_0070d1ce;
            }
            if ((uVar13 == uVar32) ||
               (pbVar36[uVar32] <= *(byte *)((long)puVar29 + uVar32 + uVar13 + 5)))
            goto LAB_0070d1ce;
          }
          puVar29 = (uint *)((long)puVar29 + (uVar13 * 2 - (ulong)((int)(uVar13 * 2) + 1U & 3)) + 9)
          ;
        } while( true );
      }
      goto LAB_0070d126;
    }
LAB_0070d17d:
    _local_50 = local_90 + (long)_local_50;
    local_90 = (byte *)0x0;
  }
  pbVar30 = _local_50 + (long)pbVar35;
  pbVar23 = pbVar30;
  if ((pbVar30 < local_68) && (pbVar36 = pbVar35 + -1, pbVar23 = _local_50, pbVar35 != (byte *)0x0))
  {
    pcVar14 = local_70 + (long)_local_50;
    lVar15 = (long)iVar18;
    if (((ulong)((long)pcVar14 - (lVar3 + 1 + lVar15)) < 0xf) || (pbVar36 < (byte *)0x7)) {
      lVar15 = lVar15 - (long)_local_50;
      do {
        pbVar23 = _local_50 + lVar15 + lVar3;
        _local_50 = _local_50 + 1;
        (local_70 + -1)[(long)_local_50] = *pbVar23;
        pbVar23 = pbVar30;
      } while (pbVar30 != _local_50);
    }
    else if (pbVar36 < (byte *)0xf) {
      pbVar31 = (byte *)0x0;
LAB_0070da51:
      *(undefined8 *)(pcVar14 + (long)pbVar31) = *(undefined8 *)(pbVar31 + lVar15 + lVar3);
      pbVar31 = (byte *)((ulong)pbVar35 & 0xfffffffffffffff8);
      iVar18 = iVar18 + (int)pbVar31;
      _local_50 = _local_50 + (long)pbVar31;
      pbVar36 = pbVar36 + -(long)pbVar31;
      pbVar23 = pbVar30;
      if (pbVar31 != pbVar35) {
LAB_0070da75:
        local_70[(long)_local_50] = *(char *)(lVar3 + iVar18);
        pbVar23 = pbVar30;
        if (pbVar36 != (byte *)0x0) {
          (local_70 + 1)[(long)_local_50] = *(char *)(lVar3 + (iVar18 + 1));
          if (pbVar36 != (byte *)0x1) {
            (local_70 + 2)[(long)_local_50] = *(char *)(lVar3 + (iVar18 + 2));
            if (pbVar36 != &_nl_current_LC_PAPER_used) {
              (local_70 + 3)[(long)_local_50] = *(char *)(lVar3 + (iVar18 + 3));
              if (pbVar36 != (byte *)0x3) {
                (local_70 + 4)[(long)_local_50] = *(char *)(lVar3 + (iVar18 + 4));
                if (pbVar36 != (byte *)0x4) {
                  (local_70 + 5)[(long)_local_50] = *(char *)(lVar3 + (iVar18 + 5));
                  if (pbVar36 != (byte *)0x5) {
                    (local_70 + 6)[(long)_local_50] = *(char *)(lVar3 + (iVar18 + 6));
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      puVar2 = (undefined8 *)(lVar3 + lVar15);
      uVar5 = puVar2[1];
      uVar13 = (ulong)pbVar35 >> 4;
      *(undefined8 *)pcVar14 = *puVar2;
      *(undefined8 *)(pcVar14 + 8) = uVar5;
      if (uVar13 != 1) {
        uVar5 = puVar2[3];
        *(undefined8 *)(pcVar14 + 0x10) = puVar2[2];
        *(undefined8 *)(pcVar14 + 0x18) = uVar5;
        if (uVar13 != 2) {
          uVar5 = puVar2[5];
          *(undefined8 *)(pcVar14 + 0x20) = puVar2[4];
          *(undefined8 *)(pcVar14 + 0x28) = uVar5;
          if (uVar13 != 3) {
            uVar5 = puVar2[7];
            *(undefined8 *)(pcVar14 + 0x30) = puVar2[6];
            *(undefined8 *)(pcVar14 + 0x38) = uVar5;
            if (uVar13 != 4) {
              uVar5 = puVar2[9];
              *(undefined8 *)(pcVar14 + 0x40) = puVar2[8];
              *(undefined8 *)(pcVar14 + 0x48) = uVar5;
              if (uVar13 != 5) {
                uVar5 = puVar2[0xb];
                *(undefined8 *)(pcVar14 + 0x50) = puVar2[10];
                *(undefined8 *)(pcVar14 + 0x58) = uVar5;
                if (uVar13 != 6) {
                  uVar5 = puVar2[0xd];
                  *(undefined8 *)(pcVar14 + 0x60) = puVar2[0xc];
                  *(undefined8 *)(pcVar14 + 0x68) = uVar5;
                  if (uVar13 != 7) {
                    uVar5 = puVar2[0xf];
                    *(undefined8 *)(pcVar14 + 0x70) = puVar2[0xe];
                    *(undefined8 *)(pcVar14 + 0x78) = uVar5;
                    if (uVar13 != 8) {
                      uVar5 = puVar2[0x11];
                      *(undefined8 *)(pcVar14 + 0x80) = puVar2[0x10];
                      *(undefined8 *)(pcVar14 + 0x88) = uVar5;
                      if (uVar13 != 9) {
                        uVar5 = puVar2[0x13];
                        *(undefined8 *)(pcVar14 + 0x90) = puVar2[0x12];
                        *(undefined8 *)(pcVar14 + 0x98) = uVar5;
                        if (uVar13 != 10) {
                          uVar5 = puVar2[0x15];
                          *(undefined8 *)(pcVar14 + 0xa0) = puVar2[0x14];
                          *(undefined8 *)(pcVar14 + 0xa8) = uVar5;
                          if (uVar13 != 0xb) {
                            uVar5 = puVar2[0x17];
                            *(undefined8 *)(pcVar14 + 0xb0) = puVar2[0x16];
                            *(undefined8 *)(pcVar14 + 0xb8) = uVar5;
                            if (uVar13 != 0xc) {
                              uVar5 = puVar2[0x19];
                              *(undefined8 *)(pcVar14 + 0xc0) = puVar2[0x18];
                              *(undefined8 *)(pcVar14 + 200) = uVar5;
                              if (uVar13 != 0xd) {
                                uVar5 = puVar2[0x1b];
                                *(undefined8 *)(pcVar14 + 0xd0) = puVar2[0x1a];
                                *(undefined8 *)(pcVar14 + 0xd8) = uVar5;
                                if (uVar13 == 0xf) {
                                  uVar5 = puVar2[0x1d];
                                  *(undefined8 *)(pcVar14 + 0xe0) = puVar2[0x1c];
                                  *(undefined8 *)(pcVar14 + 0xe8) = uVar5;
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
      pbVar31 = (byte *)((ulong)pbVar35 & 0xfffffffffffffff0);
      iVar18 = iVar18 + (int)pbVar31;
      _local_50 = _local_50 + (long)pbVar31;
      pbVar36 = pbVar36 + -(long)pbVar31;
      pbVar23 = pbVar30;
      if (pbVar35 != pbVar31) {
        pbVar35 = pbVar35 + -(long)pbVar31;
        if ((byte *)0x6 < pbVar35 + -1) goto LAB_0070da51;
        goto LAB_0070da75;
      }
    }
  }
  _local_50 = pbVar23;
  pbVar30 = (byte *)0x0;
  bVar22 = *local_78;
joined_r0x0070cf33:
  if (bVar22 == 0) goto LAB_0070cf39;
  uVar13 = (ulong)*(int *)(local_80 + (ulong)bVar22 * 4);
  pbVar23 = local_78;
  goto LAB_0070cd32;
LAB_0070d1ce:
  uVar20 = 0;
  uVar32 = uVar20;
  if (*(byte *)((long)puVar29 + 5) == pbVar30[1]) {
    do {
      uVar20 = uVar32 + 1;
      lVar38 = uVar32 + 2;
      lVar15 = uVar32 + 6;
      uVar32 = uVar20;
    } while (*(byte *)((long)puVar29 + lVar15) == pbVar30[lVar38]);
  }
  lVar15 = 0;
  do {
    lVar1 = uVar20 + 1;
    lVar38 = uVar20 + 5;
    uVar20 = uVar20 + 1;
    lVar15 = lVar15 * 0x100 +
             (long)(int)((uint)pbVar30[lVar1] - (uint)*(byte *)((long)puVar29 + lVar38));
  } while (uVar20 < uVar13);
LAB_0070d117:
  pbVar36 = pbVar36 + uVar13;
  uVar10 = *(uint *)(local_60 + (lVar15 - (int)uVar10) * 4);
LAB_0070d126:
  iVar11 = (uVar10 & 0xffffff) + 1;
  uVar13 = (ulong)*(byte *)(lVar3 + (int)(uVar10 & 0xffffff));
  if (0 < (int)(uint)local_b8) {
    iVar17 = 0;
    do {
      iVar12 = (int)uVar13 + iVar11;
      iVar17 = iVar17 + 1;
      iVar11 = iVar12 + 1;
      uVar13 = (ulong)*(byte *)(lVar3 + iVar12);
    } while (iVar17 != (uint)local_b8);
  }
  pbVar30 = pbVar23 + (long)_local_50;
  if ((local_68 <= pbVar30) || (uVar13 == 0)) goto LAB_0070d167;
  lVar38 = (long)iVar11;
  lVar15 = (long)pbVar30 - uVar13;
  pcVar14 = local_70 + lVar15;
  if (((ulong)((long)pcVar14 - (lVar3 + 1 + lVar38)) < 0xf) || (uVar13 - 1 < 7)) {
    lVar1 = uVar13 + lVar38;
    lVar15 = lVar15 - lVar38;
    do {
      local_70[lVar38 + lVar15] = *(char *)(lVar3 + lVar38);
      lVar38 = lVar38 + 1;
    } while (lVar1 != lVar38);
    goto LAB_0070d167;
  }
  if (uVar13 - 1 < 0xf) {
    uVar20 = 0;
    uVar32 = uVar13;
LAB_0070d3cb:
    *(undefined8 *)(local_70 + lVar15 + uVar20) = *(undefined8 *)(lVar3 + uVar20 + lVar38);
    uVar20 = uVar32 & 0xfffffffffffffff8;
    iVar11 = iVar11 + (int)uVar20;
    uVar19 = uVar32 - uVar20;
    if (uVar20 == uVar32) goto LAB_0070d167;
    uVar16 = uVar19 - 1;
  }
  else {
    puVar2 = (undefined8 *)(lVar3 + lVar38);
    uVar5 = puVar2[1];
    uVar32 = uVar13 >> 4;
    *(undefined8 *)pcVar14 = *puVar2;
    *(undefined8 *)(pcVar14 + 8) = uVar5;
    if (uVar32 != 1) {
      uVar5 = puVar2[3];
      *(undefined8 *)(pcVar14 + 0x10) = puVar2[2];
      *(undefined8 *)(pcVar14 + 0x18) = uVar5;
      if (uVar32 != 2) {
        uVar5 = puVar2[5];
        *(undefined8 *)(pcVar14 + 0x20) = puVar2[4];
        *(undefined8 *)(pcVar14 + 0x28) = uVar5;
        if (uVar32 != 3) {
          uVar5 = puVar2[7];
          *(undefined8 *)(pcVar14 + 0x30) = puVar2[6];
          *(undefined8 *)(pcVar14 + 0x38) = uVar5;
          if (uVar32 != 4) {
            uVar5 = puVar2[9];
            *(undefined8 *)(pcVar14 + 0x40) = puVar2[8];
            *(undefined8 *)(pcVar14 + 0x48) = uVar5;
            if (uVar32 != 5) {
              uVar5 = puVar2[0xb];
              *(undefined8 *)(pcVar14 + 0x50) = puVar2[10];
              *(undefined8 *)(pcVar14 + 0x58) = uVar5;
              if (uVar32 != 6) {
                uVar5 = puVar2[0xd];
                *(undefined8 *)(pcVar14 + 0x60) = puVar2[0xc];
                *(undefined8 *)(pcVar14 + 0x68) = uVar5;
                if (uVar32 != 7) {
                  uVar5 = puVar2[0xf];
                  *(undefined8 *)(pcVar14 + 0x70) = puVar2[0xe];
                  *(undefined8 *)(pcVar14 + 0x78) = uVar5;
                  if (uVar32 != 8) {
                    uVar5 = puVar2[0x11];
                    *(undefined8 *)(pcVar14 + 0x80) = puVar2[0x10];
                    *(undefined8 *)(pcVar14 + 0x88) = uVar5;
                    if (uVar32 != 9) {
                      uVar5 = puVar2[0x13];
                      *(undefined8 *)(pcVar14 + 0x90) = puVar2[0x12];
                      *(undefined8 *)(pcVar14 + 0x98) = uVar5;
                      if (uVar32 != 10) {
                        uVar5 = puVar2[0x15];
                        *(undefined8 *)(pcVar14 + 0xa0) = puVar2[0x14];
                        *(undefined8 *)(pcVar14 + 0xa8) = uVar5;
                        if (uVar32 != 0xb) {
                          uVar5 = puVar2[0x17];
                          *(undefined8 *)(pcVar14 + 0xb0) = puVar2[0x16];
                          *(undefined8 *)(pcVar14 + 0xb8) = uVar5;
                          if (uVar32 != 0xc) {
                            uVar5 = puVar2[0x19];
                            *(undefined8 *)(pcVar14 + 0xc0) = puVar2[0x18];
                            *(undefined8 *)(pcVar14 + 200) = uVar5;
                            if (uVar32 != 0xd) {
                              uVar5 = puVar2[0x1b];
                              *(undefined8 *)(pcVar14 + 0xd0) = puVar2[0x1a];
                              *(undefined8 *)(pcVar14 + 0xd8) = uVar5;
                              if (uVar32 == 0xf) {
                                uVar5 = puVar2[0x1d];
                                *(undefined8 *)(pcVar14 + 0xe0) = puVar2[0x1c];
                                *(undefined8 *)(pcVar14 + 0xe8) = uVar5;
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
    uVar20 = uVar13 & 0xfffffffffffffff0;
    iVar11 = iVar11 + (int)uVar20;
    uVar19 = uVar13 - uVar20;
    if (uVar13 == uVar20) goto LAB_0070d167;
    uVar16 = uVar19 - 1;
    uVar32 = uVar19;
    if (6 < uVar16) goto LAB_0070d3cb;
  }
  local_70[(long)pbVar30 - uVar19] = *(char *)(lVar3 + iVar11);
  if (uVar16 != 0) {
    local_70[(long)pbVar30 - uVar16] = *(char *)(lVar3 + (iVar11 + 1));
    if (uVar19 - 2 != 0) {
      local_70[(long)pbVar30 - (uVar19 - 2)] = *(char *)(lVar3 + (iVar11 + 2));
      if (uVar19 - 3 != 0) {
        local_70[(long)pbVar30 - (uVar19 - 3)] = *(char *)(lVar3 + (iVar11 + 3));
        if (uVar19 - 4 != 0) {
          local_70[(long)pbVar30 - (uVar19 - 4)] = *(char *)(lVar3 + (iVar11 + 4));
          if (uVar19 - 5 != 0) {
            local_70[(long)pbVar30 - (uVar19 - 5)] = *(char *)(lVar3 + (iVar11 + 5));
            if (uVar19 - 6 != 0) {
              local_70[(long)pbVar30 - (uVar19 - 6)] = *(char *)(lVar3 + (iVar11 + 6));
            }
          }
        }
      }
    }
  }
LAB_0070d167:
  pbVar23 = pbVar23 + -uVar13;
  pbVar30 = pbVar36;
  local_a8 = pbVar35;
  if (pbVar23 == (byte *)0x0) goto LAB_0070d17d;
  goto LAB_0070d047;
LAB_0070cf39:
  if (pbVar30 != (byte *)0x0) {
    pbVar23 = local_90;
    if (local_90 != (byte *)0x0) {
LAB_0070cf59:
      pbVar35 = pbVar30 + 1;
      uVar10 = *(uint *)(local_80 + (ulong)*pbVar30 * 4);
      if ((long)(int)uVar10 < 0) {
        puVar29 = (uint *)(local_58 + -(long)(int)uVar10);
LAB_0070cf7b:
        do {
          uVar10 = *puVar29;
          bVar22 = (byte)puVar29[1];
          while( true ) {
            uVar13 = (ulong)bVar22;
            if ((int)uVar10 < 0) break;
            if (uVar13 == 0) {
LAB_0070f199:
              pbVar35 = pbVar35 + uVar13;
              goto LAB_0070d4f3;
            }
            uVar32 = 0;
            while (*(byte *)((long)puVar29 + uVar32 + 5) == pbVar30[uVar32 + 1]) {
              uVar32 = uVar32 + 1;
              if (uVar13 == uVar32) goto LAB_0070f199;
            }
            puVar29 = (uint *)((long)puVar29 + uVar13 + 5);
            uVar10 = bVar22 + 1 & 3;
            if (uVar10 == 0) goto LAB_0070cf7b;
            puVar29 = (uint *)((long)puVar29 + (4 - (ulong)uVar10));
            uVar10 = *puVar29;
            bVar22 = (byte)puVar29[1];
          }
          if (uVar13 == 0) {
LAB_0070d4e2:
            lVar15 = 0;
            goto LAB_0070d4e4;
          }
          uVar32 = 0;
          while( true ) {
            bVar22 = *(byte *)((long)puVar29 + uVar32 + 5);
            if (bVar22 != pbVar30[uVar32 + 1]) break;
            uVar32 = uVar32 + 1;
            if (uVar13 == uVar32) goto LAB_0070d4e2;
          }
          if (bVar22 <= pbVar30[uVar32 + 1]) {
            uVar32 = 0;
            while (*(byte *)((long)puVar29 + uVar32 + 5 + uVar13) == pbVar30[uVar32 + 1]) {
              uVar32 = uVar32 + 1;
              if (uVar13 == uVar32) goto LAB_0070d5c7;
            }
            if ((uVar13 == uVar32) ||
               (pbVar35[uVar32] <= *(byte *)((long)puVar29 + uVar32 + uVar13 + 5)))
            goto LAB_0070d5c7;
          }
          puVar29 = (uint *)((long)puVar29 + (uVar13 * 2 - (ulong)((int)(uVar13 * 2) + 1U & 3)) + 9)
          ;
        } while( true );
      }
      goto LAB_0070d4f3;
    }
LAB_0070d53d:
    _local_50 = _local_50 + (long)local_90;
  }
  goto LAB_0070d548;
LAB_0070d5c7:
  uVar20 = 0;
  uVar32 = uVar20;
  if (*(byte *)((long)puVar29 + 5) == pbVar30[1]) {
    do {
      uVar20 = uVar32 + 1;
      lVar38 = uVar32 + 2;
      lVar15 = uVar32 + 6;
      uVar32 = uVar20;
    } while (*(byte *)((long)puVar29 + lVar15) == pbVar30[lVar38]);
  }
  lVar15 = 0;
  do {
    lVar38 = uVar20 + 5;
    lVar1 = uVar20 + 1;
    uVar20 = uVar20 + 1;
    lVar15 = (long)(int)((uint)pbVar30[lVar1] - (uint)*(byte *)((long)puVar29 + lVar38)) +
             lVar15 * 0x100;
  } while (uVar20 < uVar13);
LAB_0070d4e4:
  pbVar35 = pbVar35 + uVar13;
  uVar10 = *(uint *)(local_60 + (lVar15 - (int)uVar10) * 4);
LAB_0070d4f3:
  iVar18 = (uVar10 & 0xffffff) + 1;
  uVar13 = (ulong)*(byte *)(lVar3 + (int)(uVar10 & 0xffffff));
  if (0 < (int)(uint)local_b8) {
    iVar11 = 0;
    do {
      iVar17 = (int)uVar13 + iVar18;
      iVar11 = iVar11 + 1;
      iVar18 = iVar17 + 1;
      uVar13 = (ulong)*(byte *)(lVar3 + iVar17);
    } while (iVar11 != (uint)local_b8);
  }
  pbVar30 = _local_50 + (long)pbVar23;
  if ((local_68 <= pbVar30) || (uVar13 == 0)) goto LAB_0070d534;
  lVar15 = (long)iVar18;
  lVar38 = (long)pbVar30 - uVar13;
  pcVar14 = local_70 + lVar38;
  if (((ulong)((long)pcVar14 - (lVar3 + 1 + lVar15)) < 0xf) || (uVar13 - 1 < 7)) {
    lVar1 = uVar13 + lVar15;
    lVar38 = lVar38 - lVar15;
    do {
      local_70[lVar15 + lVar38] = *(char *)(lVar3 + lVar15);
      lVar15 = lVar15 + 1;
    } while (lVar1 != lVar15);
    goto LAB_0070d534;
  }
  if (uVar13 - 1 < 0xf) {
    uVar20 = 0;
    uVar32 = uVar13;
LAB_0070d7b8:
    *(undefined8 *)(local_70 + lVar38 + uVar20) = *(undefined8 *)(lVar3 + uVar20 + lVar15);
    uVar20 = uVar32 & 0xfffffffffffffff8;
    iVar18 = iVar18 + (int)uVar20;
    uVar19 = uVar32 - uVar20;
    if (uVar32 == uVar20) goto LAB_0070d534;
    uVar16 = uVar19 - 1;
  }
  else {
    puVar2 = (undefined8 *)(lVar3 + lVar15);
    uVar5 = puVar2[1];
    uVar32 = uVar13 >> 4;
    *(undefined8 *)pcVar14 = *puVar2;
    *(undefined8 *)(pcVar14 + 8) = uVar5;
    if (uVar32 != 1) {
      uVar5 = puVar2[3];
      *(undefined8 *)(pcVar14 + 0x10) = puVar2[2];
      *(undefined8 *)(pcVar14 + 0x18) = uVar5;
      if (uVar32 != 2) {
        uVar5 = puVar2[5];
        *(undefined8 *)(pcVar14 + 0x20) = puVar2[4];
        *(undefined8 *)(pcVar14 + 0x28) = uVar5;
        if (uVar32 != 3) {
          uVar5 = puVar2[7];
          *(undefined8 *)(pcVar14 + 0x30) = puVar2[6];
          *(undefined8 *)(pcVar14 + 0x38) = uVar5;
          if (uVar32 != 4) {
            uVar5 = puVar2[9];
            *(undefined8 *)(pcVar14 + 0x40) = puVar2[8];
            *(undefined8 *)(pcVar14 + 0x48) = uVar5;
            if (uVar32 != 5) {
              uVar5 = puVar2[0xb];
              *(undefined8 *)(pcVar14 + 0x50) = puVar2[10];
              *(undefined8 *)(pcVar14 + 0x58) = uVar5;
              if (uVar32 != 6) {
                uVar5 = puVar2[0xd];
                *(undefined8 *)(pcVar14 + 0x60) = puVar2[0xc];
                *(undefined8 *)(pcVar14 + 0x68) = uVar5;
                if (uVar32 != 7) {
                  uVar5 = puVar2[0xf];
                  *(undefined8 *)(pcVar14 + 0x70) = puVar2[0xe];
                  *(undefined8 *)(pcVar14 + 0x78) = uVar5;
                  if (uVar32 != 8) {
                    uVar5 = puVar2[0x11];
                    *(undefined8 *)(pcVar14 + 0x80) = puVar2[0x10];
                    *(undefined8 *)(pcVar14 + 0x88) = uVar5;
                    if (uVar32 != 9) {
                      uVar5 = puVar2[0x13];
                      *(undefined8 *)(pcVar14 + 0x90) = puVar2[0x12];
                      *(undefined8 *)(pcVar14 + 0x98) = uVar5;
                      if (uVar32 != 10) {
                        uVar5 = puVar2[0x15];
                        *(undefined8 *)(pcVar14 + 0xa0) = puVar2[0x14];
                        *(undefined8 *)(pcVar14 + 0xa8) = uVar5;
                        if (uVar32 != 0xb) {
                          uVar5 = puVar2[0x17];
                          *(undefined8 *)(pcVar14 + 0xb0) = puVar2[0x16];
                          *(undefined8 *)(pcVar14 + 0xb8) = uVar5;
                          if (uVar32 != 0xc) {
                            uVar5 = puVar2[0x19];
                            *(undefined8 *)(pcVar14 + 0xc0) = puVar2[0x18];
                            *(undefined8 *)(pcVar14 + 200) = uVar5;
                            if (uVar32 != 0xd) {
                              uVar5 = puVar2[0x1b];
                              *(undefined8 *)(pcVar14 + 0xd0) = puVar2[0x1a];
                              *(undefined8 *)(pcVar14 + 0xd8) = uVar5;
                              if (uVar32 == 0xf) {
                                uVar5 = puVar2[0x1d];
                                *(undefined8 *)(pcVar14 + 0xe0) = puVar2[0x1c];
                                *(undefined8 *)(pcVar14 + 0xe8) = uVar5;
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
    uVar20 = uVar13 & 0xfffffffffffffff0;
    iVar18 = iVar18 + (int)uVar20;
    uVar19 = uVar13 - uVar20;
    if (uVar20 == uVar13) goto LAB_0070d534;
    uVar16 = uVar19 - 1;
    uVar32 = uVar19;
    if (6 < uVar16) goto LAB_0070d7b8;
  }
  local_70[(long)pbVar30 - uVar19] = *(char *)(lVar3 + iVar18);
  if (uVar16 != 0) {
    local_70[(long)pbVar30 - uVar16] = *(char *)(lVar3 + (iVar18 + 1));
    if (uVar19 - 2 != 0) {
      local_70[(long)pbVar30 - (uVar19 - 2)] = *(char *)(lVar3 + (iVar18 + 2));
      if (uVar19 - 3 != 0) {
        local_70[(long)pbVar30 - (uVar19 - 3)] = *(char *)(lVar3 + (iVar18 + 3));
        if (uVar19 - 4 != 0) {
          local_70[(long)pbVar30 - (uVar19 - 4)] = *(char *)(lVar3 + (iVar18 + 4));
          if (uVar19 - 5 != 0) {
            local_70[(long)pbVar30 - (uVar19 - 5)] = *(char *)(lVar3 + (iVar18 + 5));
            if (uVar19 - 6 != 0) {
              local_70[(long)pbVar30 - (uVar19 - 6)] = *(char *)(lVar3 + (iVar18 + 6));
            }
          }
        }
      }
    }
  }
LAB_0070d534:
  pbVar23 = pbVar23 + -uVar13;
  pbVar30 = pbVar35;
  if (pbVar23 == (byte *)0x0) goto LAB_0070d53d;
  goto LAB_0070cf59;
LAB_0070c083:
  uVar19 = 0;
  uVar20 = uVar19;
  if (pbVar23[1] == pbVar35[5]) {
    do {
      uVar19 = uVar20 + 1;
      lVar15 = uVar20 + 2;
      lVar34 = uVar20 + 6;
      uVar20 = uVar19;
    } while (pbVar35[lVar34] == pbVar23[lVar15]);
  }
  lVar34 = 0;
  do {
    lVar38 = uVar19 + 1;
    lVar15 = uVar19 + 5;
    uVar19 = uVar19 + 1;
    lVar34 = lVar34 * 0x100 + (long)(int)((uint)pbVar23[lVar38] - (uint)pbVar35[lVar15]);
  } while (uVar19 < uVar32);
LAB_0070bea6:
  local_b0 = local_b0 + uVar32;
  uVar13 = (ulong)*(uint *)(local_60 + (lVar34 - uVar13) * 4);
LAB_0070beb8:
  uVar10 = (uint)uVar13 & 0xffffff;
  iVar18 = uVar10 + 1;
  uVar32 = (ulong)*(byte *)(lVar3 + (int)uVar10);
  if (0 < (int)(uint)local_b8) {
    iVar11 = 0;
    do {
      iVar17 = iVar18 + (int)uVar32;
      iVar11 = iVar11 + 1;
      iVar18 = iVar17 + 1;
      uVar32 = (ulong)*(byte *)(lVar3 + iVar17);
    } while (iVar11 != (uint)local_b8);
  }
  local_e0 = (byte *)CONCAT44(local_e0._4_4_,iVar18);
  if (((local_b8 + local_d0)[((ulong)(uint)((int)(uint)uVar13 >> 0x18) & 0xff) * (long)local_88] & 1
      ) == 0) {
    if (pbVar30 == (byte *)0x0) {
      pbVar30 = pbVar23;
    }
    local_90 = local_90 + 1;
    bVar22 = *local_b0;
    lVar34 = auStack_43._3_8_;
    goto joined_r0x0070c0e0;
  }
  if ((pbVar30 != (byte *)0x0) && (local_90 != (byte *)0x0)) {
    local_98 = pbVar30 + 1;
    local_e8 = uVar32;
LAB_0070c20f:
    uVar10 = *(uint *)(local_80 + (ulong)*pbVar30 * 4);
    pbVar23 = local_98;
    if ((long)(int)uVar10 < 0) {
      puVar29 = (uint *)(local_58 + -(long)(int)uVar10);
LAB_0070c238:
      do {
        uVar10 = *puVar29;
        bVar22 = (byte)puVar29[1];
        while( true ) {
          uVar13 = (ulong)bVar22;
          if ((int)uVar10 < 0) break;
          if (uVar13 == 0) {
LAB_0070c9fe:
            pbVar23 = local_98 + uVar13;
            goto LAB_0070c2ef;
          }
          uVar32 = 0;
          while (*(byte *)((long)puVar29 + uVar32 + 5) == pbVar30[uVar32 + 1]) {
            uVar32 = uVar32 + 1;
            if (uVar13 == uVar32) goto LAB_0070c9fe;
          }
          puVar29 = (uint *)((long)puVar29 + uVar13 + 5);
          uVar10 = bVar22 + 1 & 3;
          if (uVar10 == 0) goto LAB_0070c238;
          puVar29 = (uint *)((long)puVar29 + (4 - (ulong)uVar10));
          uVar10 = *puVar29;
          bVar22 = (byte)puVar29[1];
        }
        if (uVar13 == 0) {
LAB_0070c2dc:
          lVar34 = 0;
          goto LAB_0070c2de;
        }
        uVar32 = 0;
        while( true ) {
          bVar22 = *(byte *)((long)puVar29 + uVar32 + 5);
          if (bVar22 != pbVar30[uVar32 + 1]) break;
          uVar32 = uVar32 + 1;
          if (uVar13 == uVar32) goto LAB_0070c2dc;
        }
        if (pbVar30[uVar32 + 1] < bVar22) {
          puVar29 = (uint *)((long)puVar29 + (uVar13 * 2 - (ulong)((int)(uVar13 * 2) + 1U & 3)) + 9)
          ;
          goto LAB_0070c238;
        }
        uVar32 = 0;
        while (*(byte *)((long)puVar29 + uVar32 + 5 + uVar13) == pbVar30[uVar32 + 1]) {
          uVar32 = uVar32 + 1;
          if (uVar13 == uVar32) goto LAB_0070c692;
        }
        if ((uVar13 == uVar32) ||
           (local_98[uVar32] <= *(byte *)((long)puVar29 + uVar32 + uVar13 + 5))) goto LAB_0070c692;
        puVar29 = (uint *)((long)puVar29 + (uVar13 * 2 - (ulong)((int)(uVar13 * 2) + 1U & 3)) + 9);
      } while( true );
    }
    goto LAB_0070c2ef;
  }
LAB_0070bf20:
  iVar11 = (int)local_78;
  if (uVar32 == 0) {
    local_78 = (byte *)CONCAT44(local_78._4_4_,(int)local_78 + 1);
  }
  else {
    bVar39 = (int)local_78 < 0x80;
    if (bVar39) {
      uVar13 = 1;
      local_47[0] = (byte)local_78;
      pbVar30 = _local_50 + 1;
      if (pbVar30 + uVar32 < local_68) {
        uVar13 = 1;
        local_70[(long)_local_50] = (byte)local_78;
        goto LAB_0070ca96;
      }
    }
    else {
      bVar22 = (byte)(iVar11 >> 6);
      if (((ulong)local_78 & 0xfffff800) == 0) {
        local_47[0] = 0xc0;
        uVar13 = 2;
        local_47[1] = (byte)local_78 & 0x3f | 0x80;
      }
      else {
        if (((ulong)local_78 & 0xffff0000) == 0) {
          iVar17 = 2;
          local_47[0] = 0xe0;
          uVar13 = 3;
        }
        else if (((ulong)local_78 & 0xffe00000) == 0) {
          iVar17 = 3;
          local_47[0] = 0xf0;
          uVar13 = 4;
        }
        else {
          iVar17 = 5 - (uint)(((ulong)local_78 & 0xfc000000) == 0);
          local_47[0] = (-(((ulong)local_78 & 0xfc000000) == 0) & 0xfcU) - 4;
          uVar13 = 6 - (ulong)(((ulong)local_78 & 0xfc000000) == 0);
        }
        local_47[iVar17] = (byte)local_78 & 0x3f | 0x80;
        bVar24 = (byte)(iVar11 >> 0xc);
        local_47[iVar17 + -1] = bVar22 & 0x3f | 0x80;
        bVar22 = bVar24;
        if (iVar17 + -2 != 0) {
          local_47[iVar17 + -2] = bVar24 & 0x3f | 0x80;
          bVar22 = (byte)(iVar11 >> 0x12);
          iVar17 = iVar17 + -3;
          if (iVar17 != 0) {
            local_47[iVar17] = bVar22 & 0x3f | 0x80;
            bVar22 = (byte)((ulong)local_78 >> 0x18);
            if (iVar17 != 1) {
              bVar24 = bVar22 & 0x3f;
              bVar22 = (char)bVar22 >> 6;
              local_47[1] = bVar24 | 0x80;
            }
          }
        }
      }
      local_47[0] = local_47[0] | bVar22;
      pbVar30 = _local_50 + uVar13;
      if (pbVar30 + uVar32 < local_68) {
        uVar10 = (uint)uVar13;
        uVar20 = uVar13 & 0xffffffff;
        pbVar23 = (byte *)(local_70 + (long)_local_50);
        if (uVar10 < 8) {
          if ((uVar13 & 4) == 0) {
            if ((uVar10 != 0) && (*pbVar23 = local_47[0], (uVar13 & 2) != 0)) {
              *(undefined2 *)(pbVar23 + (uVar20 - 2)) = *(undefined2 *)(local_50 + uVar20 + 7);
            }
          }
          else {
            *(uint *)pbVar23 = CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0]));
            *(undefined4 *)(pbVar23 + (uVar20 - 4)) = *(undefined4 *)(local_50 + uVar20 + 5);
          }
        }
        else {
          *(ulong *)pbVar23 = CONCAT44(uVar8,CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0])));
          *(undefined8 *)(pbVar23 + ((uVar13 & 0xffffffff) - 8)) =
               *(undefined8 *)(local_50 + (uVar13 & 0xffffffff) + 1);
          lVar34 = (long)pbVar23 - ((ulong)(pbVar23 + 8) & 0xfffffffffffffff8);
          uVar10 = uVar10 + (int)lVar34 & 0xfffffff8;
          if (7 < uVar10) {
            uVar33 = 0;
            do {
              uVar20 = (ulong)uVar33;
              uVar33 = uVar33 + 8;
              *(undefined8 *)(((ulong)(pbVar23 + 8) & 0xfffffffffffffff8) + uVar20) =
                   *(undefined8 *)(local_47 + (uVar20 - lVar34));
            } while (uVar33 < uVar10);
          }
        }
LAB_0070ca96:
        lVar34 = (long)iVar18;
        pcVar14 = local_70 + (long)pbVar30;
        if (((ulong)((long)pcVar14 - (lVar3 + 1 + lVar34)) < 0xf) || (uVar32 - 1 < 7)) {
          uVar20 = 0;
          do {
            pcVar14[uVar20] = *(char *)(lVar34 + lVar3 + uVar20);
            uVar20 = uVar20 + 1;
          } while (uVar32 != uVar20);
        }
        else if (uVar32 - 1 < 0xf) {
          uVar19 = 0;
          uVar20 = uVar32;
LAB_0070cc23:
          *(undefined8 *)(pcVar14 + uVar19) = *(undefined8 *)(lVar3 + uVar19 + lVar34);
          uVar19 = uVar19 + (uVar20 & 0xfffffffffffffff8);
          if ((uVar20 & 0xfffffffffffffff8) != uVar20) {
LAB_0070cc42:
            pcVar14[uVar19] = *(char *)(lVar3 + uVar19 + lVar34);
            if (uVar19 + 1 < uVar32) {
              pcVar14[uVar19 + 1] = *(char *)(lVar3 + uVar19 + 1 + lVar34);
              if (uVar19 + 2 < uVar32) {
                pcVar14[uVar19 + 2] = *(char *)(lVar3 + uVar19 + 2 + lVar34);
                if (uVar19 + 3 < uVar32) {
                  pcVar14[uVar19 + 3] = *(char *)(lVar3 + uVar19 + 3 + lVar34);
                  if (uVar19 + 4 < uVar32) {
                    pcVar14[uVar19 + 4] = *(char *)(lVar3 + uVar19 + 4 + lVar34);
                    if (uVar19 + 5 < uVar32) {
                      pcVar14[uVar19 + 5] = *(char *)(lVar3 + uVar19 + 5 + lVar34);
                      uVar19 = uVar19 + 6;
                      if (uVar19 < uVar32) {
                        pcVar14[uVar19] = *(char *)(lVar3 + uVar19 + lVar34);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          puVar2 = (undefined8 *)(lVar3 + lVar34);
          uVar5 = puVar2[1];
          uVar20 = uVar32 >> 4;
          *(undefined8 *)pcVar14 = *puVar2;
          *(undefined8 *)(pcVar14 + 8) = uVar5;
          if (uVar20 != 1) {
            uVar5 = puVar2[3];
            *(undefined8 *)(pcVar14 + 0x10) = puVar2[2];
            *(undefined8 *)(pcVar14 + 0x18) = uVar5;
            if (uVar20 != 2) {
              uVar5 = puVar2[5];
              *(undefined8 *)(pcVar14 + 0x20) = puVar2[4];
              *(undefined8 *)(pcVar14 + 0x28) = uVar5;
              if (uVar20 != 3) {
                uVar5 = puVar2[7];
                *(undefined8 *)(pcVar14 + 0x30) = puVar2[6];
                *(undefined8 *)(pcVar14 + 0x38) = uVar5;
                if (uVar20 != 4) {
                  uVar5 = puVar2[9];
                  *(undefined8 *)(pcVar14 + 0x40) = puVar2[8];
                  *(undefined8 *)(pcVar14 + 0x48) = uVar5;
                  if (uVar20 != 5) {
                    uVar5 = puVar2[0xb];
                    *(undefined8 *)(pcVar14 + 0x50) = puVar2[10];
                    *(undefined8 *)(pcVar14 + 0x58) = uVar5;
                    if (uVar20 != 6) {
                      uVar5 = puVar2[0xd];
                      *(undefined8 *)(pcVar14 + 0x60) = puVar2[0xc];
                      *(undefined8 *)(pcVar14 + 0x68) = uVar5;
                      if (uVar20 != 7) {
                        uVar5 = puVar2[0xf];
                        *(undefined8 *)(pcVar14 + 0x70) = puVar2[0xe];
                        *(undefined8 *)(pcVar14 + 0x78) = uVar5;
                        if (uVar20 != 8) {
                          uVar5 = puVar2[0x11];
                          *(undefined8 *)(pcVar14 + 0x80) = puVar2[0x10];
                          *(undefined8 *)(pcVar14 + 0x88) = uVar5;
                          if (uVar20 != 9) {
                            uVar5 = puVar2[0x13];
                            *(undefined8 *)(pcVar14 + 0x90) = puVar2[0x12];
                            *(undefined8 *)(pcVar14 + 0x98) = uVar5;
                            if (uVar20 != 10) {
                              uVar5 = puVar2[0x15];
                              *(undefined8 *)(pcVar14 + 0xa0) = puVar2[0x14];
                              *(undefined8 *)(pcVar14 + 0xa8) = uVar5;
                              if (uVar20 != 0xb) {
                                uVar5 = puVar2[0x17];
                                *(undefined8 *)(pcVar14 + 0xb0) = puVar2[0x16];
                                *(undefined8 *)(pcVar14 + 0xb8) = uVar5;
                                if (uVar20 != 0xc) {
                                  uVar5 = puVar2[0x19];
                                  *(undefined8 *)(pcVar14 + 0xc0) = puVar2[0x18];
                                  *(undefined8 *)(pcVar14 + 200) = uVar5;
                                  if (uVar20 != 0xd) {
                                    uVar5 = puVar2[0x1b];
                                    *(undefined8 *)(pcVar14 + 0xd0) = puVar2[0x1a];
                                    *(undefined8 *)(pcVar14 + 0xd8) = uVar5;
                                    if (uVar20 == 0xf) {
                                      uVar5 = puVar2[0x1d];
                                      *(undefined8 *)(pcVar14 + 0xe0) = puVar2[0x1c];
                                      *(undefined8 *)(pcVar14 + 0xe8) = uVar5;
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
          uVar19 = uVar32 & 0xfffffffffffffff0;
          if ((uVar32 & 0xffffffffffffff0f) != 0) {
            uVar20 = uVar32 - uVar19;
            if (6 < (uVar32 - uVar19) - 1) goto LAB_0070cc23;
            goto LAB_0070cc42;
          }
        }
      }
    }
    local_78 = (byte *)CONCAT44(local_78._4_4_,1);
    _local_50 = _local_50 + uVar13 + uVar32;
  }
  pbVar30 = (byte *)0x0;
  bVar22 = *local_b0;
  lVar34 = auStack_43._3_8_;
joined_r0x0070c0e0:
  auStack_43._0_3_ = (undefined3)uVar8;
  auStack_43[3] = (undefined1)lVar34;
  if (bVar22 == 0) goto LAB_0070c0e6;
  uVar13 = (ulong)*(int *)(local_80 + (ulong)bVar22 * 4);
  pbVar23 = local_b0;
  goto LAB_0070bde8;
LAB_0070c692:
  uVar20 = 0;
  uVar32 = uVar20;
  if (pbVar30[1] == *(byte *)((long)puVar29 + 5)) {
    do {
      uVar20 = uVar32 + 1;
      lVar15 = uVar32 + 2;
      lVar34 = uVar32 + 6;
      uVar32 = uVar20;
    } while (*(byte *)((long)puVar29 + lVar34) == pbVar30[lVar15]);
  }
  lVar34 = 0;
  do {
    lVar38 = uVar20 + 1;
    lVar15 = uVar20 + 5;
    uVar20 = uVar20 + 1;
    lVar34 = lVar34 * 0x100 +
             (long)(int)((uint)pbVar30[lVar38] - (uint)*(byte *)((long)puVar29 + lVar15));
  } while (uVar20 < uVar13);
LAB_0070c2de:
  pbVar23 = local_98 + uVar13;
  uVar10 = *(uint *)(local_60 + (lVar34 - (int)uVar10) * 4);
LAB_0070c2ef:
  iVar11 = (uVar10 & 0xffffff) + 1;
  uVar13 = (ulong)*(byte *)(lVar3 + (int)(uVar10 & 0xffffff));
  if (0 < (int)(uint)local_b8) {
    iVar17 = 0;
    do {
      iVar12 = (int)uVar13 + iVar11;
      iVar17 = iVar17 + 1;
      iVar11 = iVar12 + 1;
      uVar13 = (ulong)*(byte *)(lVar3 + iVar12);
    } while (iVar17 != (uint)local_b8);
  }
  if (local_90 != (byte *)0x1) {
    local_c0 = pbVar30;
    pbVar35 = (byte *)0x1;
LAB_0070c348:
    pbVar36 = pbVar23 + 1;
    uVar10 = *(uint *)(local_80 + (ulong)*pbVar23 * 4);
    if ((long)(int)uVar10 < 0) {
      puVar29 = (uint *)(local_58 + -(long)(int)uVar10);
LAB_0070c370:
      do {
        uVar10 = *puVar29;
        bVar22 = (byte)puVar29[1];
        while( true ) {
          uVar13 = (ulong)bVar22;
          if ((int)uVar10 < 0) break;
          if (uVar13 == 0) {
LAB_0070c680:
            pbVar36 = pbVar36 + uVar13;
            goto LAB_0070c42a;
          }
          uVar32 = 0;
          while (*(byte *)((long)puVar29 + uVar32 + 5) == pbVar23[uVar32 + 1]) {
            uVar32 = uVar32 + 1;
            if (uVar13 == uVar32) goto LAB_0070c680;
          }
          puVar29 = (uint *)((long)puVar29 + uVar13 + 5);
          uVar10 = bVar22 + 1 & 3;
          if (uVar10 == 0) goto LAB_0070c370;
          puVar29 = (uint *)((long)puVar29 + (4 - (ulong)uVar10));
          uVar10 = *puVar29;
          bVar22 = (byte)puVar29[1];
        }
        if (uVar13 == 0) {
LAB_0070c418:
          lVar34 = 0;
          goto LAB_0070c41b;
        }
        uVar32 = 0;
        while( true ) {
          bVar22 = *(byte *)((long)puVar29 + uVar32 + 5);
          if (bVar22 != pbVar23[uVar32 + 1]) break;
          uVar32 = uVar32 + 1;
          if (uVar13 == uVar32) goto LAB_0070c418;
        }
        if (bVar22 <= pbVar23[uVar32 + 1]) {
          uVar32 = 0;
          while (*(byte *)((long)puVar29 + uVar32 + 5 + uVar13) == pbVar23[uVar32 + 1]) {
            uVar32 = uVar32 + 1;
            if (uVar13 == uVar32) goto LAB_0070c5ce;
          }
          if ((uVar13 == uVar32) ||
             (pbVar36[uVar32] <= *(byte *)((long)puVar29 + uVar32 + uVar13 + 5))) goto LAB_0070c5ce;
        }
        puVar29 = (uint *)((long)puVar29 + (uVar13 * 2 - (ulong)((int)(uVar13 * 2) + 1U & 3)) + 9);
      } while( true );
    }
    goto LAB_0070c42a;
  }
LAB_0070c470:
  iVar17 = (int)local_78;
  if (uVar13 == 0) {
    local_78 = (byte *)CONCAT44(local_78._4_4_,(int)local_78 + 1);
    goto LAB_0070c572;
  }
  bVar39 = (int)local_78 < 0x80;
  if (bVar39) {
    uVar32 = 1;
    local_47[0] = (byte)local_78;
    pbVar23 = _local_50 + 1;
    if (pbVar23 + uVar13 < local_68) {
      local_70[(long)_local_50] = (byte)local_78;
      uVar32 = 1;
      goto LAB_0070c713;
    }
  }
  else {
    bVar22 = (byte)(iVar17 >> 6);
    if (((ulong)local_78 & 0xfffff800) == 0) {
      local_47[0] = 0xc0;
      uVar32 = 2;
      local_47[1] = (byte)local_78 & 0x3f | 0x80;
    }
    else {
      if (((ulong)local_78 & 0xffff0000) == 0) {
        iVar12 = 2;
        local_47[0] = 0xe0;
        uVar32 = 3;
      }
      else if (((ulong)local_78 & 0xffe00000) == 0) {
        iVar12 = 3;
        local_47[0] = 0xf0;
        uVar32 = 4;
      }
      else {
        iVar12 = 5 - (uint)(((ulong)local_78 & 0xfc000000) == 0);
        local_47[0] = (-(((ulong)local_78 & 0xfc000000) == 0) & 0xfcU) - 4;
        uVar32 = 6 - (ulong)(((ulong)local_78 & 0xfc000000) == 0);
      }
      local_47[iVar12] = (byte)local_78 & 0x3f | 0x80;
      bVar24 = (byte)(iVar17 >> 0xc);
      local_47[iVar12 + -1] = bVar22 & 0x3f | 0x80;
      bVar22 = bVar24;
      if (iVar12 + -2 != 0) {
        local_47[iVar12 + -2] = bVar24 & 0x3f | 0x80;
        bVar22 = (byte)(iVar17 >> 0x12);
        iVar12 = iVar12 + -3;
        if (iVar12 != 0) {
          local_47[iVar12] = bVar22 & 0x3f | 0x80;
          bVar22 = (byte)((ulong)local_78 >> 0x18);
          if (iVar12 != 1) {
            bVar24 = bVar22 & 0x3f;
            bVar22 = (char)bVar22 >> 6;
            local_47[1] = bVar24 | 0x80;
          }
        }
      }
    }
    local_47[0] = local_47[0] | bVar22;
    pbVar23 = _local_50 + uVar32;
    if (pbVar23 + uVar13 < local_68) {
      uVar10 = (uint)uVar32;
      uVar20 = uVar32 & 0xffffffff;
      pbVar35 = (byte *)(local_70 + (long)_local_50);
      if (uVar10 < 8) {
        if ((uVar32 & 4) == 0) {
          if ((uVar10 != 0) && (*pbVar35 = local_47[0], (uVar32 & 2) != 0)) {
            *(undefined2 *)(pbVar35 + (uVar20 - 2)) = *(undefined2 *)(local_50 + uVar20 + 7);
          }
        }
        else {
          *(uint *)pbVar35 = CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0]));
          *(undefined4 *)(pbVar35 + (uVar20 - 4)) = *(undefined4 *)(local_50 + uVar20 + 5);
        }
      }
      else {
        *(ulong *)pbVar35 = CONCAT44(uVar8,CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0])));
        *(undefined8 *)(pbVar35 + ((uVar32 & 0xffffffff) - 8)) =
             *(undefined8 *)(local_50 + (uVar32 & 0xffffffff) + 1);
        lVar34 = (long)pbVar35 - ((ulong)(pbVar35 + 8) & 0xfffffffffffffff8);
        uVar10 = uVar10 + (int)lVar34 & 0xfffffff8;
        if (7 < uVar10) {
          uVar33 = 0;
          do {
            uVar20 = (ulong)uVar33;
            uVar33 = uVar33 + 8;
            *(undefined8 *)(((ulong)(pbVar35 + 8) & 0xfffffffffffffff8) + uVar20) =
                 *(undefined8 *)(local_47 + (uVar20 - lVar34));
          } while (uVar33 < uVar10);
        }
      }
LAB_0070c713:
      lVar34 = (long)iVar11;
      pcVar14 = local_70 + (long)pbVar23;
      if (((ulong)((long)pcVar14 - (lVar3 + 1 + lVar34)) < 0xf) || (uVar13 - 1 < 7)) {
        uVar20 = 0;
        do {
          pcVar14[uVar20] = *(char *)(lVar34 + lVar3 + uVar20);
          uVar20 = uVar20 + 1;
        } while (uVar13 != uVar20);
      }
      else if (uVar13 - 1 < 0xf) {
        uVar19 = 0;
        uVar20 = uVar13;
LAB_0070c89c:
        *(undefined8 *)(pcVar14 + uVar19) = *(undefined8 *)(lVar3 + uVar19 + lVar34);
        uVar19 = uVar19 + (uVar20 & 0xfffffffffffffff8);
        if ((uVar20 & 0xfffffffffffffff8) != uVar20) {
LAB_0070c8bb:
          pcVar14[uVar19] = *(char *)(lVar3 + uVar19 + lVar34);
          if (uVar19 + 1 < uVar13) {
            pcVar14[uVar19 + 1] = *(char *)(lVar3 + uVar19 + 1 + lVar34);
            if (uVar19 + 2 < uVar13) {
              pcVar14[uVar19 + 2] = *(char *)(lVar3 + uVar19 + 2 + lVar34);
              if (uVar19 + 3 < uVar13) {
                pcVar14[uVar19 + 3] = *(char *)(lVar3 + uVar19 + 3 + lVar34);
                if (uVar19 + 4 < uVar13) {
                  pcVar14[uVar19 + 4] = *(char *)(lVar3 + uVar19 + 4 + lVar34);
                  if (uVar19 + 5 < uVar13) {
                    pcVar14[uVar19 + 5] = *(char *)(lVar3 + uVar19 + 5 + lVar34);
                    uVar19 = uVar19 + 6;
                    if (uVar19 < uVar13) {
                      pcVar14[uVar19] = *(char *)(lVar3 + uVar19 + lVar34);
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        puVar2 = (undefined8 *)(lVar3 + lVar34);
        uVar5 = puVar2[1];
        uVar20 = uVar13 >> 4;
        *(undefined8 *)pcVar14 = *puVar2;
        *(undefined8 *)(pcVar14 + 8) = uVar5;
        if (uVar20 != 1) {
          uVar5 = puVar2[3];
          *(undefined8 *)(pcVar14 + 0x10) = puVar2[2];
          *(undefined8 *)(pcVar14 + 0x18) = uVar5;
          if (uVar20 != 2) {
            uVar5 = puVar2[5];
            *(undefined8 *)(pcVar14 + 0x20) = puVar2[4];
            *(undefined8 *)(pcVar14 + 0x28) = uVar5;
            if (uVar20 != 3) {
              uVar5 = puVar2[7];
              *(undefined8 *)(pcVar14 + 0x30) = puVar2[6];
              *(undefined8 *)(pcVar14 + 0x38) = uVar5;
              if (uVar20 != 4) {
                uVar5 = puVar2[9];
                *(undefined8 *)(pcVar14 + 0x40) = puVar2[8];
                *(undefined8 *)(pcVar14 + 0x48) = uVar5;
                if (uVar20 != 5) {
                  uVar5 = puVar2[0xb];
                  *(undefined8 *)(pcVar14 + 0x50) = puVar2[10];
                  *(undefined8 *)(pcVar14 + 0x58) = uVar5;
                  if (uVar20 != 6) {
                    uVar5 = puVar2[0xd];
                    *(undefined8 *)(pcVar14 + 0x60) = puVar2[0xc];
                    *(undefined8 *)(pcVar14 + 0x68) = uVar5;
                    if (uVar20 != 7) {
                      uVar5 = puVar2[0xf];
                      *(undefined8 *)(pcVar14 + 0x70) = puVar2[0xe];
                      *(undefined8 *)(pcVar14 + 0x78) = uVar5;
                      if (uVar20 != 8) {
                        uVar5 = puVar2[0x11];
                        *(undefined8 *)(pcVar14 + 0x80) = puVar2[0x10];
                        *(undefined8 *)(pcVar14 + 0x88) = uVar5;
                        if (uVar20 != 9) {
                          uVar5 = puVar2[0x13];
                          *(undefined8 *)(pcVar14 + 0x90) = puVar2[0x12];
                          *(undefined8 *)(pcVar14 + 0x98) = uVar5;
                          if (uVar20 != 10) {
                            uVar5 = puVar2[0x15];
                            *(undefined8 *)(pcVar14 + 0xa0) = puVar2[0x14];
                            *(undefined8 *)(pcVar14 + 0xa8) = uVar5;
                            if (uVar20 != 0xb) {
                              uVar5 = puVar2[0x17];
                              *(undefined8 *)(pcVar14 + 0xb0) = puVar2[0x16];
                              *(undefined8 *)(pcVar14 + 0xb8) = uVar5;
                              if (uVar20 != 0xc) {
                                uVar5 = puVar2[0x19];
                                *(undefined8 *)(pcVar14 + 0xc0) = puVar2[0x18];
                                *(undefined8 *)(pcVar14 + 200) = uVar5;
                                if (uVar20 != 0xd) {
                                  uVar5 = puVar2[0x1b];
                                  *(undefined8 *)(pcVar14 + 0xd0) = puVar2[0x1a];
                                  *(undefined8 *)(pcVar14 + 0xd8) = uVar5;
                                  if (uVar20 == 0xf) {
                                    uVar5 = puVar2[0x1d];
                                    *(undefined8 *)(pcVar14 + 0xe0) = puVar2[0x1c];
                                    *(undefined8 *)(pcVar14 + 0xe8) = uVar5;
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
        uVar19 = uVar13 & 0xfffffffffffffff0;
        if ((uVar13 & 0xffffffffffffff0f) != 0) {
          uVar20 = uVar13 - uVar19;
          if (6 < (uVar13 - uVar19) - 1) goto LAB_0070c89c;
          goto LAB_0070c8bb;
        }
      }
    }
  }
  local_78 = (byte *)CONCAT44(local_78._4_4_,1);
  _local_50 = _local_50 + uVar32 + uVar13;
LAB_0070c572:
  local_90 = local_90 + -1;
  uVar32 = local_e8;
  if (local_90 == (byte *)0x0) goto LAB_0070bf20;
  goto LAB_0070c20f;
LAB_0070c5ce:
  uVar20 = 0;
  uVar32 = uVar20;
  if (*(byte *)((long)puVar29 + 5) == pbVar23[1]) {
    do {
      uVar20 = uVar32 + 1;
      lVar15 = uVar32 + 2;
      lVar34 = uVar32 + 6;
      uVar32 = uVar20;
    } while (*(byte *)((long)puVar29 + lVar34) == pbVar23[lVar15]);
  }
  lVar34 = 0;
  do {
    lVar38 = uVar20 + 1;
    lVar15 = uVar20 + 5;
    uVar20 = uVar20 + 1;
    lVar34 = lVar34 * 0x100 +
             (long)(int)((uint)pbVar23[lVar38] - (uint)*(byte *)((long)puVar29 + lVar15));
  } while (uVar20 < uVar13);
LAB_0070c41b:
  pbVar36 = pbVar36 + uVar13;
  uVar10 = *(uint *)(local_60 + (lVar34 - (int)uVar10) * 4);
LAB_0070c42a:
  iVar11 = (uVar10 & 0xffffff) + 1;
  uVar13 = (ulong)*(byte *)(lVar3 + (int)(uVar10 & 0xffffff));
  if (0 < (int)(uint)local_b8) {
    iVar17 = 0;
    do {
      iVar12 = (int)uVar13 + iVar11;
      iVar17 = iVar17 + 1;
      iVar11 = iVar12 + 1;
      uVar13 = (ulong)*(byte *)(lVar3 + iVar12);
    } while (iVar17 != (uint)local_b8);
  }
  pbVar35 = pbVar35 + 1;
  pbVar23 = pbVar36;
  if (pbVar35 == local_90) goto LAB_0070c470;
  goto LAB_0070c348;
LAB_0070c0e6:
  uVar8 = auStack_43._0_4_;
  if ((pbVar30 != (byte *)0x0) && (local_90 != (byte *)0x0)) {
    local_98 = pbVar30 + 1;
LAB_0070c10c:
    uVar10 = *(uint *)(local_80 + (ulong)*pbVar30 * 4);
    pbVar23 = local_98;
    if ((long)(int)uVar10 < 0) {
      puVar29 = (uint *)(local_58 + -(long)(int)uVar10);
LAB_0070c133:
      do {
        uVar10 = *puVar29;
        bVar22 = (byte)puVar29[1];
        while( true ) {
          uVar13 = (ulong)bVar22;
          if ((int)uVar10 < 0) break;
          if (uVar13 == 0) {
LAB_0070f1fb:
            pbVar23 = local_98 + uVar13;
            goto LAB_0070db1c;
          }
          uVar32 = 0;
          while (*(byte *)((long)puVar29 + uVar32 + 5) == pbVar30[uVar32 + 1]) {
            uVar32 = uVar32 + 1;
            if (uVar13 == uVar32) goto LAB_0070f1fb;
          }
          puVar29 = (uint *)((long)puVar29 + uVar13 + 5);
          uVar10 = bVar22 + 1 & 3;
          if (uVar10 == 0) goto LAB_0070c133;
          puVar29 = (uint *)((long)puVar29 + (4 - (ulong)uVar10));
          uVar10 = *puVar29;
          bVar22 = (byte)puVar29[1];
        }
        if (uVar13 == 0) {
LAB_0070db09:
          lVar15 = 0;
          goto LAB_0070db0b;
        }
        uVar32 = 0;
        while( true ) {
          bVar22 = *(byte *)((long)puVar29 + uVar32 + 5);
          if (bVar22 != pbVar30[uVar32 + 1]) break;
          uVar32 = uVar32 + 1;
          if (uVar13 == uVar32) goto LAB_0070db09;
        }
        if (bVar22 <= pbVar30[uVar32 + 1]) {
          uVar32 = 0;
          while (*(byte *)((long)puVar29 + uVar32 + 5 + uVar13) == pbVar30[uVar32 + 1]) {
            uVar32 = uVar32 + 1;
            if (uVar13 == uVar32) goto LAB_0070de81;
          }
          if ((uVar13 == uVar32) ||
             (local_98[uVar32] <= *(byte *)((long)puVar29 + uVar32 + uVar13 + 5)))
          goto LAB_0070de81;
        }
        puVar29 = (uint *)((long)puVar29 + (uVar13 * 2 - (ulong)((int)(uVar13 * 2) + 1U & 3)) + 9);
      } while( true );
    }
    goto LAB_0070db1c;
  }
  goto LAB_0070d548;
LAB_0070de81:
  uVar20 = 0;
  uVar32 = uVar20;
  if (pbVar30[1] == *(byte *)((long)puVar29 + 5)) {
    do {
      uVar20 = uVar32 + 1;
      lVar38 = uVar32 + 2;
      lVar15 = uVar32 + 6;
      uVar32 = uVar20;
    } while (*(byte *)((long)puVar29 + lVar15) == pbVar30[lVar38]);
  }
  lVar15 = 0;
  do {
    lVar38 = uVar20 + 5;
    lVar1 = uVar20 + 1;
    uVar20 = uVar20 + 1;
    lVar15 = (long)(int)((uint)pbVar30[lVar1] - (uint)*(byte *)((long)puVar29 + lVar38)) +
             lVar15 * 0x100;
  } while (uVar20 < uVar13);
LAB_0070db0b:
  pbVar23 = local_98 + uVar13;
  uVar10 = *(uint *)(local_60 + (lVar15 - (int)uVar10) * 4);
LAB_0070db1c:
  iVar18 = (uVar10 & 0xffffff) + 1;
  uVar13 = (ulong)*(byte *)(lVar3 + (int)(uVar10 & 0xffffff));
  if (0 < (int)(uint)local_b8) {
    iVar11 = 0;
    do {
      iVar17 = (int)uVar13 + iVar18;
      iVar11 = iVar11 + 1;
      iVar18 = iVar17 + 1;
      uVar13 = (ulong)*(byte *)(lVar3 + iVar17);
    } while (iVar11 != (uint)local_b8);
  }
  if (local_90 != (byte *)0x1) {
    local_a8 = pbVar30;
    pbVar35 = (byte *)0x1;
    local_b0 = local_47;
LAB_0070db74:
    pbVar36 = pbVar23 + 1;
    uVar10 = *(uint *)(local_80 + (ulong)*pbVar23 * 4);
    if ((long)(int)uVar10 < 0) {
      puVar29 = (uint *)(local_58 + -(long)(int)uVar10);
LAB_0070db98:
      do {
        uVar10 = *puVar29;
        bVar22 = (byte)puVar29[1];
        while( true ) {
          uVar13 = (ulong)bVar22;
          if ((int)uVar10 < 0) break;
          if (uVar13 == 0) {
LAB_0070ded0:
            pbVar36 = pbVar36 + uVar13;
            goto LAB_0070dc4f;
          }
          uVar32 = 0;
          while (*(byte *)((long)puVar29 + uVar32 + 5) == pbVar23[uVar32 + 1]) {
            uVar32 = uVar32 + 1;
            if (uVar13 == uVar32) goto LAB_0070ded0;
          }
          puVar29 = (uint *)((long)puVar29 + uVar13 + 5);
          uVar10 = bVar22 + 1 & 3;
          if (uVar10 == 0) goto LAB_0070db98;
          puVar29 = (uint *)((long)puVar29 + (4 - (ulong)uVar10));
          uVar10 = *puVar29;
          bVar22 = (byte)puVar29[1];
        }
        if (uVar13 == 0) {
LAB_0070dc3d:
          lVar15 = 0;
          goto LAB_0070dc40;
        }
        uVar32 = 0;
        while( true ) {
          bVar22 = *(byte *)((long)puVar29 + uVar32 + 5);
          if (bVar22 != pbVar23[uVar32 + 1]) break;
          uVar32 = uVar32 + 1;
          if (uVar13 == uVar32) goto LAB_0070dc3d;
        }
        if (bVar22 <= pbVar23[uVar32 + 1]) {
          uVar32 = 0;
          while (*(byte *)((long)puVar29 + uVar32 + 5 + uVar13) == pbVar23[uVar32 + 1]) {
            uVar32 = uVar32 + 1;
            if (uVar13 == uVar32) goto LAB_0070ddee;
          }
          if ((uVar13 == uVar32) ||
             (pbVar36[uVar32] <= *(byte *)((long)puVar29 + uVar32 + uVar13 + 5))) goto LAB_0070ddee;
        }
        puVar29 = (uint *)((long)puVar29 + (uVar13 * 2 - (ulong)((int)(uVar13 * 2) + 1U & 3)) + 9);
      } while( true );
    }
    goto LAB_0070dc4f;
  }
LAB_0070dc9f:
  iVar11 = (int)local_78;
  if (uVar13 == 0) {
    local_78 = (byte *)CONCAT44(local_78._4_4_,(int)local_78 + 1);
    goto LAB_0070dda2;
  }
  bVar39 = (int)local_78 < 0x80;
  if (bVar39) {
    local_47[0] = (byte)local_78;
    pbVar23 = _local_50 + 1;
    if (pbVar23 + uVar13 < local_68) {
      local_70[(long)_local_50] = (byte)local_78;
      uVar32 = 1;
      goto LAB_0070f292;
    }
    uVar32 = 1;
  }
  else {
    bVar22 = (byte)(iVar11 >> 6);
    if (((ulong)local_78 & 0xfffff800) == 0) {
      local_47[0] = 0xc0;
      uVar32 = 2;
      local_47[1] = (byte)local_78 & 0x3f | 0x80;
    }
    else {
      if (((ulong)local_78 & 0xffff0000) == 0) {
        iVar17 = 2;
        local_47[0] = 0xe0;
        uVar32 = 3;
      }
      else if (((ulong)local_78 & 0xffe00000) == 0) {
        iVar17 = 3;
        local_47[0] = 0xf0;
        uVar32 = 4;
      }
      else {
        iVar17 = 5 - (uint)(((ulong)local_78 & 0xfc000000) == 0);
        local_47[0] = (-(((ulong)local_78 & 0xfc000000) == 0) & 0xfcU) - 4;
        uVar32 = 6 - (ulong)(((ulong)local_78 & 0xfc000000) == 0);
      }
      local_47[iVar17] = (byte)local_78 & 0x3f | 0x80;
      bVar24 = (byte)(iVar11 >> 0xc);
      local_47[iVar17 + -1] = bVar22 & 0x3f | 0x80;
      bVar22 = bVar24;
      if (iVar17 + -2 != 0) {
        local_47[iVar17 + -2] = bVar24 & 0x3f | 0x80;
        bVar22 = (byte)(iVar11 >> 0x12);
        iVar17 = iVar17 + -3;
        if (iVar17 != 0) {
          local_47[iVar17] = bVar22 & 0x3f | 0x80;
          bVar22 = (byte)((ulong)local_78 >> 0x18);
          if (iVar17 != 1) {
            bVar24 = bVar22 & 0x3f;
            bVar22 = (char)bVar22 >> 6;
            local_47[1] = bVar24 | 0x80;
          }
        }
      }
    }
    local_47[0] = local_47[0] | bVar22;
    pbVar23 = _local_50 + uVar32;
    if (pbVar23 + uVar13 < local_68) {
      uVar10 = (uint)uVar32;
      uVar20 = uVar32 & 0xffffffff;
      pbVar35 = (byte *)(local_70 + (long)_local_50);
      if (uVar10 < 8) {
        if ((uVar32 & 4) == 0) {
          if ((uVar10 != 0) && (*pbVar35 = local_47[0], (uVar32 & 2) != 0)) {
            *(undefined2 *)(pbVar35 + (uVar20 - 2)) = *(undefined2 *)(local_50 + uVar20 + 7);
          }
        }
        else {
          *(uint *)pbVar35 = CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0]));
          *(undefined4 *)(pbVar35 + (uVar20 - 4)) = *(undefined4 *)(local_50 + uVar20 + 5);
        }
      }
      else {
        *(ulong *)pbVar35 =
             CONCAT44(auStack_43._0_4_,CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0])));
        *(undefined8 *)(pbVar35 + ((uVar32 & 0xffffffff) - 8)) =
             *(undefined8 *)(local_50 + (uVar32 & 0xffffffff) + 1);
        lVar15 = (long)pbVar35 - ((ulong)(pbVar35 + 8) & 0xfffffffffffffff8);
        uVar10 = uVar10 + (int)lVar15 & 0xfffffff8;
        if (7 < uVar10) {
          uVar33 = 0;
          do {
            uVar20 = (ulong)uVar33;
            uVar33 = uVar33 + 8;
            *(undefined8 *)(((ulong)(pbVar35 + 8) & 0xfffffffffffffff8) + uVar20) =
                 *(undefined8 *)(local_47 + (uVar20 - lVar15));
          } while (uVar33 < uVar10);
        }
      }
LAB_0070f292:
      lVar15 = (long)iVar18;
      pbVar23 = pbVar23 + (long)local_70;
      if (((ulong)((long)pbVar23 - (lVar3 + 1 + lVar15)) < 0xf) || (uVar13 - 1 < 7)) {
        uVar20 = 0;
        do {
          pbVar23[uVar20] = *(byte *)(lVar15 + lVar3 + uVar20);
          uVar20 = uVar20 + 1;
        } while (uVar13 != uVar20);
      }
      else if (uVar13 - 1 < 0xf) {
        uVar19 = 0;
        uVar20 = uVar13;
LAB_0070f417:
        *(undefined8 *)(pbVar23 + uVar19) = *(undefined8 *)(lVar3 + uVar19 + lVar15);
        uVar19 = uVar19 + (uVar20 & 0xfffffffffffffff8);
        if ((uVar20 & 0xfffffffffffffff8) != uVar20) {
LAB_0070f436:
          pbVar23[uVar19] = *(byte *)(lVar3 + uVar19 + lVar15);
          if (uVar19 + 1 < uVar13) {
            pbVar23[uVar19 + 1] = *(byte *)(lVar3 + uVar19 + 1 + lVar15);
            if (uVar19 + 2 < uVar13) {
              pbVar23[uVar19 + 2] = *(byte *)(lVar3 + uVar19 + 2 + lVar15);
              if (uVar19 + 3 < uVar13) {
                pbVar23[uVar19 + 3] = *(byte *)(lVar3 + uVar19 + 3 + lVar15);
                if (uVar19 + 4 < uVar13) {
                  pbVar23[uVar19 + 4] = *(byte *)(lVar3 + uVar19 + 4 + lVar15);
                  if (uVar19 + 5 < uVar13) {
                    pbVar23[uVar19 + 5] = *(byte *)(lVar3 + uVar19 + 5 + lVar15);
                    uVar19 = uVar19 + 6;
                    if (uVar19 < uVar13) {
                      pbVar23[uVar19] = *(byte *)(lVar3 + uVar19 + lVar15);
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        puVar2 = (undefined8 *)(lVar3 + lVar15);
        uVar5 = puVar2[1];
        uVar20 = uVar13 >> 4;
        *(undefined8 *)pbVar23 = *puVar2;
        *(undefined8 *)(pbVar23 + 8) = uVar5;
        if (uVar20 != 1) {
          uVar5 = puVar2[3];
          *(undefined8 *)(pbVar23 + 0x10) = puVar2[2];
          *(undefined8 *)(pbVar23 + 0x18) = uVar5;
          if (uVar20 != 2) {
            uVar5 = puVar2[5];
            *(undefined8 *)(pbVar23 + 0x20) = puVar2[4];
            *(undefined8 *)(pbVar23 + 0x28) = uVar5;
            if (uVar20 != 3) {
              uVar5 = puVar2[7];
              *(undefined8 *)(pbVar23 + 0x30) = puVar2[6];
              *(undefined8 *)(pbVar23 + 0x38) = uVar5;
              if (uVar20 != 4) {
                uVar5 = puVar2[9];
                *(undefined8 *)(pbVar23 + 0x40) = puVar2[8];
                *(undefined8 *)(pbVar23 + 0x48) = uVar5;
                if (uVar20 != 5) {
                  uVar5 = puVar2[0xb];
                  *(undefined8 *)(pbVar23 + 0x50) = puVar2[10];
                  *(undefined8 *)(pbVar23 + 0x58) = uVar5;
                  if (uVar20 != 6) {
                    uVar5 = puVar2[0xd];
                    *(undefined8 *)(pbVar23 + 0x60) = puVar2[0xc];
                    *(undefined8 *)(pbVar23 + 0x68) = uVar5;
                    if (uVar20 != 7) {
                      uVar5 = puVar2[0xf];
                      *(undefined8 *)(pbVar23 + 0x70) = puVar2[0xe];
                      *(undefined8 *)(pbVar23 + 0x78) = uVar5;
                      if (uVar20 != 8) {
                        uVar5 = puVar2[0x11];
                        *(undefined8 *)(pbVar23 + 0x80) = puVar2[0x10];
                        *(undefined8 *)(pbVar23 + 0x88) = uVar5;
                        if (uVar20 != 9) {
                          uVar5 = puVar2[0x13];
                          *(undefined8 *)(pbVar23 + 0x90) = puVar2[0x12];
                          *(undefined8 *)(pbVar23 + 0x98) = uVar5;
                          if (uVar20 != 10) {
                            uVar5 = puVar2[0x15];
                            *(undefined8 *)(pbVar23 + 0xa0) = puVar2[0x14];
                            *(undefined8 *)(pbVar23 + 0xa8) = uVar5;
                            if (uVar20 != 0xb) {
                              uVar5 = puVar2[0x17];
                              *(undefined8 *)(pbVar23 + 0xb0) = puVar2[0x16];
                              *(undefined8 *)(pbVar23 + 0xb8) = uVar5;
                              if (uVar20 != 0xc) {
                                uVar5 = puVar2[0x19];
                                *(undefined8 *)(pbVar23 + 0xc0) = puVar2[0x18];
                                *(undefined8 *)(pbVar23 + 200) = uVar5;
                                if (uVar20 != 0xd) {
                                  uVar5 = puVar2[0x1b];
                                  *(undefined8 *)(pbVar23 + 0xd0) = puVar2[0x1a];
                                  *(undefined8 *)(pbVar23 + 0xd8) = uVar5;
                                  if (uVar20 == 0xf) {
                                    uVar5 = puVar2[0x1d];
                                    *(undefined8 *)(pbVar23 + 0xe0) = puVar2[0x1c];
                                    *(undefined8 *)(pbVar23 + 0xe8) = uVar5;
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
        uVar19 = uVar13 & 0xfffffffffffffff0;
        if ((uVar13 & 0xffffffffffffff0f) != 0) {
          uVar20 = uVar13 - uVar19;
          if (6 < (uVar13 - uVar19) - 1) goto LAB_0070f417;
          goto LAB_0070f436;
        }
      }
    }
  }
  local_78 = (byte *)CONCAT44(local_78._4_4_,1);
  _local_50 = _local_50 + uVar32 + uVar13;
LAB_0070dda2:
  local_90 = local_90 + -1;
  if (local_90 == (byte *)0x0) goto LAB_0070d548;
  goto LAB_0070c10c;
LAB_0070ddee:
  uVar20 = 0;
  uVar32 = uVar20;
  if (pbVar23[1] == *(byte *)((long)puVar29 + 5)) {
    do {
      uVar20 = uVar32 + 1;
      lVar38 = uVar32 + 2;
      lVar15 = uVar32 + 6;
      uVar32 = uVar20;
    } while (*(byte *)((long)puVar29 + lVar15) == pbVar23[lVar38]);
  }
  lVar15 = 0;
  do {
    lVar1 = uVar20 + 1;
    lVar38 = uVar20 + 5;
    uVar20 = uVar20 + 1;
    lVar15 = lVar15 * 0x100 +
             (long)(int)((uint)pbVar23[lVar1] - (uint)*(byte *)((long)puVar29 + lVar38));
  } while (uVar20 < uVar13);
LAB_0070dc40:
  pbVar36 = pbVar36 + uVar13;
  uVar10 = *(uint *)(local_60 + (lVar15 - (int)uVar10) * 4);
LAB_0070dc4f:
  iVar18 = (uVar10 & 0xffffff) + 1;
  uVar13 = (ulong)*(byte *)(lVar3 + (int)(uVar10 & 0xffffff));
  if (0 < (int)(uint)local_b8) {
    iVar11 = 0;
    do {
      iVar17 = (int)uVar13 + iVar18;
      iVar11 = iVar11 + 1;
      iVar18 = iVar17 + 1;
      uVar13 = (ulong)*(byte *)(lVar3 + iVar17);
    } while (iVar11 != (uint)local_b8);
  }
  pbVar35 = pbVar35 + 1;
  pbVar23 = pbVar36;
  if (pbVar35 == local_90) goto LAB_0070dc9f;
  goto LAB_0070db74;
LAB_0070f1a2:
  plVar28 = (long *)(puVar26 + -0x10);
  if ((_local_50 + 1 < (byte *)0x3) ||
     (plVar28 = (long *)(puVar26 + -0x10), pbVar30 = _local_50, _local_50 != local_c8))
  goto LAB_0070bae7;
  goto joined_r0x0070f04c;
LAB_0070bc0f:
  uVar19 = 0;
  uVar20 = uVar19;
  if (*(byte *)((long)puVar29 + 5) == pbVar30[1]) {
    do {
      uVar19 = uVar20 + 1;
      lVar15 = uVar20 + 2;
      lVar34 = uVar20 + 6;
      uVar20 = uVar19;
    } while (*(byte *)((long)puVar29 + lVar34) == pbVar30[lVar15]);
  }
  lVar34 = 0;
  do {
    lVar38 = uVar19 + 1;
    lVar15 = uVar19 + 5;
    uVar19 = uVar19 + 1;
    lVar34 = lVar34 * 0x100 +
             (long)(int)((uint)pbVar30[lVar38] - (uint)*(byte *)((long)puVar29 + lVar15));
  } while (uVar19 < uVar32);
LAB_0070bb92:
  pbVar35 = pbVar35 + uVar32;
  uVar10 = *(uint *)(local_60 + (lVar34 - (int)uVar10) * 4);
LAB_0070bba2:
  bVar22 = *pbVar35;
  *(uint *)(uVar13 + (long)pbVar23 * 4) = uVar10 & 0xffffff;
  local_78[(long)pbVar23] = (byte)(uVar10 >> 0x18);
  local_c8 = pbVar23 + 1;
  if (bVar22 != 0) {
    pbVar30 = pbVar35;
    pbVar23 = local_c8;
    if (local_c8 == (byte *)0xfff) goto LAB_0070bc63;
    goto LAB_0070ba0f;
  }
  lVar34 = (long)pbVar23 * 4 + -4;
  local_c0 = local_47;
  local_78[(long)local_c8] = 0;
  local_d8 = (byte *)(uVar13 + lVar34);
  local_e0 = (byte *)(uVar13 + 4 + lVar34);
  local_b0 = (byte *)0x0;
  local_f8 = (ulong)*local_78 * (long)local_88 + local_d0;
  local_60 = (byte *)(uVar13 - 4);
  _local_50 = (byte *)0x0;
  pbVar35 = local_b0;
  do {
    local_b0 = pbVar35;
    uVar13 = (ulong)_local_50[local_f8];
    pbVar30 = local_b0;
    if ((_local_50[local_f8] & 4) == 0) {
      pbVar35 = (byte *)0xffffffffffffffff;
      local_a0 = _local_50 + local_d0;
      pbVar36 = (byte *)0x0;
      local_58 = local_60;
      do {
        if ((uVar13 & 1) == 0) {
          if (pbVar35 == (byte *)0xffffffffffffffff) {
            pbVar35 = pbVar36;
          }
        }
        else {
          if ((pbVar35 != (byte *)0xffffffffffffffff) && (pbVar35 < pbVar36)) {
            local_90 = local_60 + (long)pbVar35 * 4;
            pbVar35 = local_58;
            do {
              while( true ) {
                iVar18 = *(int *)pbVar35;
                lVar34 = (long)iVar18;
                uVar10 = (uint)*(byte *)(lVar3 + lVar34);
                uVar13 = (ulong)uVar10;
                iVar11 = iVar18 + 1;
                *(int *)pbVar35 = iVar11;
                pbVar31 = pbVar30 + uVar13;
                local_98 = pbVar36;
                if (pbVar31 < local_68) break;
                *(uint *)pbVar35 = iVar11 + uVar10;
                pbVar30 = pbVar31;
LAB_0070e10e:
                pbVar35 = pbVar35 + -4;
                if (local_90 == pbVar35) goto LAB_0070e06d;
              }
              uVar32 = uVar13 - 1;
              if (uVar13 == 0) goto LAB_0070e10e;
              pcVar14 = local_70 + (long)pbVar30;
              if (((ulong)((long)pcVar14 - (lVar3 + 2 + lVar34)) < 0xf) || (uVar32 < 7)) {
                lVar34 = lVar34 - (long)pbVar30;
                do {
                  pbVar21 = pbVar30 + lVar34 + lVar3 + 1;
                  pbVar30 = pbVar30 + 1;
                  (local_70 + -1)[(long)pbVar30] = *pbVar21;
                } while (pbVar31 != pbVar30);
              }
              else if (uVar32 < 0xf) {
                uVar19 = 0;
                pbVar21 = pbVar30;
                uVar20 = uVar32;
LAB_0070e1be:
                *(undefined8 *)(local_70 + uVar19 + (long)pbVar30) =
                     *(undefined8 *)(uVar19 + 1 + lVar34 + lVar3);
                uVar19 = uVar13 & 0xfffffffffffffff8;
                pbVar21 = pbVar21 + uVar19;
                uVar20 = uVar20 - uVar19;
                iVar11 = iVar11 + (int)uVar19;
                if (uVar13 != uVar19) {
LAB_0070e1e5:
                  local_70[(long)pbVar21] = *(char *)(lVar3 + iVar11);
                  if (uVar20 != 0) {
                    (local_70 + 1)[(long)pbVar21] = *(char *)(lVar3 + (iVar11 + 1));
                    if (uVar20 != 1) {
                      (local_70 + 2)[(long)pbVar21] = *(char *)(lVar3 + (iVar11 + 2));
                      if (uVar20 != 2) {
                        (local_70 + 3)[(long)pbVar21] = *(char *)(lVar3 + (iVar11 + 3));
                        if (uVar20 != 3) {
                          (local_70 + 4)[(long)pbVar21] = *(char *)(lVar3 + (iVar11 + 4));
                          if (uVar20 != 4) {
                            (local_70 + 5)[(long)pbVar21] = *(char *)(lVar3 + (iVar11 + 5));
                            if (uVar20 != 5) {
                              (local_70 + 6)[(long)pbVar21] = *(char *)(lVar3 + (iVar11 + 6));
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar20 = 0;
                do {
                  puVar2 = (undefined8 *)(lVar3 + 1 + lVar34 + uVar20);
                  uVar5 = puVar2[1];
                  *(undefined8 *)(pcVar14 + uVar20) = *puVar2;
                  *(undefined8 *)(pcVar14 + uVar20 + 8) = uVar5;
                  uVar20 = uVar20 + 0x10;
                } while (uVar20 != (uVar10 & 0xf0));
                uVar19 = uVar13 & 0xfffffffffffffff0;
                pbVar21 = pbVar30 + uVar19;
                uVar20 = uVar32 - uVar19;
                iVar11 = iVar11 + (int)uVar19;
                if (uVar13 != uVar19) {
                  uVar13 = uVar13 - uVar19;
                  if (6 < uVar13 - 1) goto LAB_0070e1be;
                  goto LAB_0070e1e5;
                }
              }
              pbVar21 = pbVar35 + -4;
              *(int *)pbVar35 = iVar18 + 2 + (int)uVar32;
              pbVar35 = pbVar21;
              pbVar30 = pbVar31;
            } while (local_90 != pbVar21);
          }
LAB_0070e06d:
          iVar18 = *(int *)(local_58 + 4);
          lVar34 = (long)iVar18;
          bVar22 = *(byte *)(lVar3 + lVar34);
          uVar13 = (ulong)bVar22;
          iVar11 = iVar18 + 1;
          *(int *)(local_58 + 4) = iVar11;
          pbVar31 = pbVar30 + uVar13;
          if (pbVar31 < local_68) {
            uVar32 = uVar13 - 1;
            if (uVar13 == 0) {
              pbVar35 = (byte *)0xffffffffffffffff;
            }
            else {
              pcVar14 = local_70 + (long)pbVar30;
              if (((ulong)((long)pcVar14 - (lVar3 + 2 + lVar34)) < 0xf) || (uVar32 < 7)) {
                lVar34 = lVar34 - (long)pbVar30;
                do {
                  pbVar35 = pbVar30 + lVar34 + lVar3 + 1;
                  pbVar30 = pbVar30 + 1;
                  (local_70 + -1)[(long)pbVar30] = *pbVar35;
                } while (pbVar31 != pbVar30);
              }
              else if (uVar32 < 0xf) {
                uVar19 = 0;
                pbVar35 = pbVar30;
                uVar20 = uVar32;
LAB_0070e695:
                *(undefined8 *)(local_70 + uVar19 + (long)pbVar30) =
                     *(undefined8 *)(uVar19 + 1 + lVar34 + lVar3);
                uVar19 = uVar13 & 0xfffffffffffffff8;
                pbVar35 = pbVar35 + uVar19;
                uVar20 = uVar20 - uVar19;
                iVar11 = iVar11 + (int)uVar19;
                if (uVar19 != uVar13) {
LAB_0070e6bc:
                  local_70[(long)pbVar35] = *(char *)(lVar3 + iVar11);
                  if (uVar20 != 0) {
                    (local_70 + 1)[(long)pbVar35] = *(char *)(lVar3 + (iVar11 + 1));
                    if (uVar20 != 1) {
                      (local_70 + 2)[(long)pbVar35] = *(char *)(lVar3 + (iVar11 + 2));
                      if (uVar20 != 2) {
                        (local_70 + 3)[(long)pbVar35] = *(char *)(lVar3 + (iVar11 + 3));
                        if (uVar20 != 3) {
                          (local_70 + 4)[(long)pbVar35] = *(char *)(lVar3 + (iVar11 + 4));
                          if (uVar20 != 4) {
                            (local_70 + 5)[(long)pbVar35] = *(char *)(lVar3 + (iVar11 + 5));
                            if (uVar20 != 5) {
                              (local_70 + 6)[(long)pbVar35] = *(char *)(lVar3 + (iVar11 + 6));
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar20 = 0;
                do {
                  puVar2 = (undefined8 *)(lVar3 + 1 + lVar34 + uVar20);
                  uVar5 = puVar2[1];
                  *(undefined8 *)(pcVar14 + uVar20) = *puVar2;
                  *(undefined8 *)(pcVar14 + uVar20 + 8) = uVar5;
                  uVar20 = uVar20 + 0x10;
                } while ((bVar22 & 0xf0) != uVar20);
                uVar19 = uVar13 & 0xfffffffffffffff0;
                pbVar35 = pbVar30 + uVar19;
                uVar20 = uVar32 - uVar19;
                iVar11 = iVar11 + (int)uVar19;
                if (uVar13 != uVar19) {
                  uVar13 = uVar13 - uVar19;
                  if (6 < uVar13 - 1) goto LAB_0070e695;
                  goto LAB_0070e6bc;
                }
              }
              *(int *)(local_58 + 4) = iVar18 + 2 + (int)uVar32;
              pbVar35 = (byte *)0xffffffffffffffff;
              pbVar30 = pbVar31;
            }
          }
          else {
            *(uint *)(local_58 + 4) = iVar11 + (uint)bVar22;
            pbVar35 = (byte *)0xffffffffffffffff;
            pbVar30 = pbVar31;
          }
        }
        local_58 = local_58 + 4;
        uVar13 = (ulong)local_a0[(ulong)(local_78 + 1)[(long)pbVar36] * (long)local_88];
        bVar39 = pbVar23 != pbVar36;
        pbVar36 = pbVar36 + 1;
      } while (bVar39);
      if ((pbVar35 != (byte *)0xffffffffffffffff) && (pbVar35 < local_c8)) {
        local_58 = local_60 + (long)pbVar35 * 4;
        pbVar35 = local_e0;
        do {
          iVar18 = *(int *)pbVar35;
          lVar34 = (long)iVar18;
          uVar10 = (uint)*(byte *)(lVar3 + lVar34);
          uVar13 = (ulong)uVar10;
          iVar11 = iVar18 + 1;
          *(int *)pbVar35 = iVar11;
          pbVar36 = pbVar30 + uVar13;
          if (pbVar36 < local_68) {
            uVar32 = uVar13 - 1;
            if (uVar13 != 0) {
              pcVar14 = local_70 + (long)pbVar30;
              if (((ulong)((long)pcVar14 - (lVar3 + 2 + lVar34)) < 0xf) || (uVar32 < 7)) {
                lVar34 = lVar34 - (long)pbVar30;
                do {
                  pbVar31 = pbVar30 + lVar34 + lVar3 + 1;
                  pbVar30 = pbVar30 + 1;
                  (local_70 + -1)[(long)pbVar30] = *pbVar31;
                } while (pbVar36 != pbVar30);
              }
              else if (uVar32 < 0xf) {
                uVar19 = 0;
                pbVar31 = pbVar30;
                uVar20 = uVar32;
LAB_0070ef15:
                *(undefined8 *)(local_70 + uVar19 + (long)pbVar30) =
                     *(undefined8 *)(uVar19 + 1 + lVar34 + lVar3);
                uVar19 = uVar13 & 0xfffffffffffffff8;
                pbVar31 = pbVar31 + uVar19;
                uVar20 = uVar20 - uVar19;
                iVar11 = iVar11 + (int)uVar19;
                if (uVar13 != uVar19) {
LAB_0070ef3c:
                  local_70[(long)pbVar31] = *(char *)(lVar3 + iVar11);
                  if (uVar20 != 0) {
                    (local_70 + 1)[(long)pbVar31] = *(char *)(lVar3 + (iVar11 + 1));
                    if (uVar20 != 1) {
                      (local_70 + 2)[(long)pbVar31] = *(char *)(lVar3 + (iVar11 + 2));
                      if (uVar20 != 2) {
                        (local_70 + 3)[(long)pbVar31] = *(char *)(lVar3 + (iVar11 + 3));
                        if (uVar20 != 3) {
                          (local_70 + 4)[(long)pbVar31] = *(char *)(lVar3 + (iVar11 + 4));
                          if (uVar20 != 4) {
                            (local_70 + 5)[(long)pbVar31] = *(char *)(lVar3 + (iVar11 + 5));
                            if (uVar20 != 5) {
                              (local_70 + 6)[(long)pbVar31] = *(char *)(lVar3 + (iVar11 + 6));
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar20 = 0;
                do {
                  puVar2 = (undefined8 *)(lVar3 + 1 + lVar34 + uVar20);
                  uVar5 = puVar2[1];
                  *(undefined8 *)(pcVar14 + uVar20) = *puVar2;
                  *(undefined8 *)(pcVar14 + uVar20 + 8) = uVar5;
                  uVar20 = uVar20 + 0x10;
                } while ((uVar10 & 0xf0) != uVar20);
                uVar19 = uVar13 & 0xfffffffffffffff0;
                pbVar31 = pbVar30 + uVar19;
                uVar20 = uVar32 - uVar19;
                iVar11 = iVar11 + (int)uVar19;
                if (uVar13 != uVar19) {
                  uVar13 = uVar13 - uVar19;
                  if (6 < uVar13 - 1) goto LAB_0070ef15;
                  goto LAB_0070ef3c;
                }
              }
              *(int *)pbVar35 = iVar18 + 2 + (int)uVar32;
              pbVar30 = pbVar36;
            }
          }
          else {
            *(uint *)pbVar35 = iVar11 + uVar10;
            pbVar30 = pbVar36;
          }
          pbVar35 = pbVar35 + -4;
        } while (local_58 != pbVar35);
      }
    }
    else {
      local_58 = (byte *)0x0;
      uVar32 = 1;
      local_a0 = _local_50 + local_d0;
      pbVar35 = (byte *)0xffffffffffffffff;
      local_98 = local_60;
      pbVar36 = local_58;
      do {
        local_58 = pbVar36;
        local_a8 = (byte *)(CONCAT44(local_a8._4_4_,(int)uVar13) & 0xffffffff00000001);
        if ((uVar13 & 1) == 0) {
          if (pbVar35 == (byte *)0xffffffffffffffff) {
            pbVar35 = local_58;
          }
        }
        else {
          if ((pbVar35 != (byte *)0xffffffffffffffff) && (pbVar35 < local_58)) {
            local_b8 = local_60 + (long)pbVar35 * 4;
            pbVar35 = local_98;
            do {
              local_90 = (byte *)(long)*(int *)pbVar35;
              pbVar36 = local_90 + lVar3;
              iVar18 = *(int *)pbVar35 + 1;
              bVar22 = *pbVar36;
              uVar10 = (uint)bVar22;
              uVar20 = (ulong)uVar10;
              *(int *)pbVar35 = iVar18;
              iVar11 = (int)uVar32;
              if (uVar20 == 0) {
                uVar10 = iVar11 + 1;
              }
              else {
                bVar24 = (byte)uVar32;
                if (iVar11 < 0x80) {
                  pbVar31 = pbVar30 + 1;
                  local_47[0] = bVar24;
                  if (pbVar31 + uVar20 < local_68) {
                    uVar19 = 1;
                    local_70[(long)pbVar30] = bVar24;
                    goto LAB_0070e905;
                  }
                  uVar19 = 1;
                }
                else {
                  bVar9 = (byte)(iVar11 >> 6);
                  if ((uVar32 & 0xfffff800) == 0) {
                    local_47[0] = 0xc0;
                    uVar19 = 2;
                    local_47[1] = bVar24 & 0x3f | 0x80;
                  }
                  else {
                    if ((uVar32 & 0xffff0000) == 0) {
                      iVar17 = 2;
                      local_47[0] = 0xe0;
                      uVar19 = 3;
                    }
                    else if ((uVar32 & 0xffe00000) == 0) {
                      iVar17 = 3;
                      local_47[0] = 0xf0;
                      uVar19 = 4;
                    }
                    else {
                      iVar17 = 5 - (uint)((uVar32 & 0xfc000000) == 0);
                      local_47[0] = (-((uVar32 & 0xfc000000) == 0) & 0xfcU) - 4;
                      uVar19 = 6 - (ulong)((uVar32 & 0xfc000000) == 0);
                    }
                    local_47[iVar17] = bVar24 & 0x3f | 0x80;
                    local_47[iVar17 + -1] = bVar9 & 0x3f | 0x80;
                    bVar9 = (byte)(iVar11 >> 0xc);
                    if (iVar17 + -2 != 0) {
                      local_47[iVar17 + -2] = bVar9 & 0x3f | 0x80;
                      bVar9 = (byte)(iVar11 >> 0x12);
                      iVar17 = iVar17 + -3;
                      if (iVar17 != 0) {
                        local_47[iVar17] = bVar9 & 0x3f | 0x80;
                        bVar9 = (byte)(uVar32 >> 0x18);
                        if (iVar17 != 1) {
                          local_47[1] = bVar9 & 0x3f | 0x80;
                          bVar9 = (char)bVar9 >> 6;
                        }
                      }
                    }
                  }
                  local_47[0] = local_47[0] | bVar9;
                  pbVar31 = pbVar30 + uVar19;
                  if (pbVar31 + uVar20 < local_68) {
                    uVar33 = (uint)uVar19;
                    uVar32 = uVar19 & 0xffffffff;
                    pbVar21 = (byte *)(local_70 + (long)pbVar30);
                    if (uVar33 < 8) {
                      if ((uVar19 & 4) == 0) {
                        if ((uVar33 != 0) && (*pbVar21 = local_47[0], (uVar19 & 2) != 0)) {
                          *(undefined2 *)(pbVar21 + (uVar32 - 2)) =
                               *(undefined2 *)(local_50 + uVar32 + 7);
                        }
                      }
                      else {
                        *(uint *)pbVar21 = CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0]));
                        *(undefined4 *)(pbVar21 + (uVar32 - 4)) =
                             *(undefined4 *)(local_50 + uVar32 + 5);
                      }
                    }
                    else {
                      *(ulong *)pbVar21 =
                           CONCAT44(uVar8,CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0])));
                      *(undefined8 *)(pbVar21 + ((uVar19 & 0xffffffff) - 8)) =
                           *(undefined8 *)(local_50 + (uVar19 & 0xffffffff) + 1);
                      lVar34 = (long)pbVar21 - ((ulong)(pbVar21 + 8) & 0xfffffffffffffff8);
                      local_e8 = (long)local_c0 - lVar34;
                      uVar33 = uVar33 + (int)lVar34 & 0xfffffff8;
                      if (7 < uVar33) {
                        uVar37 = 0;
                        do {
                          uVar32 = (ulong)uVar37;
                          uVar37 = uVar37 + 8;
                          *(undefined8 *)(((ulong)(pbVar21 + 8) & 0xfffffffffffffff8) + uVar32) =
                               *(undefined8 *)(local_e8 + uVar32);
                          local_ec = uVar33;
                        } while (uVar37 < uVar33);
                      }
                    }
LAB_0070e905:
                    pbVar31 = pbVar31 + (long)local_70;
                    lVar34 = (long)iVar18;
                    if (((ulong)((long)pbVar31 - (long)(local_90 + lVar3 + 2)) < 0xf) ||
                       (uVar20 - 1 < 7)) {
                      uVar32 = 0;
                      do {
                        pbVar31[uVar32] = pbVar36[uVar32 + 1];
                        uVar32 = uVar32 + 1;
                      } while (uVar20 != uVar32);
                    }
                    else if (uVar20 - 1 < 0xf) {
                      uVar16 = 0;
                      uVar32 = uVar20;
LAB_0070e98d:
                      *(undefined8 *)(pbVar31 + uVar16) = *(undefined8 *)(pbVar36 + uVar16 + 1);
                      uVar16 = uVar16 + (uVar32 & 0xfffffffffffffff8);
                      if ((uVar32 & 0xfffffffffffffff8) != uVar32) {
LAB_0070e9a9:
                        pbVar31[uVar16] = *(byte *)(lVar3 + uVar16 + lVar34);
                        if (uVar16 + 1 < uVar20) {
                          pbVar31[uVar16 + 1] = *(byte *)(lVar3 + uVar16 + 1 + lVar34);
                          if (uVar16 + 2 < uVar20) {
                            pbVar31[uVar16 + 2] = *(byte *)(lVar3 + uVar16 + 2 + lVar34);
                            if (uVar16 + 3 < uVar20) {
                              pbVar31[uVar16 + 3] = *(byte *)(lVar3 + uVar16 + 3 + lVar34);
                              if (uVar16 + 4 < uVar20) {
                                pbVar31[uVar16 + 4] = *(byte *)(lVar3 + uVar16 + 4 + lVar34);
                                if (uVar16 + 5 < uVar20) {
                                  uVar32 = uVar16 + 6;
                                  pbVar31[uVar16 + 5] = *(byte *)(lVar3 + uVar16 + 5 + lVar34);
                                  if (uVar32 < uVar20) {
                                    pbVar31[uVar32] = *(byte *)(lVar3 + uVar32 + lVar34);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      uVar32 = 0;
                      do {
                        uVar5 = *(undefined8 *)(local_90 + uVar32 + lVar3 + 1 + 8);
                        *(undefined8 *)(pbVar31 + uVar32) =
                             *(undefined8 *)(local_90 + uVar32 + lVar3 + 1);
                        *(undefined8 *)(pbVar31 + uVar32 + 8) = uVar5;
                        uVar32 = uVar32 + 0x10;
                      } while ((uVar10 & 0xf0) != uVar32);
                      uVar16 = uVar20 & 0xfffffffffffffff0;
                      if ((bVar22 & 0xf) != 0) {
                        uVar32 = uVar20 - uVar16;
                        if (6 < (uVar20 - uVar16) - 1) goto LAB_0070e98d;
                        goto LAB_0070e9a9;
                      }
                    }
                  }
                }
                pbVar30 = pbVar30 + uVar19 + uVar20;
                *(uint *)pbVar35 = uVar10 + iVar18;
                uVar10 = (uint)local_a8;
              }
              uVar32 = (ulong)uVar10;
              pbVar35 = pbVar35 + -4;
            } while (pbVar35 != local_b8);
          }
          lVar34 = (long)*(int *)(local_98 + 4);
          pbVar35 = (byte *)(lVar3 + lVar34);
          iVar18 = *(int *)(local_98 + 4) + 1;
          bVar22 = *pbVar35;
          uVar20 = (ulong)bVar22;
          *(int *)(local_98 + 4) = iVar18;
          iVar11 = (int)uVar32;
          if (uVar20 == 0) {
            uVar32 = (ulong)(iVar11 + 1);
            pbVar35 = (byte *)0xffffffffffffffff;
          }
          else {
            bVar24 = (byte)uVar32;
            if (iVar11 < 0x80) {
              pbVar36 = pbVar30 + 1;
              uVar19 = 1;
              local_47[0] = bVar24;
              if (pbVar36 + uVar20 < local_68) {
                uVar19 = 1;
                local_70[(long)pbVar30] = bVar24;
                goto LAB_0070e786;
              }
            }
            else {
              bVar9 = (byte)(iVar11 >> 6);
              if ((uVar32 & 0xfffff800) == 0) {
                local_47[0] = 0xc0;
                uVar19 = 2;
                local_47[1] = bVar24 & 0x3f | 0x80;
              }
              else {
                if ((uVar32 & 0xffff0000) == 0) {
                  iVar17 = 2;
                  local_47[0] = 0xe0;
                  uVar19 = 3;
                }
                else if ((uVar32 & 0xffe00000) == 0) {
                  iVar17 = 3;
                  local_47[0] = 0xf0;
                  uVar19 = 4;
                }
                else {
                  iVar17 = 5 - (uint)((uVar32 & 0xfc000000) == 0);
                  local_47[0] = (-((uVar32 & 0xfc000000) == 0) & 0xfcU) - 4;
                  uVar19 = 6 - (ulong)((uVar32 & 0xfc000000) == 0);
                }
                local_47[iVar17] = bVar24 & 0x3f | 0x80;
                local_47[iVar17 + -1] = bVar9 & 0x3f | 0x80;
                bVar9 = (byte)(iVar11 >> 0xc);
                if (iVar17 + -2 != 0) {
                  local_47[iVar17 + -2] = bVar9 & 0x3f | 0x80;
                  bVar9 = (byte)(iVar11 >> 0x12);
                  iVar17 = iVar17 + -3;
                  if (iVar17 != 0) {
                    local_47[iVar17] = bVar9 & 0x3f | 0x80;
                    bVar9 = (byte)(uVar32 >> 0x18);
                    if (iVar17 != 1) {
                      local_47[1] = bVar9 & 0x3f | 0x80;
                      bVar9 = (char)bVar9 >> 6;
                    }
                  }
                }
              }
              pbVar36 = pbVar30 + uVar19;
              local_47[0] = local_47[0] | bVar9;
              if (pbVar36 + uVar20 < local_68) {
                pbVar31 = (byte *)(local_70 + (long)pbVar30);
                uVar10 = (uint)uVar19;
                uVar32 = uVar19 & 0xffffffff;
                if (uVar10 < 8) {
                  if ((uVar19 & 4) == 0) {
                    if ((uVar10 != 0) && (*pbVar31 = local_47[0], (uVar19 & 2) != 0)) {
                      *(undefined2 *)(pbVar31 + (uVar32 - 2)) =
                           *(undefined2 *)(local_50 + uVar32 + 7);
                    }
                  }
                  else {
                    *(uint *)pbVar31 = CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0]));
                    *(undefined4 *)(pbVar31 + (uVar32 - 4)) = *(undefined4 *)(local_50 + uVar32 + 5)
                    ;
                  }
                }
                else {
                  *(ulong *)pbVar31 =
                       CONCAT44(uVar8,CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0])));
                  *(undefined8 *)(pbVar31 + ((uVar19 & 0xffffffff) - 8)) =
                       *(undefined8 *)(local_50 + (uVar19 & 0xffffffff) + 1);
                  lVar15 = (long)pbVar31 - ((ulong)(pbVar31 + 8) & 0xfffffffffffffff8);
                  uVar10 = uVar10 + (int)lVar15;
                  if (7 < (uVar10 & 0xfffffff8)) {
                    local_90 = (byte *)((ulong)local_90 & 0xffffffff00000000);
                    local_b8 = (byte *)(CONCAT44(local_b8._4_4_,uVar10) & 0xfffffffffffffff8);
                    do {
                      *(undefined8 *)
                       (((ulong)(pbVar31 + 8) & 0xfffffffffffffff8) + ((ulong)local_90 & 0xffffffff)
                       ) = *(undefined8 *)(local_c0 + (((ulong)local_90 & 0xffffffff) - lVar15));
                      uVar10 = (int)local_90 + 8;
                      local_90 = (byte *)CONCAT44(local_90._4_4_,uVar10);
                    } while (uVar10 < (uint)local_b8);
                  }
                }
LAB_0070e786:
                pbVar36 = pbVar36 + (long)local_70;
                lVar15 = (long)iVar18;
                if (((ulong)((long)pbVar36 - (lVar3 + 2 + lVar34)) < 0xf) || (uVar20 - 1 < 7)) {
                  uVar32 = 0;
                  do {
                    pbVar36[uVar32] = pbVar35[uVar32 + 1];
                    uVar32 = uVar32 + 1;
                  } while (uVar20 != uVar32);
                }
                else if (uVar20 - 1 < 0xf) {
                  uVar16 = 0;
                  uVar32 = uVar20;
LAB_0070e801:
                  *(undefined8 *)(pbVar36 + uVar16) = *(undefined8 *)(pbVar35 + uVar16 + 1);
                  uVar16 = uVar16 + (uVar32 & 0xfffffffffffffff8);
                  if ((uVar32 & 0xfffffffffffffff8) != uVar32) {
LAB_0070e81d:
                    pbVar36[uVar16] = *(byte *)(lVar3 + uVar16 + lVar15);
                    if (uVar16 + 1 < uVar20) {
                      pbVar36[uVar16 + 1] = *(byte *)(lVar3 + uVar16 + 1 + lVar15);
                      if (uVar16 + 2 < uVar20) {
                        pbVar36[uVar16 + 2] = *(byte *)(lVar3 + uVar16 + 2 + lVar15);
                        if (uVar16 + 3 < uVar20) {
                          pbVar36[uVar16 + 3] = *(byte *)(lVar3 + uVar16 + 3 + lVar15);
                          if (uVar16 + 4 < uVar20) {
                            pbVar36[uVar16 + 4] = *(byte *)(lVar3 + uVar16 + 4 + lVar15);
                            if (uVar16 + 5 < uVar20) {
                              uVar32 = uVar16 + 6;
                              pbVar36[uVar16 + 5] = *(byte *)(lVar3 + uVar16 + 5 + lVar15);
                              if (uVar32 < uVar20) {
                                pbVar36[uVar32] = *(byte *)(lVar3 + uVar32 + lVar15);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  uVar32 = 0;
                  do {
                    puVar2 = (undefined8 *)(lVar3 + 1 + lVar34 + uVar32);
                    uVar5 = puVar2[1];
                    *(undefined8 *)(pbVar36 + uVar32) = *puVar2;
                    *(undefined8 *)(pbVar36 + uVar32 + 8) = uVar5;
                    uVar32 = uVar32 + 0x10;
                  } while ((bVar22 & 0xf0) != uVar32);
                  uVar16 = uVar20 & 0xfffffffffffffff0;
                  if ((bVar22 & 0xf) != 0) {
                    uVar32 = uVar20 - uVar16;
                    if (6 < (uVar20 - uVar16) - 1) goto LAB_0070e801;
                    goto LAB_0070e81d;
                  }
                }
              }
            }
            uVar32 = uVar13 & 1;
            pbVar30 = pbVar30 + uVar19 + uVar20;
            *(uint *)(local_98 + 4) = (uint)bVar22 + iVar18;
            pbVar35 = (byte *)0xffffffffffffffff;
          }
        }
        local_98 = local_98 + 4;
        uVar13 = (ulong)local_a0[(ulong)(local_78 + 1)[(long)local_58] * (long)local_88];
        pbVar36 = local_58 + 1;
      } while (pbVar23 != local_58);
      if ((pbVar35 != (byte *)0xffffffffffffffff) && (pbVar35 < pbVar23)) {
        local_98 = local_60 + (long)pbVar35 * 4;
        pbVar35 = local_d8;
        do {
          lVar34 = (long)*(int *)pbVar35;
          pbVar36 = (byte *)(lVar3 + lVar34);
          iVar18 = *(int *)pbVar35 + 1;
          bVar22 = *pbVar36;
          uVar13 = (ulong)bVar22;
          *(int *)pbVar35 = iVar18;
          local_90 = (byte *)CONCAT71(local_90._1_7_,bVar22);
          iVar11 = (int)uVar32;
          if (uVar13 == 0) {
            uVar32 = (ulong)(iVar11 + 1);
          }
          else {
            bVar24 = (byte)uVar32;
            if (iVar11 < 0x80) {
              pbVar31 = pbVar30 + 1;
              local_47[0] = bVar24;
              if (pbVar31 + uVar13 < local_68) {
                uVar20 = 1;
                local_70[(long)pbVar30] = bVar24;
                goto LAB_0070ec88;
              }
              uVar20 = 1;
            }
            else {
              bVar9 = (byte)(iVar11 >> 6);
              if ((uVar32 & 0xfffff800) == 0) {
                local_47[0] = 0xc0;
                uVar20 = 2;
                local_47[1] = bVar24 & 0x3f | 0x80;
              }
              else {
                if ((uVar32 & 0xffff0000) == 0) {
                  iVar17 = 2;
                  local_47[0] = 0xe0;
                  uVar20 = 3;
                }
                else if ((uVar32 & 0xffe00000) == 0) {
                  iVar17 = 3;
                  local_47[0] = 0xf0;
                  uVar20 = 4;
                }
                else {
                  iVar17 = 5 - (uint)((uVar32 & 0xfc000000) == 0);
                  local_47[0] = (-((uVar32 & 0xfc000000) == 0) & 0xfcU) - 4;
                  uVar20 = 6 - (ulong)((uVar32 & 0xfc000000) == 0);
                }
                local_47[iVar17] = bVar24 & 0x3f | 0x80;
                local_47[iVar17 + -1] = bVar9 & 0x3f | 0x80;
                bVar9 = (byte)(iVar11 >> 0xc);
                if (iVar17 + -2 != 0) {
                  local_47[iVar17 + -2] = bVar9 & 0x3f | 0x80;
                  bVar9 = (byte)(iVar11 >> 0x12);
                  iVar17 = iVar17 + -3;
                  if (iVar17 != 0) {
                    local_47[iVar17] = bVar9 & 0x3f | 0x80;
                    bVar9 = (byte)(uVar32 >> 0x18);
                    if (iVar17 != 1) {
                      local_47[1] = bVar9 & 0x3f | 0x80;
                      bVar9 = (char)bVar9 >> 6;
                    }
                  }
                }
              }
              local_47[0] = local_47[0] | bVar9;
              pbVar31 = pbVar30 + uVar20;
              if (pbVar31 + uVar13 < local_68) {
                pbVar21 = (byte *)(local_70 + (long)pbVar30);
                uVar10 = (uint)uVar20;
                uVar32 = uVar20 & 0xffffffff;
                if (uVar10 < 8) {
                  if ((uVar20 & 4) == 0) {
                    if ((uVar10 != 0) && (*pbVar21 = local_47[0], (uVar20 & 2) != 0)) {
                      *(undefined2 *)(pbVar21 + (uVar32 - 2)) =
                           *(undefined2 *)(local_50 + uVar32 + 7);
                    }
                  }
                  else {
                    *(uint *)pbVar21 = CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0]));
                    *(undefined4 *)(pbVar21 + (uVar32 - 4)) = *(undefined4 *)(local_50 + uVar32 + 5)
                    ;
                  }
                }
                else {
                  *(ulong *)pbVar21 =
                       CONCAT44(uVar8,CONCAT22(uStack_45,CONCAT11(local_47[1],local_47[0])));
                  *(undefined8 *)(pbVar21 + ((uVar20 & 0xffffffff) - 8)) =
                       *(undefined8 *)(local_50 + (uVar20 & 0xffffffff) + 1);
                  lVar15 = (long)pbVar21 - ((ulong)(pbVar21 + 8) & 0xfffffffffffffff8);
                  uVar10 = uVar10 + (int)lVar15;
                  if (7 < (uVar10 & 0xfffffff8)) {
                    local_58 = (byte *)((ulong)local_58 & 0xffffffff00000000);
                    local_a0 = (byte *)(CONCAT44(local_a0._4_4_,uVar10) & 0xfffffffffffffff8);
                    do {
                      *(undefined8 *)
                       (((ulong)(pbVar21 + 8) & 0xfffffffffffffff8) + ((ulong)local_58 & 0xffffffff)
                       ) = *(undefined8 *)(local_c0 + (((ulong)local_58 & 0xffffffff) - lVar15));
                      uVar10 = (int)local_58 + 8;
                      local_58 = (byte *)CONCAT44(local_58._4_4_,uVar10);
                    } while (uVar10 < (uint)local_a0);
                  }
                }
LAB_0070ec88:
                pbVar31 = pbVar31 + (long)local_70;
                lVar15 = (long)iVar18;
                if (((ulong)((long)pbVar31 - (lVar3 + 2 + lVar34)) < 0xf) || (uVar13 - 1 < 7)) {
                  uVar32 = 0;
                  do {
                    pbVar31[uVar32] = pbVar36[uVar32 + 1];
                    uVar32 = uVar32 + 1;
                  } while (uVar13 != uVar32);
                }
                else if (uVar13 - 1 < 0xf) {
                  uVar19 = 0;
                  uVar32 = uVar13;
LAB_0070ed05:
                  *(undefined8 *)(pbVar31 + uVar19) = *(undefined8 *)(pbVar36 + uVar19 + 1);
                  uVar19 = uVar19 + (uVar32 & 0xfffffffffffffff8);
                  if (uVar32 != (uVar32 & 0xfffffffffffffff8)) {
LAB_0070ed21:
                    pbVar31[uVar19] = *(byte *)(lVar3 + uVar19 + lVar15);
                    if (uVar19 + 1 < uVar13) {
                      pbVar31[uVar19 + 1] = *(byte *)(lVar3 + uVar19 + 1 + lVar15);
                      if (uVar19 + 2 < uVar13) {
                        pbVar31[uVar19 + 2] = *(byte *)(lVar3 + uVar19 + 2 + lVar15);
                        if (uVar19 + 3 < uVar13) {
                          pbVar31[uVar19 + 3] = *(byte *)(lVar3 + uVar19 + 3 + lVar15);
                          if (uVar19 + 4 < uVar13) {
                            pbVar31[uVar19 + 4] = *(byte *)(lVar3 + uVar19 + 4 + lVar15);
                            if (uVar19 + 5 < uVar13) {
                              pbVar31[uVar19 + 5] = *(byte *)(lVar3 + uVar19 + 5 + lVar15);
                              uVar19 = uVar19 + 6;
                              if (uVar19 < uVar13) {
                                pbVar31[uVar19] = *(byte *)(lVar3 + uVar19 + lVar15);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  uVar32 = 0;
                  do {
                    puVar2 = (undefined8 *)(lVar3 + 1 + lVar34 + uVar32);
                    uVar5 = puVar2[1];
                    *(undefined8 *)(pbVar31 + uVar32) = *puVar2;
                    *(undefined8 *)(pbVar31 + uVar32 + 8) = uVar5;
                    uVar32 = uVar32 + 0x10;
                  } while ((bVar22 & 0xf0) != uVar32);
                  uVar19 = uVar13 & 0xfffffffffffffff0;
                  if ((bVar22 & 0xf) != 0) {
                    uVar32 = uVar13 - uVar19;
                    if (6 < (uVar13 - uVar19) - 1) goto LAB_0070ed05;
                    goto LAB_0070ed21;
                  }
                }
              }
            }
            uVar32 = 1;
            pbVar30 = pbVar30 + uVar20 + uVar13;
            *(uint *)pbVar35 = (uint)bVar22 + iVar18;
          }
          pbVar35 = pbVar35 + -4;
        } while (local_98 != pbVar35);
      }
    }
    _local_50 = _local_50 + 1;
    if (pbVar30 < local_68) {
      local_70[(long)pbVar30] = _local_50 < local_88;
    }
    pbVar35 = pbVar30 + 1;
  } while (local_88 != _local_50);
  plVar28 = (long *)(puVar26 + -0x10);
  local_80 = pbVar23;
  _local_50 = pbVar30;
  if ((pbVar30 + 1 < (byte *)0x3) || (plVar28 = (long *)(puVar26 + -0x10), pbVar30 != local_b0))
  goto LAB_0070bae7;
joined_r0x0070f04c:
  _local_50 = pbVar30 + -1;
  plVar28 = (long *)(puVar26 + -0x10);
  if (pbVar30 <= local_68) {
    (local_70 + -1)[(long)pbVar30] = '\0';
    plVar28 = (long *)(puVar26 + -0x10);
  }
LAB_0070bae7:
  if (auStack_43._3_8_ == *(long *)(in_FS_OFFSET + 0x28)) {
    return (size_t)_local_50;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)plVar28 + -8) = 0x70f7c2;
  __stack_chk_fail_local();
}

