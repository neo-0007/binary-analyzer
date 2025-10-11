
undefined8 * FUN_00782950(undefined4 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  int *piVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  undefined1 auStack_1a8 [8];
  undefined1 *local_1a0;
  undefined1 *local_198;
  long *local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined1 *local_180;
  undefined1 *local_170;
  ulong local_168 [2];
  undefined1 local_158 [16];
  undefined1 **local_148;
  undefined8 local_140;
  long *local_138;
  ulong local_130;
  undefined8 local_128;
  long local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 **local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [48];
  undefined1 *local_a8;
  long local_40;
  undefined1 *puVar13;
  
  puVar12 = auStack_1a8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_190 = param_3;
  lVar8 = thunk_FUN_007129d0(param_2);
  local_180 = (undefined1 *)(lVar8 + 1);
  local_184 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  puVar13 = auStack_1a8;
  puVar9 = auStack_1a8;
  while (puVar13 != auStack_1a8 + -(lVar8 + 0x10U & 0xfffffffffffff000)) {
    puVar12 = puVar9 + -0x1000;
    *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
    puVar13 = puVar9 + -0x1000;
    puVar9 = puVar9 + -0x1000;
  }
  uVar11 = (ulong)((uint)(lVar8 + 0x10U) & 0xff0);
  lVar5 = -uVar11;
  local_198 = puVar12 + lVar5;
  if (uVar11 != 0) {
    *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
  }
  puVar14 = (undefined8 *)0xffffffffffffffff;
  *(undefined8 *)(puVar12 + lVar5 + -8) = 0x782a0d;
  iVar6 = FUN_00782350(param_1,param_2,local_180);
  if (iVar6 < 0) goto LAB_00782b5e;
  local_f0 = local_180;
  local_e8 = &local_170;
  local_148 = &local_f8;
  local_138 = &local_118;
  local_e0 = 8;
  local_128 = 0;
  local_140 = 2;
  local_110 = DAT_0082eca0;
  local_118 = 0x14;
  local_108 = 0xffffffff;
  local_130 = 0x14;
  local_158 = (undefined1  [16])0x0;
  *(undefined8 *)(puVar12 + lVar5 + -8) = 0x782ac5;
  local_f8 = puVar12 + lVar5;
  iVar7 = FUN_00782220(iVar6,5000);
  if (iVar7 < 1) {
LAB_00782bb0:
    puVar14 = (undefined8 *)0xffffffffffffffff;
  }
  else {
    do {
      *(undefined8 *)(puVar12 + lVar5 + -8) = 0x782ae6;
      puVar9 = (undefined1 *)FUN_00771040(iVar6,local_158,0x40000000);
      if (puVar9 != (undefined1 *)0xffffffffffffffff) break;
    } while (*(int *)(in_FS_OFFSET + -0x58) == 4);
    if (((local_130 < 0x10) || (local_138 == (long *)0x0)) || (*local_138 != 0x14))
    goto LAB_00782bb0;
    local_188 = local_108;
    if (local_180 == puVar9) {
      *(undefined8 *)(puVar12 + lVar5 + -8) = 0x782b3c;
      iVar7 = thunk_FUN_00712780(local_198,param_2);
      if (iVar7 != 0) goto LAB_00782b44;
      *(undefined8 *)(puVar12 + lVar5 + -8) = 0x782d2e;
      iVar7 = FUN_0076d7f0(local_188,local_d8);
      if ((iVar7 != 0) || (local_170 = local_a8, local_a8 < (undefined1 *)0x78)) goto LAB_00782b44;
LAB_00782c20:
      *(undefined8 *)(puVar12 + lVar5 + -8) = 0x782c3b;
      piVar10 = (int *)FUN_0076f020(0,local_170,1,1,local_188,0);
      if (piVar10 == (int *)0xffffffffffffffff) goto LAB_00782b44;
      if (((*piVar10 != 2) || (piVar10[1] != 0x78)) || (iVar7 = piVar10[10], iVar7 == 0)) {
LAB_00782d0f:
        *(undefined8 *)(puVar12 + lVar5 + -8) = 0x782d17;
        FUN_0076f080(piVar10,local_170);
        goto LAB_00782b44;
      }
      if (piVar10[3] == 0) {
        lVar8 = *(long *)(piVar10 + 4);
        *(undefined8 *)(puVar12 + lVar5 + -8) = 0x782d68;
        FUN_00767f90(5,local_168);
        if (lVar8 + 300U < local_168[0]) goto LAB_00782d0f;
        iVar7 = piVar10[10];
      }
      iVar1 = piVar10[0xb];
      local_198 = (undefined1 *)((long)iVar7 * 4 + 0xfU & 0xfffffffffffffff0);
      local_180 = local_198 + (long)iVar1 + 0x78;
      if (local_170 < local_180) goto LAB_00782d0f;
      local_1a0 = local_170;
      *(undefined8 *)(puVar12 + lVar5 + -8) = 0x782cb3;
      puVar14 = (undefined8 *)FUN_007101b0(0x28);
      local_170 = local_1a0;
      if (puVar14 == (undefined8 *)0x0) goto LAB_00782d0f;
      iVar7 = piVar10[1];
      puVar14[4] = (long)iVar1;
      *(undefined4 *)(puVar14 + 3) = 1;
      puVar14[2] = local_180;
      *puVar14 = piVar10;
      puVar14[1] = local_198 + iVar7 + (long)piVar10;
    }
    else {
      if ((undefined1 *)(lVar8 + 9U) == puVar9) {
        *(undefined8 *)(puVar12 + lVar5 + -8) = 0x782c11;
        iVar7 = thunk_FUN_00712780(local_198,param_2);
        if (iVar7 == 0) goto LAB_00782c20;
      }
LAB_00782b44:
      puVar14 = (undefined8 *)0xffffffffffffffff;
    }
    *(undefined8 *)(puVar12 + lVar5 + -8) = 0x782b56;
    FUN_0076dc30(local_188);
  }
  *(undefined8 *)(puVar12 + lVar5 + -8) = 0x782b5e;
  FUN_0076dc30(iVar6);
LAB_00782b5e:
  *(undefined4 *)(in_FS_OFFSET + -0x58) = local_184;
  puVar2 = (undefined8 *)*local_190;
  *local_190 = (long)puVar14;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar10 = (int *)(puVar2 + 3);
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (*piVar10 == 0) {
      if (*(int *)(puVar2 + 3) != 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar12 + lVar5 + -8) = &UNK_00782da5;
        FUN_006e2220("mapped->counter == 0","nscd_helper.c",0xf8,"__nscd_unmap");
      }
      uVar3 = *puVar2;
      uVar4 = puVar2[2];
      *(undefined8 *)(puVar12 + lVar5 + -8) = 0x782beb;
      FUN_0076f080(uVar3,uVar4);
      *(undefined8 *)(puVar12 + lVar5 + -8) = 0x782bf3;
      FUN_007104f0(puVar2);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar14;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar12 + lVar5 + -8) = 0x782d86;
  FUN_00771f60();
}

