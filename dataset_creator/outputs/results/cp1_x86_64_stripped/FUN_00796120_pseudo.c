
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00796120(undefined1 (*param_1) [16],undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined1 (*param_5) [16],undefined4 param_6,int param_7,char *param_8,
                  long param_9,int param_10,char *param_11,undefined8 param_12,uint param_13)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  undefined1 *puVar9;
  char *pcVar10;
  undefined1 *puVar11;
  code *pcVar12;
  undefined1 (*pauVar13) [16];
  unkbyte10 *pVar14;
  undefined1 (*pauVar15) [16];
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  undefined1 (**ppauVar20) [16];
  undefined1 (**ppauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  ulong uVar26;
  undefined1 uVar27;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  byte bVar32;
  byte bVar33;
  char *pcVar34;
  byte bVar35;
  undefined1 (*pauVar36) [16];
  undefined1 *puVar37;
  undefined1 (*pauVar38) [16];
  int *piVar39;
  long in_FS_OFFSET;
  bool bVar40;
  undefined1 (*local_958) [16];
  undefined1 *local_950;
  uint local_948;
  uint local_944;
  undefined8 local_940;
  uint local_938;
  uint local_934;
  long local_930;
  undefined8 local_928;
  undefined1 (*local_920) [16];
  undefined1 (*local_918) [16];
  char *local_910;
  undefined1 (*local_908) [16];
  byte local_8ff;
  byte local_8fe;
  char local_8fd;
  uint local_8fc;
  uint local_8f8;
  uint local_8f4;
  undefined8 local_8f0;
  undefined1 (*local_8e8) [16];
  uint local_8e0;
  byte local_8da;
  char local_8d9;
  ulong local_8d8;
  undefined1 (*local_8d0) [16];
  undefined8 local_8c8;
  undefined1 (*local_8c0) [16];
  undefined1 (*local_8b8) [16];
  undefined1 (*local_8b0) [16];
  undefined1 (*local_8a8) [16];
  undefined1 (*local_8a0) [16];
  undefined1 (*local_890) [16];
  undefined1 (*local_888) [16];
  undefined8 local_880;
  undefined1 (*local_878) [16];
  ulong local_870;
  undefined1 local_868 [1024];
  undefined1 (*local_468) [16];
  undefined8 local_460;
  undefined1 local_458 [1024];
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  long local_40;
  
  ppauVar21 = &local_958;
  local_930 = param_9;
  local_8c0 = (undefined1 (*) [16])CONCAT44(local_8c0._4_4_,param_6);
  local_910 = param_11;
  local_928 = param_12;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8e8 = (undefined1 (*) [16])local_868;
  local_870 = 0x400;
  local_920 = (undefined1 (*) [16])local_458;
  local_460 = 0x400;
  local_890 = (undefined1 (*) [16])0x0;
  if (param_11 == (char *)0xffffffffffffffff) {
    local_928 = *(undefined8 *)(**(long **)(in_FS_OFFSET + -0xc0) + 0x48);
    local_910 = *(char **)(**(long **)(in_FS_OFFSET + -0xc0) + 0x50);
    if ((*local_910 == '\0') || (*local_910 == '\x7f')) {
      local_910 = (char *)0x0;
    }
  }
  local_940 = param_2;
  local_934 = param_3;
  local_8c8 = param_1;
  local_8b0 = param_5;
  local_878 = local_8e8;
  local_468 = local_920;
  if (*param_8 == '\0') {
    pauVar15 = (undefined1 (*) [16])0x0;
    pauVar13 = local_8e8;
    pauVar36 = (undefined1 (*) [16])0x0;
  }
  else {
    pauVar8 = (undefined1 (*) [16])0x0;
    pauVar15 = (undefined1 (*) [16])0x0;
    local_8a8 = (undefined1 (*) [16])0xe;
    local_8a0 = local_8e8;
    while( true ) {
      lVar19 = (long)local_8a0 + (long)pauVar15 * 0x48;
      pauVar15 = (undefined1 (*) [16])(*pauVar15 + 1);
      lVar7 = FUN_007a05b0(param_8,pauVar8,lVar19,&local_890);
      param_8 = *(char **)(lVar19 + 0x20);
      pauVar8 = (undefined1 (*) [16])(*pauVar8 + lVar7);
      if (*param_8 == '\0') break;
      if (local_8a8 == pauVar15) {
        cVar5 = FUN_00712520(&local_878);
        ppauVar20 = &local_958;
        if (cVar5 == '\0') goto LAB_007963e8;
        local_8a8 = (undefined1 (*) [16])(local_870 / 0x48);
        local_8a0 = local_878;
      }
    }
    pauVar13 = local_8a0;
    pauVar36 = local_890;
    if (local_890 <= pauVar8) {
      pauVar36 = pauVar8;
    }
  }
  local_8fe = FUN_007125e0(&local_468,pauVar36,0x18);
  ppauVar20 = &local_958;
  if (local_8fe == 0) {
LAB_007963e8:
    local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,0xffffffff);
    ppauVar21 = ppauVar20;
    goto LAB_007963f2;
  }
  local_8a0 = local_468 + (long)pauVar36;
  local_8b8 = local_468;
  puVar11 = *local_8a0 + (long)pauVar36 * 4;
  local_938 = param_13 & 2;
  thunk_FUN_00713720(puVar11,-(uint)(local_938 != 0));
  pauVar8 = local_8a0;
  if (pauVar15 == (undefined1 (*) [16])0x0) {
    ppauVar21 = &local_958;
    if (pauVar36 != (undefined1 (*) [16])0x0) goto LAB_007965a0;
LAB_00797be1:
    local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,(int)local_8c0);
LAB_007963f2:
    if (local_468 != local_920) {
      *(undefined8 *)((long)ppauVar21 + -8) = 0x796407;
      FUN_007104f0();
    }
    if (local_878 != local_8e8) {
      *(undefined8 *)((long)ppauVar21 + -8) = 0x79641c;
      FUN_007104f0();
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)local_8a0 & 0xffffffff;
    }
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)ppauVar21 + -8) = 0x7986b6;
    FUN_00771f60();
  }
  pauVar22 = (undefined1 (*) [16])0x0;
  local_8a8 = pauVar13;
  local_8d0 = pauVar36;
  do {
    while( true ) {
      if (*(int *)(pauVar13[2] + 0xc) != -1) {
        *(undefined4 *)(puVar11 + (long)*(int *)(pauVar13[2] + 0xc) * 4) = 0;
      }
      if (*(int *)(pauVar13[2] + 8) != -1) {
        *(undefined4 *)(puVar11 + (long)*(int *)(pauVar13[2] + 8) * 4) = 0;
      }
      lVar19 = *(long *)(pauVar13[3] + 8);
      if (lVar19 != 0) break;
LAB_00796517:
      pauVar22 = (undefined1 (*) [16])(*pauVar22 + 1);
      pauVar13 = (undefined1 (*) [16])(pauVar13[4] + 8);
      if (pauVar22 == pauVar15) goto LAB_00796583;
    }
    if (lVar19 == 1) {
      *(undefined4 *)(puVar11 + (long)*(int *)pauVar13[3] * 4) = *(undefined4 *)(pauVar13[3] + 4);
      *(undefined4 *)(*pauVar8 + (long)*(int *)pauVar13[3] * 4) = *(undefined4 *)pauVar13[4];
      goto LAB_00796517;
    }
    pauVar22 = (undefined1 (*) [16])(*pauVar22 + 1);
    lVar7 = (long)*(int *)pauVar13[3] * 4;
    (**(code **)(DAT_0094b5d8 + (long)*(int *)(*pauVar13 + 8) * 8))
              (pauVar13,lVar19,puVar11 + lVar7,*pauVar8 + lVar7);
    pauVar13 = (undefined1 (*) [16])(pauVar13[4] + 8);
  } while (pauVar22 != pauVar15);
