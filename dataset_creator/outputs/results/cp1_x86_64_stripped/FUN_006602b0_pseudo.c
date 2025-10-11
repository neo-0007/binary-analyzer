
/* WARNING: Control flow encountered bad instruction data */

long * FUN_006602b0(undefined8 param_1,long *param_2,ulong param_3,long *param_4,undefined8 param_5,
                   long param_6,uint *param_7,int *param_8,long param_9)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  bool bVar11;
  ulong uVar12;
  bool bVar13;
  bool bVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  uint local_27c;
  long *local_278;
  ulong local_260;
  uint local_b4;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = FUN_006a68a0(param_6 + 0xd0);
  plVar9 = (long *)FUN_006a4ba0(param_6 + 0xd0);
  uVar10 = thunk_FUN_007564d0(param_9);
  bVar16 = (int)param_5 == -1;
  local_27c = (uint)param_3;
  local_b4 = 0;
  uVar12 = 0;
  local_278 = param_4;
  local_260 = param_3;
  do {
    bVar17 = local_27c == 0xffffffff;
    bVar13 = param_2 != (long *)0x0 && bVar17;
    bVar14 = bVar17;
    if (bVar13) {
      if ((int *)param_2[2] < (int *)param_2[3]) {
        iVar5 = *(int *)param_2[2];
      }
      else {
        iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      if (iVar5 == -1) {
        param_2 = (long *)0x0;
      }
      bVar14 = iVar5 == -1 && bVar13;
    }
    bVar13 = local_278 != (long *)0x0 && bVar16;
    if (bVar13) {
      if ((int *)local_278[2] < (int *)local_278[3]) {
        iVar5 = *(int *)local_278[2];
      }
      else {
        iVar5 = (**(code **)(*local_278 + 0x48))();
      }
      plVar2 = (long *)0x0;
      if (iVar5 != -1) {
        plVar2 = local_278;
      }
      local_278 = plVar2;
      bVar13 = iVar5 == -1 && bVar13;
      if (uVar12 < uVar10) goto LAB_006603b4;
LAB_00660508:
      if ((local_b4 == 0) && (uVar12 == uVar10)) goto LAB_00660525;
LAB_0066051d:
      *param_7 = *param_7 | 4;
LAB_00660525:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      return param_2;
    }
    bVar13 = bVar16;
    if (uVar10 <= uVar12) goto LAB_00660508;
LAB_006603b4:
    if (bVar14 == bVar13) goto LAB_00660508;
    if (local_b4 != 0) goto LAB_0066051d;
    lVar1 = uVar12 * 4;
    cVar3 = (**(code **)(*plVar9 + 0x60))(plVar9,*(uint *)(param_9 + lVar1),0);
    if (cVar3 != '%') {
      uVar7 = *(uint *)(param_9 + lVar1);
      uVar6 = local_27c;
      if ((param_2 != (long *)0x0) && (bVar17)) {
        if ((uint *)param_2[2] < (uint *)param_2[3]) {
          uVar6 = *(uint *)param_2[2];
        }
        else {
          uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (uVar6 == 0xffffffff) {
          param_2 = (long *)0x0;
        }
      }
      if (uVar7 != uVar6) {
        local_b4 = local_b4 | 4;
        goto LAB_00660459;
      }
      if ((ulong)param_2[2] < (ulong)param_2[3]) {
        param_2[2] = param_2[2] + 4;
      }
      else {
        (**(code **)(*param_2 + 0x50))(param_2);
      }
LAB_0066058c:
      local_27c = 0xffffffff;
      goto LAB_00660459;
    }
    uVar15 = uVar12 + 1;
    cVar3 = (**(code **)(*plVar9 + 0x60))(plVar9,*(undefined4 *)(param_9 + 4 + lVar1),0);
    local_b0 = 0;
    if ((cVar3 == 'E') || (cVar3 == 'O')) {
      uVar12 = uVar12 + 2;
      cVar3 = (**(code **)(*plVar9 + 0x60))(plVar9,*(undefined4 *)(param_9 + 8 + lVar1),0);
      bVar4 = cVar3 + 0xbf;
      if (bVar4 < 0x39) goto LAB_0066041a;
      goto switchD_0066042b_caseD_4;
    }
    bVar4 = cVar3 + 0xbf;
    uVar12 = uVar15;
    if (0x38 < bVar4) goto switchD_0066042b_caseD_4;
LAB_0066041a:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar4) {
    case 0:
      lVar1 = *(long *)(lVar8 + 0x10);
      local_a8 = *(undefined8 *)(lVar1 + 0x58);
      local_a0 = *(undefined8 *)(lVar1 + 0x60);
      local_98 = *(undefined8 *)(lVar1 + 0x68);
      local_90 = *(undefined8 *)(lVar1 + 0x70);
      local_88 = *(undefined8 *)(lVar1 + 0x78);
      local_80 = *(undefined8 *)(lVar1 + 0x80);
      local_78 = *(undefined8 *)(lVar1 + 0x88);
      uVar15 = local_260 & 0xffffffff00000000 | (ulong)local_27c;
      auVar19 = FUN_0065f070(param_1,param_2,uVar15,local_278,param_5,&local_b0,&local_a8,7,param_6,
                             &local_b4);
      goto LAB_00660b61;
    case 1:
      lVar1 = *(long *)(lVar8 + 0x10);
      local_a8 = *(undefined8 *)(lVar1 + 200);
      local_a0 = *(undefined8 *)(lVar1 + 0xd0);
      local_98 = *(undefined8 *)(lVar1 + 0xd8);
      local_90 = *(undefined8 *)(lVar1 + 0xe0);
      local_88 = *(undefined8 *)(lVar1 + 0xe8);
      local_80 = *(undefined8 *)(lVar1 + 0xf0);
      local_78 = *(undefined8 *)(lVar1 + 0xf8);
      local_70 = *(undefined8 *)(lVar1 + 0x100);
      local_68 = *(undefined8 *)(lVar1 + 0x108);
      local_60 = *(undefined8 *)(lVar1 + 0x110);
      local_58 = *(undefined8 *)(lVar1 + 0x118);
      local_50 = *(undefined8 *)(lVar1 + 0x120);
      auVar19 = FUN_0065f070(param_1,param_2,local_260 & 0xffffffff00000000 | (ulong)local_27c,
                             local_278,param_5,&local_b0,&local_a8,0xc,param_6,&local_b4);
      param_2 = auVar19._0_8_;
      local_27c = auVar19._8_4_;
      local_260 = local_260 & 0xffffffff00000000 | auVar19._8_8_ & 0xffffffff;
      if (local_b4 == 0) {
        param_8[4] = local_b0;
      }
      break;
    case 2:
    case 0x18:
    case 0x38:
      auVar19 = FUN_0065ec00(param_1,param_2,local_260 & 0xffffffff00000000 | (ulong)local_27c,
                             local_278,param_5,&local_b0,0,9999,4,param_6,&local_b4);
      param_2 = auVar19._0_8_;
      local_27c = auVar19._8_4_;
      local_260 = local_260 & 0xffffffff00000000 | auVar19._8_8_ & 0xffffffff;
      if (local_b4 == 0) {
        iVar5 = local_b0 + -0x76c;
        if (local_b0 < 0) {
          iVar5 = local_b0 + 100;
        }
        param_8[5] = iVar5;
      }
      break;
    case 3:
      (**(code **)(*plVar9 + 0x58))(plVar9,"%m/%d/%y","%H:%M",&local_a8);
      local_260 = local_260 & 0xffffffff00000000 | (ulong)local_27c;
      auVar19 = FUN_006602b0(param_1,param_2,local_260,local_278,param_5,param_6,&local_b4,param_8,
                             &local_a8);
      goto LAB_00660a65;
    default:
      goto switchD_0066042b_caseD_4;
    case 7:
      auVar19 = FUN_0065ec00(param_1,param_2,local_260 & 0xffffffff00000000 | (ulong)local_27c,
                             local_278,param_5,&local_b0,0,0x17,2,param_6,&local_b4);
      param_2 = auVar19._0_8_;
      local_27c = auVar19._8_4_;
      local_260 = local_260 & 0xffffffff00000000 | auVar19._8_8_ & 0xffffffff;
      if (local_b4 == 0) {
        param_8[2] = local_b0;
      }
      break;
    case 8:
      auVar19 = FUN_0065ec00(param_1,param_2,local_260 & 0xffffffff00000000 | (ulong)local_27c,
                             local_278,param_5,&local_b0,1,0xc,2,param_6,&local_b4);
      param_2 = auVar19._0_8_;
      local_27c = auVar19._8_4_;
      local_260 = local_260 & 0xffffffff00000000 | auVar19._8_8_ & 0xffffffff;
      if (local_b4 == 0) {
        param_8[2] = local_b0;
      }
      break;
    case 0xc:
      auVar19 = FUN_0065ec00(param_1,param_2,local_260 & 0xffffffff00000000 | (ulong)local_27c,
                             local_278,param_5,&local_b0,0,0x3b,2,param_6,&local_b4);
      param_2 = auVar19._0_8_;
      local_27c = auVar19._8_4_;
      local_260 = local_260 & 0xffffffff00000000 | auVar19._8_8_ & 0xffffffff;
      if (local_b4 == 0) {
        param_8[1] = local_b0;
      }
      break;
    case 0x11:
      (**(code **)(*plVar9 + 0x58))(plVar9,"%H:%M","%H:%M:%S",&local_a8);
      local_260 = local_260 & 0xffffffff00000000 | (ulong)local_27c;
      auVar19 = FUN_006602b0(param_1,param_2,local_260,local_278,param_5,param_6,&local_b4,param_8,
                             &local_a8);
      goto LAB_00660a65;
    case 0x12:
      auVar19 = FUN_0065ec00(param_1,param_2,local_260 & 0xffffffff00000000 | (ulong)local_27c,
                             local_278,param_5,&local_b0,0,0x3c,2,param_6,&local_b4);
      param_2 = auVar19._0_8_;
      local_27c = auVar19._8_4_;
      local_260 = local_260 & 0xffffffff00000000 | auVar19._8_8_ & 0xffffffff;
      if (local_b4 == 0) {
        *param_8 = local_b0;
      }
      break;
    case 0x13:
      (**(code **)(*plVar9 + 0x58))(plVar9,"%H:%M:%S",&DAT_0081e7d2,&local_a8);
      local_260 = local_260 & 0xffffffff00000000 | (ulong)local_27c;
      auVar19 = FUN_006602b0(param_1,param_2,local_260,local_278,param_5,param_6,&local_b4,param_8,
                             &local_a8);
      goto LAB_00660a65;
    case 0x17:
      local_260 = local_260 & 0xffffffff00000000;
      auVar19 = FUN_006602b0(param_1,param_2,local_260 | local_27c,local_278,param_5,param_6,
                             &local_b4,param_8,*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x20));
      param_2 = auVar19._0_8_;
      local_27c = auVar19._8_4_;
      uVar15 = auVar19._8_8_ & 0xffffffff;
      goto LAB_00660a74;
    case 0x19:
      uVar7 = local_27c;
      if ((param_2 != (long *)0x0) && (bVar17)) {
        if ((uint *)param_2[2] < (uint *)param_2[3]) {
          uVar7 = *(uint *)param_2[2];
        }
        else {
          uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (uVar7 == 0xffffffff) {
          param_2 = (long *)0x0;
        }
      }
      cVar3 = (**(code **)(*plVar9 + 0x10))(plVar9,0x100,uVar7);
      if (cVar3 == '\0') goto switchD_0066042b_caseD_4;
      uVar15 = local_260 & 0xffffffff00000000;
      auVar19 = FUN_0065f070(param_1,param_2,uVar15 | local_27c,local_278,param_5,&local_ac,
                             PTR_PTR_0093afe0,0xe,param_6,&local_b4);
      param_2 = auVar19._0_8_;
      local_27c = auVar19._8_4_;
      local_260 = uVar15 | auVar19._8_8_ & 0xffffffff;
      bVar18 = local_27c == 0xffffffff;
      bVar17 = param_2 != (long *)0x0 && bVar18;
      bVar13 = bVar18;
      bVar14 = bVar17;
      if (bVar17) {
        if ((int *)param_2[2] < (int *)param_2[3]) {
          iVar5 = *(int *)param_2[2];
        }
        else {
          iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        bVar13 = false;
        if (iVar5 == -1) {
          param_2 = (long *)0x0;
          bVar14 = false;
          bVar13 = bVar17;
        }
      }
      bVar11 = local_278 != (long *)0x0 && bVar16;
      bVar17 = bVar16;
      if (bVar11) {
        if ((int *)local_278[2] < (int *)local_278[3]) {
          iVar5 = *(int *)local_278[2];
        }
        else {
          iVar5 = (**(code **)(*local_278 + 0x48))();
        }
        plVar2 = (long *)0x0;
        if (iVar5 != -1) {
          plVar2 = local_278;
        }
        local_278 = plVar2;
        bVar17 = iVar5 == -1 && bVar11;
      }
      if ((bVar13 != bVar17) && (local_b4 == 0 && local_ac == 0)) {
        uVar7 = local_27c;
        if (bVar14) {
          if ((uint *)param_2[2] < (uint *)param_2[3]) {
            uVar7 = *(uint *)param_2[2];
          }
          else {
            uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if (uVar7 == 0xffffffff) {
            param_2 = (long *)0x0;
          }
        }
        uVar6 = (**(code **)(*plVar9 + 0x50))(plVar9,0x2d);
        if (uVar7 != uVar6) {
          uVar7 = local_27c;
          if ((param_2 != (long *)0x0) && (bVar18)) {
            if ((uint *)param_2[2] < (uint *)param_2[3]) {
              uVar7 = *(uint *)param_2[2];
            }
            else {
              uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
            }
            if (uVar7 == 0xffffffff) {
              param_2 = (long *)0x0;
            }
          }
          uVar6 = (**(code **)(*plVar9 + 0x50))(plVar9,0x2b);
          if (uVar7 != uVar6) break;
        }
        auVar19 = FUN_0065ec00(param_1,param_2,local_260,local_278,param_5,&local_ac,0,0x17,2,
                               param_6,&local_b4);
        auVar19 = FUN_0065ec00(param_1,auVar19._0_8_,uVar15 | auVar19._8_8_ & 0xffffffff,local_278,
                               param_5,&local_ac,0,0x3b,2,param_6,&local_b4);
        param_2 = auVar19._0_8_;
        local_260 = uVar15 | auVar19._8_8_ & 0xffffffff;
        local_27c = auVar19._8_4_;
      }
      break;
    case 0x20:
      lVar1 = *(long *)(lVar8 + 0x10);
      local_a8 = *(undefined8 *)(lVar1 + 0x90);
      local_a0 = *(undefined8 *)(lVar1 + 0x98);
      local_98 = *(undefined8 *)(lVar1 + 0xa0);
      local_90 = *(undefined8 *)(lVar1 + 0xa8);
      local_88 = *(undefined8 *)(lVar1 + 0xb0);
      local_80 = *(undefined8 *)(lVar1 + 0xb8);
      local_78 = *(undefined8 *)(lVar1 + 0xc0);
      uVar15 = local_260 & 0xffffffff00000000 | (ulong)local_27c;
      auVar19 = FUN_0065f070(param_1,param_2,uVar15,local_278,param_5,&local_b0,&local_a8,7,param_6,
                             &local_b4);
LAB_00660b61:
      param_2 = auVar19._0_8_;
      local_27c = auVar19._8_4_;
      local_260 = uVar15 & 0xffffffff00000000 | auVar19._8_8_ & 0xffffffff;
      if (local_b4 == 0) {
        param_8[6] = local_b0;
      }
      break;
    case 0x21:
    case 0x27:
      lVar1 = *(long *)(lVar8 + 0x10);
      local_a8 = *(undefined8 *)(lVar1 + 0x128);
      local_a0 = *(undefined8 *)(lVar1 + 0x130);
      local_98 = *(undefined8 *)(lVar1 + 0x138);
      local_90 = *(undefined8 *)(lVar1 + 0x140);
      local_88 = *(undefined8 *)(lVar1 + 0x148);
      local_80 = *(undefined8 *)(lVar1 + 0x150);
      local_78 = *(undefined8 *)(lVar1 + 0x158);
      local_70 = *(undefined8 *)(lVar1 + 0x160);
      local_68 = *(undefined8 *)(lVar1 + 0x168);
      local_60 = *(undefined8 *)(lVar1 + 0x170);
      local_58 = *(undefined8 *)(lVar1 + 0x178);
      local_50 = *(undefined8 *)(lVar1 + 0x180);
      auVar19 = FUN_0065f070(param_1,param_2,local_260 & 0xffffffff00000000 | (ulong)local_27c,
                             local_278,param_5,&local_b0,&local_a8,0xc,param_6,&local_b4);
      param_2 = auVar19._0_8_;
      local_27c = auVar19._8_4_;
      local_260 = local_260 & 0xffffffff00000000 | auVar19._8_8_ & 0xffffffff;
      if (local_b4 == 0) {
        param_8[4] = local_b0;
      }
      break;
    case 0x22:
      local_260 = local_260 & 0xffffffff00000000 | (ulong)local_27c;
      auVar19 = FUN_006602b0(param_1,param_2,local_260,local_278,param_5,param_6,&local_b4,param_8,
                             *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x30));
LAB_00660a65:
      param_2 = auVar19._0_8_;
      local_27c = auVar19._8_4_;
      uVar15 = auVar19._8_8_ & 0xffffffff;
      local_260 = local_260 & 0xffffffff00000000;
LAB_00660a74:
      local_260 = local_260 | uVar15;
      break;
    case 0x23:
      auVar19 = FUN_0065ec00(param_1,param_2,local_260 & 0xffffffff00000000 | (ulong)local_27c,
                             local_278,param_5,&local_b0,1,0x1f,2,param_6,&local_b4);
      param_2 = auVar19._0_8_;
      local_27c = auVar19._8_4_;
      local_260 = local_260 & 0xffffffff00000000 | auVar19._8_8_ & 0xffffffff;
      if (local_b4 == 0) {
        param_8[3] = local_b0;
      }
      break;
    case 0x24:
      uVar7 = local_27c;
      if ((param_2 != (long *)0x0) && (bVar17)) {
        if ((uint *)param_2[2] < (uint *)param_2[3]) {
          uVar7 = *(uint *)param_2[2];
        }
        else {
          uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (uVar7 == 0xffffffff) {
          param_2 = (long *)0x0;
        }
      }
      cVar3 = (**(code **)(*plVar9 + 0x10))(plVar9,0x2000,uVar7);
      if (cVar3 == '\0') {
        auVar19 = FUN_0065ec00(param_1,param_2,local_260 & 0xffffffff00000000 | (ulong)local_27c,
                               local_278,param_5,&local_b0,10,0x1f,2,param_6,&local_b4);
      }
      else {
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
          param_2[2] = param_2[2] + 4;
        }
        else {
          (**(code **)(*param_2 + 0x50))(param_2);
        }
        auVar19 = FUN_0065ec00(param_1,param_2,local_260 | 0xffffffff,local_278,param_5,&local_b0,1,
                               9,1,param_6,&local_b4);
      }
      param_2 = auVar19._0_8_;
      local_260 = local_260 & 0xffffffff00000000 | auVar19._8_8_ & 0xffffffff;
      local_27c = auVar19._8_4_;
      if (local_b4 == 0) {
        param_8[3] = local_b0;
      }
      break;
    case 0x2c:
      auVar19 = FUN_0065ec00(param_1,param_2,local_260 & 0xffffffff00000000 | (ulong)local_27c,
                             local_278,param_5,&local_b0,1,0xc,2,param_6,&local_b4);
      param_2 = auVar19._0_8_;
      local_27c = auVar19._8_4_;
      local_260 = local_260 & 0xffffffff00000000 | auVar19._8_8_ & 0xffffffff;
      if (local_b4 == 0) {
        param_8[4] = local_b0 + -1;
      }
      break;
    case 0x2d:
      uVar7 = local_27c;
      if ((param_2 != (long *)0x0) && (bVar17)) {
        if ((uint *)param_2[2] < (uint *)param_2[3]) {
          uVar7 = *(uint *)param_2[2];
        }
        else {
          uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (uVar7 == 0xffffffff) {
          param_2 = (long *)0x0;
        }
      }
      cVar3 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar7,0);
      if (cVar3 == '\n') {
LAB_00660bcb:
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
          param_2[2] = param_2[2] + 4;
        }
        else {
          (**(code **)(*param_2 + 0x50))(param_2);
        }
        goto LAB_0066058c;
      }
      goto switchD_0066042b_caseD_4;
    case 0x33:
      uVar7 = local_27c;
      if ((param_2 != (long *)0x0) && (bVar17)) {
        if ((uint *)param_2[2] < (uint *)param_2[3]) {
          uVar7 = *(uint *)param_2[2];
        }
        else {
          uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (uVar7 == 0xffffffff) {
          param_2 = (long *)0x0;
        }
      }
      cVar3 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar7,0);
      if (cVar3 == '\t') goto LAB_00660bcb;
switchD_0066042b_caseD_4:
      local_b4 = local_b4 | 4;
      break;
    case 0x37:
      local_260 = local_260 & 0xffffffff00000000;
      auVar19 = FUN_006602b0(param_1,param_2,local_260 | local_27c,local_278,param_5,param_6,
                             &local_b4,param_8,*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10));
      param_2 = auVar19._0_8_;
      local_27c = auVar19._8_4_;
      uVar15 = auVar19._8_8_ & 0xffffffff;
      goto LAB_00660a74;
    case 0x39:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_00660459:
    uVar12 = uVar12 + 1;
  } while( true );
}

