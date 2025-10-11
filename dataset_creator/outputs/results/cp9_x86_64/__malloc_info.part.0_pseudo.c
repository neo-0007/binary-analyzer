
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __malloc_info_part_0(FILE *param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  ulong *puVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long in_FS_OFFSET;
  int *local_11e8;
  long local_11d0;
  long local_11c8;
  long local_11b8;
  long local_11b0;
  long local_11a8;
  long local_11a0;
  long local_1198;
  long local_1190;
  long local_1188;
  long local_1180;
  long local_1178;
  long local_1170;
  undefined1 local_1168 [320];
  undefined1 local_1028 [16];
  undefined8 local_1018;
  long lStack_1010;
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1180 = 0;
  local_1188 = 0;
  local_1190 = 0;
  local_1198 = 0;
  local_11b0 = 0;
  local_11a0 = 0;
  local_11e8 = &main_arena;
  local_11b8 = 0;
  local_11a8 = 0;
  do {
    fprintf(param_1,"<heap nr=\"%d\">\n<sizes>\n");
    LOCK();
    iVar2 = *local_11e8;
    if (iVar2 == 0) {
      *local_11e8 = 1;
    }
    UNLOCK();
    if (iVar2 != 0) {
      __lll_lock_wait_private(local_11e8);
    }
    local_11d0 = 0;
    local_11c8 = 0;
    uVar3 = *(ulong *)(local_11e8 + 0x18);
    puVar12 = (ulong *)(local_11e8 + 4);
    uVar7 = *(ulong *)(uVar3 + 8);
    pauVar8 = (undefined1 (*) [16])local_1168;
    do {
      uVar4 = *puVar12;
      if (uVar4 == 0) {
        *(undefined8 *)(pauVar8[1] + 8) = 0;
        lVar16 = 0;
        *pauVar8 = (undefined1  [16])0x0;
      }
      else {
        lVar16 = 0;
        uVar9 = uVar4;
        do {
          if ((uVar9 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
            malloc_printerr("__malloc_info(): unaligned fastbin chunk detected");
          }
          puVar1 = (ulong *)(uVar9 + 0x10);
          lVar16 = lVar16 + 1;
          uVar6 = uVar9 + 0x10 >> 0xc;
          uVar9 = *puVar1 ^ uVar6;
        } while (*puVar1 != uVar6);
        uVar4 = *(ulong *)(uVar4 + 8);
        local_11d0 = local_11d0 + lVar16;
        *(long *)(pauVar8[1] + 8) = lVar16;
        uVar4 = uVar4 & 0xfffffffffffffff8;
        local_11c8 = local_11c8 + uVar4 * lVar16;
        *(ulong *)*pauVar8 = uVar4 - 0xf;
        *(ulong *)(*pauVar8 + 8) = uVar4;
      }
      pauVar10 = pauVar8 + 2;
      puVar12 = puVar12 + 1;
      *(long *)pauVar8[1] = lVar16 * *(long *)(*pauVar8 + 8);
      pauVar8 = pauVar10;
    } while (&local_1028 != pauVar10);
    uVar7 = uVar7 & 0xfffffffffffffff8;
    lVar16 = 1;
    piVar13 = local_11e8 + 0x18;
    pauVar8 = &local_1028;
    do {
      piVar5 = *(int **)(piVar13 + 4);
      *(undefined8 *)*pauVar8 = _DAT_0081f240;
      *(undefined8 *)(*pauVar8 + 8) = _UNK_0081f248;
      pauVar8[1] = (undefined1  [16])0x0;
      if ((piVar5 == (int *)0x0) || (piVar5 == piVar13)) {
LAB_00702a00:
        *(undefined8 *)*pauVar8 = 0;
      }
      else {
        uVar4 = 0;
        uVar9 = 0xffffffffffffffff;
        lVar14 = 0;
        lVar15 = 1;
        do {
          lVar11 = lVar15;
          uVar6 = *(ulong *)(piVar5 + 2);
          piVar5 = *(int **)(piVar5 + 4);
          lVar14 = lVar14 + uVar6;
          if (uVar6 < uVar9) {
            uVar9 = uVar6;
          }
          if (uVar4 < uVar6) {
            uVar4 = uVar6;
          }
          lVar15 = lVar11 + 1;
        } while (piVar5 != piVar13);
        lVar16 = lVar16 + lVar11;
        *(ulong *)*pauVar8 = uVar9;
        *(ulong *)(*pauVar8 + 8) = uVar4;
        *(long *)pauVar8[1] = lVar14;
        *(long *)(pauVar8[1] + 8) = lVar11;
        if (lVar11 == 0) goto LAB_00702a00;
      }
      uVar7 = uVar7 + *(long *)pauVar8[1];
      pauVar8 = pauVar8 + 2;
      piVar13 = piVar13 + 4;
    } while (pauVar8 != (undefined1 (*) [16])local_48);
    if (local_11e8 == &main_arena) {
      local_1170 = 0;
      lVar15 = 0;
      local_1178 = 0;
    }
    else {
      uVar4 = DAT_00931110 * -4;
      if (DAT_00931110 == 0) {
        uVar4 = 0xfffffffffc000000;
      }
      local_1170 = 0;
      lVar15 = 0;
      local_1178 = 0;
      uVar4 = uVar4 & uVar3;
      do {
        local_1178 = local_1178 + *(long *)(uVar4 + 0x10);
        lVar15 = lVar15 + *(long *)(uVar4 + 0x18);
        local_1170 = local_1170 + 1;
        uVar4 = *(ulong *)(uVar4 + 8);
      } while (uVar4 != 0);
    }
    LOCK();
    iVar2 = *local_11e8;
    *local_11e8 = 0;
    UNLOCK();
    if (1 < iVar2) {
      __lll_lock_wake_private();
    }
    local_11a8 = local_11a8 + lVar16;
    local_11b8 = local_11b8 + local_11d0;
    local_11a0 = local_11a0 + uVar7;
    local_11b0 = local_11b0 + local_11c8;
    lVar14 = 0;
    pauVar8 = (undefined1 (*) [16])local_1168;
    do {
      if ((lVar14 != 10) && (*(long *)(pauVar8[1] + 8) != 0)) {
        fprintf(param_1,"  <size from=\"%zu\" to=\"%zu\" total=\"%zu\" count=\"%zu\"/>\n",
                *(undefined8 *)*pauVar8,*(undefined8 *)(*pauVar8 + 8),*(undefined8 *)pauVar8[1]);
      }
      lVar14 = lVar14 + 1;
      pauVar8 = pauVar8 + 2;
    } while (lVar14 != 0x89);
    if (lStack_1010 != 0) {
      fprintf(param_1,"  <unsorted from=\"%zu\" to=\"%zu\" total=\"%zu\" count=\"%zu\"/>\n",
              local_1028._0_8_,local_1028._8_8_,local_1018);
    }
    local_1198 = local_1198 + *(long *)(local_11e8 + 0x222);
    local_1190 = local_1190 + *(long *)(local_11e8 + 0x224);
    fprintf(param_1,
            "</sizes>\n<total type=\"fast\" count=\"%zu\" size=\"%zu\"/>\n<total type=\"rest\" count=\"%zu\" size=\"%zu\"/>\n<system type=\"current\" size=\"%zu\"/>\n<system type=\"max\" size=\"%zu\"/>\n"
            ,local_11d0,local_11c8,lVar16,uVar7,*(long *)(local_11e8 + 0x222),
            *(long *)(local_11e8 + 0x224));
    if (local_11e8 == &main_arena) {
      fprintf(param_1,
              "<aspace type=\"total\" size=\"%zu\"/>\n<aspace type=\"mprotect\" size=\"%zu\"/>\n");
      local_1178 = DAT_00931a08;
      fputs("</heap>\n",param_1);
      local_11e8 = (int *)PTR_main_arena_009319f0;
      lVar15 = local_1178;
    }
    else {
      fprintf(param_1,
              "<aspace type=\"total\" size=\"%zu\"/>\n<aspace type=\"mprotect\" size=\"%zu\"/>\n<aspace type=\"subheaps\" size=\"%zu\"/>\n"
              ,local_1178,lVar15,local_1170);
      fputs("</heap>\n",param_1);
      local_11e8 = *(int **)(local_11e8 + 0x21c);
    }
    local_1180 = local_1180 + lVar15;
    local_1188 = local_1188 + local_1178;
    if (local_11e8 == &main_arena) {
      fprintf(param_1,
              "<total type=\"fast\" count=\"%zu\" size=\"%zu\"/>\n<total type=\"rest\" count=\"%zu\" size=\"%zu\"/>\n<total type=\"mmap\" count=\"%d\" size=\"%zu\"/>\n<system type=\"current\" size=\"%zu\"/>\n<system type=\"max\" size=\"%zu\"/>\n<aspace type=\"total\" size=\"%zu\"/>\n<aspace type=\"mprotect\" size=\"%zu\"/>\n</malloc>\n"
              ,local_11b8,local_11b0,local_11a8,local_11a0,(ulong)DAT_0093111c,DAT_00931130,
              local_1198,local_1190,local_1188,local_1180);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
  } while( true );
}