LAB_00796583:
  pauVar13 = local_8a8;
  pauVar36 = local_8d0;
  if (local_8d0 != (undefined1 (*) [16])0x0) {
LAB_007965a0:
    pauVar38 = (undefined1 (*) [16])0x0;
    bVar33 = (byte)param_13 & 1;
    uVar30 = param_13 & 8;
    pauVar8 = local_8b8;
    ppauVar21 = &local_958;
    pauVar22 = local_8b0;
    do {
      uVar28 = *(uint *)(puVar11 + (long)pauVar38 * 4);
      if ((int)uVar28 < 8) {
        if ((int)uVar28 < -1) {
LAB_00796b48:
          if ((uVar28 & 0x800) != 0) goto switchD_007965f6_caseD_3;
LAB_00796b58:
          if ((DAT_0094b5e0 == 0) || (*(long *)(DAT_0094b5e0 + -0x40 + (long)(int)uVar28 * 8) == 0))
          {
            *pauVar8 = (undefined1  [16])0x0;
          }
          else {
            uVar16 = (long)*(int *)(*local_8a0 + (long)pauVar38 * 4) + 0x17;
            for (puVar9 = (undefined1 *)ppauVar21;
                puVar9 != (undefined1 *)((long)ppauVar21 + -(uVar16 & 0xfffffffffffff000));
                puVar9 = puVar9 + -0x1000) {
              *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
            }
            uVar16 = (ulong)((uint)uVar16 & 0xff0);
            lVar19 = -uVar16;
            ppauVar21 = (undefined1 (**) [16])(puVar9 + lVar19);
            if (uVar16 != 0) {
              *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
            }
            local_8d8 = CONCAT44(local_8d8._4_4_,uVar30);
            local_8d0 = (undefined1 (*) [16])CONCAT71(local_8d0._1_7_,bVar33);
            *(ulong *)*pauVar8 = (ulong)(puVar9 + lVar19 + 0xf) & 0xfffffffffffffff0;
            pcVar12 = *(code **)(DAT_0094b5e0 + -0x40 +
                                (long)*(int *)(puVar11 + (long)pauVar38 * 4) * 8);
            *(undefined8 *)(puVar9 + lVar19 + -8) = 0x79824f;
            local_8b0 = pauVar8;
            local_8a8 = pauVar22;
            (*pcVar12)();
            pauVar8 = local_8b0;
            pauVar22 = local_8a8;
            bVar33 = (byte)local_8d0;
            uVar30 = (uint)local_8d8;
          }
        }
        else {
          switch(uVar28) {
          case 0:
          case 1:
          case 2:
switchD_007965f6_caseD_0:
            uVar28 = *(uint *)*pauVar22;
            if (uVar28 < 0x30) {
              puVar25 = (undefined4 *)((ulong)uVar28 + *(long *)pauVar22[1]);
              *(uint *)*pauVar22 = uVar28 + 8;
            }
            else {
              puVar25 = *(undefined4 **)(*pauVar22 + 8);
              *(undefined4 **)(*pauVar22 + 8) = puVar25 + 2;
            }
            *(undefined4 *)*pauVar8 = *puVar25;
            break;
          case 3:
          case 4:
          case 5:
            goto switchD_007965f6_caseD_3;
          case 6:
          case 7:
            uVar28 = *(uint *)(*pauVar22 + 4);
            if (uVar28 < 0xb0) {
              puVar24 = (undefined8 *)((ulong)uVar28 + *(long *)pauVar22[1]);
              *(uint *)(*pauVar22 + 4) = uVar28 + 0x10;
            }
            else {
              puVar24 = *(undefined8 **)(*pauVar22 + 8);
              *(undefined8 **)(*pauVar22 + 8) = puVar24 + 1;
            }
            *(undefined8 *)*pauVar8 = *puVar24;
            break;
          default:
            if (local_938 != 0) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)ppauVar21 + -8) = 0x796afa;
              FUN_00703110("*** invalid %N$ use detected ***\n");
            }
                    /* WARNING: Subroutine does not return */
            *(undefined **)((long)ppauVar21 + -8) = &UNK_00796b97;
            FUN_006e2220("(mode_flags & PRINTF_FORTIFY) != 0","vfprintf-internal.c",0x70f,
                         "printf_positional");
          }
        }
      }
      else if (uVar28 == 0x107) {
        if (bVar33 == 0) {
          if (uVar30 == 0) {
            pVar14 = (unkbyte10 *)(*(long *)(*pauVar22 + 8) + 0xfU & 0xfffffffffffffff0);
            *(unkbyte10 **)(*pauVar22 + 8) = pVar14 + 1;
            *(unkbyte10 *)*pauVar8 = *pVar14;
          }
          else {
            uVar28 = *(uint *)(*pauVar22 + 4);
            if (uVar28 < 0xb0) {
              puVar24 = (undefined8 *)((ulong)uVar28 + *(long *)pauVar22[1]);
              *(uint *)(*pauVar22 + 4) = uVar28 + 0x10;
            }
            else {
              puVar24 = (undefined8 *)(*(long *)(*pauVar22 + 8) + 0xfU & 0xfffffffffffffff0);
              *(undefined8 **)(*pauVar22 + 8) = puVar24 + 2;
            }
            uVar23 = puVar24[1];
            *(undefined8 *)*pauVar8 = *puVar24;
            *(undefined8 *)(*pauVar8 + 8) = uVar23;
          }
        }
        else {
          uVar28 = *(uint *)(*pauVar22 + 4);
          if (uVar28 < 0xb0) {
            puVar24 = (undefined8 *)((ulong)uVar28 + *(long *)pauVar22[1]);
            *(uint *)(*pauVar22 + 4) = uVar28 + 0x10;
          }
          else {
            puVar24 = *(undefined8 **)(*pauVar22 + 8);
            *(undefined8 **)(*pauVar22 + 8) = puVar24 + 1;
          }
          *(undefined8 *)*pauVar8 = *puVar24;
          *(uint *)(puVar11 + (long)pauVar38 * 4) =
               *(uint *)(puVar11 + (long)pauVar38 * 4) & 0xfffffeff;
        }
      }
      else {
        if ((int)uVar28 < 0x108) {
          if (uVar28 != 0x100) goto LAB_00796b58;
        }
        else if (uVar28 != 0x200) {
          if (uVar28 == 0x400) goto switchD_007965f6_caseD_0;
          goto LAB_00796b48;
        }
switchD_007965f6_caseD_3:
        uVar28 = *(uint *)*pauVar22;
        if (uVar28 < 0x30) {
          puVar24 = (undefined8 *)((ulong)uVar28 + *(long *)pauVar22[1]);
          *(uint *)*pauVar22 = uVar28 + 8;
        }
        else {
          puVar24 = *(undefined8 **)(*pauVar22 + 8);
          *(undefined8 **)(*pauVar22 + 8) = puVar24 + 1;
        }
        *(undefined8 *)*pauVar8 = *puVar24;
      }
      pauVar38 = (undefined1 (*) [16])(*pauVar38 + 1);
      pauVar8 = pauVar8 + 1;
    } while (pauVar38 < pauVar36);
  }
  pauVar36 = local_8c8;
  local_8b0 = (undefined1 (*) [16])(long)param_7;
  if (pauVar15 <= local_8b0) goto LAB_00797be1;
  local_908 = pauVar15;
  local_918 = (undefined1 (*) [16])(local_930 + 1000);
  local_950 = (undefined1 *)((local_930 + 1000) - (local_930 + 999));
  local_8ff = (byte)param_13 & 1;
  local_958 = (undefined1 (*) [16])(local_930 + 999);
  piVar39 = (int *)((long)pauVar13 + (long)local_8b0 * 0x48);
  local_948 = param_13 & 8;
  local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,(int)local_8c0);
LAB_007966b8:
  bVar33 = *(byte *)(piVar39 + 3);
  local_8a8 = (undefined1 (*) [16])CONCAT44(local_8a8._4_4_,piVar39[1]);
  iVar18 = *piVar39;
  local_8c8 = (undefined1 (*) [16])
              (CONCAT44(local_8c8._4_4_,(uint)(bVar33 >> 5)) & 0xffffffff00000001);
  local_8d8 = CONCAT44(local_8d8._4_4_,piVar39[4]);
  local_8d0 = (undefined1 (*) [16])(CONCAT71(local_8d0._1_7_,bVar33 >> 3) & 0xffffffffffffff01);
  bVar35 = bVar33 >> 1 & 1;
  local_8e0 = CONCAT31(local_8e0._1_3_,*(byte *)((long)piVar39 + 0xd) >> 3) & 0xffffff01;
  uVar30 = bVar33 >> 4 & 1;
  bVar32 = *(byte *)((long)piVar39 + 0xd) >> 1 & 1;
  cVar5 = (char)piVar39[2];
  local_8d9 = cVar5;
  uVar28 = bVar33 >> 6 & 1;
  local_8da = bVar33 >> 7;
  uVar31 = bVar33 >> 2 & 1;
  pauVar13 = (undefined1 (*) [16])(ulong)uVar31;
  local_8f8 = CONCAT31(local_8f8._1_3_,bVar33) & 0xffffff01;
  if (piVar39[0xb] != -1) {
    iVar6 = *(int *)local_8b8[piVar39[0xb]];
    local_8a8 = (undefined1 (*) [16])CONCAT44(local_8a8._4_4_,iVar6);
    if (iVar6 < 0) {
      local_8a8 = (undefined1 (*) [16])CONCAT44(local_8a8._4_4_,-iVar6);
      *(byte *)(piVar39 + 3) = bVar33 | 0x20;
      piVar39[1] = -iVar6;
      local_8c8 = (undefined1 (*) [16])CONCAT44(local_8c8._4_4_,1);
    }
    else {
      piVar39[1] = iVar6;
    }
  }
  if (piVar39[10] != -1) {
    iVar18 = -1;
    if (-1 < *(int *)local_8b8[piVar39[10]]) {
      iVar18 = *(int *)local_8b8[piVar39[10]];
    }
    *piVar39 = iVar18;
  }
  local_8c0 = (undefined1 (*) [16])CONCAT44(local_8c0._4_4_,iVar18);
  puVar11 = (undefined1 *)ppauVar21;
  if (DAT_0094b478 != 0) {
    pcVar12 = *(code **)(DAT_0094b478 + (long)cVar5 * 8);
    local_8f0 = (long)cVar5;
    if (pcVar12 == (code *)0x0) goto LAB_007967da;
    uVar17 = *(ulong *)(piVar39 + 0xe);
    uVar16 = uVar17 * 8 + 0x17;
    for (puVar9 = (undefined1 *)ppauVar21;
        puVar9 != (undefined1 *)((long)ppauVar21 + -(uVar16 & 0xfffffffffffff000));
        puVar9 = puVar9 + -0x1000) {
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
    }
    uVar16 = (ulong)((uint)uVar16 & 0xff0);
    lVar19 = -uVar16;
    ppauVar21 = (undefined1 (**) [16])(puVar9 + lVar19);
    if (uVar16 != 0) {
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
    }
    if (uVar17 != 0) {
      local_8f4._1_3_ = (undefined3)(local_8f4 >> 8);
      local_8f4 = CONCAT31(local_8f4._1_3_,(char)uVar30);
      iVar18 = piVar39[0xc];
      uVar16 = 0;
      do {
        *(undefined1 (**) [16])(((ulong)(puVar9 + lVar19 + 0xf) & 0xfffffffffffffff0) + uVar16 * 8)
             = local_8b8 + (uint)(iVar18 + (int)uVar16);
        uVar16 = (ulong)((int)uVar16 + 1);
      } while (uVar16 < uVar17);
      pcVar12 = *(code **)(DAT_0094b478 + local_8f0 * 8);
    }
    uVar4 = local_8fc >> 8;
    local_8fc = CONCAT31((int3)uVar4,(char)uVar31);
    local_8f4 = CONCAT31(local_8f4._1_3_,(char)uVar28);
    uVar16 = (ulong)local_8f0 >> 8;
    local_8f0 = CONCAT71((int7)uVar16,(char)uVar30);
    *(undefined8 *)(puVar9 + lVar19 + -8) = 0x7974f3;
    iVar18 = (*pcVar12)(pauVar36,piVar39,(ulong)(puVar9 + lVar19 + 0xf) & 0xfffffffffffffff0);
    uVar30 = (uint)(byte)local_8f0;
    uVar28 = local_8f4 & 0xff;
    pauVar13 = (undefined1 (*) [16])(ulong)(byte)local_8fc;
    puVar11 = puVar9 + lVar19;
    if (iVar18 == -2) goto LAB_007967da;
    ppauVar20 = (undefined1 (**) [16])(puVar9 + lVar19);
    if (iVar18 < 0) goto LAB_007963e8;
    if (-1 < (int)local_8a0) {
      bVar40 = SCARRY4(iVar18,(int)local_8a0);
      local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,iVar18 + (int)local_8a0);
      ppauVar21 = (undefined1 (**) [16])(puVar9 + lVar19);
      puVar11 = puVar9 + lVar19;
      if (!bVar40) goto LAB_00796cc9;
      goto LAB_007963d7;
    }
    goto LAB_007963f2;
  }
