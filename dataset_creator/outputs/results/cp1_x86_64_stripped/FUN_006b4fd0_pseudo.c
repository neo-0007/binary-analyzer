
long * FUN_006b4fd0(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                   undefined4 param_5,char param_6)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  undefined1 auVar13 [16];
  undefined1 auStack_d8 [4];
  uint local_d4;
  ulong local_d0;
  long local_c8;
  ulong local_c0;
  long *local_b8;
  ulong local_b0;
  long *local_a8;
  ulong local_a0;
  long *local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 local_70;
  undefined1 local_59;
  long *local_58;
  undefined8 uStack_50;
  long local_40;
  
  puVar11 = auStack_d8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(param_4 + 0x18) & 1) == 0) {
    auVar13 = FUN_006a8670();
    local_70 = auVar13._8_8_;
    param_2 = auVar13._0_8_;
    puVar10 = auStack_d8;
    local_78 = param_2;
  }
  else {
    local_c0 = CONCAT44(local_c0._4_4_,*(uint *)(param_4 + 0x18));
    lVar5 = FUN_006a8560(&local_59,param_4 + 0xd0);
    if (param_6 == '\0') {
      uVar12 = *(ulong *)(lVar5 + 0x38);
      iVar1 = *(int *)(lVar5 + 0x40);
    }
    else {
      uVar12 = *(ulong *)(lVar5 + 0x28);
      iVar1 = *(int *)(lVar5 + 0x30);
    }
    lVar5 = (long)iVar1;
    bVar9 = (byte)param_3;
    if (lVar5 < *(long *)(param_4 + 0x10)) {
      lVar6 = *(long *)(param_4 + 0x10) - lVar5;
      uVar8 = lVar6 * 4 + 0x17;
      for (; puVar11 != auStack_d8 + -(uVar8 & 0xfffffffffffff000); puVar11 = puVar11 + -0x1000) {
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
      }
      uVar8 = (ulong)((uint)uVar8 & 0xff0);
      lVar3 = -uVar8;
      puVar10 = puVar11 + lVar3;
      if (uVar8 != 0) {
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
      }
      local_d4 = (uint)local_c0;
      local_d0 = uVar12;
      local_c8 = lVar6;
      local_c0 = (ulong)(puVar11 + lVar3 + 0xf) & 0xfffffffffffffff0;
      *(undefined8 *)(puVar11 + lVar3 + -8) = 0x6b517c;
      FUN_00771ff0((ulong)(puVar11 + lVar3 + 0xf) & 0xfffffffffffffff0,param_5,lVar6,
                   0x3fffffffffffffff);
      uVar8 = local_c0;
      uVar12 = local_d0;
      *(undefined8 *)(param_4 + 0x10) = 0;
      lVar6 = (long)(int)local_c8;
      if ((local_d4 & 0xb0) == 0x20) {
        local_58 = param_2;
        uStack_50 = param_3;
        *(undefined8 *)(puVar11 + lVar3 + -8) = 0x6b5243;
        FUN_006b4f90(&local_58,uVar12,lVar5);
        uVar12 = local_c0;
        local_88 = local_58;
        uStack_80 = uStack_50;
        uVar4 = uStack_80;
        uStack_80._0_1_ = (undefined1)uStack_50;
        uStack_50 = CONCAT71((int7)((ulong)param_3 >> 8),(undefined1)uStack_80);
        uStack_80 = uVar4;
        *(undefined8 *)(puVar11 + lVar3 + -8) = 0x6b5273;
        FUN_006b4f90(&local_58,uVar12,lVar6);
        local_98 = local_58;
        uStack_90 = uStack_50;
        param_2 = local_58;
      }
      else {
        local_c0 = local_d0;
        if (bVar9 == 0) {
          pcVar2 = *(code **)(*param_2 + 0x60);
          *(undefined8 *)(puVar11 + lVar3 + -8) = 0x6b51ce;
          lVar7 = (*pcVar2)(param_2,uVar8,lVar6);
          uVar12 = local_c0;
          if (lVar6 == lVar7) {
            pcVar2 = *(code **)(*param_2 + 0x60);
            *(undefined8 *)(puVar11 + lVar3 + -8) = 0x6b51ee;
            lVar6 = (*pcVar2)(param_2,uVar12,lVar5);
            if (lVar6 != lVar5) {
              bVar9 = 1;
            }
          }
          else {
            bVar9 = 1;
          }
        }
        local_a0 = (ulong)bVar9;
        puVar10 = puVar11 + lVar3;
        local_a8 = param_2;
      }
    }
    else {
      *(undefined8 *)(param_4 + 0x10) = 0;
      if (bVar9 == 0) {
        lVar6 = (**(code **)(*param_2 + 0x60))(param_2,uVar12,lVar5);
        if (lVar6 != lVar5) {
          bVar9 = 1;
        }
      }
      local_b0 = (ulong)bVar9;
      puVar10 = auStack_d8;
      local_b8 = param_2;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar10 + -8) = &UNK_006b52b8;
  FUN_00771f60();
}

