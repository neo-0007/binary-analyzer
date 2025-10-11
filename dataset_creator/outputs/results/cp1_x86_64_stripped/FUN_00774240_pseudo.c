
uint FUN_00774240(undefined4 *param_1,undefined2 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  ulong uVar12;
  uint uVar13;
  long in_FS_OFFSET;
  undefined1 local_10d8 [4096];
  undefined1 auStack_d8 [8];
  undefined8 *local_d0;
  uint *local_c8;
  uint local_c0;
  char local_b9;
  undefined1 local_b4 [4];
  int local_b0;
  uint *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  uint **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_68;
  undefined4 local_58;
  undefined2 local_54;
  undefined2 local_52;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined2 local_47;
  undefined1 local_45;
  long local_40;
  undefined1 *puVar11;
  
  puVar10 = auStack_d8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar11 = auStack_d8;
  puVar3 = auStack_d8;
  while (puVar11 != local_10d8) {
    puVar10 = puVar3 + -0x1000;
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
    puVar11 = puVar3 + -0x1000;
    puVar3 = puVar3 + -0x1000;
  }
  *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
  local_a0 = 0x1000;
  local_c8 = (uint *)((ulong)(puVar10 + -1) & 0xfffffffffffffff0);
  local_50 = param_1[2];
  local_a8 = local_c8;
  if (param_1[2] == 0) {
    *(undefined8 *)(puVar10 + -0x18) = 0x7742d6;
    FUN_00767f90(5,&local_98);
    param_1[2] = (int)local_98;
    local_50 = (int)local_98;
  }
  local_58 = 0x14;
  local_52 = 0x301;
  local_4c = 0;
  local_48 = 0;
  local_47 = 0;
  local_45 = 0;
  local_90 = 0;
  local_98 = &DAT_00000010;
  local_54 = param_2;
  do {
    uVar1 = *param_1;
    *(undefined8 *)(puVar10 + -0x18) = 0x77436b;
    lVar4 = FUN_007abf40(uVar1,&local_58,0x14,0,&local_98);
    if (lVar4 != -1) {
      if (-1 < (int)lVar4) {
        goto LAB_00774390;
      }
      break;
    }
  } while (*(int *)(in_FS_OFFSET + -0x58) == 4);
LAB_00774540:
  uVar13 = 0xffffffff;
  goto LAB_0077450d;
LAB_00774390:
  do {
    do {
      do {
        local_90 = 0xc;
        local_80 = 1;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_98 = local_b4;
        local_88 = &local_a8;
        while( true ) {
          uVar1 = *param_1;
          *(undefined8 *)(puVar10 + -0x18) = 0x7743ed;
          uVar5 = FUN_00771040(uVar1,&local_98,0);
          if (uVar5 != 0xffffffffffffffff) break;
          if (*(int *)(in_FS_OFFSET + -0x58) != 4) {
            uVar1 = *param_1;
            *(undefined8 *)(puVar10 + -0x18) = 0x77453e;
            FUN_00776580(uVar1,0xffffffffffffffff);
            goto LAB_00774540;
          }
        }
        uVar1 = *param_1;
        *(undefined8 *)(puVar10 + -0x18) = 0x774400;
        FUN_00776580(uVar1,uVar5);
        if ((long)uVar5 < 0) goto LAB_00774540;
      } while (local_b0 != 0);
      uVar13 = local_68 & 0x20;
      if (uVar13 != 0) goto LAB_00774540;
      lVar4 = 0;
      puVar9 = local_c8;
      uVar12 = uVar5;
    } while ((long)uVar5 < 0x10);
    do {
      uVar2 = *puVar9;
      if ((uVar2 < 0x10) || (uVar12 < uVar2)) break;
      if ((puVar9[3] == param_1[1]) && (puVar9[2] == param_1[2])) {
        lVar4 = lVar4 + 1;
        if ((short)puVar9[1] == 3) {
          local_b9 = '\x01';
          goto LAB_00774493;
        }
        if ((short)puVar9[1] == 2) {
          if (uVar2 < 0x24) {
            uVar13 = 0xffffffff;
            *(undefined4 *)(in_FS_OFFSET + -0x58) = 5;
          }
          else {
            uVar13 = 0xffffffff;
            *(uint *)(in_FS_OFFSET + -0x58) = -puVar9[4];
          }
          goto LAB_0077450d;
        }
      }
      uVar6 = (ulong)(uVar2 + 3 & 0xfffffffc);
      uVar12 = uVar12 - uVar6;
      puVar9 = (uint *)((long)puVar9 + uVar6);
    } while (0xf < uVar12);
    local_b9 = '\0';
LAB_00774493:
    if (lVar4 != 0) {
      *(undefined8 *)(puVar10 + -0x18) = 0x7744a8;
      local_c0 = uVar13;
      puVar7 = (undefined8 *)FUN_007101b0(uVar5 + 0x20);
      if (puVar7 == (undefined8 *)0x0) goto LAB_00774540;
      *puVar7 = 0;
      *(undefined8 *)(puVar10 + -0x18) = 0x7744d2;
      local_d0 = puVar7;
      uVar8 = thunk_FUN_00713a50(puVar7 + 4,local_c8,uVar5);
      lVar4 = *(long *)(param_1 + 4);
      local_d0[1] = uVar8;
      uVar1 = param_1[2];
      local_d0[2] = uVar5;
      *(undefined4 *)(local_d0 + 3) = uVar1;
      if (lVar4 == 0) {
        *(undefined8 **)(param_1 + 4) = local_d0;
      }
      else {
        **(undefined8 **)(param_1 + 6) = local_d0;
      }
      *(undefined8 **)(param_1 + 6) = local_d0;
      uVar13 = local_c0;
    }
  } while (local_b9 == '\0');
LAB_0077450d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar10 + -0x18) = &UNK_00774594;
  FUN_00771f60();
}