LAB_007967da:
  ppauVar21 = (undefined1 (**) [16])puVar11;
  pauVar15 = local_918;
  lVar19 = local_930;
  uVar23 = local_940;
  local_8fd = cVar5;
  if (0x5a < (byte)(cVar5 - 0x20U)) {
code_r0x007967ef:
    uVar17 = *(ulong *)(piVar39 + 0xe);
    uVar16 = uVar17 * 8 + 0x17;
    for (puVar11 = (undefined1 *)ppauVar21;
        puVar11 != (undefined1 *)((long)ppauVar21 + -(uVar16 & 0xfffffffffffff000));
        puVar11 = puVar11 + -0x1000) {
      *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
    }
    uVar16 = (ulong)((uint)uVar16 & 0xff0);
    lVar19 = -uVar16;
    ppauVar21 = (undefined1 (**) [16])(puVar11 + lVar19);
    if (uVar16 != 0) {
      *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
    }
    if (uVar17 != 0) {
      iVar18 = piVar39[0xc];
      uVar16 = 0;
      do {
        *(undefined1 (**) [16])(((ulong)(puVar11 + lVar19 + 0xf) & 0xfffffffffffffff0) + uVar16 * 8)
             = local_8b8 + (uint)(iVar18 + (int)uVar16);
        uVar16 = (ulong)((int)uVar16 + 1);
      } while (uVar16 < uVar17);
    }
    puVar9 = *(undefined1 **)(pauVar36[2] + 8);
    if (puVar9 < *(undefined1 **)pauVar36[3]) {
      *(undefined1 **)(pauVar36[2] + 8) = puVar9 + 1;
      *puVar9 = 0x25;
    }
    else {
      *(undefined8 *)(puVar11 + lVar19 + -8) = 0x79840d;
      iVar18 = FUN_00706570(pauVar36,0x25);
      ppauVar20 = (undefined1 (**) [16])(puVar11 + lVar19);
      if (iVar18 == -1) goto LAB_007963e8;
    }
    bVar33 = *(byte *)(piVar39 + 3);
    if ((bVar33 & 8) == 0) {
      iVar6 = 2;
      iVar18 = 1;
    }
    else {
      puVar9 = *(undefined1 **)(pauVar36[2] + 8);
      if (puVar9 < *(undefined1 **)pauVar36[3]) {
        *(undefined1 **)(pauVar36[2] + 8) = puVar9 + 1;
        *puVar9 = 0x23;
      }
      else {
        *(undefined8 *)(puVar11 + lVar19 + -8) = 0x79850d;
        iVar18 = FUN_00706570(pauVar36,0x23);
        ppauVar20 = (undefined1 (**) [16])(puVar11 + lVar19);
        if (iVar18 == -1) goto LAB_007963e8;
      }
      bVar33 = *(byte *)(piVar39 + 3);
      iVar6 = 3;
      iVar18 = 2;
    }
    if ((char)bVar33 < '\0') {
      puVar9 = *(undefined1 **)(pauVar36[2] + 8);
      if (puVar9 < *(undefined1 **)pauVar36[3]) {
        *(undefined1 **)(pauVar36[2] + 8) = puVar9 + 1;
        *puVar9 = 0x27;
      }
      else {
        *(undefined8 *)(puVar11 + lVar19 + -8) = 0x798573;
        iVar18 = FUN_00706570(pauVar36,0x27);
        ppauVar20 = (undefined1 (**) [16])(puVar11 + lVar19);
        if (iVar18 == -1) goto LAB_007963e8;
      }
      bVar33 = *(byte *)(piVar39 + 3);
      iVar18 = iVar6;
    }
    if ((bVar33 & 0x40) == 0) {
      if ((bVar33 & 0x10) != 0) {
        puVar9 = *(undefined1 **)(pauVar36[2] + 8);
        if (*(undefined1 **)pauVar36[3] <= puVar9) {
          *(undefined8 *)(puVar11 + lVar19 + -8) = 0x79868f;
          iVar6 = FUN_00706570(pauVar36,0x20);
          goto joined_r0x00798692;
        }
        *(undefined1 **)(pauVar36[2] + 8) = puVar9 + 1;
        *puVar9 = 0x20;
        goto LAB_007968f1;
      }
    }
    else {
      puVar9 = *(undefined1 **)(pauVar36[2] + 8);
      if (puVar9 < *(undefined1 **)pauVar36[3]) {
        *(undefined1 **)(pauVar36[2] + 8) = puVar9 + 1;
        *puVar9 = 0x2b;
      }
      else {
        *(undefined8 *)(puVar11 + lVar19 + -8) = 0x79852d;
        iVar6 = FUN_00706570(pauVar36,0x2b);
joined_r0x00798692:
        ppauVar20 = (undefined1 (**) [16])(puVar11 + lVar19);
        if (iVar6 == -1) goto LAB_007963e8;
      }
LAB_007968f1:
      bVar33 = *(byte *)(piVar39 + 3);
      iVar18 = iVar18 + 1;
    }
    if ((bVar33 & 0x20) != 0) {
      puVar9 = *(undefined1 **)(pauVar36[2] + 8);
      if (puVar9 < *(undefined1 **)pauVar36[3]) {
        *(undefined1 **)(pauVar36[2] + 8) = puVar9 + 1;
        *puVar9 = 0x2d;
      }
      else {
        *(undefined8 *)(puVar11 + lVar19 + -8) = 0x7984ed;
        iVar6 = FUN_00706570(pauVar36,0x2d);
        ppauVar20 = (undefined1 (**) [16])(puVar11 + lVar19);
        if (iVar6 == -1) goto LAB_007963e8;
      }
      iVar18 = iVar18 + 1;
    }
    if (piVar39[4] == 0x30) {
      puVar9 = *(undefined1 **)(pauVar36[2] + 8);
      if (puVar9 < *(undefined1 **)pauVar36[3]) {
        *(undefined1 **)(pauVar36[2] + 8) = puVar9 + 1;
        *puVar9 = 0x30;
      }
      else {
        *(undefined8 *)(puVar11 + lVar19 + -8) = 0x7985d6;
        iVar6 = FUN_00706570(pauVar36,0x30);
        ppauVar20 = (undefined1 (**) [16])(puVar11 + lVar19);
        if (iVar6 == -1) goto LAB_007963e8;
      }
      iVar18 = iVar18 + 1;
    }
    if ((*(byte *)((long)piVar39 + 0xd) & 8) != 0) {
      puVar9 = *(undefined1 **)(pauVar36[2] + 8);
      if (puVar9 < *(undefined1 **)pauVar36[3]) {
        *(undefined1 **)(pauVar36[2] + 8) = puVar9 + 1;
        *puVar9 = 0x49;
      }
      else {
        *(undefined8 *)(puVar11 + lVar19 + -8) = 0x7984ad;
        iVar6 = FUN_00706570(pauVar36,0x49);
        ppauVar20 = (undefined1 (**) [16])(puVar11 + lVar19);
        if (iVar6 == -1) goto LAB_007963e8;
      }
      iVar18 = iVar18 + 1;
    }
    iVar6 = piVar39[1];
    if (iVar6 != 0) {
      *(undefined8 *)(puVar11 + lVar19 + -8) = 0x7980a0;
      puVar9 = (undefined1 *)FUN_00795230((long)iVar6,local_4c,10,0);
      if (puVar9 < local_4c) {
        do {
          puVar37 = puVar9 + 1;
          puVar2 = *(undefined1 **)(pauVar36[2] + 8);
          uVar27 = *puVar9;
          if (puVar2 < *(undefined1 **)pauVar36[3]) {
            *(undefined1 **)(pauVar36[2] + 8) = puVar2 + 1;
            *puVar2 = uVar27;
          }
          else {
            *(undefined8 *)(puVar11 + lVar19 + -8) = 0x7980f0;
            iVar6 = FUN_00706570(pauVar36,uVar27);
            ppauVar20 = (undefined1 (**) [16])(puVar11 + lVar19);
            if (iVar6 == -1) goto LAB_007963e8;
          }
          ppauVar20 = (undefined1 (**) [16])(puVar11 + lVar19);
          if (iVar18 == 0x7fffffff) goto LAB_007963e8;
          iVar18 = iVar18 + 1;
          puVar9 = puVar37;
        } while (puVar37 != local_4c);
      }
    }
    if (*piVar39 != -1) {
      puVar9 = *(undefined1 **)(pauVar36[2] + 8);
      if (puVar9 < *(undefined1 **)pauVar36[3]) {
        *(undefined1 **)(pauVar36[2] + 8) = puVar9 + 1;
        *puVar9 = 0x2e;
      }
      else {
        *(undefined8 *)(puVar11 + lVar19 + -8) = 0x7984cd;
        iVar6 = FUN_00706570(pauVar36,0x2e);
        ppauVar20 = (undefined1 (**) [16])(puVar11 + lVar19);
        if (iVar6 == -1) goto LAB_007963e8;
      }
      ppauVar20 = (undefined1 (**) [16])(puVar11 + lVar19);
      if (iVar18 == 0x7fffffff) goto LAB_007963e8;
      iVar6 = *piVar39;
      iVar18 = iVar18 + 1;
      *(undefined8 *)(puVar11 + lVar19 + -8) = 0x79699b;
      puVar9 = (undefined1 *)FUN_00795230((long)iVar6,local_4c,10,0);
      if (puVar9 < local_4c) {
        do {
          puVar37 = puVar9 + 1;
          puVar2 = *(undefined1 **)(pauVar36[2] + 8);
          uVar27 = *puVar9;
          if (puVar2 < *(undefined1 **)pauVar36[3]) {
            *(undefined1 **)(pauVar36[2] + 8) = puVar2 + 1;
            *puVar2 = uVar27;
          }
          else {
            *(undefined8 *)(puVar11 + lVar19 + -8) = 0x7969f0;
            iVar6 = FUN_00706570(pauVar36,uVar27);
            ppauVar20 = (undefined1 (**) [16])(puVar11 + lVar19);
            if (iVar6 == -1) goto LAB_007963e8;
          }
          ppauVar20 = (undefined1 (**) [16])(puVar11 + lVar19);
          if (iVar18 == 0x7fffffff) goto LAB_007963e8;
          iVar18 = iVar18 + 1;
          puVar9 = puVar37;
        } while (puVar37 != local_4c);
      }
    }
    uVar30 = piVar39[2];
    if (uVar30 != 0) {
      puVar9 = *(undefined1 **)(pauVar36[2] + 8);
      if (puVar9 < *(undefined1 **)pauVar36[3]) {
        *(undefined1 **)(pauVar36[2] + 8) = puVar9 + 1;
        *puVar9 = (char)uVar30;
      }
      else {
        *(undefined8 *)(puVar11 + lVar19 + -8) = 0x798604;
        iVar6 = FUN_00706570(pauVar36,uVar30 & 0xff);
        ppauVar20 = (undefined1 (**) [16])(puVar11 + lVar19);
        if (iVar6 == -1) goto LAB_007963e8;
      }
      ppauVar20 = (undefined1 (**) [16])(puVar11 + lVar19);
      if (iVar18 == 0x7fffffff) goto LAB_007963e8;
      iVar18 = iVar18 + 1;
    }
    if (-1 < (int)local_8a0) {
      bVar40 = SCARRY4(iVar18,(int)local_8a0);
      iVar18 = iVar18 + (int)local_8a0;
      local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,iVar18);
      ppauVar21 = (undefined1 (**) [16])(puVar11 + lVar19);
      puVar11 = puVar11 + lVar19;
      if (bVar40) goto LAB_007963d7;
joined_r0x00796cd3:
      ppauVar21 = (undefined1 (**) [16])puVar11;
      if (-1 < iVar18) {
        pauVar13 = (undefined1 (*) [16])0x828;
        goto LAB_00796cea;
      }
    }
    goto LAB_007963f2;
  }
  puVar9 = (undefined1 *)(ulong)bVar35;
  iVar18 = (int)pauVar13;
  local_8fc = (uint)(byte)local_8d0;
  local_8f4 = uVar30;
  local_8f0 = CONCAT44(local_8f0._4_4_,uVar28);
  ppauVar20 = ppauVar21;
  puVar11 = (undefined1 *)ppauVar21;
  uVar27 = (undefined1)local_8d8;
  switch(cVar5) {
  default:
    goto code_r0x007967ef;
  case '%':
    puVar11 = *(undefined1 **)(pauVar36[2] + 8);
    if (puVar11 < *(undefined1 **)pauVar36[3]) {
      *(undefined1 **)(pauVar36[2] + 8) = puVar11 + 1;
      *puVar11 = 0x25;
    }
    else {
      *(undefined8 *)((long)ppauVar21 + -8) = 0x7983e8;
      iVar18 = FUN_00706570(pauVar36,0x25);
      if (iVar18 == -1) goto LAB_007963e8;
    }
    if ((int)local_8a0 != 0x7fffffff) {
      local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,(int)local_8a0 + 1);
      goto LAB_007973f5;
    }
    goto LAB_007963e8;
  case 'A':
  case 'E':
  case 'F':
  case 'G':
  case 'a':
  case 'e':
  case 'f':
  case 'g':
    local_888 = local_8b8 + piVar39[0xc];
    if (local_8ff != 0) {
      *(byte *)(piVar39 + 3) = *(byte *)(piVar39 + 3) & 0xfe;
      piVar39[0xd] = 7;
    }
    uVar30 = local_8f8 & 0xff;
    if (local_948 == 0) {
      uVar30 = 0;
    }
    *(byte *)((long)piVar39 + 0xd) =
         (byte)((uVar30 & 1) << 4) | *(byte *)((long)piVar39 + 0xd) & 0xef;
    if ((piVar39[2] & 0xffffffdfU) == 0x41) {
      *(undefined8 *)((long)ppauVar21 + -8) = 0x796ca3;
      iVar18 = FUN_007bdd60();
    }
    else {
      *(undefined8 *)((long)ppauVar21 + -8) = 0x797a73;
      iVar18 = FUN_007bdb10(pauVar36,piVar39,&local_888);
    }
    if (iVar18 < 0) goto LAB_007963e8;
    if ((int)local_8a0 < 0) goto LAB_007963f2;
    bVar40 = SCARRY4(iVar18,(int)local_8a0);
    local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,iVar18 + (int)local_8a0);
    if (bVar40) goto LAB_007963d7;
    goto LAB_00796cc9;
  case 'B':
  case 'b':
    local_8f8 = 2;
    break;
  case 'C':
