
ulong FUN_0079b4d0(long param_1,wchar_t *param_2,uint param_3,undefined8 param_4,
                  undefined1 (*param_5) [16],undefined4 param_6,int param_7,int *param_8,
                  long param_9,int param_10,char *param_11,undefined4 param_12,uint param_13)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  uint *puVar4;
  ulong uVar5;
  int *piVar6;
  char *pcVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  undefined1 (*pauVar12) [16];
  code *pcVar13;
  ulong uVar14;
  wchar_t *pwVar15;
  long lVar16;
  undefined4 *puVar17;
  unkbyte10 *pVar18;
  uint *puVar19;
  undefined1 (*pauVar20) [16];
  long lVar21;
  undefined1 (*pauVar22) [16];
  int *piVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 (*pauVar27) [16];
  undefined4 *puVar28;
  wchar_t *pwVar29;
  uint *puVar30;
  undefined8 uVar31;
  undefined8 *puVar32;
  undefined4 *puVar33;
  byte bVar34;
  uint uVar35;
  uint uVar36;
  undefined1 (*pauVar37) [16];
  uint uVar38;
  int iVar39;
  ulong uVar40;
  uint uVar41;
  undefined1 (**ppauVar42) [16];
  undefined1 (*pauVar43) [16];
  ulong uVar44;
  uint uVar45;
  long in_FS_OFFSET;
  bool bVar46;
  undefined1 auStack_978 [12];
  int local_96c;
  undefined1 (*local_968) [16];
  wchar_t *local_960;
  long local_958;
  uint local_950;
  uint local_94c;
  wchar_t *local_948;
  uint local_940;
  uint local_93c;
  long local_938;
  undefined1 (*local_930) [16];
  wchar_t *local_928;
  undefined1 (*local_920) [16];
  uint local_918;
  uint local_914;
  char *local_910;
  undefined8 local_908;
  ulong local_900;
  undefined1 (*local_8f8) [16];
  byte local_8ef;
  byte local_8ee;
  byte local_8ed;
  uint local_8ec;
  uint local_8e8;
  uint local_8e4;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  undefined1 (*local_8c8) [16];
  long local_8c0;
  undefined1 (*local_8b8) [16];
  undefined8 local_8b0;
  undefined1 (*local_8a8) [16];
  undefined1 (*local_8a0 [5]) [16];
  undefined4 auStack_874 [3];
  undefined1 (*local_868) [16];
  ulong local_860;
  undefined1 local_858 [1024];
  undefined1 (*local_458) [16];
  undefined8 local_450;
  undefined1 local_448 [1032];
  long local_40;
  
  puVar25 = auStack_978;
  local_8d8 = (undefined1 (*) [16])CONCAT44(local_8d8._4_4_,param_6);
  local_938 = param_9;
  local_910 = param_11;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8f8 = (undefined1 (*) [16])local_858;
  local_860 = 0x400;
  local_930 = (undefined1 (*) [16])local_448;
  local_450 = 0x400;
  local_8a8 = (undefined1 (*) [16])0x0;
  if (param_11 == (char *)0xffffffffffffffff) {
    param_12 = *(undefined4 *)(**(long **)(in_FS_OFFSET + -0xc0) + 0x60);
    local_910 = *(char **)(**(long **)(in_FS_OFFSET + -0xc0) + 0x50);
    if ((*local_910 == '\0') || (*local_910 == '\x7f')) {
      local_910 = (char *)0x0;
    }
  }
  local_948 = param_2;
  local_93c = param_3;
  local_8d0 = param_5;
  local_8c0 = param_1;
  local_868 = local_8f8;
  local_458 = local_930;
  if (*param_8 == 0) {
    pauVar37 = (undefined1 (*) [16])0x0;
    pauVar22 = local_8f8;
    pauVar20 = (undefined1 (*) [16])0x0;
  }
  else {
    pauVar12 = (undefined1 (*) [16])0x0;
    pauVar37 = (undefined1 (*) [16])0x0;
    local_8b8 = (undefined1 (*) [16])0xe;
    local_8b0 = local_8f8;
    while( true ) {
      puVar24 = (undefined1 *)((long)local_8b0 + (long)pauVar37 * 0x48);
      pauVar37 = (undefined1 (*) [16])(*pauVar37 + 1);
      lVar11 = FUN_007a0e80(param_8,pauVar12,puVar24,&local_8a8);
      param_8 = *(int **)(puVar24 + 0x20);
      pauVar12 = (undefined1 (*) [16])(*pauVar12 + lVar11);
      if (*param_8 == 0) break;
      if (local_8b8 == pauVar37) {
        cVar8 = FUN_00712520(&local_868);
        puVar24 = auStack_978;
        if (cVar8 == '\0') goto LAB_0079b780;
        local_8b8 = (undefined1 (*) [16])(local_860 / 0x48);
        local_8b0 = local_868;
      }
    }
    pauVar22 = local_8b0;
    pauVar20 = local_8a8;
    if (local_8a8 <= pauVar12) {
      pauVar20 = pauVar12;
    }
  }
  local_8ee = FUN_007125e0(&local_458,pauVar20,0x18);
  puVar24 = auStack_978;
  if (local_8ee == 0) {
LAB_0079b780:
    local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,0xffffffff);
    puVar25 = puVar24;
    goto LAB_0079b78a;
  }
  local_8b0 = local_458 + (long)pauVar20;
  local_8c8 = local_458;
  puVar24 = *local_8b0 + (long)pauVar20 * 4;
  local_940 = param_13 & 2;
  thunk_FUN_00713720(puVar24,-(uint)(local_940 != 0));
  pauVar12 = local_8b0;
  if (pauVar37 == (undefined1 (*) [16])0x0) {
    puVar25 = auStack_978;
    if (pauVar20 != (undefined1 (*) [16])0x0) goto LAB_0079b930;
  }
  else {
    pauVar27 = (undefined1 (*) [16])0x0;
    local_8b8 = pauVar22;
    local_8e0 = pauVar20;
    do {
      while( true ) {
        if (*(int *)(pauVar22[2] + 0xc) != -1) {
          *(undefined4 *)(puVar24 + (long)*(int *)(pauVar22[2] + 0xc) * 4) = 0;
        }
        if (*(int *)(pauVar22[2] + 8) != -1) {
          *(undefined4 *)(puVar24 + (long)*(int *)(pauVar22[2] + 8) * 4) = 0;
        }
        lVar11 = *(long *)(pauVar22[3] + 8);
        if (lVar11 != 0) break;
LAB_0079b8a7:
        pauVar27 = (undefined1 (*) [16])(*pauVar27 + 1);
        pauVar22 = (undefined1 (*) [16])(pauVar22[4] + 8);
        if (pauVar27 == pauVar37) goto LAB_0079b913;
      }
      if (lVar11 == 1) {
        *(undefined4 *)(puVar24 + (long)*(int *)pauVar22[3] * 4) = *(undefined4 *)(pauVar22[3] + 4);
        *(undefined4 *)(*pauVar12 + (long)*(int *)pauVar22[3] * 4) = *(undefined4 *)pauVar22[4];
        goto LAB_0079b8a7;
      }
      pauVar27 = (undefined1 (*) [16])(*pauVar27 + 1);
      lVar21 = (long)*(int *)pauVar22[3] * 4;
      (**(code **)(DAT_0094b5d8 + (long)*(int *)(*pauVar22 + 8) * 8))
                (pauVar22,lVar11,puVar24 + lVar21,*pauVar12 + lVar21);
      pauVar22 = (undefined1 (*) [16])(pauVar22[4] + 8);
    } while (pauVar27 != pauVar37);
LAB_0079b913:
    pauVar22 = local_8b8;
    pauVar20 = local_8e0;
    if (local_8e0 != (undefined1 (*) [16])0x0) {
LAB_0079b930:
      pauVar43 = (undefined1 (*) [16])0x0;
      uVar36 = param_13 & 1;
      uVar38 = param_13 & 8;
      pauVar12 = local_8c8;
      puVar25 = auStack_978;
      pauVar27 = local_8d0;
      do {
        uVar35 = *(uint *)(puVar24 + (long)pauVar43 * 4);
        if ((int)uVar35 < 8) {
          if ((int)uVar35 < -1) {
LAB_0079bf70:
            if ((uVar35 & 0x800) != 0) goto switchD_0079b986_caseD_3;
LAB_0079bf80:
            if ((DAT_0094b5e0 == 0) ||
               (*(long *)(DAT_0094b5e0 + -0x40 + (long)(int)uVar35 * 8) == 0)) {
              *pauVar12 = (undefined1  [16])0x0;
            }
            else {
              uVar44 = (long)*(int *)(*local_8b0 + (long)pauVar43 * 4) + 0x17;
              for (puVar26 = puVar25; puVar26 != puVar25 + -(uVar44 & 0xfffffffffffff000);
                  puVar26 = puVar26 + -0x1000) {
                *(undefined8 *)(puVar26 + -8) = *(undefined8 *)(puVar26 + -8);
              }
              uVar44 = (ulong)((uint)uVar44 & 0xff0);
              lVar11 = -uVar44;
              puVar25 = puVar26 + lVar11;
              if (uVar44 != 0) {
                *(undefined8 *)(puVar26 + -8) = *(undefined8 *)(puVar26 + -8);
              }
              local_8e0 = (undefined1 (*) [16])CONCAT71(local_8e0._1_7_,(char)uVar36);
              *(ulong *)*pauVar12 = (ulong)(puVar26 + lVar11 + 0xf) & 0xfffffffffffffff0;
              pcVar13 = *(code **)(DAT_0094b5e0 + -0x40 +
                                  (long)*(int *)(puVar24 + (long)pauVar43 * 4) * 8);
              *(undefined8 *)(puVar26 + lVar11 + -8) = 0x79db39;
              local_8e4 = uVar38;
              local_8d0 = pauVar12;
              local_8b8 = pauVar27;
              (*pcVar13)();
              uVar36 = (uint)(byte)local_8e0;
              pauVar12 = local_8d0;
              pauVar27 = local_8b8;
              uVar38 = local_8e4;
            }
          }
          else {
            switch(uVar35) {
            case 0:
            case 1:
            case 2:
switchD_0079b986_caseD_0:
              uVar35 = *(uint *)*pauVar27;
              if (uVar35 < 0x30) {
                puVar33 = (undefined4 *)((ulong)uVar35 + *(long *)pauVar27[1]);
                *(uint *)*pauVar27 = uVar35 + 8;
              }
              else {
                puVar33 = *(undefined4 **)(*pauVar27 + 8);
                *(undefined4 **)(*pauVar27 + 8) = puVar33 + 2;
              }
              *(undefined4 *)*pauVar12 = *puVar33;
              break;
            case 3:
            case 4:
            case 5:
              goto switchD_0079b986_caseD_3;
            case 6:
            case 7:
              uVar35 = *(uint *)(*pauVar27 + 4);
              if (uVar35 < 0xb0) {
                puVar32 = (undefined8 *)((ulong)uVar35 + *(long *)pauVar27[1]);
                *(uint *)(*pauVar27 + 4) = uVar35 + 0x10;
              }
              else {
                puVar32 = *(undefined8 **)(*pauVar27 + 8);
                *(undefined8 **)(*pauVar27 + 8) = puVar32 + 1;
              }
              *(undefined8 *)*pauVar12 = *puVar32;
              break;
            default:
              if (local_940 == 0) {
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar25 + -8) = &UNK_0079bfbf;
                FUN_006e2220("(mode_flags & PRINTF_FORTIFY) != 0","vfprintf-internal.c",0x70f,
                             "printf_positional");
              }
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar25 + -8) = 0x79bf2a;
              FUN_00703110("*** invalid %N$ use detected ***\n");
            }
          }
        }
        else if (uVar35 == 0x107) {
          if ((char)uVar36 == '\0') {
            if (uVar38 == 0) {
              pVar18 = (unkbyte10 *)(*(long *)(*pauVar27 + 8) + 0xfU & 0xfffffffffffffff0);
              *(unkbyte10 **)(*pauVar27 + 8) = pVar18 + 1;
              *(unkbyte10 *)*pauVar12 = *pVar18;
            }
            else {
              uVar35 = *(uint *)(*pauVar27 + 4);
              if (uVar35 < 0xb0) {
                puVar32 = (undefined8 *)((ulong)uVar35 + *(long *)pauVar27[1]);
                *(uint *)(*pauVar27 + 4) = uVar35 + 0x10;
              }
              else {
                puVar32 = (undefined8 *)(*(long *)(*pauVar27 + 8) + 0xfU & 0xfffffffffffffff0);
                *(undefined8 **)(*pauVar27 + 8) = puVar32 + 2;
              }
              uVar31 = puVar32[1];
              *(undefined8 *)*pauVar12 = *puVar32;
              *(undefined8 *)(*pauVar12 + 8) = uVar31;
            }
          }
          else {
            uVar35 = *(uint *)(*pauVar27 + 4);
            if (uVar35 < 0xb0) {
              puVar32 = (undefined8 *)((ulong)uVar35 + *(long *)pauVar27[1]);
              *(uint *)(*pauVar27 + 4) = uVar35 + 0x10;
            }
            else {
              puVar32 = *(undefined8 **)(*pauVar27 + 8);
              *(undefined8 **)(*pauVar27 + 8) = puVar32 + 1;
            }
            *(undefined8 *)*pauVar12 = *puVar32;
            *(uint *)(puVar24 + (long)pauVar43 * 4) =
                 *(uint *)(puVar24 + (long)pauVar43 * 4) & 0xfffffeff;
          }
        }
        else {
          if ((int)uVar35 < 0x108) {
            if (uVar35 != 0x100) goto LAB_0079bf80;
          }
          else if (uVar35 != 0x200) {
            if (uVar35 == 0x400) goto switchD_0079b986_caseD_0;
            goto LAB_0079bf70;
          }
switchD_0079b986_caseD_3:
          uVar35 = *(uint *)*pauVar27;
          if (uVar35 < 0x30) {
            puVar32 = (undefined8 *)((ulong)uVar35 + *(long *)pauVar27[1]);
            *(uint *)*pauVar27 = uVar35 + 8;
          }
          else {
            puVar32 = *(undefined8 **)(*pauVar27 + 8);
            *(undefined8 **)(*pauVar27 + 8) = puVar32 + 1;
          }
          *(undefined8 *)*pauVar12 = *puVar32;
        }
        pauVar43 = (undefined1 (*) [16])(*pauVar43 + 1);
        pauVar12 = pauVar12 + 1;
      } while (pauVar43 < pauVar20);
    }
    local_8b8 = (undefined1 (*) [16])(long)param_7;
    if (local_8b8 < pauVar37) {
      local_920 = pauVar37;
      local_928 = (wchar_t *)(local_938 + 1000);
      local_958 = (local_938 + 1000) - (local_938 + 0x3e4);
      local_960 = (wchar_t *)(local_938 + 0x3e4);
      local_8ef = (byte)param_13 & 1;
      local_950 = param_13 & 8;
      piVar23 = (int *)((long)pauVar22 + (long)local_8b8 * 0x48);
      lVar11 = local_958 >> 2;
      local_968 = (undefined1 (*) [16])0x0;
      if (lVar11 < 1) {
        local_968 = (undefined1 (*) [16])-lVar11;
      }
      local_96c = (int)local_968;
      local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(uint)local_8d8);
