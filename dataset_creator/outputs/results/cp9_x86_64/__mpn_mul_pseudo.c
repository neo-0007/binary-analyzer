
undefined8 __mpn_mul(void *param_1,long param_2,ulong param_3,ulong *param_4,long param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  ulong *puVar11;
  undefined1 *puVar12;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  size_t __n;
  long *plVar17;
  long lVar18;
  long in_FS_OFFSET;
  ulong local_88;
  long local_80;
  ulong *local_78;
  ulong *local_70;
  ulong local_68;
  void *local_60;
  ulong *local_58;
  void *local_50;
  long local_40;
  undefined1 *puVar13;
  
  puVar15 = &local_88;
  puVar11 = &local_88;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0;
  local_60 = param_1;
  local_58 = param_4;
  if (0x1f < param_5) {
    local_70 = (ulong *)(param_5 * 0x10 + 0x17);
    puVar14 = &local_88;
    while (puVar11 != (ulong *)((long)&local_88 - ((ulong)local_70 & 0xfffffffffffff000))) {
      puVar15 = (ulong *)((long)puVar14 + -0x1000);
      *(undefined8 *)((long)puVar14 + -8) = *(undefined8 *)((long)puVar14 + -8);
      puVar11 = (ulong *)((long)puVar14 + -0x1000);
      puVar14 = (ulong *)((long)puVar14 + -0x1000);
    }
    uVar7 = (ulong)((int)(param_5 * 0x10) + 0x10U & 0xfff);
    lVar6 = -uVar7;
    puVar12 = (undefined1 *)((long)puVar15 + lVar6);
    puVar13 = (undefined1 *)((long)puVar15 + lVar6);
    puVar14 = (ulong *)((long)puVar15 + lVar6);
    if (uVar7 != 0) {
      *(undefined8 *)((long)puVar15 + -8) = *(undefined8 *)((long)puVar15 + -8);
    }
    local_68 = (ulong)((long)puVar15 + lVar6 + 0xf) & 0xfffffffffffffff0;
    lVar18 = param_3 - param_5;
    *(undefined8 *)((long)puVar15 + lVar6 + -8) = 0x6e985b;
    __mpn_impn_mul_n(param_1,param_2,param_4,param_5,local_68);
    local_50 = (void *)(param_5 * 8);
    plVar17 = (long *)((long)param_1 + (long)local_50);
    param_2 = param_2 + (long)local_50;
    if (param_5 <= lVar18) {
      puVar1 = (undefined1 *)((long)puVar15 + lVar6);
      while (puVar12 !=
             (undefined1 *)((long)puVar15 + (lVar6 - ((ulong)local_70 & 0xfffffffffffff000)))) {
        puVar13 = puVar1 + -0x1000;
        *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
        puVar12 = puVar1 + -0x1000;
        puVar1 = puVar1 + -0x1000;
      }
      uVar7 = (ulong)((uint)local_70 & 0xff0);
      lVar6 = -uVar7;
      puVar14 = (ulong *)(puVar13 + lVar6);
      if (uVar7 != 0) {
        *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
      }
      uVar7 = (ulong)(puVar13 + lVar6 + 0xf) & 0xfffffffffffffff0;
      local_70 = (ulong *)((long)local_50 + uVar7);
      local_78 = local_70 + 1;
      local_80 = param_5 + -1;
      local_88 = param_3;
      do {
        *(undefined8 *)(puVar13 + lVar6 + -8) = 0x6e9906;
        __mpn_impn_mul_n(uVar7,param_2,local_58,param_5,local_68);
        *(undefined8 *)(puVar13 + lVar6 + -8) = 0x6e9917;
        uVar2 = __mpn_add_n(plVar17,plVar17,uVar7,param_5);
        plVar17 = (long *)((long)plVar17 + (long)local_50);
        puVar15 = (ulong *)(plVar17 + 1);
        uVar4 = *local_70;
        *plVar17 = uVar2 + *local_70;
        puVar5 = local_78;
        if (CARRY8(uVar2,uVar4)) {
          lVar8 = param_5 + -1;
          puVar16 = puVar15;
          do {
            uVar4 = *puVar5;
            puVar15 = puVar16 + 1;
            puVar5 = puVar5 + 1;
            *puVar16 = uVar4 + 1;
            if (uVar4 + 1 != 0) {
              if ((puVar5 != puVar15) && (lVar9 = lVar8 + -1, 0 < lVar8 + -1)) goto LAB_006e9b84;
              break;
            }
            lVar8 = lVar8 + -1;
            puVar16 = puVar15;
          } while (lVar8 != 0);
        }
        else {
          lVar9 = local_80;
          if (puVar15 != local_78) {
LAB_006e9b84:
            __n = lVar9 * 8;
            if (lVar9 < 1) {
              __n = 8;
            }
            *(undefined8 *)(puVar13 + lVar6 + -8) = 0x6e9ba0;
            memcpy(puVar15,puVar5,__n);
          }
        }
        lVar18 = lVar18 - param_5;
        param_2 = param_2 + (long)local_50;
        param_3 = local_88;
      } while (param_5 <= lVar18);
    }
    uVar7 = local_68;
    if (lVar18 != 0) {
      *(undefined8 *)((long)puVar14 + -8) = 0x6e9a51;
      __mpn_mul(local_68,local_58,param_5,param_2,lVar18);
      *(undefined8 *)((long)puVar14 + -8) = 0x6e9a62;
      uVar4 = __mpn_add_n(plVar17,plVar17,uVar7,param_5);
      puVar5 = (ulong *)(uVar7 + (long)local_50);
      uVar7 = *puVar5;
      puVar15 = puVar5 + 1;
      *(long *)((long)local_50 + (long)plVar17) = uVar4 + *puVar5;
      puVar5 = (ulong *)((long *)((long)local_50 + (long)plVar17) + 1);
      puVar16 = puVar5;
      if (CARRY8(uVar4,uVar7)) {
        do {
          lVar18 = lVar18 + -1;
          if (lVar18 == 0) goto LAB_006e9984;
          uVar7 = *puVar15;
          puVar5 = puVar16 + 1;
          puVar15 = puVar15 + 1;
          *puVar16 = uVar7 + 1;
          puVar16 = puVar5;
        } while (uVar7 + 1 == 0);
      }
      if ((puVar5 != puVar15) && (1 < lVar18)) {
        *(undefined8 *)((long)puVar14 + -8) = 0x6e9aae;
        memcpy(puVar5,puVar15,lVar18 * 8 - 8);
      }
    }
LAB_006e9984:
    uVar3 = *(undefined8 *)((long)local_60 + (param_5 + param_3) * 8 + -8);
    goto LAB_006e9780;
  }
  puVar14 = &local_88;
  if (param_5 == 0) goto LAB_006e9780;
  if (1 < *param_4) {
    uVar3 = __mpn_mul_1();
    goto LAB_006e999d;
  }
  if (*param_4 == 1) {
    if ((long)param_3 < 1) goto LAB_006e97cf;
    if ((param_3 - 1 < 3) || (param_1 == (void *)(param_2 + 8))) {
      uVar7 = 0;
      do {
        *(undefined8 *)((long)param_1 + uVar7 * 8) = *(undefined8 *)(param_2 + uVar7 * 8);
        uVar7 = uVar7 + 1;
      } while (param_3 != uVar7);
      uVar3 = 0;
    }
    else {
      lVar6 = 0;
      do {
        uVar3 = ((undefined8 *)(param_2 + lVar6))[1];
        *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)(param_2 + lVar6);
        ((undefined8 *)((long)param_1 + lVar6))[1] = uVar3;
        lVar6 = lVar6 + 0x10;
      } while (lVar6 != (param_3 >> 1) * 0x10);
      if ((param_3 & 1) == 0) goto LAB_006e97cf;
      *(undefined8 *)((long)param_1 + (param_3 & 0xfffffffffffffffe) * 8) =
           *(undefined8 *)(param_2 + (param_3 & 0xfffffffffffffffe) * 8);
      uVar3 = 0;
    }
  }
  else {
    if (0 < (long)param_3) {
      memset(param_1,0,param_3 * 8);
    }
LAB_006e97cf:
    uVar3 = 0;
  }
LAB_006e999d:
  *(undefined8 *)((long)local_60 + param_3 * 8) = uVar3;
  pvVar10 = (void *)((long)local_60 + 8);
  puVar14 = &local_88;
  if (1 < param_5) {
    local_50 = (void *)((long)local_60 + param_5 * 8);
    puVar15 = local_58;
    do {
      puVar15 = puVar15 + 1;
      if (*puVar15 < 2) {
        uVar3 = 0;
        if (*puVar15 == 1) {
          uVar3 = __mpn_add_n(pvVar10,pvVar10,param_2,param_3);
        }
      }
      else {
        uVar3 = __mpn_addmul_1(pvVar10,param_2,param_3);
      }
      *(undefined8 *)((long)pvVar10 + param_3 * 8) = uVar3;
      pvVar10 = (void *)((long)pvVar10 + 8);
      puVar14 = &local_88;
    } while (local_50 != pvVar10);
  }
LAB_006e9780:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)puVar14 + -8) = &UNK_006e9bc4;
  __stack_chk_fail_local();
}

