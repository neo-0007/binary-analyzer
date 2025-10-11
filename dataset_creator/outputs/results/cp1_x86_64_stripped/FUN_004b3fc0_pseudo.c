
/* WARNING: Removing unreachable block (ram,0x004b4d70) */
/* WARNING: Removing unreachable block (ram,0x004b4d80) */
/* WARNING: Removing unreachable block (ram,0x004b4d60) */
/* WARNING: Type propagation algorithm not settling */

uint FUN_004b3fc0(undefined8 *param_1,long *******param_2,undefined8 *param_3,long *param_4,
                 undefined8 param_5,long param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long *******ppppppplVar8;
  long lVar9;
  undefined8 uVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  long *******ppppppplVar19;
  ulong uVar20;
  long *******ppppppplVar21;
  long lVar22;
  long in_FS_OFFSET;
  byte bVar23;
  undefined1 auStack_e8 [8];
  char *local_e0;
  uint local_d8;
  uint local_d4;
  ulong local_d0;
  long *******local_c8;
  ulong local_c0;
  long *******local_b8;
  long *******local_b0;
  undefined8 *local_a8;
  long local_a0;
  long local_98;
  undefined8 *local_90;
  long *******local_88;
  undefined8 local_80;
  long *******local_78;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  long *******local_58;
  uint local_50;
  uint local_4c;
  undefined8 local_48;
  long local_40;
  undefined1 *puVar15;
  
  bVar23 = 0;
  puVar14 = auStack_e8;
  puVar15 = auStack_e8;
  puVar16 = auStack_e8;
  puVar18 = auStack_e8;
  puVar17 = auStack_e8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = param_1;
  local_98 = param_6;
  local_90 = param_3;
  local_80 = param_5;
  iVar3 = FUN_004b7d40(param_4);
  if (iVar3 == 0) {
    uVar5 = 0;
    FUN_0051f420();
    FUN_0051f540("../crypto/bn/bn_exp.c",0x25f,"bn_mod_exp_mont_fixed_top");
    FUN_0051f8f0(3,0x66,0);
    goto LAB_004b471a;
  }
  uVar1 = *(uint *)(param_4 + 1);
  iVar3 = *(int *)(local_90 + 1);
  if (iVar3 == 0) {
    iVar3 = FUN_004b7b70(param_4,1);
    if (iVar3 == 0) {
      uVar5 = FUN_004b8190(local_a8,1);
      puVar18 = auStack_e8;
    }
    else {
      uVar5 = 1;
      FUN_004b7b50(local_a8);
      puVar18 = auStack_e8;
    }
    goto LAB_004b471a;
  }
  FUN_004b2c00(local_80);
  local_a0 = local_98;
  if (local_98 == 0) {
    local_a0 = FUN_004b9790();
    if (local_a0 != 0) {
      uVar5 = FUN_004b9860(local_a0,param_4,local_80);
      if (uVar5 != 0) goto LAB_004b404c;
      goto LAB_004b4827;
    }
    uVar5 = 0;
    FUN_004b9810(0);
  }
  else {
LAB_004b404c:
    if (((*(int *)(param_2 + 2) == 0) &&
        (iVar4 = FUN_004b77f0(param_2,param_4), ppppppplVar8 = param_2, iVar4 < 0)) ||
       ((ppppppplVar8 = (long *******)FUN_004b2df0(local_80), ppppppplVar8 != (long *******)0x0 &&
        (local_88 = ppppppplVar8, iVar4 = FUN_004b8a20(ppppppplVar8,param_2,param_4,local_80),
        ppppppplVar8 = local_88, iVar4 != 0)))) {
      local_88 = ppppppplVar8;
      iVar4 = *(int *)(local_88 + 1);
      if (iVar4 == 0x10) {
        if (*(int *)(local_90 + 1) != 0x10) goto LAB_004b40b1;
        iVar4 = FUN_004b7bb0(param_4);
        if ((iVar4 != 0x400) || (iVar4 = FUN_004bea80(), puVar2 = local_a8, iVar4 == 0)) {
          iVar4 = *(int *)(local_88 + 1);
          goto LAB_004b40a8;
        }
        lVar13 = FUN_004b8240(local_a8,0x10);
        if (lVar13 == 0) goto LAB_004b4700;
        uVar5 = 1;
        FUN_004bf8e0(*puVar2,*local_88,*local_90,*param_4,*(undefined8 *)(local_a0 + 8),
                     *(undefined8 *)(local_a0 + 0x50));
        *(undefined4 *)(puVar2 + 1) = 0x10;
        *(undefined4 *)(puVar2 + 2) = 0;
        FUN_004b8490(puVar2);
      }
      else {
LAB_004b40a8:
        if (((iVar4 != 8) || (*(int *)(local_90 + 1) != 8)) ||
           (iVar4 = FUN_004b7bb0(param_4), puVar2 = local_a8, iVar4 != 0x200)) {
LAB_004b40b1:
          local_d4 = iVar3 * 0x40;
          if ((int)local_d4 < 0x133) {
            iVar3 = 0;
            if ((int)local_d4 < 0x5a) {
              uVar7 = 2;
              if (0x16 < (int)local_d4) {
                uVar7 = 8;
              }
              local_b0 = (long *******)CONCAT44(local_b0._4_4_,uVar7);
              local_b8 = (long *******)
                         CONCAT44(local_b8._4_4_,
                                  (0x16 < (int)local_d4) + 1 + (uint)(0x16 < (int)local_d4));
            }
            else {
              local_b0 = (long *******)CONCAT44(local_b0._4_4_,0x10);
              local_b8 = (long *******)CONCAT44(local_b8._4_4_,4);
            }
          }
          else {
            local_b0 = (long *******)CONCAT44(local_b0._4_4_,0x20);
            iVar3 = uVar1 * 8;
            local_b8 = (long *******)CONCAT44(local_b8._4_4_,5);
          }
          iVar4 = uVar1 * 2;
          if ((int)(uVar1 * 2) < (int)(uint)local_b0) {
            iVar4 = (uint)local_b0;
          }
          iVar3 = iVar3 + (iVar4 + (uVar1 << (sbyte)local_b8)) * 8;
          if (iVar3 < 0xc00) {
            uVar20 = (long)(iVar3 + 0x40) + 0x17;
            puVar17 = auStack_e8;
            while (puVar15 != auStack_e8 + -(uVar20 & 0xfffffffffffff000)) {
              puVar14 = puVar17 + -0x1000;
              *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
              puVar15 = puVar17 + -0x1000;
              puVar17 = puVar17 + -0x1000;
            }
            uVar20 = (ulong)((uint)uVar20 & 0xff0);
            lVar13 = -uVar20;
            puVar16 = puVar14 + lVar13;
            if (uVar20 != 0) {
              *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
            }
            local_c0 = (ulong)iVar3;
            ppppppplVar8 = (long *******)
                           ((((ulong)(puVar14 + lVar13 + 0xf) & 0xfffffffffffffff0) -
                            (ulong)((uint)(puVar14 + lVar13 + 0xf) & 0x30)) + 0x40);
            if (7 < local_c0) {
              ppppppplVar21 = ppppppplVar8;
              for (uVar20 = local_c0 >> 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *ppppppplVar21 = (long ******)0x0;
                ppppppplVar21 = ppppppplVar21 + (ulong)bVar23 * -2 + 1;
              }
            }
            local_d0 = 0;
            local_e0 = "../crypto/bn/bn_exp.c";
            local_c8 = local_88;
            local_88 = ppppppplVar8;
          }
          else {
            local_e0 = "../crypto/bn/bn_exp.c";
            local_d0 = FUN_0041ad90((long)(iVar3 + 0x40),"../crypto/bn/bn_exp.c",0x2cc);
            if (local_d0 == 0) goto LAB_004b4700;
            local_c8 = local_88;
            local_88 = (long *******)((local_d0 & 0xffffffffffffffc0) + 0x40);
            local_c0 = (ulong)iVar3;
            thunk_FUN_00713720(local_88,0,local_c0);
          }
          lVar13 = (long)(int)(uint)local_b0;
          lVar22 = (long)(int)uVar1;
          param_4 = (long *)*param_4;
          local_50 = 0;
          local_70 = 0;
          local_78 = (long *******)(lVar13 * lVar22 * 8 + (long)local_88);
          local_58 = local_78 + lVar22;
          local_48 = 0x200000000;
          local_68 = 0x200000000;
          local_6c = uVar1;
          local_4c = uVar1;
          if (param_4[lVar22 + -1] < 0) {
            *local_78 = (long ******)-*param_4;
            lVar9 = 1;
            local_70 = uVar1;
            if (1 < (int)uVar1) {
              do {
                local_78[lVar9] = (long ******)~param_4[lVar9];
                lVar9 = lVar9 + 1;
              } while (lVar22 != lVar9);
            }
LAB_004b4258:
            lVar9 = local_a0;
            *(undefined8 *)(puVar16 + -8) = 0x4b427c;
            ppppppplVar8 = local_c8;
            local_c8 = (long *******)&local_58;
            iVar3 = FUN_004b9720(&local_58,ppppppplVar8,local_a0,local_80);
            ppppppplVar8 = local_58;
            if (iVar3 == 0) goto LAB_004b4878;
            if (((int)local_b8 != 5) || ((int)uVar1 < 2)) {
              uVar5 = local_70;
              if ((int)uVar1 <= (int)local_70) {
                uVar5 = uVar1;
              }
              if (0 < (int)uVar5) {
                ppppppplVar8 = local_78 + 1;
                ppppppplVar21 = local_78;
                ppppppplVar12 = local_88;
                while( true ) {
                  ppppppplVar19 = ppppppplVar8;
                  *ppppppplVar12 = *ppppppplVar21;
                  ppppppplVar12 = ppppppplVar12 + lVar13;
                  if (ppppppplVar19 == local_78 + 1 + (uVar5 - 1)) break;
                  ppppppplVar8 = ppppppplVar19 + 1;
                  ppppppplVar21 = ppppppplVar19;
                }
              }
              uVar5 = local_50;
              if ((int)uVar1 <= (int)local_50) {
                uVar5 = uVar1;
              }
              if (0 < (int)uVar5) {
                ppppppplVar8 = local_88 + 1;
                ppppppplVar21 = local_58 + 1;
                ppppppplVar12 = local_58;
                while( true ) {
                  ppppppplVar19 = ppppppplVar21;
                  *ppppppplVar8 = *ppppppplVar12;
                  ppppppplVar8 = ppppppplVar8 + lVar13;
                  if (local_58 + 1 + (uVar5 - 1) == ppppppplVar19) break;
                  ppppppplVar21 = ppppppplVar19 + 1;
                  ppppppplVar12 = ppppppplVar19;
                }
              }
              if ((int)local_b8 != 1) {
                *(undefined8 *)(puVar16 + -8) = 0x4b4a8b;
                iVar3 = FUN_004b9520(&local_78,local_c8,local_c8,local_a0,local_80);
                if (iVar3 == 0) goto LAB_004b4878;
                uVar5 = local_70;
                if ((int)uVar1 <= (int)local_70) {
                  uVar5 = uVar1;
                }
                if (0 < (int)uVar5) {
                  ppppppplVar8 = local_88 + 2;
                  ppppppplVar21 = local_78 + 1;
                  ppppppplVar12 = local_78;
                  while( true ) {
                    ppppppplVar19 = ppppppplVar21;
                    *ppppppplVar8 = *ppppppplVar12;
                    ppppppplVar8 = ppppppplVar8 + lVar13;
                    if (local_78 + 1 + (uVar5 - 1) == ppppppplVar19) break;
                    ppppppplVar21 = ppppppplVar19 + 1;
                    ppppppplVar12 = ppppppplVar19;
                  }
                }
                ppppppplVar8 = local_88 + 3;
                if (3 < (int)(uint)local_b0) {
                  iVar3 = 3;
                  do {
                    *(undefined8 *)(puVar16 + -8) = 0x4b4b2d;
                    iVar4 = FUN_004b9520(&local_78,local_c8,&local_78,local_a0,local_80);
                    if (iVar4 == 0) goto LAB_004b4878;
                    uVar5 = local_70;
                    if ((int)uVar1 <= (int)local_70) {
                      uVar5 = uVar1;
                    }
                    if (0 < (int)uVar5) {
                      ppppppplVar21 = local_78 + 1;
                      ppppppplVar12 = ppppppplVar8;
                      ppppppplVar19 = local_78;
                      while( true ) {
                        ppppppplVar11 = ppppppplVar21;
                        *ppppppplVar12 = *ppppppplVar19;
                        ppppppplVar12 = ppppppplVar12 + lVar13;
                        if (local_78 + 1 + (uVar5 - 1) == ppppppplVar11) break;
                        ppppppplVar21 = ppppppplVar11 + 1;
                        ppppppplVar19 = ppppppplVar11;
                      }
                    }
                    iVar3 = iVar3 + 1;
                    ppppppplVar8 = ppppppplVar8 + 1;
                  } while (iVar3 != (uint)local_b0);
                }
              }
              uVar20 = (ulong)local_b8 & 0xffffffff;
              iVar4 = (int)(local_d4 - 1) % (int)local_b8 + 1;
              bVar23 = (byte)iVar4;
              iVar4 = local_d4 - iVar4;
              *(undefined8 *)(puVar16 + -8) = 0x4b4bb2;
              uVar5 = FUN_004b35a0(local_90,iVar4);
              *(undefined8 *)(puVar16 + -8) = 0x4b4bd7;
              iVar3 = FUN_004b3600(&local_78,uVar1,local_88,(1 << (bVar23 & 0x1f)) - 1U & uVar5,
                                   uVar20 & 0xffffffff);
              uVar10 = local_80;
              lVar13 = local_a0;
              ppppppplVar8 = local_b8;
              if (iVar3 != 0) {
                iVar3 = (uint)local_b0;
                local_b0 = (long *******)CONCAT44(local_b0._4_4_,iVar4);
                local_d8 = iVar3 - 1;
                iVar3 = (int)local_b8;
                local_d4 = uVar1;
                do {
                  if ((int)(uint)local_b0 < 1) goto LAB_004b46d6;
                  iVar4 = 0;
                  do {
                    *(undefined8 *)(puVar16 + -8) = 0x4b4c3c;
                    iVar6 = FUN_004b9520(&local_78,&local_78,&local_78,lVar13,uVar10);
                    if (iVar6 == 0) goto LAB_004b4878;
                    iVar4 = iVar4 + 1;
                  } while (iVar3 != iVar4);
                  iVar4 = (uint)local_b0 - iVar3;
                  local_b0 = (long *******)CONCAT44(local_b0._4_4_,iVar4);
                  *(undefined8 *)(puVar16 + -8) = 0x4b4c66;
                  uVar5 = FUN_004b35a0(local_90,iVar4);
                  ppppppplVar21 = local_c8;
                  *(undefined8 *)(puVar16 + -8) = 0x4b4c8a;
                  iVar4 = FUN_004b3600(local_c8,local_d4,local_88,local_d8 & uVar5,
                                       (ulong)ppppppplVar8 & 0xffffffff);
                  if (iVar4 == 0) break;
                  *(undefined8 *)(puVar16 + -8) = 0x4b4ca6;
                  iVar4 = FUN_004b9520(&local_78,&local_78,ppppppplVar21,lVar13,uVar10);
                } while (iVar4 != 0);
              }
              goto LAB_004b4878;
            }
            ppppppplVar21 = (long *******)(lVar9 + 0x50);
            uVar5 = local_70;
            if ((int)local_50 < (int)uVar1) {
              local_b0 = (long *******)CONCAT44(local_b0._4_4_,local_70);
              *(undefined8 *)(puVar16 + -8) = 0x4b42d4;
              thunk_FUN_00713720(local_58 + (int)local_50,0,(ulong)((uVar1 - local_50) - 1) * 8 + 8)
              ;
              uVar5 = (uint)local_b0;
            }
            ppppppplVar12 = local_78;
            if ((int)uVar5 < (int)uVar1) {
              local_b0 = local_78;
              *(undefined8 *)(puVar16 + -8) = 0x4b4308;
              thunk_FUN_00713720(local_78 + (int)uVar5,0,(ulong)((uVar1 - uVar5) - 1) * 8 + 8);
              ppppppplVar12 = local_b0;
            }
            ppppppplVar19 = local_88;
            ppppppplVar8 = ppppppplVar8 + lVar22;
            lVar13 = *(long *)(local_a0 + 0x20);
            lVar9 = 0;
            do {
              ppppppplVar8[lVar9] = *(long *******)(lVar13 + lVar9 * 8);
              lVar9 = lVar9 + 1;
            } while ((int)lVar9 < (int)uVar1);
            *(undefined8 *)(puVar16 + -8) = 0x4b4345;
            FUN_004c4ba0(ppppppplVar12,lVar22,local_88,0);
            *(undefined8 *)(puVar16 + -8) = 0x4b435a;
            FUN_004c4ba0(local_58,(long)(int)local_50,ppppppplVar19,1);
            *(undefined8 *)(puVar16 + -8) = 0x4b4373;
            FUN_004c0ba0(local_78,local_58,local_58,ppppppplVar8,ppppppplVar21,uVar1);
            *(undefined8 *)(puVar16 + -8) = 0x4b4387;
            FUN_004c4ba0(local_78,lVar22,ppppppplVar19,2);
            iVar4 = 3;
            iVar3 = 4;
            local_b0 = ppppppplVar8;
            do {
              *(undefined8 *)(puVar16 + -8) = 0x4b43ba;
              FUN_004c0ba0(local_78,local_78,local_78,local_b0,ppppppplVar21,uVar1);
              lVar13 = (long)iVar3;
              iVar3 = iVar3 * 2;
              *(undefined8 *)(puVar16 + -8) = 0x4b43d0;
              FUN_004c4ba0(local_78,lVar22,local_88,lVar13);
              ppppppplVar12 = local_88;
              ppppppplVar8 = local_b0;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            local_b0 = (long *******)0x3;
            local_88 = ppppppplVar21;
            do {
              ppppppplVar21 = local_b0;
              iVar3 = (int)local_b0;
              *(ulong *)(puVar16 + -0x10) = (ulong)(iVar3 - 1);
              *(undefined8 *)(puVar16 + -0x18) = 0x4b441c;
              FUN_004c1b40(local_78,local_58,ppppppplVar12,ppppppplVar8,local_88,uVar1);
              iVar3 = iVar3 * 2;
              *(undefined8 *)(puVar16 + -0x18) = 0x4b4431;
              FUN_004c4ba0(local_78,lVar22,ppppppplVar12,ppppppplVar21);
              do {
                *(undefined8 *)(puVar16 + -8) = 0x4b4459;
                FUN_004c0ba0(local_78,local_78,local_78,ppppppplVar8,local_88,uVar1);
                lVar13 = (long)iVar3;
                iVar3 = iVar3 * 2;
                *(undefined8 *)(puVar16 + -8) = 0x4b446d;
                FUN_004c4ba0(local_78,lVar22,ppppppplVar12,lVar13);
              } while (iVar3 < 0x20);
              local_b0 = (long *******)((long)local_b0 + 2);
            } while (local_b0 != (long *******)0x9);
            lVar13 = 9;
            local_b0 = (long *******)0x9;
            do {
              *(ulong *)(puVar16 + -0x10) = (ulong)((int)lVar13 - 1);
              *(undefined8 *)(puVar16 + -0x18) = 0x4b44b4;
              FUN_004c1b40(local_78,local_58,ppppppplVar12,ppppppplVar8,local_88,uVar1);
              *(undefined8 *)(puVar16 + -0x18) = 0x4b44c6;
              FUN_004c4ba0(local_78,lVar22,ppppppplVar12,lVar13);
              *(undefined8 *)(puVar16 + -0x18) = 0x4b44df;
              FUN_004c0ba0(local_78,local_78,local_78,ppppppplVar8,local_88,uVar1);
              lVar9 = lVar13 * 2;
              lVar13 = lVar13 + 2;
              *(undefined8 *)(puVar16 + -0x18) = 0x4b44f6;
              FUN_004c4ba0(local_78,lVar22,ppppppplVar12,lVar9);
            } while (lVar13 != 0x11);
            local_b8 = ppppppplVar8;
            iVar3 = 0x11;
            lVar13 = 0x11;
            local_b0 = local_88;
            local_88 = ppppppplVar12;
            do {
              *(ulong *)(puVar16 + -0x10) = (ulong)(iVar3 - 1);
              iVar3 = iVar3 + 2;
              *(undefined8 *)(puVar16 + -0x18) = 0x4b4546;
              FUN_004c1b40(local_78,local_58,ppppppplVar12,local_b8,local_b0,uVar1);
              *(undefined8 *)(puVar16 + -0x18) = 0x4b455c;
              FUN_004c4ba0(local_78,lVar22,ppppppplVar12,lVar13);
              ppppppplVar21 = local_b0;
              ppppppplVar8 = local_b8;
              lVar13 = lVar13 + 2;
            } while (iVar3 < 0x20);
            iVar3 = (int)(local_d4 - 1) % 5 + 1;
            bVar23 = (byte)iVar3;
            iVar3 = local_d4 - iVar3;
            *(undefined8 *)(puVar16 + -8) = 0x4b45af;
            uVar5 = FUN_004b35a0(local_90,iVar3);
            *(undefined8 *)(puVar16 + -8) = 0x4b45d5;
            FUN_004c4be0(local_78,lVar22,local_88,(long)(int)((1 << (bVar23 & 0x1f)) - 1U & uVar5));
            ppppppplVar12 = local_88;
            if ((uVar1 & 7) == 0) {
              while (0 < iVar3) {
                iVar3 = iVar3 + -5;
                uVar10 = *local_90;
                *(undefined8 *)(puVar16 + -8) = 0x4b4d14;
                uVar10 = FUN_004c4b70(uVar10,iVar3);
                *(undefined8 *)(puVar16 + -0x10) = uVar10;
                *(undefined8 *)(puVar16 + -0x18) = 0x4b4d31;
                FUN_004c2a80(local_78,local_78,ppppppplVar12,ppppppplVar8,ppppppplVar21,uVar1);
              }
            }
            else {
              while (0 < iVar3) {
                iVar3 = iVar3 + -5;
                *(undefined8 *)(puVar16 + -8) = 0x4b460b;
                FUN_004c0ba0(local_78,local_78,local_78,ppppppplVar8,ppppppplVar21,uVar1);
                *(undefined8 *)(puVar16 + -8) = 0x4b4623;
                FUN_004c0ba0(local_78,local_78,local_78,ppppppplVar8,ppppppplVar21,uVar1);
                *(undefined8 *)(puVar16 + -8) = 0x4b463b;
                FUN_004c0ba0(local_78,local_78,local_78,ppppppplVar8,ppppppplVar21,uVar1);
                *(undefined8 *)(puVar16 + -8) = 0x4b4653;
                FUN_004c0ba0(local_78,local_78,local_78,ppppppplVar8,ppppppplVar21,uVar1);
                *(undefined8 *)(puVar16 + -8) = 0x4b466b;
                FUN_004c0ba0(local_78,local_78,local_78,ppppppplVar8,ppppppplVar21,uVar1);
                uVar10 = *local_90;
                *(undefined8 *)(puVar16 + -8) = 0x4b467c;
                uVar10 = FUN_004c4b70(uVar10,iVar3);
                *(undefined8 *)(puVar16 + -0x10) = uVar10;
                *(undefined8 *)(puVar16 + -0x18) = 0x4b4699;
                FUN_004c1b40(local_78,local_78,ppppppplVar12,ppppppplVar8,ppppppplVar21,uVar1);
              }
            }
            *(undefined8 *)(puVar16 + -8) = 0x4b46be;
            uVar5 = FUN_004c3540(local_78,local_78,0,ppppppplVar8,ppppppplVar21,uVar1);
            *(undefined8 *)(puVar16 + -8) = 0x4b46cd;
            local_70 = uVar1;
            FUN_004b8490(&local_78);
            if (uVar5 == 0) {
LAB_004b46d6:
              *(undefined8 *)(puVar16 + -8) = 0x4b46f3;
              iVar3 = FUN_004b9680(local_a8,&local_78,local_a0,local_80);
              uVar5 = (uint)(iVar3 != 0);
            }
            else {
              *(undefined8 *)(puVar16 + -8) = 0x4b4ddf;
              lVar13 = FUN_004b8260(local_a8,&local_78);
              if (lVar13 == 0) goto LAB_004b4878;
            }
          }
          else {
            *(undefined8 *)(puVar16 + -8) = 0x4b4850;
            uVar10 = FUN_004b75a0();
            *(undefined8 *)(puVar16 + -8) = 0x4b4866;
            iVar3 = FUN_004b9720(&local_78,uVar10,local_a0,local_80);
            if (iVar3 != 0) goto LAB_004b4258;
LAB_004b4878:
            uVar5 = 0;
          }
          if (local_98 == 0) {
            *(undefined8 *)(puVar16 + -8) = 0x4b4dcb;
            FUN_004b9810(local_a0);
          }
          *(undefined8 *)(puVar16 + -8) = 0x4b4899;
          FUN_004227b0(local_88,local_c0);
          *(undefined8 *)(puVar16 + -8) = 0x4b48b1;
          FUN_0041ad60(local_d0,local_e0,0x45c);
          puVar17 = puVar16;
          goto LAB_004b4711;
        }
        lVar13 = FUN_004b8240(local_a8,8);
        if (lVar13 == 0) goto LAB_004b4700;
        uVar5 = 1;
        FUN_004c0010(*puVar2,*local_88,*local_90,*param_4,*(undefined8 *)(local_a0 + 0x50),
                     *(undefined8 *)(local_a0 + 8));
        *(undefined4 *)(puVar2 + 1) = 8;
        *(undefined4 *)(puVar2 + 2) = 0;
        FUN_004b8490(puVar2);
      }
    }
    else {
LAB_004b4700:
      uVar5 = 0;
    }
    puVar17 = auStack_e8;
    if (local_98 == 0) {
LAB_004b4827:
      FUN_004b9810(local_a0);
      puVar17 = auStack_e8;
    }
  }
LAB_004b4711:
  *(undefined8 *)(puVar17 + -8) = 0x4b471a;
  FUN_004b2d50(local_80);
  puVar18 = puVar17;
LAB_004b471a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar18 + -8) = &UNK_004b4e7d;
  FUN_00771f60();
}