code_r0x00796294:
    local_880 = 0;
    puVar9 = local_58;
    uVar1 = *(undefined4 *)local_8b8[piVar39[0xc]];
    *(undefined8 *)((long)ppauVar21 + -8) = 0x7962c4;
    pcVar34 = (char *)FUN_00756c20(puVar9,uVar1,&local_880);
    if (pcVar34 == (char *)0xffffffffffffffff) goto LAB_007963e8;
    iVar18 = (int)local_8a8 - (int)pcVar34;
    local_8c0 = (undefined1 (*) [16])CONCAT44(local_8c0._4_4_,iVar18);
    if ((uint)local_8c8 != 0) {
      if (-1 < (int)local_8a0) goto LAB_00796304;
      goto LAB_007979e6;
    }
    if (0 < iVar18) {
      *(undefined8 *)((long)ppauVar21 + -8) = 0x797cb4;
      lVar19 = FUN_007a1c80(pauVar36,0x20,(long)iVar18);
      if (iVar18 != lVar19) goto LAB_007963e8;
      if ((int)local_8a0 < 0) goto LAB_007963f2;
      bVar40 = SCARRY4(iVar18,(int)local_8a0);
      local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,iVar18 + (int)local_8a0);
      if (bVar40) goto LAB_007963d7;
    }
    if (-1 < (int)local_8a0) {
LAB_00796304:
      local_8a8 = *(undefined1 (**) [16])(pauVar36[0xd] + 8);
      pauVar13 = (undefined1 (*) [16])0x828;
      if (0x827 < (long)local_8a8 - 0x93f160U) {
        local_8d0 = (undefined1 (*) [16])0x828;
        *(undefined8 *)((long)ppauVar21 + -8) = 0x798393;
        FUN_00703130();
        pauVar13 = local_8d0;
      }
      pcVar12 = *(code **)((long)local_8a8 + 0x38);
      local_8a8 = pauVar13;
      *(undefined8 *)((long)ppauVar21 + -8) = 0x79633e;
      pcVar10 = (char *)(*pcVar12)(pauVar36,puVar9,pcVar34);
      if (pcVar34 != pcVar10) goto LAB_007963e8;
      bVar40 = false;
      pcVar10 = pcVar34 + (int)local_8a0;
      if (((long)pcVar10 < 0) || (pcVar10 < pcVar34)) {
        bVar40 = true;
      }
      iVar18 = (int)pcVar10;
      local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,iVar18);
      if (pcVar10 != (char *)(long)iVar18) {
        bVar40 = true;
      }
      if (bVar40) goto LAB_007963d7;
      if (-1 < iVar18) {
        pauVar13 = local_8a8;
        if (((uint)local_8c8 == 0) || (iVar18 = (int)local_8c0, (int)local_8c0 < 1))
        goto LAB_00796cea;
LAB_007963a1:
        local_8a8 = pauVar13;
        *(undefined8 *)((long)ppauVar21 + -8) = 0x7963bb;
        lVar19 = FUN_007a1c80(pauVar36,0x20,(long)iVar18);
        if (iVar18 == lVar19) {
          bVar40 = SCARRY4(iVar18,(int)local_8a0);
          uVar30 = iVar18 + (int)local_8a0;
          local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,uVar30);
          puVar11 = (undefined1 *)(ulong)uVar30;
          if (bVar40) goto LAB_007963d7;
          goto LAB_007972ae;
        }
        goto LAB_007963e8;
      }
    }
    goto LAB_007963f2;
  case 'S':
  case 's':
    pcVar34 = *(char **)local_8b8[piVar39[0xc]];
    bVar33 = (byte)pauVar13 ^ 1;
    if (pcVar34 == (char *)0x0) {
      if (((int)local_8c0 == -1) || (5 < (int)local_8c0)) {
        puVar9 = (undefined1 *)0x6;
        pcVar34 = "(null)";
      }
      else {
        puVar9 = (undefined1 *)0x0;
        pcVar34 = "";
      }
    }
    else {
LAB_00796ece:
      if ((cVar5 == 'S') || (bVar33 == 0)) {
LAB_00797f1c:
        uVar29 = (ulong)local_8a0 & 0xffffffff;
        uVar26 = (ulong)local_8c8 & 0xffffffff;
        uVar16 = (ulong)local_8a8 & 0xffffffff;
        uVar17 = (ulong)local_8c0 & 0xffffffff;
        *(undefined8 *)((long)ppauVar21 + -8) = 0x797f41;
        iVar18 = FUN_00795c90(pauVar36,pcVar34,uVar17,uVar16,uVar26,uVar29);
        local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,iVar18);
        goto joined_r0x00796cd3;
      }
      if ((int)local_8c0 != -1) goto LAB_00796eec;
      *(undefined8 *)((long)ppauVar21 + -8) = 0x797c99;
      puVar9 = (undefined1 *)thunk_FUN_007129d0(pcVar34);
    }