LAB_0079ba68:
      bVar9 = *(byte *)(piVar23 + 3);
      iVar39 = piVar23[1];
      uVar40 = (ulong)*piVar23;
      uVar38 = piVar23[2];
      uVar35 = bVar9 >> 3 & 1;
      uVar36 = bVar9 & 1;
      local_8ed = bVar9 >> 7;
      uVar45 = bVar9 >> 2 & 1;
      pwVar29 = (wchar_t *)(ulong)uVar45;
      local_8e8 = uVar35;
      local_8e4 = bVar9 >> 4 & 1;
      local_8d8 = (undefined1 (*) [16])
                  (CONCAT44(local_8d8._4_4_,(uint)(bVar9 >> 5)) & 0xffffffff00000001);
      local_8e0 = (undefined1 (*) [16])
                  (CONCAT44(local_8e0._4_4_,(uint)(bVar9 >> 6)) & 0xffffffff00000001);
      uVar41 = *(byte *)((long)piVar23 + 0xd) >> 3 & 1;
      uVar44 = (ulong)uVar41;
      local_914 = bVar9 >> 1 & 1;
      local_908 = (undefined1 (*) [16])
                  (CONCAT44(local_908._4_4_,(uint)(*(byte *)((long)piVar23 + 0xd) >> 1)) &
                  0xffffffff00000001);
      local_8d0 = (undefined1 (*) [16])
                  (CONCAT44(local_8d0._4_4_,(uint)(bVar9 >> 2)) & 0xffffffff00000001);
      local_8ec = CONCAT31(local_8ec._1_3_,(char)piVar23[4]);
      if (piVar23[0xb] != -1) {
        iVar39 = *(int *)local_8c8[piVar23[0xb]];
        if (iVar39 < 0) {
          local_8d8 = (undefined1 (*) [16])CONCAT44(local_8d8._4_4_,1);
          iVar39 = -iVar39;
          piVar23[1] = iVar39;
          *(byte *)(piVar23 + 3) = bVar9 | 0x20;
        }
        else {
          piVar23[1] = iVar39;
        }
      }
      if (piVar23[10] != -1) {
        uVar40 = (ulong)*(int *)local_8c8[piVar23[10]];
        if (*(int *)local_8c8[piVar23[10]] < 0) {
          uVar40 = 0xffffffffffffffff;
        }
        *piVar23 = (int)uVar40;
      }
      puVar24 = puVar25;
      if (((int)uVar38 < 0x100) && (DAT_0094b478 != 0)) {
        pcVar13 = *(code **)(DAT_0094b478 + (long)(int)uVar38 * 8);
        local_900 = (long)(int)uVar38;
        if (pcVar13 == (code *)0x0) goto LAB_0079bb96;
        uVar5 = *(ulong *)(piVar23 + 0xe);
        uVar14 = uVar5 * 8 + 0x17;
        for (puVar26 = puVar25; puVar26 != puVar25 + -(uVar14 & 0xfffffffffffff000);
            puVar26 = puVar26 + -0x1000) {
          *(undefined8 *)(puVar26 + -8) = *(undefined8 *)(puVar26 + -8);
        }
        uVar14 = (ulong)((uint)uVar14 & 0xff0);
        lVar11 = -uVar14;
        puVar25 = puVar26 + lVar11;
        if (uVar14 != 0) {
          *(undefined8 *)(puVar26 + -8) = *(undefined8 *)(puVar26 + -8);
        }
        if (uVar5 != 0) {
          local_918._1_3_ = (undefined3)(local_918 >> 8);
          local_918 = CONCAT31(local_918._1_3_,(char)uVar35);
          iVar10 = piVar23[0xc];
          uVar14 = 0;
          do {
            *(undefined1 (**) [16])
             (((ulong)(puVar26 + lVar11 + 0xf) & 0xfffffffffffffff0) + uVar14 * 8) =
                 local_8c8 + (uint)(iVar10 + (int)uVar14);
            uVar14 = (ulong)((int)uVar14 + 1);
          } while (uVar14 < uVar5);
          pcVar13 = *(code **)(DAT_0094b478 + local_900 * 8);
        }
        local_918 = CONCAT31(local_918._1_3_,(char)uVar36);
        uVar14 = local_900 >> 8;
        local_900 = CONCAT71((int7)uVar14,(char)uVar35);
        *(undefined8 *)(puVar26 + lVar11 + -8) = 0x79ca27;
        local_94c = uVar38;
        iVar10 = (*pcVar13)(local_8c0,piVar23,(ulong)(puVar26 + lVar11 + 0xf) & 0xfffffffffffffff0);
        uVar35 = (uint)(byte)local_900;
        uVar36 = local_918 & 0xff;
        puVar24 = puVar26 + lVar11;
        uVar38 = local_94c;
        if (iVar10 == -2) goto LAB_0079bb96;
        puVar24 = puVar26 + lVar11;
        if (iVar10 < 0) goto LAB_0079b780;
        if (-1 < (int)local_8b0) {
          bVar46 = SCARRY4(iVar10,(int)local_8b0);
          local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar10 + (int)local_8b0);
          puVar25 = puVar26 + lVar11;
          puVar24 = puVar26 + lVar11;
          if (!bVar46) goto LAB_0079c0a8;
          goto LAB_0079b76f;
        }
        goto LAB_0079b78a;
      }
