
long * FUN_006c6d70(long *param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5,
                   long *param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar13;
  ulong uVar15;
  long in_FS_OFFSET;
  undefined1 auStack_88 [8];
  undefined8 *local_80;
  undefined1 **local_78;
  undefined1 *local_70;
  ulong local_68;
  ulong local_60;
  undefined1 local_58 [8];
  undefined1 *local_50;
  undefined8 local_48;
  long local_40;
  undefined1 *puVar12;
  undefined1 *puVar14;
  
  plVar1 = param_1 + 2;
  puVar10 = auStack_88;
  puVar12 = auStack_88;
  puVar11 = auStack_88;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = param_6[1];
  if ((param_3 < 0) || (lVar7 == 0)) {
    *param_1 = (long)plVar1;
    FUN_006b8390(param_1,*param_6,*param_6 + lVar7 * 4);
  }
  else {
    uVar6 = FUN_006c47a0();
    lVar7 = FUN_006c4700(uVar6,param_3);
    puVar10 = auStack_88;
    if (lVar7 != 0) {
      local_68 = lVar7;
      plVar8 = (long *)FUN_006a51f0(lVar7 + 0x10);
      local_48 = 0;
      local_60 = param_6[1];
      iVar5 = (**(code **)(*plVar8 + 0x40))(plVar8);
      uVar15 = (long)iVar5 * local_60 + 0x18;
      puVar10 = auStack_88;
      while (puVar12 != auStack_88 + -(uVar15 & 0xfffffffffffff000)) {
        puVar11 = puVar10 + -0x1000;
        *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
        puVar12 = puVar10 + -0x1000;
        puVar10 = puVar10 + -0x1000;
      }
      uVar15 = (ulong)((uint)uVar15 & 0xff0);
      lVar7 = -uVar15;
      puVar13 = puVar11 + lVar7;
      puVar14 = puVar11 + lVar7;
      puVar10 = puVar11 + lVar7;
      if (uVar15 != 0) {
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
      }
      lVar9 = *param_6;
      lVar2 = param_6[1];
      local_80 = &local_48;
      local_70 = local_58;
      local_78 = &local_50;
      lVar3 = *plVar8;
      *(undefined1 ***)(puVar11 + lVar7 + -8) = local_78;
      *(ulong *)(puVar11 + lVar7 + -0x10) =
           (long)iVar5 * local_60 + ((ulong)(puVar11 + lVar7 + 0xf) & 0xfffffffffffffff0);
      local_60 = local_68;
      pcVar4 = *(code **)(lVar3 + 0x10);
      *(undefined8 *)(puVar11 + lVar7 + -0x18) = 0x6c6ec4;
      local_68 = (ulong)(puVar11 + lVar7 + 0xf) & 0xfffffffffffffff0;
      (*pcVar4)(plVar8,local_80,lVar9,lVar9 + lVar2 * 4);
      *local_50 = 0;
      local_60 = *(undefined8 *)(local_60 + 8);
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(puVar11 + lVar7 + -0x18) = 0x6c6ee0;
      uVar6 = FUN_006e1eb0(uVar6);
      *(undefined8 *)(puVar11 + lVar7 + -0x18) = 0x6c6ef0;
      local_60 = FUN_006e2810(local_60,local_68);
      *(undefined8 *)(puVar11 + lVar7 + -0x18) = 0x6c6efc;
      FUN_006e1eb0(uVar6);
      uVar6 = *(undefined8 *)(puVar11 + lVar7 + -8);
      if (local_68 != local_60) {
        local_48 = 0;
        *(undefined8 *)(puVar11 + lVar7 + -8) = 0x6c6f23;
        lVar9 = thunk_FUN_007129d0(local_60,uVar6,local_60,*(undefined8 *)(puVar11 + lVar7 + -0x10))
        ;
        uVar15 = lVar9 * 4 + 0x1b;
        puVar10 = puVar11 + lVar7;
        while (puVar13 != puVar11 + (lVar7 - (uVar15 & 0xfffffffffffff000))) {
          puVar14 = puVar10 + -0x1000;
          *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
          puVar13 = puVar10 + -0x1000;
          puVar10 = puVar10 + -0x1000;
        }
        uVar15 = (ulong)((uint)uVar15 & 0xff0);
        lVar7 = -uVar15;
        puVar10 = puVar14 + lVar7;
        if (uVar15 != 0) {
          *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
        }
        lVar2 = *plVar8;
        *(undefined1 ***)(puVar14 + lVar7 + -8) = local_78;
        uVar15 = (ulong)(puVar14 + lVar7 + 0xf) & 0xfffffffffffffff0;
        *(ulong *)(puVar14 + lVar7 + -0x10) = uVar15 + lVar9 * 4;
        pcVar4 = *(code **)(lVar2 + 0x20);
        *(undefined8 *)(puVar14 + lVar7 + -0x18) = 0x6c6fa0;
        (*pcVar4)(plVar8,local_80,local_60,lVar9 + local_60,local_70,uVar15);
        *param_1 = (long)plVar1;
        *(undefined8 *)(puVar14 + lVar7 + -8) = 0x6c6fb5;
        FUN_006b8390(param_1,uVar15,local_50);
        goto LAB_006c6dbc;
      }
    }
    *param_1 = (long)plVar1;
    lVar7 = param_6[1];
    lVar9 = *param_6;
    *(undefined8 *)(puVar10 + -8) = 0x6c6fd7;
    FUN_006b8390(param_1,lVar9,lVar9 + lVar7 * 4);
  }
LAB_006c6dbc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(code **)(puVar10 + -8) = FUN_006c6ff0;
    FUN_00771f60();
  }
  return param_1;
}