LAB_00796efe:
    iVar18 = (int)local_8a8 - (int)puVar9;
    local_8a8 = (undefined1 (*) [16])CONCAT44(local_8a8._4_4_,iVar18);
    if (iVar18 < 0) {
      if ((int)local_8a0 < 0) goto LAB_007979e6;
      local_8a8 = *(undefined1 (**) [16])(pauVar36[0xd] + 8);
      pauVar13 = (undefined1 (*) [16])0x828;
      if (0x827 < (long)local_8a8 - 0x93f160U) {
        local_8c0 = (undefined1 (*) [16])0x828;
        *(undefined8 *)((long)ppauVar21 + -8) = 0x798553;
        FUN_00703130();
        pauVar13 = local_8c0;
      }
      pcVar12 = *(code **)((long)local_8a8 + 0x38);
      local_8a8 = pauVar13;
      *(undefined8 *)((long)ppauVar21 + -8) = 0x797fe5;
      puVar11 = (undefined1 *)(*pcVar12)(pauVar36,pcVar34,puVar9);
      if (puVar9 == puVar11) {
        puVar11 = puVar9 + (int)local_8a0;
        goto LAB_0079785d;
      }
      goto LAB_007963e8;
    }
    if ((uint)local_8c8 == 0) {
      if (iVar18 != 0) {
        *(undefined8 *)((long)ppauVar21 + -8) = 0x797d96;
        lVar19 = FUN_007a1c80(pauVar36,0x20,(long)iVar18);
        if (iVar18 != lVar19) goto LAB_007963e8;
        if ((int)local_8a0 < 0) goto LAB_007963f2;
        bVar40 = SCARRY4(iVar18,(int)local_8a0);
        local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,iVar18 + (int)local_8a0);
        if (bVar40) goto LAB_007963d7;
      }
      if ((int)local_8a0 < 0) goto LAB_007963f2;
    }
    else {
      pauVar13 = (undefined1 (*) [16])((ulong)local_8a0 & 0xffffffff);
      if ((int)local_8a0 < 0) goto LAB_007979e6;
    }
    local_8c0 = *(undefined1 (**) [16])(pauVar36[0xd] + 8);
    pauVar13 = (undefined1 (*) [16])0x828;
    if (0x827 < (long)local_8c0 - 0x93f160U) {
      local_8d0 = (undefined1 (*) [16])0x828;
      *(undefined8 *)((long)ppauVar21 + -8) = 0x7983c8;
      FUN_00703130();
      pauVar13 = local_8d0;
    }
    pcVar12 = *(code **)((long)local_8c0 + 0x38);
    local_8c0 = pauVar13;
    *(undefined8 *)((long)ppauVar21 + -8) = 0x796f70;
    puVar11 = (undefined1 *)(*pcVar12)(pauVar36,pcVar34,puVar9);
    if (puVar9 != puVar11) goto LAB_007963e8;
    bVar40 = false;
    puVar11 = puVar9 + (int)local_8a0;
    if (((long)puVar11 < 0) || (puVar11 < puVar9)) {
      bVar40 = true;
    }
    iVar18 = (int)puVar11;
    local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,iVar18);
    if (puVar11 != (undefined1 *)(long)iVar18) {
      bVar40 = true;
    }
    if (bVar40) goto LAB_007963d7;
    if (-1 < iVar18) {
      pauVar13 = local_8c0;
      if (((uint)local_8c8 != 0) &&
         (pauVar13 = local_8c0, iVar18 = (int)local_8a8, (int)local_8a8 != 0)) goto LAB_007963a1;
      goto LAB_00796cea;
    }
    goto LAB_007963f2;
  case 'X':
  case 'x':
    local_8f8 = 0x10;
    break;
  case 'c':
    if (iVar18 != 0) goto code_r0x00796294;
    iVar18 = (int)local_8a8 + -1;
    if ((uint)local_8c8 == 0) {
      if (0 < iVar18) {
        *(undefined8 *)((long)ppauVar21 + -8) = 0x798433;
        lVar19 = FUN_007a1c80(pauVar36,0x20,(long)iVar18);
        if (iVar18 != lVar19) goto LAB_007963e8;
        if ((int)local_8a0 < 0) goto LAB_007963f2;
        bVar40 = SCARRY4(iVar18,(int)local_8a0);
        local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,iVar18 + (int)local_8a0);
        if (bVar40) goto LAB_007963d7;
      }
      if ((int)local_8a0 < 0) goto LAB_007963f2;
    }
    uVar30 = *(uint *)local_8b8[piVar39[0xc]];
    puVar2 = *(undefined1 **)(pauVar36[2] + 8);
    if (puVar2 < *(undefined1 **)pauVar36[3]) {
      *(undefined1 **)(pauVar36[2] + 8) = puVar2 + 1;
      *puVar2 = (char)uVar30;
    }
    else {
      *(undefined8 *)((long)ppauVar21 + -8) = 0x79848d;
      iVar6 = FUN_00706570(pauVar36,uVar30 & 0xff);
      if (iVar6 == -1) goto LAB_007963e8;
    }
    if ((int)local_8a0 == 0x7fffffff) goto LAB_007963e8;
    local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,(int)local_8a0 + 1);
    if ((uint)local_8c8 == 0) goto LAB_007973f5;
    if (0 < iVar18) {
      *(undefined8 *)((long)ppauVar21 + -8) = 0x796e62;
      lVar19 = FUN_007a1c80(pauVar36,0x20,(long)iVar18);
      if (iVar18 != lVar19) goto LAB_007963e8;
      if (-1 < (int)local_8a0) {
        bVar40 = SCARRY4(iVar18,(int)local_8a0);
        local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,iVar18 + (int)local_8a0);
        if (bVar40) goto LAB_007963d7;
        goto LAB_00796cc9;
      }
      goto LAB_007963f2;
    }