LAB_0079bb96:
      puVar25 = puVar24;
      lVar21 = local_8c0;
      lVar11 = local_938;
      pwVar15 = local_948;
      bVar9 = (byte)uVar35;
      local_918 = uVar38;
      iVar10 = (int)uVar40;
      puVar24 = puVar25;
      switch(uVar38) {
      default:
        uVar40 = *(ulong *)(piVar23 + 0xe);
        uVar44 = uVar40 * 8 + 0x17;
        for (puVar26 = puVar25; puVar26 != puVar25 + -(uVar44 & 0xfffffffffffff000);
            puVar26 = puVar26 + -0x1000) {
          *(undefined8 *)(puVar26 + -8) = *(undefined8 *)(puVar26 + -8);
        }
        uVar44 = (ulong)((uint)uVar44 & 0xff0);
        lVar11 = -uVar44;
        puVar25 = puVar26 + lVar11;
        if (uVar44 != 0) {
          *(undefined8 *)(puVar26 + -8) = *(undefined8 *)(puVar26 + -8);
        }
        if (uVar40 != 0) {
          iVar39 = piVar23[0xc];
          uVar44 = 0;
          do {
            *(undefined1 (**) [16])
             (((ulong)(puVar26 + lVar11 + 0xf) & 0xfffffffffffffff0) + uVar44 * 8) =
                 local_8c8 + (uint)(iVar39 + (int)uVar44);
            uVar44 = (ulong)((int)uVar44 + 1);
          } while (uVar44 < uVar40);
        }
        lVar21 = *(long *)(local_8c0 + 0xa0);
        if (lVar21 == 0) {
LAB_0079d9c0:
          *(undefined8 *)(puVar26 + lVar11 + -8) = 0x79d9d1;
          iVar39 = FUN_006ff380(local_8c0,0x25);
          puVar24 = puVar26 + lVar11;
          if (iVar39 == -1) goto LAB_0079b780;
          bVar9 = *(byte *)(piVar23 + 3);
          if ((bVar9 & 8) == 0) {
            iVar10 = 2;
            iVar39 = 1;
          }
          else {
            lVar21 = *(long *)(local_8c0 + 0xa0);
            if (lVar21 != 0) {
              puVar17 = *(undefined4 **)(lVar21 + 0x20);
              puVar28 = *(undefined4 **)(lVar21 + 0x28);
              goto LAB_0079bc7b;
            }
LAB_0079d9fd:
            *(undefined8 *)(puVar26 + lVar11 + -8) = 0x79da0e;
            iVar39 = FUN_006ff380(local_8c0,0x23);
            puVar24 = puVar26 + lVar11;
            if (iVar39 == -1) goto LAB_0079b780;
            bVar9 = *(byte *)(piVar23 + 3);
            iVar10 = 3;
            iVar39 = 2;
          }
          if (-1 < (char)bVar9) goto LAB_0079bca4;
          lVar21 = *(long *)(local_8c0 + 0xa0);
          iVar39 = iVar10;
          if (lVar21 != 0) goto LAB_0079d6b0;
LAB_0079da48:
          *(undefined8 *)(puVar26 + lVar11 + -8) = 0x79da59;
          iVar10 = FUN_006ff380(local_8c0,0x27);
          puVar24 = puVar26 + lVar11;
          if (iVar10 == -1) goto LAB_0079b780;
LAB_0079d6cc:
          bVar9 = *(byte *)(piVar23 + 3);
        }
        else {
          puVar33 = *(undefined4 **)(lVar21 + 0x20);
          puVar28 = *(undefined4 **)(lVar21 + 0x28);
          if (puVar28 <= puVar33) goto LAB_0079d9c0;
          puVar17 = puVar33 + 1;
          *(undefined4 **)(lVar21 + 0x20) = puVar17;
          *puVar33 = 0x25;
          bVar9 = *(byte *)(piVar23 + 3);
          if ((bVar9 & 8) == 0) {
            iVar39 = 1;
            if ((char)bVar9 < '\0') {
              iVar39 = 2;
LAB_0079d6b0:
              puVar33 = *(undefined4 **)(lVar21 + 0x20);
              if (*(undefined4 **)(lVar21 + 0x28) <= puVar33) goto LAB_0079da48;
              *(undefined4 **)(lVar21 + 0x20) = puVar33 + 1;
              *puVar33 = 0x27;
              goto LAB_0079d6cc;
            }
          }
          else {
LAB_0079bc7b:
            if (puVar28 <= puVar17) goto LAB_0079d9fd;
            iVar39 = 2;
            *(undefined4 **)(lVar21 + 0x20) = puVar17 + 1;
            *puVar17 = 0x23;
            bVar9 = *(byte *)(piVar23 + 3);
            if ((char)bVar9 < '\0') {
              iVar39 = 3;
              goto LAB_0079d6b0;
            }
          }
        }
LAB_0079bca4:
        if ((bVar9 & 0x40) == 0) {
          if ((bVar9 & 0x10) != 0) {
            lVar21 = *(long *)(local_8c0 + 0xa0);
            if ((lVar21 == 0) ||
               (puVar33 = *(undefined4 **)(lVar21 + 0x20),
               *(undefined4 **)(lVar21 + 0x28) <= puVar33)) {
              *(undefined8 *)(puVar26 + lVar11 + -8) = 0x79ddfd;
              iVar10 = FUN_006ff380(local_8c0,0x20);
              goto joined_r0x0079de00;
            }
            *(undefined4 **)(lVar21 + 0x20) = puVar33 + 1;
            *puVar33 = 0x20;
            goto LAB_0079bcdf;
          }
        }
        else {
          lVar21 = *(long *)(local_8c0 + 0xa0);
          if ((lVar21 == 0) ||
             (puVar33 = *(undefined4 **)(lVar21 + 0x20), *(undefined4 **)(lVar21 + 0x28) <= puVar33)
             ) {
            *(undefined8 *)(puVar26 + lVar11 + -8) = 0x79dc67;
            iVar10 = FUN_006ff380(local_8c0,0x2b);
joined_r0x0079de00:
            puVar24 = puVar26 + lVar11;
            if (iVar10 == -1) goto LAB_0079b780;
          }
          else {
            *(undefined4 **)(lVar21 + 0x20) = puVar33 + 1;
            *puVar33 = 0x2b;
          }
LAB_0079bcdf:
          bVar9 = *(byte *)(piVar23 + 3);
          iVar39 = iVar39 + 1;
        }
        if ((bVar9 & 0x20) != 0) {
          lVar21 = *(long *)(local_8c0 + 0xa0);
          if ((lVar21 == 0) ||
             (puVar33 = *(undefined4 **)(lVar21 + 0x20), *(undefined4 **)(lVar21 + 0x28) <= puVar33)
             ) {
            *(undefined8 *)(puVar26 + lVar11 + -8) = 0x79dc89;
            iVar10 = FUN_006ff380(local_8c0,0x2d);
            puVar24 = puVar26 + lVar11;
            if (iVar10 == -1) goto LAB_0079b780;
          }
          else {
            *(undefined4 **)(lVar21 + 0x20) = puVar33 + 1;
            *puVar33 = 0x2d;
          }
          iVar39 = iVar39 + 1;
        }
        if (piVar23[4] == 0x30) {
          lVar21 = *(long *)(local_8c0 + 0xa0);
          if ((lVar21 == 0) ||
             (puVar33 = *(undefined4 **)(lVar21 + 0x20), *(undefined4 **)(lVar21 + 0x28) <= puVar33)
             ) {
            *(undefined8 *)(puVar26 + lVar11 + -8) = 0x79ddab;
            iVar10 = FUN_006ff380(local_8c0,0x30);
            puVar24 = puVar26 + lVar11;
            if (iVar10 == -1) goto LAB_0079b780;
          }
          else {
            *(undefined4 **)(lVar21 + 0x20) = puVar33 + 1;
            *puVar33 = 0x30;
          }
          iVar39 = iVar39 + 1;
        }
        if ((*(byte *)((long)piVar23 + 0xd) & 8) != 0) {
          lVar21 = *(long *)(local_8c0 + 0xa0);
          if ((lVar21 == 0) ||
             (puVar33 = *(undefined4 **)(lVar21 + 0x20), *(undefined4 **)(lVar21 + 0x28) <= puVar33)
             ) {
            *(undefined8 *)(puVar26 + lVar11 + -8) = 0x79dcb1;
            iVar10 = FUN_006ff380(local_8c0,0x49);
            puVar24 = puVar26 + lVar11;
            if (iVar10 == -1) goto LAB_0079b780;
          }
          else {
            *(undefined4 **)(lVar21 + 0x20) = puVar33 + 1;
            *puVar33 = 0x49;
          }
          iVar39 = iVar39 + 1;
        }
        lVar21 = local_8c0;
        if (piVar23[1] != 0) {
          uVar44 = (long)piVar23[1];
          ppauVar42 = &local_868;
          do {
            ppauVar42 = (undefined1 (**) [16])((long)ppauVar42 - 4);
            *(int *)ppauVar42 = *(int *)(&DAT_00842120 + (uVar44 % 10) * 4);
            bVar46 = 9 < uVar44;
            uVar44 = uVar44 / 10;
          } while (bVar46);
          while (ppauVar42 < &local_868) {
            lVar16 = *(long *)(lVar21 + 0xa0);
            iVar10 = *(int *)ppauVar42;
            if ((lVar16 == 0) ||
               (piVar6 = *(int **)(lVar16 + 0x20), *(int **)(lVar16 + 0x28) <= piVar6)) {
              *(undefined8 *)(puVar26 + lVar11 + -8) = 0x79be23;
              iVar10 = FUN_006ff380(lVar21);
            }
            else {
              *(int **)(lVar16 + 0x20) = piVar6 + 1;
              *piVar6 = iVar10;
            }
            puVar24 = puVar26 + lVar11;
            if ((iVar10 == -1) || (puVar24 = puVar26 + lVar11, iVar39 == 0x7fffffff))
            goto LAB_0079b780;
            iVar39 = iVar39 + 1;
            ppauVar42 = (undefined1 (**) [16])((long)ppauVar42 + 4);
          }
        }
        if (*piVar23 != -1) {
          lVar21 = *(long *)(local_8c0 + 0xa0);
          if ((lVar21 == 0) ||
             (puVar33 = *(undefined4 **)(lVar21 + 0x20), *(undefined4 **)(lVar21 + 0x28) <= puVar33)
             ) {
            *(undefined8 *)(puVar26 + lVar11 + -8) = 0x79dcd1;
            iVar10 = FUN_006ff380(local_8c0,0x2e);
            puVar24 = puVar26 + lVar11;
            if (iVar10 == -1) goto LAB_0079b780;
          }
          else {
            *(undefined4 **)(lVar21 + 0x20) = puVar33 + 1;
            *puVar33 = 0x2e;
          }
          lVar21 = local_8c0;
          puVar24 = puVar26 + lVar11;
          if (iVar39 == 0x7fffffff) goto LAB_0079b780;
          uVar44 = (long)*piVar23;
          ppauVar42 = &local_868;
          do {
            ppauVar42 = (undefined1 (**) [16])((long)ppauVar42 - 4);
            *(int *)ppauVar42 = *(int *)(&DAT_00842120 + (uVar44 % 10) * 4);
            bVar46 = 9 < uVar44;
            uVar44 = uVar44 / 10;
          } while (bVar46);
          while (iVar39 = iVar39 + 1, ppauVar42 < &local_868) {
            lVar16 = *(long *)(lVar21 + 0xa0);
            iVar10 = *(int *)ppauVar42;
            if ((lVar16 == 0) ||
               (piVar6 = *(int **)(lVar16 + 0x20), *(int **)(lVar16 + 0x28) <= piVar6)) {
              *(undefined8 *)(puVar26 + lVar11 + -8) = 0x79d5e3;
              iVar10 = FUN_006ff380(lVar21);
            }
            else {
              *(int **)(lVar16 + 0x20) = piVar6 + 1;
              *piVar6 = iVar10;
            }
            puVar24 = puVar26 + lVar11;
            if ((iVar10 == -1) ||
               (puVar24 = puVar26 + lVar11, ppauVar42 = (undefined1 (**) [16])((long)ppauVar42 + 4),
               iVar39 == 0x7fffffff)) goto LAB_0079b780;
          }
        }
        iVar10 = piVar23[2];
        if (iVar10 != 0) {
          lVar21 = *(long *)(local_8c0 + 0xa0);
          if ((lVar21 == 0) ||
             (piVar6 = *(int **)(lVar21 + 0x20), *(int **)(lVar21 + 0x28) <= piVar6)) {
            *(undefined8 *)(puVar26 + lVar11 + -8) = 0x79de4f;
            iVar10 = FUN_006ff380(local_8c0);
          }
          else {
            *(int **)(lVar21 + 0x20) = piVar6 + 1;
            *piVar6 = iVar10;
          }
          puVar24 = puVar26 + lVar11;
          if ((iVar10 == -1) || (puVar24 = puVar26 + lVar11, iVar39 == 0x7fffffff))
          goto LAB_0079b780;
          iVar39 = iVar39 + 1;
        }
        if (-1 < (int)local_8b0) {
          bVar46 = SCARRY4(iVar39,(int)local_8b0);
          iVar39 = iVar39 + (int)local_8b0;
          local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar39);
          puVar25 = puVar26 + lVar11;
          puVar24 = puVar26 + lVar11;
          if (!bVar46) goto joined_r0x0079c0b2;
          goto LAB_0079b76f;
        }
        goto LAB_0079b78a;
      case 0x25:
        lVar11 = *(long *)(local_8c0 + 0xa0);
        if ((lVar11 == 0) ||
           (puVar33 = *(undefined4 **)(lVar11 + 0x20), *(undefined4 **)(lVar11 + 0x28) <= puVar33))
        {
          *(undefined8 *)(puVar25 + -8) = 0x79da81;
          iVar39 = FUN_006ff380(lVar21,0x25);
          if (iVar39 == -1) goto LAB_0079b780;
        }
        else {
          *(undefined4 **)(lVar11 + 0x20) = puVar33 + 1;
          *puVar33 = 0x25;
        }
        if ((int)local_8b0 == 0x7fffffff) goto LAB_0079b780;
        local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(int)local_8b0 + 1);
        break;
      case 0x41:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x61:
      case 0x65:
      case 0x66:
      case 0x67:
        local_8a0[0] = local_8c8 + piVar23[0xc];
        if (local_8ef != 0) {
          *(byte *)(piVar23 + 3) = *(byte *)(piVar23 + 3) & 0xfe;
          piVar23[0xd] = 7;
        }
        if (local_950 == 0) {
          uVar36 = 0;
        }
        *(byte *)((long)piVar23 + 0xd) =
             *(byte *)((long)piVar23 + 0xd) & 0xef | (byte)((uVar36 & 1) << 4);
        if ((piVar23[2] & 0xffffffdfU) == 0x41) {
          *(undefined8 *)(puVar25 + -8) = 0x79c082;
          iVar39 = FUN_007bdd60();
        }
        else {
          *(undefined8 *)(puVar25 + -8) = 0x79d015;
          iVar39 = FUN_007bdb10(lVar21,piVar23,local_8a0);
        }
        if (iVar39 < 0) goto LAB_0079b780;
        if ((int)local_8b0 < 0) goto LAB_0079b78a;
        bVar46 = SCARRY4(iVar39,(int)local_8b0);
        local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar39 + (int)local_8b0);
        if (bVar46) goto LAB_0079b76f;
