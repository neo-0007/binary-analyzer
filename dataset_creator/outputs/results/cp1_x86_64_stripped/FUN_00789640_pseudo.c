
void FUN_00789640(long param_1,uint param_2,uint param_3,char param_4)

{
  byte *pbVar1;
  ushort uVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint uVar22;
  char *pcVar23;
  uint uVar24;
  ulong uVar25;
  undefined1 *puVar26;
  undefined1 auStack_a8 [8];
  undefined1 *local_a0;
  long *local_98;
  ulong local_90;
  long local_88;
  uint local_80;
  int local_7c;
  ulong local_78;
  ulong local_70;
  long local_68;
  uint local_60;
  char local_59;
  char local_49;
  undefined1 *local_48;
  long local_40 [2];
  undefined1 *puVar15;
  
  puVar20 = auStack_a8;
  puVar14 = auStack_a8;
  puVar26 = auStack_a8;
  local_a0 = auStack_a8;
  puVar13 = auStack_a8;
  puVar15 = auStack_a8;
  puVar16 = auStack_a8;
  local_59 = param_4;
  if (DAT_0094ae50 == 0) {
    local_60 = param_2 - param_3;
    if (1 < local_60) {
      local_68 = param_1 + (ulong)param_3 * 8;
      uVar6 = (ulong)local_60 * 2 + 0xf;
      puVar20 = auStack_a8;
      while (puVar13 != auStack_a8 + -(uVar6 & 0xfffffffffffff000)) {
        puVar26 = puVar20 + -0x1000;
        *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
        puVar13 = puVar20 + -0x1000;
        puVar20 = puVar20 + -0x1000;
      }
      uVar6 = (ulong)((uint)uVar6 & 0xff0);
      lVar10 = -uVar6;
      if (uVar6 != 0) {
        *(undefined8 *)(puVar26 + -8) = *(undefined8 *)(puVar26 + -8);
      }
      *(undefined8 *)(puVar26 + lVar10 + -8) = 0x7896eb;
      thunk_FUN_00713720((long)puVar26 + lVar10,0);
      local_80 = local_60 - 1;
      local_98 = (long *)(local_68 + (ulong)local_80 * 8);
      uVar6 = 0;
      uVar25 = 1;
      uVar22 = 0;
LAB_00789710:
      uVar2 = *(ushort *)(puVar26 + uVar6 * 2 + lVar10);
      *(short *)(puVar26 + uVar6 * 2 + lVar10) = (short)(uVar2 + 1);
      plVar9 = (long *)(local_68 + uVar6 * 8);
      lVar18 = *plVar9;
      uVar24 = (uint)uVar25;
      if (((local_59 == '\0') ||
          ((lVar18 == *(long *)(lVar18 + 0x28) && (*(int *)(lVar18 + 0x3f4) != -1)))) &&
         (plVar12 = local_98, uVar21 = local_80, uVar22 < local_80)) {
        do {
          lVar8 = *plVar12;
          plVar7 = *(long **)(lVar8 + 0x3d0);
          if (plVar7 != (long *)0x0) {
            while (lVar11 = *plVar7, lVar11 != 0) {
              plVar7 = plVar7 + 1;
              if (lVar18 == lVar11) goto LAB_007897a1;
            }
          }
          if ((local_59 != '\0') && (puVar3 = *(uint **)(lVar8 + 0x3d8), puVar3 != (uint *)0x0)) {
            uVar5 = *puVar3;
            do {
              uVar5 = uVar5 - 1;
              if (uVar5 == 0xffffffff) goto LAB_0078975e;
            } while (lVar18 != *(long *)(puVar3 + (ulong)uVar5 * 2 + 2));
            plVar7 = *(long **)(lVar18 + 0x3d0);
            if (plVar7 == (long *)0x0) {
LAB_007897a1:
              local_78 = (ulong)(uVar21 - uVar22);
              *(undefined8 *)(puVar26 + lVar10 + -8) = 0x7897d5;
              local_90 = uVar6;
              local_88 = lVar18;
              local_7c = uVar2 + 1;
              local_70 = uVar25;
              thunk_FUN_00713610(plVar9,local_68 + uVar25 * 8,local_78 * 8);
              uVar2 = *(ushort *)(puVar26 + local_70 * 2 + lVar10);
              *plVar12 = local_88;
              uVar6 = local_70;
              if (local_60 - uVar22 < (uint)uVar2) goto LAB_007897fd;
              lVar8 = local_78 * 2;
              local_78 = CONCAT44(local_78._4_4_,local_7c);
              lVar18 = local_70 * 2;
              local_70 = local_90;
              *(undefined8 *)(puVar26 + lVar10 + -8) = 0x789838;
              thunk_FUN_00713610(puVar26 + local_90 * 2 + lVar10,puVar26 + lVar18 + lVar10,lVar8);
              *(short *)(puVar26 + (ulong)uVar21 * 2 + lVar10) = (short)local_78;
              uVar6 = local_70;
              goto LAB_00789710;
            }
            do {
              lVar11 = *plVar7;
              if (lVar11 == 0) goto LAB_007897a1;
              plVar7 = plVar7 + 1;
            } while (lVar8 != lVar11);
          }
LAB_0078975e:
          uVar21 = uVar21 - 1;
          plVar12 = plVar12 + -1;
        } while (uVar22 != uVar21);
      }
      uVar6 = uVar25;
      if (local_60 != uVar24) {
LAB_007897fd:
        *(undefined8 *)(puVar26 + lVar10 + -8) = 0x789814;
        thunk_FUN_00713720(puVar26 + uVar6 * 2 + lVar10,0,(ulong)(local_60 - uVar24) * 2);
        uVar6 = uVar25;
        uVar25 = (ulong)(uVar24 + 1);
        uVar22 = uVar24;
        goto LAB_00789710;
      }
    }
    return;
  }
  lVar18 = (ulong)param_2 * 8;
  lVar8 = (long)(int)(param_2 - 1);
  lVar10 = lVar8;
  if ((int)(param_2 - 1) < 0) {
    puVar14 = auStack_a8;
    while (puVar16 != auStack_a8 + -(lVar18 + 0xfU & 0xfffffffffffff000)) {
      puVar20 = puVar14 + -0x1000;
      *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
      puVar16 = puVar14 + -0x1000;
      puVar14 = puVar14 + -0x1000;
    }
    uVar6 = (ulong)((uint)(lVar18 + 0xfU) & 0xff0);
    lVar10 = -uVar6;
    puVar17 = puVar20 + lVar10;
    puVar26 = puVar20 + lVar10;
    if (uVar6 != 0) {
      *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
    }
    local_49 = '\0';
    local_48 = puVar20 + lVar18 + lVar10;
    if (local_48 == puVar20 + lVar10) {
LAB_00789a8e:
      *(undefined8 *)(puVar26 + -8) = 0x789a9c;
      thunk_FUN_00713a50(param_1,puVar26,lVar18);
      return;
    }
  }
  else {
    do {
      lVar11 = lVar10 + -1;
      pbVar1 = (byte *)(*(long *)(param_1 + lVar10 * 8) + 0x31d);
      *pbVar1 = *pbVar1 & 0xfe;
      lVar10 = lVar11;
    } while (-1 < (int)lVar11);
    puVar20 = auStack_a8;
    while (puVar15 != auStack_a8 + -(lVar18 + 0xfU & 0xfffffffffffff000)) {
      puVar14 = puVar20 + -0x1000;
      *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
      puVar15 = puVar20 + -0x1000;
      puVar20 = puVar20 + -0x1000;
    }
    uVar6 = (ulong)((uint)(lVar18 + 0xfU) & 0xff0);
    lVar10 = -uVar6;
    puVar20 = puVar14 + lVar10;
    puVar26 = puVar14 + lVar10;
    puVar17 = puVar14 + lVar10;
    if (uVar6 != 0) {
      *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
    }
    pcVar23 = &local_49;
    local_48 = puVar14 + lVar18 + lVar10;
    local_49 = '\0';
    if (param_4 == '\0') {
      pcVar23 = (char *)0x0;
    }
    lVar11 = lVar8;
    lVar19 = lVar8;
    do {
      lVar4 = *(long *)(param_1 + lVar19 * 8);
      if ((*(byte *)(lVar4 + 0x31d) & 0x21) == 0) {
        *(undefined8 *)(puVar14 + lVar10 + -8) = 0x7899ad;
        FUN_00789530(&local_48,lVar4,pcVar23);
      }
      if (puVar20 == local_48) {
        if (local_49 != '\0') {
          lVar18 = lVar18 + param_1;
          do {
            lVar19 = lVar11 * 8;
            lVar11 = lVar11 + -1;
            *(byte *)(*(long *)(puVar20 + lVar19) + 0x31d) =
                 *(byte *)(*(long *)(puVar20 + lVar19) + 0x31d) & 0xfe;
          } while (-1 < (int)lVar11);
          plVar9 = local_40;
          local_40[0] = lVar18;
          while( true ) {
            lVar11 = *(long *)(puVar20 + lVar8 * 8);
            if ((*(byte *)(lVar11 + 0x31d) & 0x21) == 0) {
              *(undefined8 *)(puVar14 + lVar10 + -8) = 0x789a01;
              FUN_00789530(plVar9,lVar11,0);
              lVar18 = local_40[0];
            }
            if (param_1 == lVar18) break;
            lVar8 = lVar8 + -1;
            if ((int)lVar8 < 0) {
                    /* WARNING: Subroutine does not return */
              *(code **)(puVar14 + lVar10 + -8) = FUN_00789ac0;
              FUN_006e2220("maps_head == maps","dl-sort-maps.c",0x110,"_dl_sort_maps_dfs");
            }
          }
          return;
        }
        goto LAB_00789a8e;
      }
      lVar19 = lVar19 + -1;
    } while (-1 < (int)lVar19);
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar17 + -8) = 0x789a8e;
  FUN_006e2220("rpo_head == rpo","dl-sort-maps.c",0xf1,"_dl_sort_maps_dfs");
}