LAB_00796cc9:
    iVar18 = (int)local_8a0;
    goto joined_r0x00796cd3;
  case 'd':
  case 'i':
    if (iVar18 == 0) {
      iVar18 = *(int *)local_8b8[piVar39[0xc]];
      if (bVar32 == 0) {
        uVar16 = (long)(short)iVar18;
        if (bVar35 == 0) {
          uVar16 = (long)iVar18;
        }
      }
      else {
        uVar16 = (long)(char)iVar18;
      }
    }
    else {
      uVar16 = *(ulong *)local_8b8[piVar39[0xc]];
    }
    if ((long)uVar16 < 0) {
      pauVar13 = (undefined1 (*) [16])0x1;
      local_8f8 = 10;
      uVar16 = -uVar16;
    }
    else {
      pauVar13 = (undefined1 (*) [16])0x0;
      local_8f8 = 10;
    }
    goto LAB_00797080;
  case 'm':
    if ((byte)local_8d0 == 0) {
      *(undefined8 *)((long)ppauVar21 + -8) = 0x797c62;
      pcVar34 = (char *)FUN_00712950(param_10,lVar19,1000);
    }
    else {
      *(undefined8 *)((long)ppauVar21 + -8) = 0x796eb3;
      pcVar34 = (char *)FUN_007a0570(param_10);
    }
    bVar33 = local_8fe;
    if (pcVar34 != (char *)0x0) goto LAB_00796ece;
    pauVar13 = (undefined1 (*) [16])0x0;
    local_8f8 = 10;
    uVar16 = (long)param_10;
    uVar27 = (undefined1)local_8d8;
    if (param_10 < 0) {
      pauVar13 = (undefined1 (*) [16])0x1;
      uVar16 = -(long)param_10;
    }
    goto LAB_00797080;
  case 'n':
    if (local_938 != 0) {
      if (local_934 == 0) {
        local_8a8 = (undefined1 (*) [16])CONCAT44(local_8a8._4_4_,iVar18);
        *(undefined8 *)((long)ppauVar21 + -8) = 0x797df6;
        lVar19 = thunk_FUN_007129d0(uVar23);
        *(undefined8 *)((long)ppauVar21 + -8) = 0x797e02;
        local_934 = FUN_007ac950(uVar23,lVar19 + 1);
        pauVar13 = (undefined1 (*) [16])((ulong)local_8a8 & 0xffffffff);
      }
      iVar18 = (int)pauVar13;
      pauVar13 = (undefined1 (*) [16])(ulong)local_934;
      if ((int)local_934 < 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)((long)ppauVar21 + -8) = &UNK_007986d7;
        FUN_00703110("*** %n in writable segment detected ***\n");
      }
    }
    plVar3 = *(long **)local_8b8[piVar39[0xc]];
    if (iVar18 == 0) {
      if (bVar32 == 0) {
        if (bVar35 == 0) {
          *(int *)plVar3 = (int)local_8a0;
        }
        else {
          *(undefined2 *)plVar3 = local_8a0._0_2_;
        }
      }
      else {
        *(undefined1 *)plVar3 = local_8a0._0_1_;
      }
    }
    else {
      *plVar3 = (long)(int)local_8a0;
    }
LAB_007973f5:
    pauVar15 = *(undefined1 (**) [16])(piVar39 + 6);
    pcVar34 = (char *)(*(long *)(piVar39 + 8) - (long)pauVar15);
    if ((int)local_8a0 < 0) goto LAB_007979e6;
    pauVar13 = (undefined1 (*) [16])0x828;
    goto LAB_00796cf5;
  case 'o':
    local_8f8 = 8;
    break;
  case 'p':
    uVar16 = *(ulong *)local_8b8[piVar39[0xc]];
    if (uVar16 == 0) {
      pcVar34 = "(nil)";
      iVar18 = 5;
      if (4 < (int)local_8c0) {
        iVar18 = (int)local_8c0;
      }
      local_8c0 = (undefined1 (*) [16])CONCAT44(local_8c0._4_4_,iVar18);
      if (cVar5 == 'S') goto LAB_00797f1c;
LAB_00796eec:
      lVar19 = (long)(int)local_8c0;
      *(undefined8 *)((long)ppauVar21 + -8) = 0x796efb;
      puVar9 = (undefined1 *)thunk_FUN_00712a40(pcVar34,lVar19);
      goto LAB_00796efe;
    }
    local_8d8 = uVar16;
    if (-1 < (int)local_8c0) {
      local_8d0 = (undefined1 (*) [16])CONCAT71(local_8d0._1_7_,local_8fe);
      if ((int)local_8c0 != 0) {
        local_8fd = 'x';
        uVar30 = 0;
        local_8da = 0;
        local_8fc = 1;
        local_8d9 = 'x';
        local_8f8 = 0x10;
        goto LAB_00797598;
      }
      local_8fd = 'x';
      uVar30 = 0;
      lVar19 = 0;
      uVar27 = 0x20;
      local_8da = 0;
      local_8d9 = 'x';
      local_8fc = 1;
      local_8f8 = 0x10;
      goto LAB_007975a5;
    }
    lVar19 = 1;
    local_8c0 = (undefined1 (*) [16])CONCAT71(local_8c0._1_7_,(undefined1)local_8d8);
    *(undefined8 *)((long)ppauVar21 + -8) = 0x79829a;
    pauVar13 = (undefined1 (*) [16])FUN_00795230(uVar16,pauVar15,0x10,0);
    local_8fd = 'x';
    cVar5 = (char)local_8c0;
    uVar30 = 0;
    local_8f8 = 0x10;
    local_8fc = 1;
    local_8d0 = (undefined1 (*) [16])CONCAT71(local_8d0._1_7_,local_8fe);
    local_8d9 = 'x';
    goto LAB_0079767f;
  case 'u':
    local_8f8 = 10;
  }
  if (iVar18 != 0) {
    local_8f0 = (ulong)local_8f0._4_4_ << 0x20;
    pauVar13 = (undefined1 (*) [16])0x0;
    local_8f4 = 0;
    uVar16 = *(ulong *)local_8b8[piVar39[0xc]];
LAB_00797080:
    local_8d8 = uVar16;
    if ((int)local_8c0 < 0) goto LAB_00797940;
LAB_0079708e:
    uVar30 = (uint)pauVar13;
    if ((int)local_8c0 != 0) {
LAB_00797598:
      lVar19 = (long)(int)local_8c0;
      uVar27 = 0x20;
      goto LAB_007975a5;
    }
    if (local_8d8 != 0) {
      lVar19 = 0;
      uVar27 = 0x20;
      goto LAB_007975a5;
    }
    if ((local_8f8 != 8) || ((byte)local_8d0 == '\0')) {
      iVar18 = 0;
      puVar9 = (undefined1 *)0x0;
      cVar5 = ' ';
      pauVar13 = local_918;
      goto LAB_00797b88;
    }
    *(undefined1 *)(local_930 + 999) = 0x30;
    pauVar13 = local_958;
    puVar9 = local_950;
    if (-1 < (long)local_950) {
      iVar18 = 0;
      cVar5 = ' ';
      local_8f8 = 8;
      goto LAB_00797b88;
    }
    lVar19 = (long)local_958 - (long)local_918;
    if (lVar19 < 0) {
      lVar19 = 0;
    }
    iVar18 = (int)lVar19;
    local_8c0 = (undefined1 (*) [16])CONCAT44(local_8c0._4_4_,iVar18);
    if ((uint)local_8c8 != 0) {
      local_8f8 = 8;
      goto LAB_00797120;
    }
    iVar18 = (int)local_8a8 - (iVar18 + (int)local_950);
    uVar28 = (uint)local_8f0 | uVar30 | local_8f4;
    if (uVar28 != 0) {
      iVar18 = iVar18 + -1;
      uVar28 = local_8f4;
    }
    local_8f8 = 8;
    goto LAB_007979aa;
  }
  uVar30 = *(uint *)local_8b8[piVar39[0xc]];
  uVar16 = (ulong)uVar30;
  if (bVar32 == 0) {
    if (bVar35 != 0) {
      uVar16 = (ulong)(ushort)uVar30;
    }
    local_8f0 = (ulong)local_8f0._4_4_ << 0x20;
    local_8f4 = 0;
    goto LAB_00797080;
  }
  local_8f0 = (ulong)local_8f0._4_4_ << 0x20;
  local_8f4 = 0;
  local_8d8 = (ulong)(byte)uVar30;
  if (-1 < (int)local_8c0) goto LAB_0079708e;
LAB_00797940:
  uVar30 = (uint)pauVar13;
  lVar19 = 1;