LAB_0079c0a8:
        iVar39 = (int)local_8b0;
joined_r0x0079c0b2:
        puVar25 = puVar24;
        if (-1 < iVar39) {
          pauVar22 = (undefined1 (*) [16])0x828;
          goto LAB_0079c0c9;
        }
        goto LAB_0079b78a;
      case 0x42:
      case 0x62:
        local_900 = CONCAT44(local_900._4_4_,2);
        goto LAB_0079c470;
      case 0x43:
code_r0x0079c174:
        iVar39 = iVar39 + -1;
        if ((uint)local_8d8 == 0) {
          if (0 < iVar39) {
            *(undefined8 *)(puVar25 + -8) = 0x79d3fa;
            lVar11 = FUN_007a2150(lVar21,0x20,(long)iVar39);
            if (iVar39 != lVar11) goto LAB_0079b780;
            if ((int)local_8b0 < 0) goto LAB_0079b78a;
            bVar46 = SCARRY4(iVar39,(int)local_8b0);
            uVar40 = (ulong)(uint)(iVar39 + (int)local_8b0);
            local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar39 + (int)local_8b0);
            if (bVar46) goto LAB_0079b76f;
          }
          if ((int)local_8b0 < 0) goto LAB_0079b78a;
        }
        lVar21 = local_8c0;
        iVar10 = *(int *)local_8c8[piVar23[0xc]];
        lVar11 = *(long *)(local_8c0 + 0xa0);
        if ((lVar11 == 0) || (piVar6 = *(int **)(lVar11 + 0x20), *(int **)(lVar11 + 0x28) <= piVar6)
           ) {
          *(undefined8 *)(puVar25 + -8) = 0x79d99c;
          iVar10 = FUN_006ff380(lVar21);
          lVar11 = local_8c0;
        }
        else {
          *(int **)(lVar11 + 0x20) = piVar6 + 1;
          *piVar6 = iVar10;
          lVar11 = local_8c0;
        }
        local_8c0 = lVar11;
        if ((iVar10 == -1) || ((int)local_8b0 == 0x7fffffff)) goto LAB_0079b780;
        local_8b0._4_4_ = (undefined4)((ulong)local_8b0 >> 0x20);
        local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(int)local_8b0 + 1);
        if ((uint)local_8d8 != 0) {
          if (iVar39 < 1) goto LAB_0079c0a8;
          *(undefined8 *)(puVar25 + -8) = 0x79d650;
          lVar11 = FUN_007a2150(lVar11,0x20,(long)iVar39);
          if (iVar39 != lVar11) goto LAB_0079b780;
          if ((int)local_8b0 < 0) goto LAB_0079b78a;
          bVar46 = SCARRY4(iVar39,(int)local_8b0);
          local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar39 + (int)local_8b0);
          if (bVar46) goto LAB_0079b76f;
          goto LAB_0079c0a8;
        }
        break;
      case 0x53:
      case 0x73:
        pwVar29 = (wchar_t *)(ulong)(uVar45 ^ 1);
        pauVar22 = *(undefined1 (**) [16])local_8c8[piVar23[0xc]];
        if (pauVar22 != (undefined1 (*) [16])0x0) {
LAB_0079c3ad:
          lVar11 = local_8c0;
          if ((uVar38 == 0x53) || ((char)pwVar29 == '\0')) {
            if (iVar10 != -1) goto LAB_0079b641;
            local_8d0 = pauVar22;
            *(undefined8 *)(puVar25 + -8) = 0x79d27f;
            uVar44 = thunk_FUN_007564d0(pauVar22);
            pauVar22 = local_8d0;
            goto LAB_0079b65d;
          }
          uVar14 = (ulong)local_8b0 & 0xffffffff;
          uVar44 = (ulong)local_8d8 & 0xffffffff;
          *(undefined8 *)(puVar25 + -8) = 0x79c3e3;
          iVar39 = FUN_0079b040(lVar11,pauVar22,uVar40 & 0xffffffff,iVar39,uVar44,uVar14);
          local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar39);
          puVar24 = puVar25;
          goto joined_r0x0079c0b2;
        }
        if ((iVar10 == -1) || (5 < iVar10)) {
          uVar44 = 6;
          pauVar22 = (undefined1 (*) [16])&DAT_0083f140;
        }
        else {
          uVar44 = 0;
          pauVar22 = (undefined1 (*) [16])&DAT_0081da5c;
        }
