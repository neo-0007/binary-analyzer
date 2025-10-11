
long * FUN_0068c820(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,char param_5,
                   char param_6)

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
  long lVar13;
  long in_FS_OFFSET;
  undefined1 auVar14 [16];
  undefined1 auStack_d8 [8];
  long local_d0;
  long local_c8;
  long local_c0;
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
  undefined1 *puVar12;
  
  puVar12 = auStack_d8;
  puVar11 = auStack_d8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(param_4 + 0x18) & 1) == 0) {
    auVar14 = FUN_0067fe90();
    local_70 = auVar14._8_8_;
    param_2 = auVar14._0_8_;
    puVar10 = auStack_d8;
    local_78 = param_2;
  }
  else {
    local_c0 = CONCAT44(local_c0._4_4_,*(uint *)(param_4 + 0x18));
    lVar5 = FUN_0067fd80(&local_59,param_4 + 0xd0);
    if (param_6 == '\0') {
      lVar7 = *(long *)(lVar5 + 0x38);
      iVar1 = *(int *)(lVar5 + 0x40);
    }
    else {
      lVar7 = *(long *)(lVar5 + 0x28);
      iVar1 = *(int *)(lVar5 + 0x30);
    }
    lVar5 = (long)iVar1;
    bVar9 = (byte)param_3;
    if (lVar5 < *(long *)(param_4 + 0x10)) {
      lVar6 = *(long *)(param_4 + 0x10) - lVar5;
      puVar10 = auStack_d8;
      while (puVar12 != auStack_d8 + -(lVar6 + 0x17U & 0xfffffffffffff000)) {
        puVar11 = puVar10 + -0x1000;
        *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
        puVar12 = puVar10 + -0x1000;
        puVar10 = puVar10 + -0x1000;
      }
      uVar8 = (ulong)((uint)(lVar6 + 0x17U) & 0xff0);
      lVar3 = -uVar8;
      puVar10 = puVar11 + lVar3;
      if (uVar8 != 0) {
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
      }
      lVar13 = (long)(int)lVar6;
      local_c8 = CONCAT44(local_c8._4_4_,(undefined4)local_c0);
      *(undefined8 *)(puVar11 + lVar3 + -8) = 0x68c9ba;
      local_d0 = lVar5;
      local_c0 = lVar7;
      lVar7 = thunk_FUN_00713720((ulong)(puVar11 + lVar3 + 0xf) & 0xfffffffffffffff0,(int)param_5,
                                 lVar6);
      lVar5 = local_c0;
      *(undefined8 *)(param_4 + 0x10) = 0;
      if (((uint)local_c8 & 0xb0) == 0x20) {
        *(undefined8 *)(puVar11 + lVar3 + -8) = 0x68caa3;
        local_c0 = lVar7;
        local_58 = param_2;
        uStack_50 = param_3;
        FUN_0068c7e0(&local_58,lVar5,local_d0);
        local_88 = local_58;
        uStack_80 = uStack_50;
        uVar4 = uStack_80;
        uStack_80._0_1_ = (undefined1)uStack_50;
        uStack_50 = CONCAT71((int7)((ulong)param_3 >> 8),(undefined1)uStack_80);
        *(undefined8 *)(puVar11 + lVar3 + -8) = 0x68cad3;
        uStack_80 = uVar4;
        FUN_0068c7e0(&local_58,local_c0,lVar13);
        local_98 = local_58;
        uStack_90 = uStack_50;
        param_2 = local_58;
      }
      else {
        local_c8 = local_d0;
        if (bVar9 == 0) {
          pcVar2 = *(code **)(*param_2 + 0x60);
          *(undefined8 *)(puVar11 + lVar3 + -8) = 0x68ca0d;
          lVar7 = (*pcVar2)(param_2,lVar7,lVar13);
          lVar5 = local_c0;
          if (lVar13 == lVar7) {
            local_c0 = local_c8;
            pcVar2 = *(code **)(*param_2 + 0x60);
            *(undefined8 *)(puVar11 + lVar3 + -8) = 0x68ca3b;
            lVar5 = (*pcVar2)(param_2,lVar5,local_c8);
            if (lVar5 != local_c0) {
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
      if ((bVar9 == 0) &&
         (local_c0 = lVar5, lVar5 = (**(code **)(*param_2 + 0x60))(param_2,lVar7,lVar5),
         lVar5 != local_c0)) {
        bVar9 = 1;
      }
      local_b0 = (ulong)bVar9;
      puVar10 = auStack_d8;
      local_b8 = param_2;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar10 + -8) = &UNK_0068cb08;
    FUN_00771f60();
  }
  return param_2;
}