LAB_007975a5:
  uVar16 = local_8d8;
  uVar28 = local_8f8;
  pauVar13 = local_918;
  bVar40 = local_8d9 == 'X';
  local_8c0 = (undefined1 (*) [16])CONCAT71(local_8c0._1_7_,uVar27);
  local_944 = uVar30;
  *(undefined8 *)((long)ppauVar21 + -8) = 0x7975dc;
  pauVar13 = (undefined1 (*) [16])FUN_00795230(uVar16,pauVar13,uVar28,bVar40);
  pcVar34 = local_910;
  pauVar15 = local_918;
  uVar23 = local_928;
  lVar7 = local_930;
  cVar5 = (char)local_8c0;
  bVar33 = uVar28 == 10 & (byte)local_8e0;
  uVar30 = local_944;
  if ((local_910 != (char *)0x0) && (local_8da != 0)) {
    local_8e0 = local_944;
    *(undefined8 *)((long)ppauVar21 + -8) = 0x797636;
    pauVar13 = (undefined1 (*) [16])FUN_00795750(lVar7,pauVar13,pauVar15,pcVar34,uVar23);
    cVar5 = (char)local_8c0;
    uVar30 = local_8e0;
  }
  pauVar15 = local_918;
  if (bVar33 != 0) {
    local_8c0 = (undefined1 (*) [16])CONCAT71(local_8c0._1_7_,cVar5);
    local_8e0 = uVar30;
    *(undefined8 *)((long)ppauVar21 + -8) = 0x79766d;
    pauVar13 = (undefined1 (*) [16])FUN_00795950(pauVar13,pauVar15,pauVar15);
    cVar5 = (char)local_8c0;
    uVar30 = local_8e0;
  }
LAB_0079767f:
  puVar9 = (undefined1 *)((long)local_918 - (long)pauVar13);
  if ((long)puVar9 < lVar19) {
    lVar19 = lVar19 - (long)puVar9;
    if (lVar19 < 0) {
      lVar19 = 0;
    }
    iVar18 = (int)lVar19;
    local_8c0 = (undefined1 (*) [16])CONCAT44(local_8c0._4_4_,iVar18);
    if ((uint)local_8c8 != 0) goto LAB_00797120;
    iVar18 = ((int)local_8a8 - (int)puVar9) - iVar18;
    if (local_8d8 != 0) {
LAB_007976c9:
      if (local_8fc != 0) {
        if ((0x10004UL >> ((byte)local_8f8 & 0x3f) & 1) != 0) {
          iVar18 = iVar18 + -2;
        }
      }
    }
LAB_007976ed:
    if (((uint)local_8f0 == 0 && uVar30 == 0) && local_8f4 == 0) {
      uVar28 = 0;
      if (cVar5 == ' ') goto LAB_007979aa;
LAB_0079774c:
      if (((local_8d8 != 0) && ((local_8fc & 1) != 0)) &&
         ((0x10004UL >> ((ulong)local_8f8 & 0x3f) & 1) != 0)) {
        puVar11 = *(undefined1 **)(pauVar36[2] + 8);
        if (puVar11 < *(undefined1 **)pauVar36[3]) {
          *(undefined1 **)(pauVar36[2] + 8) = puVar11 + 1;
          *puVar11 = 0x30;
        }
        else {
          local_8a8 = pauVar13;
          *(undefined8 *)((long)ppauVar21 + -8) = 0x797e3f;
          iVar6 = FUN_00706570(pauVar36,0x30);
          pauVar13 = local_8a8;
          if (iVar6 == -1) goto LAB_007963e8;
        }
        cVar5 = local_8fd;
        if ((int)local_8a0 == 0x7fffffff) goto LAB_007963e8;
        pcVar34 = *(char **)(pauVar36[2] + 8);
        if (pcVar34 < *(char **)pauVar36[3]) {
          *(char **)(pauVar36[2] + 8) = pcVar34 + 1;
          *pcVar34 = local_8d9;
        }
        else {
          local_8a8 = pauVar13;
          *(undefined8 *)((long)ppauVar21 + -8) = 0x79859e;
          iVar6 = FUN_00706570(pauVar36,cVar5);
          pauVar13 = local_8a8;
          if (iVar6 == -1) goto LAB_007963e8;
        }
        if ((int)local_8a0 == 0x7ffffffe) goto LAB_007963e8;
        local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,(int)local_8a0 + 2);
      }
      iVar18 = iVar18 + (int)local_8c0;
      if (0 < iVar18) goto LAB_007979f0;
LAB_007977f0:
      if ((int)local_8a0 < 0) goto LAB_007963f2;
      lVar19 = *(long *)(pauVar36[0xd] + 8);
      pauVar15 = (undefined1 (*) [16])0x828;
      if (0x827 < lVar19 - 0x93f160U) {
        local_8c0 = (undefined1 (*) [16])0x828;
        local_8a8 = pauVar13;
        *(undefined8 *)((long)ppauVar21 + -8) = 0x798181;
        FUN_00703130();
        pauVar15 = local_8c0;
        pauVar13 = local_8a8;
      }
      pcVar12 = *(code **)(lVar19 + 0x38);
      local_8a8 = pauVar15;
      *(undefined8 *)((long)ppauVar21 + -8) = 0x79783c;
      puVar11 = (undefined1 *)(*pcVar12)(pauVar36,pauVar13,puVar9);
      if (puVar9 != puVar11) goto LAB_007963e8;
      puVar11 = puVar9 + (int)local_8a0;
LAB_0079785d:
      local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,(int)puVar11);
      if (puVar11 != (undefined1 *)(long)(int)puVar11 || puVar11 + -0x8000000000000000 < puVar9)
      goto LAB_007963d7;
LAB_007972ae:
      pauVar13 = local_8a8;
      if ((int)puVar11 < 0) goto LAB_007963f2;
LAB_00796cea:
      pauVar15 = *(undefined1 (**) [16])(piVar39 + 6);
      pcVar34 = (char *)(*(long *)(piVar39 + 8) - (long)pauVar15);
LAB_00796cf5:
      lVar19 = *(long *)(pauVar36[0xd] + 8);
      if (pauVar13 <= (undefined1 (*) [16])(lVar19 + -0x93f160)) {
        *(undefined8 *)((long)ppauVar21 + -8) = 0x79795c;
        local_8a8 = pauVar15;
        FUN_00703130();
        pauVar15 = local_8a8;
      }
      pcVar12 = *(code **)(lVar19 + 0x38);
      *(undefined8 *)((long)ppauVar21 + -8) = 0x796d15;
      pcVar10 = (char *)(*pcVar12)(pauVar36,pauVar15,pcVar34);
      ppauVar20 = ppauVar21;
      if (pcVar10 != pcVar34) goto LAB_007963e8;
      bVar40 = false;
      pcVar10 = pcVar34 + (int)local_8a0;
      if (((long)pcVar10 < 0) || (pcVar10 < pcVar34)) {
        bVar40 = true;
      }
      iVar18 = (int)pcVar10;
      local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,iVar18);
      if (pcVar10 != (char *)(long)iVar18) {
        bVar40 = true;
      }
      if (bVar40) goto LAB_007963d7;
      if (iVar18 < 0) goto LAB_007963f2;
      puVar11 = *local_8b0;
      local_8b0 = (undefined1 (*) [16])(puVar11 + 1);
      piVar39 = piVar39 + 0x12;
      if (local_908 <= (undefined1 (*) [16])(puVar11 + 1)) goto LAB_007963f2;
      goto LAB_007966b8;
    }
    iVar18 = iVar18 + -1;
    uVar28 = local_8f4;
    if (cVar5 != ' ') {
LAB_00797710:
      if (uVar30 == 0) {
        if ((uint)local_8f0 == 0) {
          if (local_8f4 == 0) goto LAB_0079774c;
          puVar11 = *(undefined1 **)(pauVar36[2] + 8);
          if (*(undefined1 **)pauVar36[3] <= puVar11) {
            uVar23 = 0x20;
            goto LAB_0079835c;
          }
          *(undefined1 **)(pauVar36[2] + 8) = puVar11 + 1;
          *puVar11 = 0x20;
        }
        else {
          puVar11 = *(undefined1 **)(pauVar36[2] + 8);
          if (*(undefined1 **)pauVar36[3] <= puVar11) {
            uVar23 = 0x2b;
            goto LAB_0079835c;
          }
          *(undefined1 **)(pauVar36[2] + 8) = puVar11 + 1;
          *puVar11 = 0x2b;
        }
      }
      else {
        puVar11 = *(undefined1 **)(pauVar36[2] + 8);
        if (puVar11 < *(undefined1 **)pauVar36[3]) {
          *(undefined1 **)(pauVar36[2] + 8) = puVar11 + 1;
          *puVar11 = 0x2d;
        }
        else {
          uVar23 = 0x2d;
LAB_0079835c:
          local_8a8 = pauVar13;
          *(undefined8 *)((long)ppauVar21 + -8) = 0x798364;
          iVar6 = FUN_00706570(pauVar36,uVar23);
          pauVar13 = local_8a8;
          if (iVar6 == -1) goto LAB_007963e8;
        }
      }
      if ((int)local_8a0 != 0x7fffffff) {
        local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,(int)local_8a0 + 1);
        goto LAB_0079774c;
      }
      goto LAB_007963e8;
    }