LAB_0079b65d:
        lVar11 = local_8c0;
        iVar39 = iVar39 - (int)uVar44;
        if (iVar39 < 0) {
          if ((int)local_8b0 < 0) goto LAB_0079cf3e;
          lVar11 = *(long *)(local_8c0 + 0xd8);
          pauVar20 = (undefined1 (*) [16])0x828;
          if (0x827 < lVar11 - 0x93f160U) {
            local_8d8 = (undefined1 (*) [16])0x828;
            local_8d0 = pauVar22;
            *(undefined8 *)(puVar25 + -8) = 0x79de23;
            FUN_00703130();
            pauVar20 = local_8d8;
            pauVar22 = local_8d0;
          }
          lVar21 = local_8c0;
          pcVar13 = *(code **)(lVar11 + 0x38);
          local_8d0 = pauVar20;
          *(undefined8 *)(puVar25 + -8) = 0x79d729;
          uVar40 = (*pcVar13)(lVar21,pauVar22,uVar44);
          if (uVar44 == uVar40) goto LAB_0079c859;
          goto LAB_0079b780;
        }
        pwVar29 = (wchar_t *)((ulong)local_8d8 & 0xffffffff);
        if ((uint)local_8d8 == 0) {
          if (iVar39 != 0) {
            local_8d0 = pauVar22;
            *(undefined8 *)(puVar25 + -8) = 0x79d37e;
            lVar11 = FUN_007a2150(lVar11,0x20,(long)iVar39);
            if (iVar39 != lVar11) goto LAB_0079b780;
            if ((int)local_8b0 < 0) goto LAB_0079b78a;
            bVar46 = SCARRY4(iVar39,(int)local_8b0);
            local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar39 + (int)local_8b0);
            pauVar22 = local_8d0;
            if (bVar46) goto LAB_0079b76f;
          }
          if ((int)local_8b0 < 0) goto LAB_0079b78a;
        }
        else if ((int)local_8b0 < 0) goto LAB_0079cf3e;
        lVar11 = *(long *)(local_8c0 + 0xd8);
        pauVar20 = (undefined1 (*) [16])0x828;
        if (0x827 < lVar11 - 0x93f160U) {
          local_8e0 = (undefined1 (*) [16])0x828;
          local_8d0 = pauVar22;
          *(undefined8 *)(puVar25 + -8) = 0x79dc33;
          FUN_00703130();
          pauVar20 = local_8e0;
          pauVar22 = local_8d0;
        }
        lVar21 = local_8c0;
        pcVar13 = *(code **)(lVar11 + 0x38);
        local_8d0 = pauVar20;
        *(undefined8 *)(puVar25 + -8) = 0x79b6d5;
        uVar40 = (*pcVar13)(lVar21,pauVar22,uVar44);
        lVar11 = local_8c0;
        if (uVar44 != uVar40) goto LAB_0079b780;
        bVar46 = false;
        uVar40 = (long)(int)local_8b0 + uVar44;
        if (((long)uVar40 < 0) || (uVar40 < uVar44)) {
          bVar46 = true;
        }
        iVar10 = (int)uVar40;
        local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar10);
        if (uVar40 != (long)iVar10) {
          bVar46 = true;
        }
        if (bVar46) goto LAB_0079b76f;
        if (-1 < iVar10) {
          pauVar22 = local_8d0;
          if (((uint)local_8d8 == 0) || (iVar39 == 0)) goto LAB_0079c0c9;
          *(undefined8 *)(puVar25 + -8) = 0x79b753;
          lVar11 = FUN_007a2150(lVar11,0x20,(long)iVar39);
          if (iVar39 == lVar11) {
            bVar46 = SCARRY4(iVar39,(int)local_8b0);
            uVar38 = iVar39 + (int)local_8b0;
            local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,uVar38);
            uVar40 = (ulong)uVar38;
            if (bVar46) goto LAB_0079b76f;
            goto LAB_0079cc1b;
          }
          goto LAB_0079b780;
        }
        goto LAB_0079b78a;
      case 0x58:
      case 0x78:
        local_900 = CONCAT44(local_900._4_4_,0x10);
        goto LAB_0079c470;
      case 99:
        if ((uint)local_8d0 != 0) goto code_r0x0079c174;
        uVar38 = iVar39 - 1;
        uVar40 = (ulong)uVar38;
        if ((uint)local_8d8 == 0) {
          if (0 < (int)uVar38) {
            *(undefined8 *)(puVar25 + -8) = 0x79dbbb;
            lVar11 = FUN_007a2150(lVar21,0x20,(long)(int)uVar38);
            if ((int)uVar38 != lVar11) goto LAB_0079b780;
            if ((int)local_8b0 < 0) goto LAB_0079b78a;
            bVar46 = SCARRY4(uVar38,(int)local_8b0);
            uVar44 = (ulong)(uVar38 + (int)local_8b0);
            local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,uVar38 + (int)local_8b0);
            if (bVar46) goto LAB_0079b76f;
          }
          if ((int)local_8b0 < 0) goto LAB_0079b78a;
        }
        uVar1 = local_8c8[piVar23[0xc]][0];
        *(undefined8 *)(puVar25 + -8) = 0x79c2ad;
        iVar39 = FUN_00756690(uVar1);
        lVar21 = local_8c0;
        lVar11 = *(long *)(local_8c0 + 0xa0);
        if ((lVar11 == 0) || (piVar6 = *(int **)(lVar11 + 0x20), *(int **)(lVar11 + 0x28) <= piVar6)
           ) {
          *(undefined8 *)(puVar25 + -8) = 0x79dc0b;
          iVar39 = FUN_006ff380(lVar21);
          lVar11 = local_8c0;
        }
        else {
          *(int **)(lVar11 + 0x20) = piVar6 + 1;
          *piVar6 = iVar39;
          lVar11 = local_8c0;
        }
        local_8c0 = lVar11;
        if ((iVar39 == -1) || ((int)local_8b0 == 0x7fffffff)) goto LAB_0079b780;
        local_8b0._4_4_ = (undefined4)((ulong)local_8b0 >> 0x20);
        local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(int)local_8b0 + 1);
        if ((uint)local_8d8 != 0) {
          if ((int)uVar38 < 1) goto LAB_0079c0a8;
          *(undefined8 *)(puVar25 + -8) = 0x79c32c;
          lVar11 = FUN_007a2150(lVar11,0x20,(long)(int)uVar38);
          if ((int)uVar38 != lVar11) goto LAB_0079b780;
          if ((int)local_8b0 < 0) goto LAB_0079b78a;
          bVar46 = SCARRY4(uVar38,(int)local_8b0);
          local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,uVar38 + (int)local_8b0);
          if (bVar46) goto LAB_0079b76f;
          goto LAB_0079c0a8;
        }
        break;
      case 100:
      case 0x69:
        if ((uint)local_8d0 == 0) {
          iVar2 = *(int *)local_8c8[piVar23[0xc]];
          if ((int)local_908 == 0) {
            pauVar22 = (undefined1 (*) [16])(long)(short)iVar2;
            if (local_914 == 0) {
              pauVar22 = (undefined1 (*) [16])(long)iVar2;
            }
          }
          else {
            pauVar22 = (undefined1 (*) [16])(long)(char)iVar2;
          }
        }
        else {
          pauVar22 = *(undefined1 (**) [16])local_8c8[piVar23[0xc]];
        }
        if ((long)pauVar22 < 0) {
          local_900 = CONCAT44(local_900._4_4_,10);
          pauVar22 = (undefined1 (*) [16])-(long)pauVar22;
          local_8d0 = (undefined1 (*) [16])CONCAT44(local_8d0._4_4_,1);
        }
        else {
          local_900 = CONCAT44(local_900._4_4_,10);
          local_8d0 = (undefined1 (*) [16])((ulong)local_8d0._4_4_ << 0x20);
        }
        goto LAB_0079c4b0;
      case 0x6d:
        local_900 = CONCAT44(local_900._4_4_,uVar38);
        local_8d0 = (undefined1 (*) [16])CONCAT71(local_8d0._1_7_,bVar9);
        if (local_8e8 == 0) {
          *(undefined8 *)(puVar25 + -8) = 0x79d194;
          pauVar22 = (undefined1 (*) [16])FUN_00712950(param_10,lVar11,1000);
          uVar38 = (uint)local_900;
          bVar9 = (byte)local_8d0;
        }
        else {
          *(undefined8 *)(puVar25 + -8) = 0x79c38a;
          pauVar22 = (undefined1 (*) [16])FUN_007a0570(param_10);
          uVar38 = (uint)local_900;
          bVar9 = (byte)local_8d0;
        }
        pauVar20 = local_8d0;
        pwVar29 = (wchar_t *)(ulong)local_8ee;
        if (pauVar22 != (undefined1 (*) [16])0x0) goto LAB_0079c3ad;
        pauVar22 = (undefined1 (*) [16])(long)param_10;
        local_900 = CONCAT44(local_900._4_4_,10);
        local_8d0 = (undefined1 (*) [16])((ulong)local_8d0 & 0xffffffff00000000);
        if (param_10 < 0) {
          local_8d0._4_4_ = SUB84(pauVar20,4);
          local_8d0 = (undefined1 (*) [16])CONCAT44(local_8d0._4_4_,1);
          pauVar22 = (undefined1 (*) [16])-(long)pauVar22;
        }
        goto LAB_0079c4b0;
      case 0x6e:
        if (local_940 != 0) {
          uVar44 = (ulong)local_93c;
          if (local_93c == 0) {
            *(undefined8 *)(puVar25 + -8) = 0x79d43f;
            lVar11 = thunk_FUN_007564d0(pwVar15);
            *(undefined8 *)(puVar25 + -8) = 0x79d44f;
            local_93c = FUN_007ac950(pwVar15,lVar11 * 4 + 4);
            pwVar29 = pwVar15;
          }
          uVar40 = (ulong)local_93c;
          if ((int)local_93c < 0) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar25 + -8) = 0x79de7b;
            FUN_00703110("*** %n in writable segment detected ***\n");
          }
        }
        plVar3 = *(long **)local_8c8[piVar23[0xc]];
        if ((uint)local_8d0 == 0) {
          if ((int)local_908 == 0) {
            if (local_914 == 0) {
              *(int *)plVar3 = (int)local_8b0;
            }
            else {
              *(undefined2 *)plVar3 = (undefined2)local_8b0;
            }
          }
          else {
            *(undefined1 *)plVar3 = (undefined1)local_8b0;
          }
        }
        else {
          *plVar3 = (long)(int)local_8b0;
        }
        break;
      case 0x6f:
        local_900 = CONCAT44(local_900._4_4_,8);
        goto LAB_0079c470;
      case 0x70:
        pauVar22 = *(undefined1 (**) [16])local_8c8[piVar23[0xc]];
        if (pauVar22 == (undefined1 (*) [16])0x0) {
          pauVar22 = (undefined1 (*) [16])&DAT_0083f094;
          uVar40 = uVar40 & 0xffffffff;
          if (iVar10 < 5) {
            uVar40 = 5;
          }
LAB_0079b641:
          local_8d0 = pauVar22;
          *(undefined8 *)(puVar25 + -8) = 0x79b653;
          uVar44 = FUN_00401110(pauVar22,(long)(int)uVar40);
          pauVar22 = local_8d0;
          goto LAB_0079b65d;
        }
        bVar9 = local_8ee;
        if (-1 < iVar10) {
          if (iVar10 != 0) {
            local_918 = 0x78;
            uVar38 = 0x78;
            local_8ed = 0;
            local_900 = CONCAT44(local_900._4_4_,0x10);
            local_8d0 = (undefined1 (*) [16])((ulong)local_8d0._4_4_ << 0x20);
            local_8e8 = 1;
            goto LAB_0079c5d0;
          }
          local_8d0 = (undefined1 (*) [16])((ulong)local_8d0._4_4_ << 0x20);
          bVar34 = 0;
          uVar40 = 0;
          uVar38 = 0x78;
          local_918 = 0x78;
          local_900 = CONCAT44(local_900._4_4_,0x10);
          local_8ec = CONCAT31(local_8ec._1_3_,0x20);
          local_8e8 = 1;
          goto LAB_0079ccd0;
        }
        local_918 = 0x78;
        bVar34 = 0;
        local_8d0 = (undefined1 (*) [16])((ulong)local_8d0._4_4_ << 0x20);
        uVar40 = 1;
        uVar38 = 0x78;
        pwVar29 = (wchar_t *)&DAT_00842120;
        local_8e8 = 1;
        pwVar15 = local_928;
        pauVar20 = pauVar22;
        goto LAB_0079cf00;
      case 0x75:
        local_900 = CONCAT44(local_900._4_4_,10);
