
long * FUN_006c7320(long *param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5,
                   long *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 extraout_RDX;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar16;
  undefined8 *puVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  undefined1 auStack_98 [8];
  undefined8 *local_90;
  undefined1 **local_88;
  undefined1 *local_80;
  undefined8 local_78;
  ulong local_70;
  undefined1 local_59;
  undefined1 local_58 [8];
  undefined1 *local_50;
  undefined8 local_48;
  long local_40;
  undefined1 *puVar15;
  undefined1 *puVar17;
  
  puVar15 = auStack_98;
  puVar14 = auStack_98;
  puVar13 = auStack_98;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = *param_6;
  if ((param_3 < 0) || (*(long *)(lVar8 + -0x18) == 0)) {
LAB_006c7353:
    puVar18 = (undefined8 *)(lVar8 + -0x18);
    puVar17 = auStack_98;
    if (*(int *)(lVar8 + -8) < 0) {
      lVar8 = FUN_0063bfe0(puVar18,&local_50,0);
      goto LAB_006c736f;
    }
  }
  else {
    uVar9 = FUN_006c47a0();
    lVar8 = FUN_006c4700(uVar9,param_3);
    if (lVar8 == 0) {
      lVar8 = *param_6;
      goto LAB_006c7353;
    }
    plVar10 = (long *)FUN_006a51f0(lVar8 + 0x10);
    local_48 = 0;
    local_70 = *(long *)(*param_6 + -0x18);
    iVar7 = (**(code **)(*plVar10 + 0x40))(plVar10);
    lVar11 = (long)iVar7 * local_70;
    uVar12 = lVar11 + 0x18;
    puVar17 = auStack_98;
    while (puVar15 != auStack_98 + -(uVar12 & 0xfffffffffffff000)) {
      puVar14 = puVar17 + -0x1000;
      *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
      puVar15 = puVar17 + -0x1000;
      puVar17 = puVar17 + -0x1000;
    }
    uVar12 = (ulong)((uint)uVar12 & 0xff0);
    lVar5 = -uVar12;
    puVar16 = puVar14 + lVar5;
    puVar17 = puVar14 + lVar5;
    puVar13 = puVar14 + lVar5;
    if (uVar12 != 0) {
      *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
    }
    lVar1 = *param_6;
    lVar2 = *plVar10;
    local_90 = &local_48;
    local_70 = (ulong)(puVar14 + lVar5 + 0xf) & 0xfffffffffffffff0;
    local_80 = local_58;
    local_88 = &local_50;
    lVar3 = *(long *)(lVar1 + -0x18);
    *(undefined1 ***)(puVar14 + lVar5 + -8) = local_88;
    *(ulong *)(puVar14 + lVar5 + -0x10) = lVar11 + local_70;
    pcVar4 = *(code **)(lVar2 + 0x10);
    *(undefined8 *)(puVar14 + lVar5 + -0x18) = 0x6c748a;
    (*pcVar4)(plVar10,local_90,lVar1,lVar1 + lVar3 * 4);
    *local_50 = 0;
    local_78 = *(undefined8 *)(lVar8 + 8);
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(puVar14 + lVar5 + -0x18) = 0x6c74a2;
    uVar9 = FUN_006e1eb0(uVar9);
    *(undefined8 *)(puVar14 + lVar5 + -0x18) = 0x6c74b2;
    uVar12 = FUN_006e2810(local_78,local_70);
    *(undefined8 *)(puVar14 + lVar5 + -0x18) = 0x6c74bd;
    FUN_006e1eb0(uVar9);
    uVar9 = *(undefined8 *)(puVar14 + lVar5 + -8);
    if (local_70 != uVar12) {
      local_48 = 0;
      *(undefined8 *)(puVar14 + lVar5 + -8) = 0x6c74dc;
      lVar8 = thunk_FUN_007129d0(uVar12,uVar9,extraout_RDX,*(undefined8 *)(puVar14 + lVar5 + -0x10))
      ;
      uVar19 = lVar8 * 4 + 0x1b;
      puVar6 = puVar14 + lVar5;
      while (puVar16 != puVar14 + (lVar5 - (uVar19 & 0xfffffffffffff000))) {
        puVar17 = puVar6 + -0x1000;
        *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
        puVar16 = puVar6 + -0x1000;
        puVar6 = puVar6 + -0x1000;
      }
      uVar19 = (ulong)((uint)uVar19 & 0xff0);
      lVar11 = -uVar19;
      puVar13 = puVar17 + lVar11;
      if (uVar19 != 0) {
        *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
      }
      lVar5 = *plVar10;
      *(undefined1 ***)(puVar17 + lVar11 + -8) = local_88;
      uVar19 = (ulong)(puVar17 + lVar11 + 0xf) & 0xfffffffffffffff0;
      *(ulong *)(puVar17 + lVar11 + -0x10) = uVar19 + lVar8 * 4;
      pcVar4 = *(code **)(lVar5 + 0x20);
      *(undefined8 *)(puVar17 + lVar11 + -0x18) = 0x6c755b;
      (*pcVar4)(plVar10,local_90,uVar12,lVar8 + uVar12,local_80,uVar19);
      *(undefined8 *)(puVar17 + lVar11 + -8) = 0x6c756d;
      lVar8 = FUN_0063cce0(uVar19,local_50,&local_59);
      goto LAB_006c736f;
    }
    lVar8 = *param_6;
    puVar18 = (undefined8 *)(lVar8 + -0x18);
    puVar17 = puVar14 + lVar5;
    if (*(int *)(lVar8 + -8) < 0) {
      *(undefined8 *)(puVar14 + lVar5 + -8) = 0x6c75b9;
      lVar8 = FUN_0063bfe0(puVar18,&local_59,0);
      goto LAB_006c736f;
    }
  }
  puVar13 = puVar17;
  if (puVar18 != &DAT_009452c0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      *(int *)(lVar8 + -8) = *(int *)(lVar8 + -8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar8 + -8) = *(int *)(lVar8 + -8) + 1;
    }
  }
LAB_006c736f:
  *param_1 = lVar8;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar13 + -8) = &UNK_006c75de;
    FUN_00771f60();
  }
  return param_1;
}

