
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 * FUN_0070e1b0(ulong param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  undefined8 *local_68;
  ulong local_48;
  long local_40;
  
  lVar4 = DAT_0093eb18;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (undefined4 *)0x0) || ((DAT_0093e0d0 <= param_1 && (DAT_0093e0fc < DAT_0093e100)))
     ) {
    if (((DAT_0093e0f0 != 0) &&
        ((DAT_0093e0f0 <= param_1 &&
         (puVar9 = (undefined8 *)FUN_0070e070(param_1,DAT_0093e0f0,DAT_0093e0f8),
         puVar9 != (undefined8 *)0xffffffffffffffff)))) ||
       (puVar9 = (undefined8 *)FUN_0070e070(param_1,lVar4,0),
       puVar9 != (undefined8 *)0xffffffffffffffff)) goto LAB_0070e376;
    if (param_2 == (undefined4 *)0x0) {
      puVar9 = (undefined8 *)0x0;
      goto LAB_0070e376;
    }
    bVar19 = true;
  }
  else {
    bVar19 = false;
  }
  puVar3 = *(undefined4 **)(param_2 + 0x18);
  uVar16 = *(ulong *)(puVar3 + 2) & 0xfffffffffffffff8;
  puVar2 = (undefined8 *)((long)puVar3 + uVar16);
  if (((uVar16 != 0) || (puVar3 != param_2 + 0x18)) &&
     ((uVar16 < 0x20 || (((*(ulong *)(puVar3 + 2) & 1) == 0 || (((ulong)puVar2 & lVar4 - 1U) != 0)))
      ))) {
                    /* WARNING: Subroutine does not return */
    FUN_0070bf60("(old_top == initial_top (av) && old_size == 0) || ((unsigned long) (old_size) >= MINSIZE && prev_inuse (old_top) && ((unsigned long) old_end & (pagesize - 1)) == 0)"
                 ,"malloc.c",0xa39,"sysmalloc");
  }
  uVar1 = param_1 + 0x20;
  if (uVar1 <= uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_0070bf60("(unsigned long) (old_size) < (unsigned long) (nb + MINSIZE)","malloc.c",0xa3f,
                 "sysmalloc");
  }
  if (param_2 == &DAT_0093e160) {
    lVar7 = param_1 + 0x20 + DAT_0093e0c8;
    if ((DAT_0093e164 & 2) == 0) {
      lVar7 = lVar7 - uVar16;
    }
    if (DAT_0093e0e8 == 0) {
      local_48 = lVar7 + -1 + DAT_0093eb18 & -DAT_0093eb18;
    }
    else {
      local_48 = (DAT_0093e0e8 + -1 + DAT_0094ab88 + lVar7 & -DAT_0093e0e8) - DAT_0094ab88;
    }
    if ((long)local_48 < 1) {
LAB_0070e5c0:
      if (((DAT_0093e0f0 != 0) &&
          (puVar8 = (undefined8 *)
                    FUN_0070d9f0(&local_48,param_1,uVar16,DAT_0093e0f0,DAT_0093e0f0,DAT_0093e0f8),
          puVar8 != (undefined8 *)0xffffffffffffffff)) ||
         (puVar8 = (undefined8 *)FUN_0070d9f0(&local_48,param_1,uVar16,lVar4,0x100000,0),
         uVar11 = DAT_0093e9e8, puVar9 = DAT_0093e1c0, puVar8 != (undefined8 *)0xffffffffffffffff))
      {
        uVar14 = (long)puVar8 + local_48;
        bVar19 = uVar14 == 0;
        uVar11 = DAT_0093e9e8;
        puVar9 = DAT_0093e1c0;
        if (puVar8 != (undefined8 *)0x0) goto LAB_0070e446;
      }
    }
    else {
      puVar8 = (undefined8 *)0x0;
      if (DAT_0094a9c8 == '\0') {
        puVar8 = (undefined8 *)FUN_0076eb20();
        if ((long)puVar8 - 1U < 0xfffffffffffffffe) {
          if (DAT_0093e0e8 - 1U < local_48) {
            uVar14 = DAT_0093eb18 - 1U & (ulong)puVar8;
            uVar11 = local_48;
            puVar9 = puVar8;
            if (uVar14 != 0) {
              uVar11 = local_48 + uVar14;
              puVar9 = (undefined8 *)(-DAT_0093eb18 & (ulong)puVar8);
            }
            FUN_0076f0e0(puVar9,uVar11,0xe);
          }
        }
        else {
          puVar8 = (undefined8 *)0x0;
        }
      }
      if (puVar8 == (undefined8 *)0x0) goto LAB_0070e5c0;
      bVar19 = true;
      uVar14 = 0;
LAB_0070e446:
      puVar9 = DAT_0093e1c0;
      if (DAT_0093e120 == (undefined8 *)0x0) {
        DAT_0093e120 = puVar8;
      }
      uVar11 = DAT_0093e9e8 + local_48;
      DAT_0093e9e8 = uVar11;
      if ((puVar2 == puVar8) && (bVar19)) {
        *(ulong *)(puVar3 + 2) = local_48 + uVar16 | 1;
      }
      else {
        local_68 = puVar8;
        if ((DAT_0093e164 & 2) == 0) {
          if (uVar16 != 0) {
            if (puVar8 < puVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_0070bdd0("break adjusted to free malloc space");
            }
            if (uVar16 != 0) {
              DAT_0093e9e8 = (long)puVar8 + (uVar11 - (long)puVar2);
            }
          }
          uVar11 = uVar16;
          if (((ulong)puVar8 & 0xf) != 0) {
            lVar7 = 0x10 - (ulong)((uint)puVar8 & 0xf);
            uVar11 = lVar7 + uVar16;
            local_68 = (undefined8 *)((long)puVar8 + lVar7);
          }
          lVar7 = local_48 + uVar11 + (long)puVar8;
          uVar17 = (-lVar4 & lVar4 + -1 + lVar7) + (uVar11 - lVar7);
          if ((long)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0070bf60("correction >= 0","malloc.c",0xb18,"sysmalloc");
          }
          uVar11 = DAT_0093e9e8;
          if (DAT_0094a9c8 == '\0') {
            uVar14 = FUN_0076eb20(uVar17);
            if (uVar14 - 1 < 0xfffffffffffffffe) {
              uVar18 = uVar17;
              if (DAT_0093e0e8 - 1U < uVar17) {
                uVar10 = DAT_0093eb18 - 1U & uVar14;
                uVar11 = uVar17;
                uVar13 = uVar14;
                if (uVar10 != 0) {
                  uVar11 = uVar17 + uVar10;
                  uVar13 = -DAT_0093eb18 & uVar14;
                }
                FUN_0076f0e0(uVar13,uVar11,0xe);
              }
LAB_0070e7a6:
              uVar11 = DAT_0093e9e8;
              puVar9 = DAT_0093e1c0;
              if (uVar14 != 0) {
                uVar11 = DAT_0093e9e8 + uVar17;
                puVar8 = local_68;
                goto LAB_0070e871;
              }
            }
            else {
              uVar11 = DAT_0093e9e8;
              puVar9 = DAT_0093e1c0;
              if (DAT_0094a9c8 == '\0') {
                uVar14 = FUN_0076eb20(0);
                uVar17 = 0;
                puVar9 = DAT_0093e1c0;
                uVar11 = DAT_0093e9e8;
                goto joined_r0x0070e9e9;
              }
            }
          }
        }
        else {
          uVar17 = (ulong)((uint)puVar8 & 0xf);
          if (((ulong)puVar8 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0070bf60("((unsigned long) chunk2mem (brk) & MALLOC_ALIGN_MASK) == 0","malloc.c",
                         0xb33,"sysmalloc");
          }
          uVar18 = 0;
          if (uVar14 == 0) {
            if (DAT_0094a9c8 == '\0') {
              uVar14 = FUN_0076eb20(0);
              puVar9 = DAT_0093e1c0;
              uVar11 = DAT_0093e9e8;
joined_r0x0070e9e9:
              uVar18 = 0;
              DAT_0093e1c0 = puVar9;
              DAT_0093e9e8 = uVar11;
              if (uVar14 != 0xffffffffffffffff) goto LAB_0070e7a6;
            }
          }
          else {
LAB_0070e871:
            DAT_0093e1c0 = puVar8;
            puVar8[1] = (uVar14 - (long)puVar8) + uVar18 | 1;
            puVar9 = puVar8;
            DAT_0093e9e8 = uVar11;
            if (uVar16 != 0) {
              uVar16 = uVar16 - 0x20 & 0xfffffffffffffff0;
              *(ulong *)(puVar3 + 2) = uVar16 | 1;
              *(undefined8 *)((long)puVar3 + uVar16 + 8) = 0x11;
              *(undefined8 *)((long)puVar3 + uVar16 + 0x18) = 0x11;
              if (0x1f < uVar16) {
                FUN_0070cb80(&DAT_0093e160,puVar3,1);
                uVar11 = DAT_0093e9e8;
                puVar9 = DAT_0093e1c0;
              }
            }
          }
        }
      }
    }
  }
  else {
    lVar7 = uVar1 - uVar16;
    if (DAT_0093e0f0 == 0) {
      uVar14 = (ulong)puVar3 & 0xfffffffffc000000;
      lVar15 = *(long *)(uVar14 + 0x10);
      lVar12 = DAT_0093e0c8;
      if ((0 < lVar7) &&
         (uVar11 = (*(long *)(uVar14 + 0x20) + -1 + lVar7 & -*(long *)(uVar14 + 0x20)) + lVar15,
         uVar11 < 0x4000001)) goto LAB_0070e29f;
LAB_0070e523:
      puVar9 = (undefined8 *)FUN_0070d7c0(param_1 + 0x50,lVar12,DAT_0093eb18,0x4000);
      if (puVar9 == (undefined8 *)0x0) {
        if ((!bVar19) &&
           (puVar9 = (undefined8 *)FUN_0070e070(param_1,lVar4,0),
           puVar9 != (undefined8 *)0xffffffffffffffff)) goto LAB_0070e376;
        uVar11 = *(ulong *)(param_2 + 0x222);
        puVar9 = *(undefined8 **)(param_2 + 0x18);
      }
      else {
LAB_0070e54a:
        lVar4 = puVar9[2];
        uVar17 = uVar16 - 0x20 & 0xfffffffffffffff0;
        *puVar9 = param_2;
        puVar9[1] = uVar14;
        *(undefined8 **)(param_2 + 0x18) = puVar9 + 6;
        uVar11 = *(long *)(param_2 + 0x222) + lVar4;
        *(ulong *)(param_2 + 0x222) = uVar11;
        puVar9[7] = lVar4 - 0x30U | 1;
        uVar16 = uVar17 + 0x10;
        ((ulong *)((long)puVar3 + uVar16))[1] = 1;
        uVar5 = _UNK_0082abf8;
        if (uVar17 < 0x20) {
          *(ulong *)(puVar3 + 2) = uVar16 | 1;
          *(ulong *)((long)puVar3 + uVar16) = uVar16;
          puVar9 = puVar9 + 6;
        }
        else {
          puVar9 = (undefined8 *)((long)puVar3 + uVar17 + 8);
          *puVar9 = _DAT_0082abf0;
          puVar9[1] = uVar5;
          *(ulong *)(puVar3 + 2) = uVar17 | 5;
          FUN_0070cb80(param_2,puVar3,1);
          uVar11 = *(ulong *)(param_2 + 0x222);
          puVar9 = *(undefined8 **)(param_2 + 0x18);
        }
      }
    }
    else {
      uVar14 = DAT_0093e0f0 * -4 & (ulong)puVar3;
      lVar15 = *(long *)(uVar14 + 0x10);
      if ((lVar7 < 1) ||
         (uVar11 = (*(long *)(uVar14 + 0x20) + -1 + lVar7 & -*(long *)(uVar14 + 0x20)) + lVar15,
         DAT_0093e0f0 * 4 < uVar11)) {
LAB_0070e81b:
        lVar12 = DAT_0093e0c8;
        puVar9 = (undefined8 *)FUN_0070d7c0();
        if (puVar9 == (undefined8 *)0x0) goto LAB_0070e523;
        goto LAB_0070e54a;
      }
LAB_0070e29f:
      uVar17 = *(ulong *)(uVar14 + 0x18);
      if (uVar17 < uVar11) {
        iVar6 = FUN_0076f0b0(uVar17 + uVar14,uVar11 - uVar17,3);
        if (iVar6 != 0) {
          lVar12 = DAT_0093e0c8;
          if (DAT_0093e0f0 == 0) goto LAB_0070e523;
          goto LAB_0070e81b;
        }
        *(ulong *)(uVar14 + 0x18) = uVar11;
      }
      *(ulong *)(uVar14 + 0x10) = uVar11;
      lVar4 = *(long *)(uVar14 + 0x10);
      puVar9 = *(undefined8 **)(param_2 + 0x18);
      uVar11 = (lVar4 - lVar15) + *(long *)(param_2 + 0x222);
      *(ulong *)(param_2 + 0x222) = uVar11;
      *(ulong *)(puVar3 + 2) = (lVar4 + uVar14) - (long)puVar3 | 1;
    }
  }
  if (*(ulong *)(param_2 + 0x224) < uVar11) {
    *(ulong *)(param_2 + 0x224) = uVar11;
  }
  uVar16 = puVar9[1];
  if ((uVar16 & 0xfffffffffffffff8) < uVar1) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    puVar9 = (undefined8 *)0x0;
  }
  else {
    *(ulong *)(param_2 + 0x18) = (long)puVar9 + param_1;
    puVar9[1] = (ulong)(param_2 != &DAT_0093e160) << 2 | param_1 | 1;
    *(ulong *)((long)puVar9 + param_1 + 8) = (uVar16 & 0xfffffffffffffff8) - param_1 | 1;
    puVar9 = puVar9 + 2;
  }
LAB_0070e376:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