LAB_0079c470:
        if ((uint)local_8d0 == 0) {
          uVar36 = *(uint *)local_8c8[piVar23[0xc]];
          pauVar22 = (undefined1 (*) [16])(ulong)uVar36;
          if ((int)local_908 == 0) {
            if (local_914 != 0) {
              pauVar22 = (undefined1 (*) [16])(ulong)(ushort)uVar36;
            }
            local_8e0 = (undefined1 (*) [16])((ulong)local_8e0._4_4_ << 0x20);
            local_8e4 = 0;
          }
          else {
            local_8e0 = (undefined1 (*) [16])((ulong)local_8e0._4_4_ << 0x20);
            pauVar22 = (undefined1 (*) [16])(ulong)(byte)uVar36;
            local_8e4 = 0;
          }
        }
        else {
          local_8e0 = (undefined1 (*) [16])((ulong)local_8e0 & 0xffffffff00000000);
          pauVar22 = *(undefined1 (**) [16])local_8c8[piVar23[0xc]];
          local_8e4 = 0;
          local_8d0 = (undefined1 (*) [16])((ulong)local_8d0._4_4_ << 0x20);
        }
LAB_0079c4b0:
        if (iVar10 < 0) {
          uVar40 = 1;
LAB_0079c5d7:
          pwVar29 = L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
          bVar34 = local_910 != (char *)0x0 & local_8ed;
          if (uVar38 == 0x58) {
            pwVar15 = local_928;
            pauVar20 = pauVar22;
            if ((uint)local_900 == 10) goto LAB_0079ccf0;
LAB_0079c60a:
            pwVar15 = local_928;
            pauVar20 = pauVar22;
            if ((uint)local_900 == 0x10) {
LAB_0079cf00:
              do {
                pwVar15 = pwVar15 + -1;
                *pwVar15 = pwVar29[(uint)pauVar22 & 0xf];
                bVar46 = (undefined1 (*) [16])0xf < pauVar22;
                pauVar22 = (undefined1 (*) [16])((ulong)pauVar22 >> 4);
              } while (bVar46);
              local_900 = CONCAT44(local_900._4_4_,0x10);
            }
            else if ((uint)local_900 == 8) {
              do {
                pwVar15 = pwVar15 + -1;
                *pwVar15 = pwVar29[(uint)pauVar22 & 7];
                bVar46 = (undefined1 (*) [16])0x7 < pauVar22;
                pauVar22 = (undefined1 (*) [16])((ulong)pauVar22 >> 3);
              } while (bVar46);
            }
            else {
              pauVar37 = (undefined1 (*) [16])(long)(int)(uint)local_900;
              do {
                pwVar15 = pwVar15 + -1;
                *pwVar15 = pwVar29[(ulong)pauVar22 % (ulong)pauVar37];
                bVar46 = pauVar37 <= pauVar22;
                pauVar22 = (undefined1 (*) [16])((ulong)pauVar22 / (ulong)pauVar37);
              } while (bVar46);
            }
            if (bVar34 != 0) goto LAB_0079cd2d;
          }
          else {
LAB_0079ccd0:
            pwVar29 = (wchar_t *)&DAT_00842120;
            pwVar15 = local_928;
            pauVar20 = pauVar22;
            if ((uint)local_900 != 10) goto LAB_0079c60a;
LAB_0079ccf0:
            do {
              pwVar15 = pwVar15 + -1;
              *pwVar15 = pwVar29[(ulong)pauVar22 % 10];
              bVar46 = (undefined1 (*) [16])&DAT_00000009 < pauVar22;
              pauVar22 = (undefined1 (*) [16])((ulong)pauVar22 / 10);
            } while (bVar46);
            if (bVar34 != 0) {
LAB_0079cd2d:
              local_8ed = bVar9;
              pcVar7 = local_910;
              pwVar29 = local_928;
              lVar11 = local_938;
              local_914 = uVar38;
              local_908 = pauVar20;
              *(undefined8 *)(puVar25 + -8) = 0x79cd63;
              pwVar15 = (wchar_t *)FUN_0079ad70(lVar11,pwVar15,pwVar29,pcVar7,param_12);
              pauVar20 = local_908;
              uVar38 = local_914;
              bVar9 = local_8ed;
            }
            pwVar29 = local_928;
            if (((uint)local_900 == 10) && ((char)uVar41 != '\0')) {
              local_914 = uVar38;
              local_908 = pauVar20;
              local_8ed = bVar9;
              *(undefined8 *)(puVar25 + -8) = 0x79cdb9;
              pwVar15 = (wchar_t *)FUN_0079ae50(pwVar15,pwVar29,pwVar29);
              pauVar20 = local_908;
              uVar38 = local_914;
              bVar9 = local_8ed;
            }
          }
          lVar11 = (long)local_928 - (long)pwVar15;
          if (lVar11 >> 2 < (long)uVar40) goto LAB_0079c673;
          if (pauVar20 != (undefined1 (*) [16])0x0) {
            pwVar29 = pwVar15;
            if (((uint)local_900 == 8) && (bVar9 != 0)) {
              pwVar29 = pwVar15 + -1;
              pwVar15[-1] = L'0';
              lVar11 = (long)local_928 - (long)pwVar29;
            }
            uVar44 = lVar11 >> 2;
            pauVar22 = (undefined1 (*) [16])(uVar40 - uVar44);
            if ((long)pauVar22 < 0) {
              pauVar22 = (undefined1 (*) [16])0x0;
            }
            uVar40 = (ulong)(int)pauVar22;
            if ((uint)local_8d8 != 0) goto LAB_0079ca78;
            iVar39 = (iVar39 - (int)uVar44) - (int)pauVar22;
            goto LAB_0079c6a8;
          }
          pauVar22 = (undefined1 (*) [16])(uVar40 - (lVar11 >> 2));
          if ((long)pauVar22 < 0) {
            pauVar22 = (undefined1 (*) [16])0x0;
          }
          uVar40 = (ulong)(int)pauVar22;
LAB_0079d02c:
          pauVar20 = (undefined1 (*) [16])0x0;
          pwVar29 = pwVar15;
          if ((uint)local_8d8 == 0) {
            uVar44 = lVar11 >> 2;
            pauVar20 = (undefined1 (*) [16])0x0;
            iVar39 = (iVar39 - (int)pauVar22) - (int)uVar44;
            goto LAB_0079c6cb;
          }
LAB_0079ca78:
          lVar21 = local_8c0;
          if ((uint)local_8d0 == 0) {
            if ((uint)local_8e0 != 0) {
              lVar16 = *(long *)(local_8c0 + 0xa0);
              if ((lVar16 == 0) ||
                 (puVar33 = *(undefined4 **)(lVar16 + 0x20),
                 *(undefined4 **)(lVar16 + 0x28) <= puVar33)) {
                uVar31 = 0x2b;
                goto LAB_0079d95a;
              }
              *(undefined4 **)(lVar16 + 0x20) = puVar33 + 1;
              *puVar33 = 0x2b;
              goto LAB_0079cab9;
            }
            if (local_8e4 != 0) {
              lVar16 = *(long *)(local_8c0 + 0xa0);
              if ((lVar16 == 0) ||
                 (puVar33 = *(undefined4 **)(lVar16 + 0x20),
                 *(undefined4 **)(lVar16 + 0x28) <= puVar33)) {
                uVar31 = 0x20;
                goto LAB_0079d95a;
              }
              *(undefined4 **)(lVar16 + 0x20) = puVar33 + 1;
              *puVar33 = 0x20;
              goto LAB_0079cab9;
            }
          }
          else {
            lVar16 = *(long *)(local_8c0 + 0xa0);
            if ((lVar16 == 0) ||
               (puVar33 = *(undefined4 **)(lVar16 + 0x20),
               *(undefined4 **)(lVar16 + 0x28) <= puVar33)) {
              uVar31 = 0x2d;
LAB_0079d95a:
              local_8e0 = (undefined1 (*) [16])CONCAT44(local_8e0._4_4_,uVar38);
              local_8d8 = pauVar20;
              local_8d0 = pauVar22;
              *(undefined8 *)(puVar25 + -8) = 0x79d966;
              iVar10 = FUN_006ff380(lVar21,uVar31);
              pauVar22 = local_8d0;
              pauVar20 = local_8d8;
              uVar38 = (uint)local_8e0;
              if (iVar10 == -1) goto LAB_0079b780;
            }
            else {
              *(undefined4 **)(lVar16 + 0x20) = puVar33 + 1;
              *puVar33 = 0x2d;
            }
LAB_0079cab9:
            if ((int)local_8b0 == 0x7fffffff) goto LAB_0079b780;
            iVar39 = iVar39 + -1;
            local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(int)local_8b0 + 1);
          }
          lVar21 = local_8c0;
          if (((pauVar20 != (undefined1 (*) [16])0x0) && (local_8e8 != 0)) &&
             ((0x10004UL >> (local_900 & 0x3f) & 1) != 0)) {
            lVar16 = *(long *)(local_8c0 + 0xa0);
            if (lVar16 == 0) {
LAB_0079dd30:
              local_8d8 = (undefined1 (*) [16])CONCAT44(local_8d8._4_4_,uVar38);
              local_8d0 = pauVar22;
              *(undefined8 *)(puVar25 + -8) = 0x79dd4f;
              iVar10 = FUN_006ff380(lVar21,0x30);
              if ((iVar10 == -1) || ((int)local_8b0 == 0x7fffffff)) goto LAB_0079b780;
              lVar16 = *(long *)(local_8c0 + 0xa0);
              pauVar22 = local_8d0;
              if (lVar16 != 0) {
                puVar19 = *(uint **)(lVar16 + 0x20);
                puVar30 = *(uint **)(lVar16 + 0x28);
                uVar38 = (uint)local_8d8;
                goto LAB_0079d109;
              }
LAB_0079dcf8:
              lVar21 = local_8c0;
              uVar38 = local_918;
              local_8d0 = pauVar22;
              *(undefined8 *)(puVar25 + -8) = 0x79dd11;
              iVar10 = FUN_006ff380(lVar21,uVar38);
              pauVar22 = local_8d0;
              if (iVar10 == -1) goto LAB_0079b780;
            }
            else {
              puVar4 = *(uint **)(lVar16 + 0x20);
              puVar30 = *(uint **)(lVar16 + 0x28);
              if (puVar30 <= puVar4) goto LAB_0079dd30;
              puVar19 = puVar4 + 1;
              *(uint **)(lVar16 + 0x20) = puVar19;
              *puVar4 = 0x30;
              if ((int)local_8b0 == 0x7fffffff) goto LAB_0079b780;
LAB_0079d109:
              if (puVar30 <= puVar19) goto LAB_0079dcf8;
              *(uint **)(lVar16 + 0x20) = puVar19 + 1;
              *puVar19 = uVar38;
            }
            if ((int)local_8b0 == 0x7ffffffe) goto LAB_0079b780;
            iVar39 = iVar39 + -2;
            local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(int)local_8b0 + 2);
          }
          lVar21 = local_8c0;
          uVar44 = lVar11 >> 2;
          iVar39 = iVar39 - ((int)pauVar22 + (int)uVar44);
          iVar10 = (int)uVar40;
          if (iVar10 < 1) {
            if (-1 < (int)local_8b0) goto LAB_0079cb41;
            goto LAB_0079cf3e;
          }
          *(undefined8 *)(puVar25 + -8) = 0x79cb11;
          uVar14 = FUN_007a2150(lVar21,0x30,uVar40);
          if (uVar40 != uVar14) goto LAB_0079b780;
          if (-1 < (int)local_8b0) {
            bVar46 = SCARRY4(iVar10,(int)local_8b0);
            iVar10 = iVar10 + (int)local_8b0;
            local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar10);
            if (bVar46) goto LAB_0079b76f;
            if (-1 < iVar10) {
LAB_0079cb41:
              local_8d0 = *(undefined1 (**) [16])(local_8c0 + 0xd8);
              pauVar22 = (undefined1 (*) [16])0x828;
              if (0x827 < (long)local_8d0 - 0x93f160U) {
                local_8d8 = (undefined1 (*) [16])0x828;
                *(undefined8 *)(puVar25 + -8) = 0x79d8f2;
                FUN_00703130();
                pauVar22 = local_8d8;
              }
              lVar11 = local_8c0;
              pcVar13 = *(code **)((long)local_8d0 + 0x38);
              local_8d0 = pauVar22;
              *(undefined8 *)(puVar25 + -8) = 0x79cb86;
              uVar40 = (*pcVar13)(lVar11,pwVar29,uVar44);
              lVar11 = local_8c0;
              if (uVar40 != uVar44) goto LAB_0079b780;
              bVar46 = false;
              uVar40 = (long)(int)local_8b0 + uVar44;
              if (((long)uVar40 < 0) || (uVar40 < uVar44)) {
                bVar46 = true;
              }
              iVar10 = (int)uVar40;
              local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar10);
              if (uVar40 != (long)iVar10) {
                bVar46 = true;
              }
              if (bVar46) goto LAB_0079b76f;
              if (-1 < iVar10) {
                pauVar22 = local_8d0;
                if (iVar39 < 1) goto LAB_0079c0c9;
                *(undefined8 *)(puVar25 + -8) = 0x79cbff;
                lVar11 = FUN_007a2150(lVar11,0x20,(long)iVar39);
                if (iVar39 == lVar11) {
                  local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar39 + iVar10);
                  uVar40 = (ulong)(uint)(iVar39 + iVar10);
                  if (SCARRY4(iVar39,iVar10)) goto LAB_0079b76f;
                  goto LAB_0079cc1b;
                }
                goto LAB_0079b780;
              }
            }
          }
        }
        else {
          if (iVar10 != 0) {
LAB_0079c5d0:
            local_8ec = CONCAT31(local_8ec._1_3_,0x20);
            goto LAB_0079c5d7;
          }
          if (pauVar22 != (undefined1 (*) [16])0x0) {
            uVar40 = 0;
            goto LAB_0079c5d0;
          }
          if (((uint)local_900 != 8) || (bVar9 == 0)) {
            local_8ec = CONCAT31(local_8ec._1_3_,0x20);
            pauVar22 = (undefined1 (*) [16])0x0;
            lVar11 = 0;
            pwVar15 = local_928;
            goto LAB_0079d02c;
          }
          *(undefined4 *)(local_938 + 0x3e4) = 0x30;
          lVar11 = local_958;
          pwVar15 = local_960;
          if (-1 < local_958) {
            local_8ec = CONCAT31(local_8ec._1_3_,0x20);
            uVar40 = (ulong)local_96c;
            local_900 = CONCAT44(local_900._4_4_,8);
            pauVar22 = local_968;
            goto LAB_0079d02c;
          }
          local_900 = CONCAT44(local_900._4_4_,8);
          pauVar20 = (undefined1 (*) [16])0x0;
          uVar40 = 0;
          local_8ec = CONCAT31(local_8ec._1_3_,0x20);
LAB_0079c673:
          uVar44 = lVar11 >> 2;
          pauVar22 = (undefined1 (*) [16])(uVar40 - uVar44);
          if ((long)pauVar22 < 0) {
            pauVar22 = (undefined1 (*) [16])0x0;
          }
          uVar40 = (ulong)(int)pauVar22;
          pwVar29 = pwVar15;
          if ((uint)local_8d8 != 0) goto LAB_0079ca78;
          iVar39 = (iVar39 - (int)uVar44) - (int)pauVar22;
          if (pauVar20 != (undefined1 (*) [16])0x0) {
LAB_0079c6a8:
            if (local_8e8 != 0) {
              if ((0x10004UL >> ((byte)local_900 & 0x3f) & 1) != 0) {
                iVar39 = iVar39 + -2;
              }
            }
          }
LAB_0079c6cb:
          lVar11 = local_8c0;
          if ((local_8e4 == 0 && (uint)local_8e0 == 0) && (uint)local_8d0 == 0) {
            if ((char)local_8ec == ' ') goto LAB_0079cecd;
LAB_0079c751:
            lVar11 = local_8c0;
            if (((pauVar20 != (undefined1 (*) [16])0x0) && (local_8e8 != 0)) &&
               ((0x10004UL >> (local_900 & 0x3f) & 1) != 0)) {
              lVar21 = *(long *)(local_8c0 + 0xa0);
              if (lVar21 == 0) {
LAB_0079d471:
                local_8d0 = (undefined1 (*) [16])CONCAT44(local_8d0._4_4_,uVar38);
                *(undefined8 *)(puVar25 + -8) = 0x79d489;
                iVar10 = FUN_006ff380(lVar11,0x30);
                if ((iVar10 == -1) || ((int)local_8b0 == 0x7fffffff)) goto LAB_0079b780;
                lVar21 = *(long *)(local_8c0 + 0xa0);
                if (lVar21 != 0) {
                  puVar19 = *(uint **)(lVar21 + 0x20);
                  puVar30 = *(uint **)(lVar21 + 0x28);
                  uVar38 = (uint)local_8d0;
                  goto LAB_0079c7bf;
                }
LAB_0079d4c0:
                lVar11 = local_8c0;
                uVar38 = local_918;
                *(undefined8 *)(puVar25 + -8) = 0x79d4d2;
                iVar10 = FUN_006ff380(lVar11,uVar38);
                if (iVar10 == -1) goto LAB_0079b780;
              }
              else {
                puVar4 = *(uint **)(lVar21 + 0x20);
                puVar30 = *(uint **)(lVar21 + 0x28);
                if (puVar30 <= puVar4) goto LAB_0079d471;
                puVar19 = puVar4 + 1;
                *(uint **)(lVar21 + 0x20) = puVar19;
                *puVar4 = 0x30;
                if ((int)local_8b0 == 0x7fffffff) goto LAB_0079b780;
LAB_0079c7bf:
                if (puVar30 <= puVar19) goto LAB_0079d4c0;
                *(uint **)(lVar21 + 0x20) = puVar19 + 1;
                *puVar19 = uVar38;
              }
              if ((int)local_8b0 == 0x7ffffffe) goto LAB_0079b780;
              local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(int)local_8b0 + 2);
            }
            iVar39 = (int)uVar40 + iVar39;
            if (0 < iVar39) goto LAB_0079cf48;
            goto LAB_0079c7fc;
          }
          iVar39 = iVar39 + -1;
          if ((char)local_8ec != ' ') {
LAB_0079c6f4:
            lVar11 = local_8c0;
            if ((uint)local_8d0 == 0) {
              if ((uint)local_8e0 == 0) {
                if (local_8e4 == 0) goto LAB_0079c751;
                lVar21 = *(long *)(local_8c0 + 0xa0);
                if ((lVar21 == 0) ||
                   (puVar33 = *(undefined4 **)(lVar21 + 0x20),
                   *(undefined4 **)(lVar21 + 0x28) <= puVar33)) {
                  uVar31 = 0x20;
                  goto LAB_0079d918;
                }
                *(undefined4 **)(lVar21 + 0x20) = puVar33 + 1;
                *puVar33 = 0x20;
              }
              else {
                lVar21 = *(long *)(local_8c0 + 0xa0);
                if ((lVar21 == 0) ||
                   (puVar33 = *(undefined4 **)(lVar21 + 0x20),
                   *(undefined4 **)(lVar21 + 0x28) <= puVar33)) {
                  uVar31 = 0x2b;
                  goto LAB_0079d918;
                }
                *(undefined4 **)(lVar21 + 0x20) = puVar33 + 1;
                *puVar33 = 0x2b;
              }
            }
            else {
              lVar21 = *(long *)(local_8c0 + 0xa0);
              if ((lVar21 == 0) ||
                 (puVar33 = *(undefined4 **)(lVar21 + 0x20),
                 *(undefined4 **)(lVar21 + 0x28) <= puVar33)) {
                uVar31 = 0x2d;
LAB_0079d918:
                local_8d8 = (undefined1 (*) [16])CONCAT44(local_8d8._4_4_,uVar38);
                local_8d0 = pauVar20;
                *(undefined8 *)(puVar25 + -8) = 0x79d924;
                iVar10 = FUN_006ff380(lVar11,uVar31);
                pauVar20 = local_8d0;
                uVar38 = (uint)local_8d8;
                if (iVar10 == -1) goto LAB_0079b780;
              }
              else {
                *(undefined4 **)(lVar21 + 0x20) = puVar33 + 1;
                *puVar33 = 0x2d;
              }
            }
            if ((int)local_8b0 != 0x7fffffff) {
              local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(int)local_8b0 + 1);
              goto LAB_0079c751;
            }
            goto LAB_0079b780;
          }
