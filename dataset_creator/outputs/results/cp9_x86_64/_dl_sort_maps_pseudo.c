
void _dl_sort_maps(void *param_1,uint param_2,uint param_3,char param_4)

{
  byte *pbVar1;
  long *__dest;
  ushort uVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  void **ppvVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar16;
  undefined1 *puVar17;
  size_t sVar18;
  void *pvVar19;
  long lVar20;
  undefined1 *puVar21;
  uint uVar22;
  uint uVar23;
  char *pcVar24;
  uint uVar25;
  ulong uVar26;
  undefined1 *puVar27;
  undefined1 auStack_a8 [8];
  undefined1 *local_a0;
  long *local_98;
  ulong local_90;
  long local_88;
  uint local_80;
  int local_7c;
  ulong local_78;
  ulong local_70;
  void *local_68;
  uint local_60;
  char local_59;
  char local_49;
  undefined1 *local_48;
  void *local_40 [2];
  undefined1 *puVar15;
  
  puVar21 = auStack_a8;
  puVar14 = auStack_a8;
  puVar27 = auStack_a8;
  local_a0 = auStack_a8;
  puVar13 = auStack_a8;
  puVar15 = auStack_a8;
  puVar16 = auStack_a8;
  local_59 = param_4;
  if (_dl_dso_sort_algo == 0) {
    local_60 = param_2 - param_3;
    if (1 < local_60) {
      local_68 = (void *)((long)param_1 + (ulong)param_3 * 8);
      uVar6 = (ulong)local_60 * 2 + 0xf;
      puVar21 = auStack_a8;
      while (puVar13 != auStack_a8 + -(uVar6 & 0xfffffffffffff000)) {
        puVar27 = puVar21 + -0x1000;
        *(undefined8 *)(puVar21 + -8) = *(undefined8 *)(puVar21 + -8);
        puVar13 = puVar21 + -0x1000;
        puVar21 = puVar21 + -0x1000;
      }
      uVar6 = (ulong)((uint)uVar6 & 0xff0);
      lVar10 = -uVar6;
      if (uVar6 != 0) {
        *(undefined8 *)(puVar27 + -8) = *(undefined8 *)(puVar27 + -8);
      }
      *(undefined8 *)(puVar27 + lVar10 + -8) = 0x77fdbb;
      memset(puVar27 + lVar10,0,(ulong)local_60 * 2);
      local_80 = local_60 - 1;
      local_98 = (long *)((long)local_68 + (ulong)local_80 * 8);
      uVar6 = 0;
      uVar26 = 1;
      uVar23 = 0;
LAB_0077fde0:
      uVar2 = *(ushort *)(puVar27 + uVar6 * 2 + lVar10);
      *(short *)(puVar27 + uVar6 * 2 + lVar10) = (short)(uVar2 + 1);
      __dest = (long *)((long)local_68 + uVar6 * 8);
      lVar8 = *__dest;
      uVar25 = (uint)uVar26;
      if (((local_59 == '\0') ||
          ((lVar8 == *(long *)(lVar8 + 0x28) && (*(int *)(lVar8 + 0x3f4) != -1)))) &&
         (plVar12 = local_98, uVar22 = local_80, uVar23 < local_80)) {
        do {
          lVar11 = *plVar12;
          plVar7 = *(long **)(lVar11 + 0x3d0);
          if (plVar7 != (long *)0x0) {
            while (lVar20 = *plVar7, lVar20 != 0) {
              plVar7 = plVar7 + 1;
              if (lVar8 == lVar20) goto LAB_0077fe71;
            }
          }
          if ((local_59 != '\0') && (puVar3 = *(uint **)(lVar11 + 0x3d8), puVar3 != (uint *)0x0)) {
            uVar5 = *puVar3;
            do {
              uVar5 = uVar5 - 1;
              if (uVar5 == 0xffffffff) goto LAB_0077fe2e;
            } while (lVar8 != *(long *)(puVar3 + (ulong)uVar5 * 2 + 2));
            plVar7 = *(long **)(lVar8 + 0x3d0);
            if (plVar7 == (long *)0x0) {
LAB_0077fe71:
              local_78 = (ulong)(uVar22 - uVar23);
              *(undefined8 *)(puVar27 + lVar10 + -8) = 0x77fea5;
              local_90 = uVar6;
              local_88 = lVar8;
              local_7c = uVar2 + 1;
              local_70 = uVar26;
              memmove(__dest,(void *)((long)local_68 + uVar26 * 8),local_78 * 8);
              uVar2 = *(ushort *)(puVar27 + local_70 * 2 + lVar10);
              *plVar12 = local_88;
              uVar6 = local_70;
              if (local_60 - uVar23 < (uint)uVar2) goto LAB_0077fecd;
              sVar18 = local_78 * 2;
              local_78 = CONCAT44(local_78._4_4_,local_7c);
              lVar8 = local_70 * 2;
              local_70 = local_90;
              *(undefined8 *)(puVar27 + lVar10 + -8) = 0x77ff08;
              memmove(puVar27 + local_90 * 2 + lVar10,puVar27 + lVar8 + lVar10,sVar18);
              *(short *)(puVar27 + (ulong)uVar22 * 2 + lVar10) = (short)local_78;
              uVar6 = local_70;
              goto LAB_0077fde0;
            }
            do {
              lVar20 = *plVar7;
              if (lVar20 == 0) goto LAB_0077fe71;
              plVar7 = plVar7 + 1;
            } while (lVar11 != lVar20);
          }
LAB_0077fe2e:
          uVar22 = uVar22 - 1;
          plVar12 = plVar12 + -1;
        } while (uVar23 != uVar22);
      }
      uVar6 = uVar26;
      if (local_60 != uVar25) {
LAB_0077fecd:
        *(undefined8 *)(puVar27 + lVar10 + -8) = 0x77fee4;
        memset(puVar27 + uVar6 * 2 + lVar10,0,(ulong)(local_60 - uVar25) * 2);
        uVar6 = uVar26;
        uVar26 = (ulong)(uVar25 + 1);
        uVar23 = uVar25;
        goto LAB_0077fde0;
      }
    }
    return;
  }
  sVar18 = (ulong)param_2 * 8;
  lVar8 = (long)(int)(param_2 - 1);
  lVar10 = lVar8;
  if ((int)(param_2 - 1) < 0) {
    puVar14 = auStack_a8;
    while (puVar16 != auStack_a8 + -(sVar18 + 0xf & 0xfffffffffffff000)) {
      puVar21 = puVar14 + -0x1000;
      *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
      puVar16 = puVar14 + -0x1000;
      puVar14 = puVar14 + -0x1000;
    }
    uVar6 = (ulong)((uint)(sVar18 + 0xf) & 0xff0);
    lVar10 = -uVar6;
    puVar17 = puVar21 + lVar10;
    puVar27 = puVar21 + lVar10;
    if (uVar6 != 0) {
      *(undefined8 *)(puVar21 + -8) = *(undefined8 *)(puVar21 + -8);
    }
    local_49 = '\0';
    local_48 = puVar21 + sVar18 + lVar10;
    if (local_48 == puVar21 + lVar10) {
LAB_0078015e:
      *(undefined8 *)(puVar27 + -8) = 0x78016c;
      memcpy(param_1,puVar27,sVar18);
      return;
    }
  }
  else {
    do {
      lVar11 = lVar10 + -1;
      pbVar1 = (byte *)(*(long *)((long)param_1 + lVar10 * 8) + 0x31d);
      *pbVar1 = *pbVar1 & 0xfe;
      lVar10 = lVar11;
    } while (-1 < (int)lVar11);
    puVar21 = auStack_a8;
    while (puVar15 != auStack_a8 + -(sVar18 + 0xf & 0xfffffffffffff000)) {
      puVar14 = puVar21 + -0x1000;
      *(undefined8 *)(puVar21 + -8) = *(undefined8 *)(puVar21 + -8);
      puVar15 = puVar21 + -0x1000;
      puVar21 = puVar21 + -0x1000;
    }
    uVar6 = (ulong)((uint)(sVar18 + 0xf) & 0xff0);
    lVar10 = -uVar6;
    puVar21 = puVar14 + lVar10;
    puVar27 = puVar14 + lVar10;
    puVar17 = puVar14 + lVar10;
    if (uVar6 != 0) {
      *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
    }
    pcVar24 = &local_49;
    local_48 = puVar14 + sVar18 + lVar10;
    local_49 = '\0';
    if (param_4 == '\0') {
      pcVar24 = (char *)0x0;
    }
    lVar11 = lVar8;
    lVar20 = lVar8;
    do {
      lVar4 = *(long *)((long)param_1 + lVar20 * 8);
      if ((*(byte *)(lVar4 + 0x31d) & 0x21) == 0) {
        *(undefined8 *)(puVar14 + lVar10 + -8) = 0x78007d;
        dfs_traversal_part_0(&local_48,lVar4,pcVar24);
      }
      if (puVar21 == local_48) {
        if (local_49 != '\0') {
          pvVar19 = (void *)(sVar18 + (long)param_1);
          do {
            lVar20 = lVar11 * 8;
            lVar11 = lVar11 + -1;
            *(byte *)(*(long *)(puVar21 + lVar20) + 0x31d) =
                 *(byte *)(*(long *)(puVar21 + lVar20) + 0x31d) & 0xfe;
          } while (-1 < (int)lVar11);
          ppvVar9 = local_40;
          local_40[0] = pvVar19;
          while( true ) {
            lVar11 = *(long *)(puVar21 + lVar8 * 8);
            if ((*(byte *)(lVar11 + 0x31d) & 0x21) == 0) {
              *(undefined8 *)(puVar14 + lVar10 + -8) = 0x7800d1;
              dfs_traversal_part_0(ppvVar9,lVar11,0);
              pvVar19 = local_40[0];
            }
            if (param_1 == pvVar19) break;
            lVar8 = lVar8 + -1;
            if ((int)lVar8 < 0) {
                    /* WARNING: Subroutine does not return */
              *(code **)(puVar14 + lVar10 + -8) = __thread_gscope_wait;
              __assert_fail("maps_head == maps","dl-sort-maps.c",0x110,"_dl_sort_maps_dfs");
            }
          }
          return;
        }
        goto LAB_0078015e;
      }
      lVar20 = lVar20 + -1;
    } while (-1 < (int)lVar20);
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar17 + -8) = 0x78015e;
  __assert_fail("rpo_head == rpo","dl-sort-maps.c",0xf1,"_dl_sort_maps_dfs");
}