LAB_007979aa:
    if (iVar18 < 1) {
LAB_007979b3:
      if (-1 < (int)local_8a0) {
        iVar18 = 0;
        local_8f4 = uVar28;
        goto LAB_00797710;
      }
      goto LAB_007963f2;
    }
    local_8c8 = (undefined1 (*) [16])CONCAT44(local_8c8._4_4_,uVar30);
    local_8a8 = pauVar13;
    *(undefined8 *)((long)ppauVar21 + -8) = 0x797d34;
    lVar19 = FUN_007a1c80(pauVar36,0x20,(long)iVar18);
    if (iVar18 != lVar19) goto LAB_007963e8;
    if ((int)local_8a0 < 0) goto LAB_007963f2;
    bVar40 = SCARRY4(iVar18,(int)local_8a0);
    local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,iVar18 + (int)local_8a0);
    pauVar13 = local_8a8;
    uVar30 = (uint)local_8c8;
    if (!bVar40) goto LAB_007979b3;
  }
  else {
    if (local_8d8 == 0) {
      lVar19 = lVar19 - (long)puVar9;
      if (lVar19 < 0) {
        lVar19 = 0;
      }
      iVar18 = (int)lVar19;
      local_8c0 = (undefined1 (*) [16])CONCAT44(local_8c0._4_4_,iVar18);
LAB_00797b88:
      if ((uint)local_8c8 == 0) {
        local_8d8 = 0;
        iVar18 = (int)local_8a8 - (iVar18 + (int)puVar9);
        goto LAB_007976ed;
      }
      local_8d8 = 0;
    }
    else {
      if ((local_8f8 == 8) && ((byte)local_8d0 != '\0')) {
        pauVar13[-1][0xf] = 0x30;
        puVar9 = (undefined1 *)((long)local_918 - (long)(pauVar13[-1] + 0xf));
        pauVar13 = (undefined1 (*) [16])(pauVar13[-1] + 0xf);
      }
      lVar19 = lVar19 - (long)puVar9;
      if (lVar19 < 0) {
        lVar19 = 0;
      }
      iVar18 = (int)lVar19;
      local_8c0 = (undefined1 (*) [16])CONCAT44(local_8c0._4_4_,iVar18);
      if ((uint)local_8c8 == 0) {
        iVar18 = ((int)local_8a8 - (int)puVar9) - iVar18;
        goto LAB_007976c9;
      }
    }
LAB_00797120:
    if (uVar30 == 0) {
      if ((uint)local_8f0 != 0) {
        puVar11 = *(undefined1 **)(pauVar36[2] + 8);
        if (*(undefined1 **)pauVar36[3] <= puVar11) {
          uVar23 = 0x2b;
          goto LAB_0079832d;
        }
        *(undefined1 **)(pauVar36[2] + 8) = puVar11 + 1;
        *puVar11 = 0x2b;
        goto LAB_00797142;
      }
      if (local_8f4 != 0) {
        puVar11 = *(undefined1 **)(pauVar36[2] + 8);
        if (*(undefined1 **)pauVar36[3] <= puVar11) {
          uVar23 = 0x20;
          goto LAB_0079832d;
        }
        *(undefined1 **)(pauVar36[2] + 8) = puVar11 + 1;
        *puVar11 = 0x20;
        goto LAB_00797142;
      }
    }
    else {
      puVar11 = *(undefined1 **)(pauVar36[2] + 8);
      if (puVar11 < *(undefined1 **)pauVar36[3]) {
        *(undefined1 **)(pauVar36[2] + 8) = puVar11 + 1;
        *puVar11 = 0x2d;
      }
      else {
        uVar23 = 0x2d;
LAB_0079832d:
        local_8c8 = pauVar13;
        *(undefined8 *)((long)ppauVar21 + -8) = 0x798335;
        iVar6 = FUN_00706570(pauVar36,uVar23);
        pauVar13 = local_8c8;
        if (iVar6 == -1) goto LAB_007963e8;
      }
LAB_00797142:
      if ((int)local_8a0 == 0x7fffffff) goto LAB_007963e8;
      local_8a8 = (undefined1 (*) [16])CONCAT44(local_8a8._4_4_,(int)local_8a8 + -1);
      local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,(int)local_8a0 + 1);
    }
    if (((local_8d8 != 0) && ((local_8fc & 1) != 0)) &&
       ((0x10004UL >> ((ulong)local_8f8 & 0x3f) & 1) != 0)) {
      puVar11 = *(undefined1 **)(pauVar36[2] + 8);
      if (puVar11 < *(undefined1 **)pauVar36[3]) {
        *(undefined1 **)(pauVar36[2] + 8) = puVar11 + 1;
        *puVar11 = 0x30;
      }
      else {
        local_8c8 = pauVar13;
        *(undefined8 *)((long)ppauVar21 + -8) = 0x79865c;
        iVar6 = FUN_00706570(pauVar36,0x30);
        pauVar13 = local_8c8;
        if (iVar6 == -1) goto LAB_007963e8;
      }
      cVar5 = local_8fd;
      if ((int)local_8a0 == 0x7fffffff) goto LAB_007963e8;
      pcVar34 = *(char **)(pauVar36[2] + 8);
      if (pcVar34 < *(char **)pauVar36[3]) {
        *(char **)(pauVar36[2] + 8) = pcVar34 + 1;
        *pcVar34 = local_8d9;
      }
      else {
        local_8c8 = pauVar13;
        *(undefined8 *)((long)ppauVar21 + -8) = 0x79862e;
        iVar6 = FUN_00706570(pauVar36,cVar5);
        pauVar13 = local_8c8;
        if (iVar6 == -1) goto LAB_007963e8;
      }
      if ((int)local_8a0 == 0x7ffffffe) goto LAB_007963e8;
      local_8a8 = (undefined1 (*) [16])CONCAT44(local_8a8._4_4_,(int)local_8a8 + -2);
      local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,(int)local_8a0 + 2);
    }
    iVar6 = (int)local_8c0;
    uVar30 = (int)local_8a8 - (iVar18 + (int)puVar9);
    pcVar34 = (char *)(ulong)uVar30;
    if ((int)local_8c0 < 1) {
      if (-1 < (int)local_8a0) goto LAB_007971e3;
LAB_007979e6:
      iVar18 = (int)pcVar34;
      *(undefined8 *)((long)ppauVar21 + -8) = 0x7979eb;
      FUN_00795c60();
LAB_007979f0:
      local_8a8 = pauVar13;
      *(undefined8 *)((long)ppauVar21 + -8) = 0x797a0a;
      lVar19 = FUN_007a1c80(pauVar36,0x30,(long)iVar18);
      if (iVar18 != lVar19) goto LAB_007963e8;
      if ((int)local_8a0 < 0) goto LAB_007963f2;
      bVar40 = SCARRY4(iVar18,(int)local_8a0);
      local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,iVar18 + (int)local_8a0);
      pauVar13 = local_8a8;
      if (!bVar40) goto LAB_007977f0;
    }
    else {
      lVar7 = (long)(int)local_8c0;
      local_8a8 = pauVar13;
      *(undefined8 *)((long)ppauVar21 + -8) = 0x7971af;
      lVar19 = FUN_007a1c80(pauVar36,0x30,lVar7);
      if (lVar7 != lVar19) goto LAB_007963e8;
      if ((int)local_8a0 < 0) goto LAB_007963f2;
      bVar40 = SCARRY4(iVar6,(int)local_8a0);
      iVar6 = iVar6 + (int)local_8a0;
      local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,iVar6);
      if (!bVar40) {
        pauVar13 = local_8a8;
        if (iVar6 < 0) goto LAB_007963f2;
LAB_007971e3:
        pauVar15 = *(undefined1 (**) [16])(pauVar36[0xd] + 8);
        pauVar8 = (undefined1 (*) [16])0x828;
        if ((undefined1 (*) [16])0x827 < pauVar15 + -0x93f16) {
          local_8c8 = (undefined1 (*) [16])0x828;
          local_8c0 = pauVar15;
          local_8a8 = pauVar13;
          *(undefined8 *)((long)ppauVar21 + -8) = 0x798154;
          FUN_00703130();
          pauVar15 = local_8c0;
          pauVar8 = local_8c8;
          pauVar13 = local_8a8;
        }
        pcVar12 = *(code **)(pauVar15[3] + 8);
        local_8a8 = pauVar8;
        *(undefined8 *)((long)ppauVar21 + -8) = 0x79721d;
        puVar11 = (undefined1 *)(*pcVar12)(pauVar36,pauVar13,puVar9);
        if (puVar11 != puVar9) goto LAB_007963e8;
        bVar40 = false;
        puVar11 = puVar9 + (int)local_8a0;
        if (((long)puVar11 < 0) || (puVar11 < puVar9)) {
          bVar40 = true;
        }
        iVar18 = (int)puVar11;
        local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,iVar18);
        if (puVar11 != (undefined1 *)(long)iVar18) {
          bVar40 = true;
        }
        if (bVar40) goto LAB_007963d7;
        if (iVar18 < 0) goto LAB_007963f2;
        pauVar13 = local_8a8;
        if ((int)uVar30 < 1) goto LAB_00796cea;
        *(undefined8 *)((long)ppauVar21 + -8) = 0x797292;
        lVar19 = FUN_007a1c80(pauVar36,0x20,(long)(int)uVar30);
        if ((int)uVar30 != lVar19) goto LAB_007963e8;
        local_8a0 = (undefined1 (*) [16])CONCAT44(local_8a0._4_4_,uVar30 + iVar18);
        puVar11 = (undefined1 *)(ulong)(uVar30 + iVar18);
        if (!SCARRY4(uVar30,iVar18)) goto LAB_007972ae;
      }
    }
  }
LAB_007963d7:
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x4b;
  ppauVar20 = ppauVar21;
  goto LAB_007963e8;
}