LAB_0079cecd:
          if (iVar39 < 1) {
LAB_0079ced6:
            if (-1 < (int)local_8b0) {
              iVar39 = 0;
              goto LAB_0079c6f4;
            }
          }
          else {
            local_8ec = uVar38;
            local_8d8 = pauVar20;
            *(undefined8 *)(puVar25 + -8) = 0x79d320;
            lVar11 = FUN_007a2150(lVar11,0x20,(long)iVar39);
            if (iVar39 != lVar11) goto LAB_0079b780;
            if (-1 < (int)local_8b0) {
              bVar46 = SCARRY4(iVar39,(int)local_8b0);
              local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar39 + (int)local_8b0);
              pauVar20 = local_8d8;
              uVar38 = local_8ec;
              if (!bVar46) goto LAB_0079ced6;
              goto LAB_0079b76f;
            }
          }
        }
        goto LAB_0079b78a;
      }
      pauVar20 = *(undefined1 (**) [16])(piVar23 + 6);
      lVar11 = *(long *)(piVar23 + 8) - (long)pauVar20;
      if ((int)local_8b0 < 0) {
LAB_0079cf3e:
        iVar39 = (int)uVar40;
        *(undefined8 *)(puVar25 + -8) = 0x79cf43;
        FUN_0079b010();
LAB_0079cf48:
        lVar11 = local_8c0;
        *(undefined8 *)(puVar25 + -8) = 0x79cf5f;
        lVar11 = FUN_007a2150(lVar11,0x30,(long)iVar39);
        if (iVar39 != lVar11) goto LAB_0079b780;
        if (-1 < (int)local_8b0) {
          bVar46 = SCARRY4(iVar39,(int)local_8b0);
          local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar39 + (int)local_8b0);
          if (!bVar46) {
LAB_0079c7fc:
            if ((int)local_8b0 < 0) goto LAB_0079b78a;
            lVar11 = *(long *)(local_8c0 + 0xd8);
            local_8d0 = (undefined1 (*) [16])0x828;
            if (0x827 < lVar11 - 0x93f160U) {
              local_8d0 = (undefined1 (*) [16])0x828;
              *(undefined8 *)(puVar25 + -8) = 0x79d8d3;
              FUN_00703130();
            }
            lVar21 = local_8c0;
            pcVar13 = *(code **)(lVar11 + 0x38);
            *(undefined8 *)(puVar25 + -8) = 0x79c850;
            uVar40 = (*pcVar13)(lVar21,pwVar29,uVar44);
            if (uVar44 != uVar40) goto LAB_0079b780;
LAB_0079c859:
            uVar40 = (long)(int)local_8b0 + uVar44;
            local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(int)uVar40);
            if (uVar40 == (long)(int)uVar40 && uVar44 <= uVar40 + 0x8000000000000000) {
LAB_0079cc1b:
              pauVar22 = local_8d0;
              if (-1 < (int)uVar40) {
LAB_0079c0c9:
                pauVar20 = *(undefined1 (**) [16])(piVar23 + 6);
                lVar11 = *(long *)(piVar23 + 8) - (long)pauVar20;
                goto LAB_0079c0d8;
              }
              goto LAB_0079b78a;
            }
          }
