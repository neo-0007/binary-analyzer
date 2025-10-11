
undefined8 FUN_006f3150(long param_1,long param_2,ulong param_3,ulong *param_4,long param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  undefined1 *puVar11;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  long *plVar16;
  long lVar17;
  long in_FS_OFFSET;
  ulong local_88;
  long local_80;
  ulong *local_78;
  ulong *local_70;
  ulong local_68;
  long local_60;
  ulong *local_58;
  long local_50;
  long local_40;
  undefined1 *puVar12;
  
  puVar14 = &local_88;
  puVar10 = &local_88;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0;
  local_60 = param_1;
  local_58 = param_4;
  if (0x1f < param_5) {
    local_70 = (ulong *)(param_5 * 0x10 + 0x17);
    puVar13 = &local_88;
    while (puVar10 != (ulong *)((long)&local_88 - ((ulong)local_70 & 0xfffffffffffff000))) {
      puVar14 = (ulong *)((long)puVar13 + -0x1000);
      *(undefined8 *)((long)puVar13 + -8) = *(undefined8 *)((long)puVar13 + -8);
      puVar10 = (ulong *)((long)puVar13 + -0x1000);
      puVar13 = (ulong *)((long)puVar13 + -0x1000);
    }
    uVar6 = (ulong)((int)(param_5 * 0x10) + 0x10U & 0xfff);
    lVar9 = -uVar6;
    puVar11 = (undefined1 *)((long)puVar14 + lVar9);
    puVar12 = (undefined1 *)((long)puVar14 + lVar9);
    puVar13 = (ulong *)((long)puVar14 + lVar9);
    if (uVar6 != 0) {
      *(undefined8 *)((long)puVar14 + -8) = *(undefined8 *)((long)puVar14 + -8);
    }
    local_68 = (ulong)((long)puVar14 + lVar9 + 0xf) & 0xfffffffffffffff0;
    lVar17 = param_3 - param_5;
    *(undefined8 *)((long)puVar14 + lVar9 + -8) = 0x6f326b;
    FUN_006f3850(param_1,param_2,param_4,param_5,local_68);
    local_50 = param_5 * 8;
    plVar16 = (long *)(param_1 + local_50);
    param_2 = param_2 + local_50;
    if (param_5 <= lVar17) {
      puVar1 = (undefined1 *)((long)puVar14 + lVar9);
      while (puVar11 !=
             (undefined1 *)((long)puVar14 + (lVar9 - ((ulong)local_70 & 0xfffffffffffff000)))) {
        puVar12 = puVar1 + -0x1000;
        *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
        puVar11 = puVar1 + -0x1000;
        puVar1 = puVar1 + -0x1000;
      }
      uVar6 = (ulong)((uint)local_70 & 0xff0);
      lVar9 = -uVar6;
      puVar13 = (ulong *)(puVar12 + lVar9);
      if (uVar6 != 0) {
        *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
      }
      uVar6 = (ulong)(puVar12 + lVar9 + 0xf) & 0xfffffffffffffff0;
      local_70 = (ulong *)(local_50 + uVar6);
      local_78 = local_70 + 1;
      local_80 = param_5 + -1;
      local_88 = param_3;
      do {
        *(undefined8 *)(puVar12 + lVar9 + -8) = 0x6f3316;
        FUN_006f3850(uVar6,param_2,local_58,param_5,local_68);
        *(undefined8 *)(puVar12 + lVar9 + -8) = 0x6f3327;
        uVar2 = FUN_006f2e30(plVar16,plVar16,uVar6,param_5);
        plVar16 = (long *)((long)plVar16 + local_50);
        puVar14 = (ulong *)(plVar16 + 1);
        uVar4 = *local_70;
        *plVar16 = uVar2 + *local_70;
        puVar5 = local_78;
        if (CARRY8(uVar2,uVar4)) {
          lVar7 = param_5 + -1;
          puVar15 = puVar14;
          do {
            uVar4 = *puVar5;
            puVar14 = puVar15 + 1;
            puVar5 = puVar5 + 1;
            *puVar15 = uVar4 + 1;
            if (uVar4 + 1 != 0) {
              if ((puVar5 != puVar14) && (lVar8 = lVar7 + -1, 0 < lVar7 + -1)) goto LAB_006f3594;
              break;
            }
            lVar7 = lVar7 + -1;
            puVar15 = puVar14;
          } while (lVar7 != 0);
        }
        else {
          lVar8 = local_80;
          if (puVar14 != local_78) {
LAB_006f3594:
            lVar7 = lVar8 * 8;
            if (lVar8 < 1) {
              lVar7 = 8;
            }
            *(undefined8 *)(puVar12 + lVar9 + -8) = 0x6f35b0;
            thunk_FUN_00713a50(puVar14,puVar5,lVar7);
          }
        }
        lVar17 = lVar17 - param_5;
        param_2 = param_2 + local_50;
        param_3 = local_88;
      } while (param_5 <= lVar17);
    }
    uVar6 = local_68;
    if (lVar17 != 0) {
      *(undefined8 *)((long)puVar13 + -8) = 0x6f3461;
      FUN_006f3150(local_68,local_58,param_5,param_2,lVar17);
      *(undefined8 *)((long)puVar13 + -8) = 0x6f3472;
      uVar4 = FUN_006f2e30(plVar16,plVar16,uVar6,param_5);
      puVar5 = (ulong *)(uVar6 + local_50);
      uVar6 = *puVar5;
      puVar14 = puVar5 + 1;
      *(long *)(local_50 + (long)plVar16) = uVar4 + *puVar5;
      puVar5 = (ulong *)((long *)(local_50 + (long)plVar16) + 1);
      puVar15 = puVar5;
      if (CARRY8(uVar4,uVar6)) {
        do {
          lVar17 = lVar17 + -1;
          if (lVar17 == 0) goto LAB_006f3394;
          uVar6 = *puVar14;
          puVar5 = puVar15 + 1;
          puVar14 = puVar14 + 1;
          *puVar15 = uVar6 + 1;
          puVar15 = puVar5;
        } while (uVar6 + 1 == 0);
      }
      if ((puVar5 != puVar14) && (1 < lVar17)) {
        *(undefined8 *)((long)puVar13 + -8) = 0x6f34be;
        thunk_FUN_00713a50(puVar5,puVar14,lVar17 * 8 + -8);
      }
    }
LAB_006f3394:
    uVar3 = *(undefined8 *)(local_60 + -8 + (param_5 + param_3) * 8);
    goto LAB_006f3190;
  }
  puVar13 = &local_88;
  if (param_5 == 0) goto LAB_006f3190;
  if (1 < *param_4) {
    uVar3 = FUN_006f35e0();
    goto LAB_006f33ad;
  }
  if (*param_4 == 1) {
    if ((long)param_3 < 1) goto LAB_006f31df;
    if ((param_3 - 1 < 3) || (param_1 == param_2 + 8)) {
      uVar6 = 0;
      do {
        *(undefined8 *)(param_1 + uVar6 * 8) = *(undefined8 *)(param_2 + uVar6 * 8);
        uVar6 = uVar6 + 1;
      } while (param_3 != uVar6);
      uVar3 = 0;
    }
    else {
      lVar9 = 0;
      do {
        uVar3 = ((undefined8 *)(param_2 + lVar9))[1];
        *(undefined8 *)(param_1 + lVar9) = *(undefined8 *)(param_2 + lVar9);
        ((undefined8 *)(param_1 + lVar9))[1] = uVar3;
        lVar9 = lVar9 + 0x10;
      } while (lVar9 != (param_3 >> 1) * 0x10);
      if ((param_3 & 1) == 0) goto LAB_006f31df;
      *(undefined8 *)(param_1 + (param_3 & 0xfffffffffffffffe) * 8) =
           *(undefined8 *)(param_2 + (param_3 & 0xfffffffffffffffe) * 8);
      uVar3 = 0;
    }
  }
  else {
    if (0 < (long)param_3) {
      thunk_FUN_00713720(param_1,0,param_3 * 8);
    }
LAB_006f31df:
    uVar3 = 0;
  }
LAB_006f33ad:
  *(undefined8 *)(local_60 + param_3 * 8) = uVar3;
  lVar9 = local_60 + 8;
  puVar13 = &local_88;
  if (1 < param_5) {
    local_50 = local_60 + param_5 * 8;
    puVar14 = local_58;
    do {
      puVar14 = puVar14 + 1;
      if (*puVar14 < 2) {
        uVar3 = 0;
        if (*puVar14 == 1) {
          uVar3 = FUN_006f2e30(lVar9,lVar9,param_2,param_3);
        }
      }
      else {
        uVar3 = FUN_00791fe0(lVar9,param_2,param_3);
      }
      *(undefined8 *)(lVar9 + param_3 * 8) = uVar3;
      lVar9 = lVar9 + 8;
      puVar13 = &local_88;
    } while (local_50 != lVar9);
  }
LAB_006f3190:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)puVar13 + -8) = &UNK_006f35d4;
  FUN_00771f60();
}

