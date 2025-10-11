
int FUN_006d2a00(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined2 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar12;
  long lVar13;
  char *pcVar14;
  undefined4 uVar15;
  char *pcVar16;
  long in_FS_OFFSET;
  undefined1 auStack_98 [8];
  undefined8 *local_90;
  int local_84;
  ulong *local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_50;
  ulong local_48;
  long local_40;
  undefined1 *puVar11;
  
  puVar11 = auStack_98;
  puVar10 = auStack_98;
  pcVar14 = (char *)param_1[1];
  cVar1 = *(char *)(param_1 + 2);
  bVar2 = *(byte *)((long)param_1 + 0x11);
  pcVar16 = (char *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar12 = auStack_98;
  local_90 = param_2;
  if (((*pcVar14 == '/') && (puVar12 = auStack_98, pcVar14[1] == '/')) &&
     (puVar12 = auStack_98, pcVar14[2] == '\0')) {
    local_60 = *(ulong *)(**(long **)(in_FS_OFFSET + -0xd8) + 0xb0);
    lVar5 = thunk_FUN_007129d0(local_60);
    puVar12 = auStack_98;
    while (puVar11 != auStack_98 + -(lVar5 + 0x1aU & 0xfffffffffffff000)) {
      puVar10 = puVar12 + -0x1000;
      *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
      puVar11 = puVar12 + -0x1000;
      puVar12 = puVar12 + -0x1000;
    }
    uVar9 = (ulong)((uint)(lVar5 + 0x1aU) & 0xff0);
    lVar13 = -uVar9;
    puVar12 = puVar10 + lVar13;
    if (uVar9 != 0) {
      *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
    }
    pcVar14 = (char *)((ulong)(puVar10 + lVar13 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)(puVar10 + lVar13 + -8) = 0x6d2adb;
    puVar6 = (undefined2 *)thunk_FUN_00713820(pcVar14,local_60,lVar5);
    *puVar6 = 0x2f2f;
    *(undefined1 *)(puVar6 + 1) = 0;
  }
  if (((*pcVar16 == '/') && (pcVar16[1] == '/')) && (pcVar16[2] == '\0')) {
    uVar9 = *(ulong *)(**(long **)(in_FS_OFFSET + -0xd8) + 0xb0);
    local_60 = uVar9;
    *(undefined8 *)(puVar12 + -8) = 0x6d2b31;
    lVar5 = thunk_FUN_007129d0(uVar9);
    uVar9 = local_60;
    for (puVar10 = puVar12; puVar10 != puVar12 + -(lVar5 + 0x1aU & 0xfffffffffffff000);
        puVar10 = puVar10 + -0x1000) {
      *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
    }
    uVar8 = (ulong)((uint)(lVar5 + 0x1aU) & 0xff0);
    lVar13 = -uVar8;
    puVar12 = puVar10 + lVar13;
    if (uVar8 != 0) {
      *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
    }
    pcVar16 = (char *)((ulong)(puVar10 + lVar13 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)(puVar10 + lVar13 + -8) = 0x6d2b8c;
    puVar6 = (undefined2 *)thunk_FUN_00713820(pcVar16,uVar9,lVar5);
    *puVar6 = 0x2f2f;
    *(undefined1 *)(puVar6 + 1) = 0;
  }
  *(undefined8 *)(puVar12 + -8) = 0x6d2bb6;
  local_84 = FUN_006d3fc0(pcVar14,pcVar16,&local_50,&local_48,param_3);
  uVar9 = local_48;
  local_80 = (ulong *)0x0;
  if (local_84 != 0) goto LAB_006d2bc5;
  local_68 = local_48;
  lVar5 = local_48 * 0x30;
  *(undefined8 *)(puVar12 + -8) = 0x6d2c1d;
  puVar7 = (ulong *)FUN_007101b0(lVar5 + 0x10);
  local_70 = local_50;
  local_78 = local_50;
  if (puVar7 != (ulong *)0x0) {
    puVar7[1] = local_50;
    *puVar7 = uVar9;
    local_80 = puVar7;
    *(undefined8 *)(puVar12 + -8) = 0x6d2c4e;
    thunk_FUN_00713720(puVar7 + 2,0,lVar5);
    if (uVar9 != 0) {
      local_60 = CONCAT44(local_60._4_4_,(uint)bVar2 + (uint)bVar2);
      if (cVar1 == '\0') {
        lVar5 = 0;
        uVar9 = 0;
        puVar7 = puVar7 + 7;
        while( true ) {
          puVar7[-1] = (ulong)puVar7;
          if (local_68 == uVar9 + 1) break;
          *(uint *)(puVar7 + -3) = (uint)local_60;
          lVar13 = (long)(*(int *)(local_70 + 0x54 + lVar5) * 0x1fe0);
          *(undefined8 *)(puVar12 + -8) = 0x6d2c97;
          uVar8 = FUN_007101b0(lVar13);
          puVar7[-5] = uVar8;
          if (uVar8 == 0) goto LAB_006d2db3;
          lVar5 = lVar5 + 0x68;
          puVar7[-4] = uVar8 + lVar13;
          uVar9 = uVar9 + 1;
          puVar7 = puVar7 + 6;
        }
LAB_006d2cc4:
        *(uint *)(local_80 + uVar9 * 6 + 4) = (uint)local_60 | 1;
      }
      else {
        lVar5 = 0;
        uVar9 = 0;
        puVar7 = local_80 + 7;
        do {
          puVar7[-1] = (ulong)puVar7;
          uVar3 = *(undefined8 *)(local_78 + 0x18 + lVar5);
          *(undefined8 *)(puVar12 + -8) = 0x6d2d70;
          iVar4 = thunk_FUN_007139b0(uVar3,"INTERNAL",&PTR_PTR_00939c40);
          if (iVar4 == 0) {
            local_60 = local_60 | 8;
          }
          local_68 = local_48;
          if (local_48 - 1 <= uVar9) goto LAB_006d2cc4;
          *(uint *)(puVar7 + -3) = (uint)local_60;
          local_78 = local_50;
          uVar8 = (ulong)(*(int *)(local_50 + 0x54 + lVar5) * 0x1fe0);
          local_70 = uVar8;
          *(undefined8 *)(puVar12 + -8) = 0x6d2d27;
          uVar8 = FUN_007101b0(uVar8);
          puVar7[-5] = uVar8;
          if (uVar8 == 0) goto LAB_006d2db3;
          uVar9 = uVar9 + 1;
          lVar5 = lVar5 + 0x68;
          puVar7[-4] = uVar8 + local_70;
          puVar7 = puVar7 + 6;
        } while (uVar9 < local_68);
      }
    }
    goto LAB_006d2bc5;
  }
  uVar15 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  local_80 = puVar7;
LAB_006d2e03:
  local_70 = local_50;
  *(undefined8 *)(puVar12 + -8) = 0x6d2e0c;
  FUN_006d4220(local_50,local_48);
  *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar15;
  local_84 = 3;
  local_80 = (ulong *)0x0;
LAB_006d2bc5:
  *local_90 = local_80;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_84;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar12 + -8) = 0x6d2e2a;
  FUN_00771f60();
LAB_006d2db3:
  lVar5 = uVar9 - 1;
  uVar15 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  if (uVar9 != 0) {
    puVar7 = local_80 + uVar9 * 6 + -4;
    do {
      uVar9 = *puVar7;
      lVar5 = lVar5 + -1;
      puVar7 = puVar7 + -6;
      *(undefined8 *)(puVar12 + -8) = 0x6d2de9;
      FUN_007104f0(uVar9);
    } while (lVar5 != -1);
  }
  puVar7 = local_80;
  *(undefined8 *)(puVar12 + -8) = 0x6d2df8;
  FUN_007104f0(puVar7);
  goto LAB_006d2e03;
}