LAB_0079b76f:
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x4b;
          puVar24 = puVar25;
          goto LAB_0079b780;
        }
        goto LAB_0079b78a;
      }
      pauVar22 = (undefined1 (*) [16])0x828;
LAB_0079c0d8:
      uVar44 = lVar11 >> 2;
      lVar11 = *(long *)(local_8c0 + 0xd8);
      if (pauVar22 <= (undefined1 (*) [16])(lVar11 + -0x93f160)) {
        *(undefined8 *)(puVar25 + -8) = 0x79ce64;
        local_8d0 = pauVar20;
        FUN_00703130();
        pauVar20 = local_8d0;
      }
      pcVar13 = *(code **)(lVar11 + 0x38);
      *(undefined8 *)(puVar25 + -8) = 0x79c103;
      uVar40 = (*pcVar13)(local_8c0,pauVar20,uVar44);
      puVar24 = puVar25;
      if (uVar40 != uVar44) goto LAB_0079b780;
      bVar46 = false;
      uVar40 = (long)(int)local_8b0 + uVar44;
      if (((long)uVar40 < 0) || (uVar40 < uVar44)) {
        bVar46 = true;
      }
      iVar39 = (int)uVar40;
      local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar39);
      if (uVar40 != (long)iVar39) {
        bVar46 = true;
      }
      if (bVar46) goto LAB_0079b76f;
      if (iVar39 < 0) goto LAB_0079b78a;
      puVar24 = *local_8b8;
      local_8b8 = (undefined1 (*) [16])(puVar24 + 1);
      piVar23 = piVar23 + 0x12;
      if (local_920 <= (undefined1 (*) [16])(puVar24 + 1)) goto LAB_0079b78a;
      goto LAB_0079ba68;
    }
  }
  local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(uint)local_8d8);
LAB_0079b78a:
  if (local_458 != local_930) {
    *(undefined8 *)(puVar25 + -8) = 0x79b79f;
    FUN_007104f0();
  }
  if (local_868 != local_8f8) {
    *(undefined8 *)(puVar25 + -8) = 0x79b7b4;
    FUN_007104f0();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar25 + -8) = 0x79de6f;
    FUN_00771f60();
  }
  return (ulong)local_8b0 & 0xffffffff;
}

