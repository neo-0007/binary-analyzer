
void FUN_00776140(uint param_1,uint *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar13;
  long in_FS_OFFSET;
  undefined1 local_10e8 [4088];
  undefined8 local_f0;
  undefined1 auStack_e8 [8];
  uint *local_e0;
  uint *local_d8;
  uint *local_d0;
  ulong local_c8;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  uint *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  uint **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_68;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined2 local_47;
  undefined1 local_45;
  long local_40;
  undefined1 *puVar12;
  
  puVar10 = auStack_e8;
  puVar12 = auStack_e8;
  puVar11 = auStack_e8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = 0x776192;
  local_d8 = param_4;
  local_d0 = param_2;
  local_c0 = param_3;
  local_bc = param_1;
  iVar4 = FUN_00771200(0x10,0x80003,0);
  local_ac = 0;
  local_b4 = 0x10;
  local_b8 = 0xc;
  if (-1 < iVar4) {
    local_f0 = 0x7761da;
    iVar5 = FUN_00770ed0(iVar4,&local_b4,0xc);
    puVar10 = auStack_e8;
    if (iVar5 == 0) {
      local_f0 = 0x776222;
      iVar5 = FUN_00770fa0(iVar4,&local_b4,&local_b8);
      puVar10 = auStack_e8;
      if (iVar5 == 0) {
        local_4c = 0;
        local_58 = 0x301001200000014;
        uVar3 = local_b4._4_4_;
        local_f0 = 0x776256;
        FUN_00767f90(5,&local_98);
        local_48 = 0;
        local_47 = 0;
        local_50 = (uint)local_98;
        local_45 = 0;
        local_ac = 0;
        local_b4 = 0x10;
        puVar10 = auStack_e8;
        while (puVar12 != local_10e8) {
          puVar11 = puVar10 + -0x1000;
          *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
          puVar12 = puVar10 + -0x1000;
          puVar10 = puVar10 + -0x1000;
        }
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
        local_a0 = 0x1000;
        local_e0 = (uint *)((ulong)(puVar11 + -1) & 0xfffffffffffffff0);
        local_a8 = local_e0;
        do {
          *(undefined8 *)(puVar11 + -0x18) = 0x776314;
          lVar6 = FUN_007abf40(iVar4,&local_58,0x14,0,&local_b4,0xc);
          if (lVar6 != -1) {
            puVar10 = puVar11 + -0x10;
            if (-1 < lVar6) {
              goto LAB_00776330;
            }
            break;
          }
          puVar10 = puVar11 + -0x10;
        } while (*(int *)(in_FS_OFFSET + -0x58) == 4);
      }
    }
LAB_007761de:
    *(undefined8 *)(puVar10 + -8) = 0x7761e6;
    FUN_0076e4b0(iVar4);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar10 + -8) = &UNK_00776579;
  FUN_00771f60();
LAB_00776330:
  do {
    local_90 = 0xc;
    local_80 = 1;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_98 = &local_b4;
    local_88 = &local_a8;
    while( true ) {
      *(undefined8 *)(puVar11 + -0x18) = 0x77638e;
      uVar7 = FUN_00771040(iVar4,&local_98,0);
      if (uVar7 != 0xffffffffffffffff) break;
      if (*(int *)(in_FS_OFFSET + -0x58) != 4) {
        *(undefined8 *)(puVar11 + -0x18) = 0x77656f;
        FUN_00776580(iVar4,0xffffffffffffffff);
        puVar10 = puVar11 + -0x10;
        goto LAB_007761de;
      }
    }
    *(undefined8 *)(puVar11 + -0x18) = 0x7763a6;
    local_c8 = uVar7;
    FUN_00776580(iVar4,uVar7);
    puVar10 = puVar11 + -0x10;
    if (((long)local_c8 < 0) || (puVar10 = puVar11 + -0x10, (local_68 & 0x20) != 0))
    goto LAB_007761de;
  } while ((long)local_c8 < 0x10);
  uVar7 = local_c8;
  puVar8 = local_e0;
  if (local_b4._4_4_ != 0) {
    do {
      uVar1 = *puVar8;
      if ((uVar1 < 0x10) || (uVar7 < uVar1)) break;
      uVar9 = (ulong)(uVar1 + 3 & 0xfffffffc);
      uVar7 = uVar7 - uVar9;
      puVar8 = (uint *)((long)puVar8 + uVar9);
    } while (0xf < uVar7);
    goto LAB_00776330;
  }
  bVar2 = false;
LAB_00776416:
  do {
    uVar1 = *puVar8;
    if ((uVar1 < 0x10) || (uVar7 < uVar1)) break;
    if ((uVar3 == puVar8[3]) && (local_50 == puVar8[2])) {
      if ((short)puVar8[1] == 0x10) {
        uVar13 = (uint)(*(short *)((long)puVar8 + 0x12) != 0x308 &&
                       1 < (ushort)(*(short *)((long)puVar8 + 0x12) - 0x300U));
        if (local_bc == puVar8[5]) {
          *local_d0 = uVar13;
          if (local_c0 == local_bc) {
            *local_d8 = uVar13;
            puVar10 = puVar11 + -0x10;
            goto LAB_007761de;
          }
          local_bc = 0xffffffff;
LAB_00776483:
          uVar13 = local_bc & local_c0;
        }
        else {
          if (local_c0 != puVar8[5]) goto LAB_00776483;
          local_c0 = 0xffffffff;
          *local_d8 = uVar13;
          uVar13 = local_bc;
        }
        puVar10 = puVar11 + -0x10;
        if (uVar13 == 0xffffffff) goto LAB_007761de;
      }
      else if ((short)puVar8[1] == 3) {
        uVar9 = (ulong)(uVar1 + 3 & 0xfffffffc);
        uVar7 = uVar7 - uVar9;
        puVar10 = puVar11 + -0x10;
        if (uVar7 < 0x10) goto LAB_007761de;
        puVar8 = (uint *)((long)puVar8 + uVar9);
        bVar2 = true;
        goto LAB_00776416;
      }
    }
    uVar9 = (ulong)(uVar1 + 3 & 0xfffffffc);
    uVar7 = uVar7 - uVar9;
    puVar8 = (uint *)((long)puVar8 + uVar9);
  } while (0xf < uVar7);
  puVar10 = puVar11 + -0x10;
  if (bVar2) goto LAB_007761de;
  goto LAB_00776330;
}

