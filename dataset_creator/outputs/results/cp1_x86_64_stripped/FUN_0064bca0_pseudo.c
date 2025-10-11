
long * FUN_0064bca0(undefined8 param_1,long *param_2,ulong param_3,long *param_4,undefined8 param_5,
                   long param_6,uint *param_7,int *param_8,long param_9)

{
  long lVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  bool bVar13;
  char cVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulong local_298;
  bool local_278;
  uint local_c4;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
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
  undefined8 local_4a;
  undefined1 local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = FUN_0067e030(param_6 + 0xd0);
  plVar9 = (long *)FUN_0067c1e0(param_6 + 0xd0);
  uVar10 = thunk_FUN_007129d0(param_9);
  uVar15 = 0;
  local_c4 = 0;
  uVar18 = param_3 & 0xffffffff;
  local_298 = param_3;
LAB_0064bd5e:
  bVar19 = (int)uVar18 == -1;
  bVar13 = param_2 != (long *)0x0 && bVar19;
  bVar2 = bVar19;
  if (bVar13) {
    if ((ulong)param_2[2] < (ulong)param_2[3]) {
      bVar2 = false;
    }
    else {
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
      uVar18 = uVar18 & 0xffffffff;
      if (iVar6 == -1) {
        param_2 = (long *)0x0;
      }
      bVar2 = iVar6 == -1 && bVar13;
    }
  }
  bVar13 = (int)param_5 == -1;
  if ((param_4 == (long *)0x0) || (!bVar13)) {
    bVar2 = (bool)(bVar2 ^ bVar13);
  }
  else if ((ulong)param_4[3] <= (ulong)param_4[2]) {
    iVar6 = (**(code **)(*param_4 + 0x48))(param_4);
    uVar18 = uVar18 & 0xffffffff;
    if (iVar6 == -1) {
      bVar2 = (bool)(bVar2 ^ 1);
      param_4 = (long *)0x0;
    }
  }
  if ((uVar10 <= uVar15) || (!bVar2)) {
    if ((local_c4 == 0) && (uVar15 == uVar10)) goto LAB_0064bec3;
LAB_0064bebb:
    *param_7 = *param_7 | 4;
LAB_0064bec3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  if (local_c4 != 0) goto LAB_0064bebb;
  bVar4 = *(byte *)(param_9 + uVar15);
  bVar5 = *(byte *)((long)plVar9 + (ulong)bVar4 + 0x139);
  if (bVar5 == 0) {
    bVar5 = bVar4;
    if (*(code **)(*plVar9 + 0x40) != FUN_0063d3c0) {
      bVar5 = (**(code **)(*plVar9 + 0x40))(plVar9,(int)(char)bVar4,0);
      uVar18 = uVar18 & 0xffffffff;
    }
    if (bVar5 != 0) {
      *(byte *)((long)plVar9 + (ulong)bVar4 + 0x139) = bVar5;
      goto LAB_0064bdf0;
    }
LAB_0064bdf4:
    bVar4 = *(byte *)(param_9 + uVar15);
    uVar16 = uVar15;
    if ((param_2 == (long *)0x0) || (!bVar19)) {
      uVar15 = uVar18 & 0xffffffff;
LAB_0064be09:
      if (bVar4 != (byte)uVar15) goto switchD_0064bea3_caseD_4;
LAB_0064c000:
      pbVar11 = (byte *)param_2[2];
      uVar15 = uVar16;
      if (pbVar11 < (byte *)param_2[3]) goto LAB_0064c00e;
      (**(code **)(*param_2 + 0x50))(param_2);
    }
    else {
      pbVar11 = (byte *)param_2[2];
      if ((byte *)param_2[3] <= pbVar11) {
        uVar15 = (**(code **)(*param_2 + 0x48))(param_2);
        uVar18 = uVar18 & 0xffffffff;
        if ((int)uVar15 == -1) {
          param_2 = (long *)0x0;
        }
        goto LAB_0064be09;
      }
      if (bVar4 != *pbVar11) goto switchD_0064bea3_caseD_4;
LAB_0064c00e:
      param_2[2] = (long)(pbVar11 + 1);
      uVar16 = uVar15;
    }
    auVar21._8_8_ = 0xffffffff;
    auVar21._0_8_ = param_2;
    goto LAB_0064be1a;
  }
LAB_0064bdf0:
  if (bVar5 != 0x25) goto LAB_0064bdf4;
  bVar4 = *(byte *)(param_9 + 1 + uVar15);
  uVar16 = uVar15 + 1;
  bVar5 = *(byte *)((long)plVar9 + (ulong)bVar4 + 0x139);
  if (bVar5 == 0) {
    bVar5 = bVar4;
    if (*(code **)(*plVar9 + 0x40) != FUN_0063d3c0) {
      bVar5 = (**(code **)(*plVar9 + 0x40))(plVar9,(int)(char)bVar4,0);
      uVar18 = uVar18 & 0xffffffff;
    }
    if (bVar5 != 0) {
      *(byte *)((long)plVar9 + (ulong)bVar4 + 0x139) = bVar5;
      goto LAB_0064be6a;
    }
    goto switchD_0064bea3_caseD_4;
  }
LAB_0064be6a:
  local_c0 = 0;
  if ((bVar5 == 0x45) || (bVar5 == 0x4f)) {
    uVar16 = uVar15 + 2;
    bVar4 = *(byte *)(param_9 + uVar16);
    bVar5 = *(byte *)((long)plVar9 + (ulong)bVar4 + 0x139);
    if (bVar5 == 0) {
      bVar5 = bVar4;
      if (*(code **)(*plVar9 + 0x40) != FUN_0063d3c0) {
        bVar5 = (**(code **)(*plVar9 + 0x40))(plVar9,(int)(char)bVar4,0);
        uVar18 = uVar18 & 0xffffffff;
      }
      if (bVar5 == 0) goto switchD_0064bea3_caseD_4;
      *(byte *)((long)plVar9 + (ulong)bVar4 + 0x139) = bVar5;
    }
  }
  bVar4 = (byte)uVar18;
  switch(bVar5 + 0xbf) {
  case 0:
    lVar1 = *(long *)(lVar8 + 0x10);
    uVar15 = local_298 & 0xffffffff00000000 | uVar18 & 0xffffffff;
    local_b8 = *(undefined8 *)(lVar1 + 0x58);
    local_b0 = *(undefined8 *)(lVar1 + 0x60);
    local_a8 = *(undefined8 *)(lVar1 + 0x68);
    local_a0 = *(undefined8 *)(lVar1 + 0x70);
    local_98 = *(undefined8 *)(lVar1 + 0x78);
    local_90 = *(undefined8 *)(lVar1 + 0x80);
    local_88 = *(undefined8 *)(lVar1 + 0x88);
    auVar21 = FUN_0064a9b0(param_1,param_2,uVar15,param_4,param_5,&local_c0,&local_b8,7,param_6,
                           &local_c4);
    goto LAB_0064c38f;
  case 1:
    lVar1 = *(long *)(lVar8 + 0x10);
    uVar15 = local_298 & 0xffffffff00000000 | uVar18 & 0xffffffff;
    local_b8 = *(undefined8 *)(lVar1 + 200);
    local_b0 = *(undefined8 *)(lVar1 + 0xd0);
    local_a8 = *(undefined8 *)(lVar1 + 0xd8);
    local_a0 = *(undefined8 *)(lVar1 + 0xe0);
    local_98 = *(undefined8 *)(lVar1 + 0xe8);
    local_90 = *(undefined8 *)(lVar1 + 0xf0);
    local_88 = *(undefined8 *)(lVar1 + 0xf8);
    local_80 = *(undefined8 *)(lVar1 + 0x100);
    local_78 = *(undefined8 *)(lVar1 + 0x108);
    local_70 = *(undefined8 *)(lVar1 + 0x110);
    local_68 = *(undefined8 *)(lVar1 + 0x118);
    local_60 = *(undefined8 *)(lVar1 + 0x120);
    auVar21 = FUN_0064a9b0(param_1,param_2,uVar15,param_4,param_5,&local_c0,&local_b8,0xc,param_6,
                           &local_c4);
    goto LAB_0064c280;
  case 2:
  case 0x18:
  case 0x38:
    auVar21 = FUN_0064a460(param_1,param_2,local_298 & 0xffffffff00000000 | uVar18 & 0xffffffff,
                           param_4,param_5,&local_c0,0,9999,4,param_6,&local_c4);
    local_298 = local_298 & 0xffffffff00000000 | auVar21._8_8_ & 0xffffffff;
    if (local_c4 == 0) {
      iVar6 = local_c0 + -0x76c;
      if (local_c0 < 0) {
        iVar6 = local_c0 + 100;
      }
      param_8[5] = iVar6;
    }
    break;
  case 3:
    if ((char)plVar9[7] == '\x01') {
LAB_0064d000:
      local_42 = 0;
      local_4a = 0x79252f64252f6d25;
    }
    else {
      if ((char)plVar9[7] == '\0') {
        FUN_0063d6f0(plVar9);
      }
      if (*(code **)(*plVar9 + 0x38) == FUN_0063d4f0) goto LAB_0064d000;
      (**(code **)(*plVar9 + 0x38))(plVar9,"%m/%d/%y","%H:%M",&local_4a);
    }
    uVar15 = local_298 & 0xffffffff00000000 | uVar18 & 0xffffffff;
    auVar21 = FUN_0064bca0(param_1,param_2,uVar15,param_4,param_5,param_6,&local_c4,param_8,
                           &local_4a);
    goto LAB_0064c700;
  default:
    goto switchD_0064bea3_caseD_4;
  case 7:
    auVar21 = FUN_0064a460(param_1,param_2,local_298 & 0xffffffff00000000 | uVar18 & 0xffffffff,
                           param_4,param_5,&local_c0,0,0x17,2,param_6,&local_c4);
    local_298 = local_298 & 0xffffffff00000000 | auVar21._8_8_ & 0xffffffff;
    if (local_c4 == 0) {
      param_8[2] = local_c0;
    }
    break;
  case 8:
    auVar21 = FUN_0064a460(param_1,param_2,local_298 & 0xffffffff00000000 | uVar18 & 0xffffffff,
                           param_4,param_5,&local_c0,1,0xc,2,param_6,&local_c4);
    local_298 = local_298 & 0xffffffff00000000 | auVar21._8_8_ & 0xffffffff;
    if (local_c4 == 0) {
      param_8[2] = local_c0;
    }
    break;
  case 0xc:
    auVar21 = FUN_0064a460(param_1,param_2,local_298 & 0xffffffff00000000 | uVar18 & 0xffffffff,
                           param_4,param_5,&local_c0,0,0x3b,2,param_6,&local_c4);
    local_298 = local_298 & 0xffffffff00000000 | auVar21._8_8_ & 0xffffffff;
    if (local_c4 == 0) {
      param_8[1] = local_c0;
    }
    break;
  case 0x11:
    if ((char)plVar9[7] == '\x01') {
LAB_0064d090:
      local_4a = CONCAT26(local_4a._6_2_,0x4d253a4825);
    }
    else {
      if ((char)plVar9[7] == '\0') {
        FUN_0063d6f0(plVar9);
      }
      if (*(code **)(*plVar9 + 0x38) == FUN_0063d4f0) goto LAB_0064d090;
      (**(code **)(*plVar9 + 0x38))(plVar9,"%H:%M","%H:%M:%S",&local_4a);
    }
    uVar15 = local_298 & 0xffffffff00000000 | uVar18 & 0xffffffff;
    auVar21 = FUN_0064bca0(param_1,param_2,uVar15,param_4,param_5,param_6,&local_c4,param_8,
                           &local_4a);
    goto LAB_0064c700;
  case 0x12:
    auVar21 = FUN_0064a460(param_1,param_2,local_298 & 0xffffffff00000000 | uVar18 & 0xffffffff,
                           param_4,param_5,&local_c0,0,0x3c,2,param_6,&local_c4);
    local_298 = local_298 & 0xffffffff00000000 | auVar21._8_8_ & 0xffffffff;
    if (local_c4 == 0) {
      *param_8 = local_c0;
    }
    break;
  case 0x13:
    if ((char)plVar9[7] == '\x01') {
LAB_0064d118:
      local_42 = 0;
      local_4a = 0x53253a4d253a4825;
    }
    else {
      if ((char)plVar9[7] == '\0') {
        FUN_0063d6f0(plVar9);
      }
      if (*(code **)(*plVar9 + 0x38) == FUN_0063d4f0) goto LAB_0064d118;
      (**(code **)(*plVar9 + 0x38))(plVar9,"%H:%M:%S",&DAT_0081e7d2,&local_4a);
    }
    uVar15 = local_298 & 0xffffffff00000000 | uVar18 & 0xffffffff;
    auVar21 = FUN_0064bca0(param_1,param_2,uVar15,param_4,param_5,param_6,&local_c4,param_8,
                           &local_4a);
    goto LAB_0064c700;
  case 0x17:
    uVar15 = local_298 & 0xffffffff00000000 | uVar18 & 0xffffffff;
    auVar21 = FUN_0064bca0(param_1,param_2,uVar15,param_4,param_5,param_6,&local_c4,param_8,
                           *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x20));
    goto LAB_0064c700;
  case 0x19:
    if ((param_2 != (long *)0x0) && (bVar19)) {
      if ((byte *)param_2[2] < (byte *)param_2[3]) {
        bVar4 = *(byte *)param_2[2];
      }
      else {
        iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
        uVar18 = uVar18 & 0xffffffff;
        bVar4 = (byte)iVar6;
        if (iVar6 == -1) {
          bVar4 = 0xff;
          param_2 = (long *)0x0;
        }
      }
    }
    if ((*(byte *)(plVar9[6] + 1 + (ulong)bVar4 * 2) & 1) == 0) goto switchD_0064bea3_caseD_4;
    uVar15 = local_298 & 0xffffffff00000000;
    auVar22 = FUN_0064a9b0(param_1,param_2,uVar15 | uVar18 & 0xffffffff,param_4,param_5,&local_bc,
                           PTR_PTR_0093af68,0xe,param_6,&local_c4);
    plVar17 = auVar22._0_8_;
    uVar7 = auVar22._8_4_;
    local_298 = uVar15 | auVar22._8_8_ & 0xffffffff;
    bVar20 = uVar7 == 0xffffffff;
    bVar19 = plVar17 != (long *)0x0 && bVar20;
    local_278 = bVar20;
    bVar2 = bVar19;
    if ((bVar19) && (local_278 = false, (ulong)plVar17[3] <= (ulong)plVar17[2])) {
      iVar6 = (**(code **)(*plVar17 + 0x48))(plVar17);
      local_278 = false;
      if (iVar6 == -1) {
        plVar17 = (long *)0x0;
        bVar2 = false;
        local_278 = bVar19;
      }
    }
    uVar18 = auVar22._8_8_ & 0xffffffff;
    auVar3._8_8_ = uVar18;
    auVar3._0_8_ = plVar17;
    auVar21._8_8_ = uVar18;
    auVar21._0_8_ = plVar17;
    bVar19 = param_4 != (long *)0x0 && bVar13;
    if ((bVar19) && (bVar13 = false, (ulong)param_4[3] <= (ulong)param_4[2])) {
      iVar6 = (**(code **)(*param_4 + 0x48))(param_4);
      if (iVar6 == -1) {
        param_4 = (long *)0x0;
      }
      bVar13 = iVar6 == -1 && bVar19;
    }
    if ((local_278 != bVar13) && (auVar21 = auVar3, local_c4 == 0 && local_bc == 0)) {
      if (bVar2) {
        if ((byte *)plVar17[2] < (byte *)plVar17[3]) {
          uVar7 = (uint)*(byte *)plVar17[2];
        }
        else {
          uVar7 = (**(code **)(*plVar17 + 0x48))(plVar17);
          if (uVar7 == 0xffffffff) {
            plVar17 = (long *)0x0;
          }
        }
      }
      if ((char)plVar9[7] == '\0') {
        FUN_0063d6f0(plVar9);
        uVar12 = 0x2d;
        if (*(code **)(*plVar9 + 0x30) != FUN_00405e50) {
          uVar12 = (**(code **)(*plVar9 + 0x30))(plVar9,0x2d);
        }
      }
      else {
        uVar12 = (ulong)*(byte *)((long)plVar9 + 0x66);
      }
      cVar14 = auVar22[8];
      if ((char)uVar7 != (char)uVar12) {
        if ((plVar17 != (long *)0x0) && (bVar20)) {
          if ((char *)plVar17[2] < (char *)plVar17[3]) {
            cVar14 = *(char *)plVar17[2];
          }
          else {
            iVar6 = (**(code **)(*plVar17 + 0x48))(plVar17);
            cVar14 = (char)iVar6;
            if (iVar6 == -1) {
              plVar17 = (long *)0x0;
            }
          }
        }
        auVar21._0_8_ = plVar17;
        if ((char)plVar9[7] == '\0') {
          FUN_0063d6f0(plVar9);
          uVar12 = 0x2b;
          if (*(code **)(*plVar9 + 0x30) != FUN_00405e50) {
            uVar12 = (**(code **)(*plVar9 + 0x30))(plVar9,0x2b);
          }
        }
        else {
          uVar12 = (ulong)*(byte *)((long)plVar9 + 100);
        }
        if (cVar14 != (char)uVar12) break;
      }
      auVar21 = FUN_0064a460(param_1,plVar17,local_298,param_4,param_5,&local_bc,0,0x17,2,param_6,
                             &local_c4,uVar12);
      auVar21 = FUN_0064a460(param_1,auVar21._0_8_,uVar15 | auVar21._8_8_ & 0xffffffff,param_4,
                             param_5,&local_bc,0,0x3b,2,param_6,&local_c4);
      local_298 = uVar15 | auVar21._8_8_ & 0xffffffff;
    }
    break;
  case 0x20:
    lVar1 = *(long *)(lVar8 + 0x10);
    uVar15 = local_298 & 0xffffffff00000000 | uVar18 & 0xffffffff;
    local_b8 = *(undefined8 *)(lVar1 + 0x90);
    local_b0 = *(undefined8 *)(lVar1 + 0x98);
    local_a8 = *(undefined8 *)(lVar1 + 0xa0);
    local_a0 = *(undefined8 *)(lVar1 + 0xa8);
    local_98 = *(undefined8 *)(lVar1 + 0xb0);
    local_90 = *(undefined8 *)(lVar1 + 0xb8);
    local_88 = *(undefined8 *)(lVar1 + 0xc0);
    auVar21 = FUN_0064a9b0(param_1,param_2,uVar15,param_4,param_5,&local_c0,&local_b8,7,param_6,
                           &local_c4);
LAB_0064c38f:
    local_298 = uVar15 & 0xffffffff00000000 | auVar21._8_8_ & 0xffffffff;
    if (local_c4 == 0) {
      param_8[6] = local_c0;
    }
    break;
  case 0x21:
  case 0x27:
    lVar1 = *(long *)(lVar8 + 0x10);
    uVar15 = local_298 & 0xffffffff00000000 | uVar18 & 0xffffffff;
    local_b8 = *(undefined8 *)(lVar1 + 0x128);
    local_b0 = *(undefined8 *)(lVar1 + 0x130);
    local_a8 = *(undefined8 *)(lVar1 + 0x138);
    local_a0 = *(undefined8 *)(lVar1 + 0x140);
    local_98 = *(undefined8 *)(lVar1 + 0x148);
    local_90 = *(undefined8 *)(lVar1 + 0x150);
    local_88 = *(undefined8 *)(lVar1 + 0x158);
    local_80 = *(undefined8 *)(lVar1 + 0x160);
    local_78 = *(undefined8 *)(lVar1 + 0x168);
    local_70 = *(undefined8 *)(lVar1 + 0x170);
    local_68 = *(undefined8 *)(lVar1 + 0x178);
    local_60 = *(undefined8 *)(lVar1 + 0x180);
    auVar21 = FUN_0064a9b0(param_1,param_2,uVar15,param_4,param_5,&local_c0,&local_b8,0xc,param_6,
                           &local_c4);
LAB_0064c280:
    local_298 = uVar15 & 0xffffffff00000000 | auVar21._8_8_ & 0xffffffff;
    if (local_c4 == 0) {
      param_8[4] = local_c0;
    }
    break;
  case 0x22:
    uVar15 = local_298 & 0xffffffff00000000 | uVar18 & 0xffffffff;
    auVar21 = FUN_0064bca0(param_1,param_2,uVar15,param_4,param_5,param_6,&local_c4,param_8,
                           *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x30));
    goto LAB_0064c700;
  case 0x23:
    auVar21 = FUN_0064a460(param_1,param_2,local_298 & 0xffffffff00000000 | uVar18 & 0xffffffff,
                           param_4,param_5,&local_c0,1,0x1f,2,param_6,&local_c4);
    local_298 = local_298 & 0xffffffff00000000 | auVar21._8_8_ & 0xffffffff;
    goto joined_r0x0064ca0f;
  case 0x24:
    if ((param_2 == (long *)0x0) || (!bVar19)) {
      uVar15 = uVar18 & 0xffffffff;
LAB_0064ca23:
      if ((*(byte *)(plVar9[6] + 1 + (uVar15 & 0xff) * 2) & 0x20) == 0) {
LAB_0064d28c:
        auVar21 = FUN_0064a460(param_1,param_2,local_298 & 0xffffffff00000000 | uVar18 & 0xffffffff,
                               param_4,param_5,&local_c0,10,0x1f,2,param_6,&local_c4);
        local_298 = local_298 & 0xffffffff00000000 | auVar21._8_8_ & 0xffffffff;
        goto joined_r0x0064ca0f;
      }
      pbVar11 = (byte *)param_2[2];
      if (pbVar11 < (byte *)param_2[3]) goto LAB_0064c97d;
      (**(code **)(*param_2 + 0x50))(param_2);
    }
    else {
      pbVar11 = (byte *)param_2[2];
      if ((byte *)param_2[3] <= pbVar11) {
        uVar15 = (**(code **)(*param_2 + 0x48))(param_2);
        uVar18 = uVar18 & 0xffffffff;
        if ((int)uVar15 == -1) {
          param_2 = (long *)0x0;
        }
        goto LAB_0064ca23;
      }
      if ((*(byte *)(plVar9[6] + 1 + (ulong)*pbVar11 * 2) & 0x20) == 0) goto LAB_0064d28c;
LAB_0064c97d:
      param_2[2] = (long)(pbVar11 + 1);
    }
    auVar21 = FUN_0064a460(param_1,param_2,local_298 | 0xffffffff,param_4,param_5,&local_c0,1,9,1,
                           param_6,&local_c4);
    local_298 = local_298 & 0xffffffff00000000 | auVar21._8_8_ & 0xffffffff;
joined_r0x0064ca0f:
    if (local_c4 == 0) {
      param_8[3] = local_c0;
    }
    break;
  case 0x2c:
    auVar21 = FUN_0064a460(param_1,param_2,local_298 & 0xffffffff00000000 | uVar18 & 0xffffffff,
                           param_4,param_5,&local_c0,1,0xc,2,param_6,&local_c4);
    local_298 = local_298 & 0xffffffff00000000 | auVar21._8_8_ & 0xffffffff;
    if (local_c4 == 0) {
      param_8[4] = local_c0 + -1;
    }
    break;
  case 0x2d:
    if ((param_2 == (long *)0x0) || (!bVar19)) {
      uVar7 = (uint)uVar18 & 0xff;
    }
    else if ((byte *)param_2[2] < (byte *)param_2[3]) {
      bVar4 = *(byte *)param_2[2];
      uVar7 = (uint)bVar4;
    }
    else {
      uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      uVar18 = uVar18 & 0xffffffff;
      if (uVar7 == 0xffffffff) {
        uVar7 = 0xff;
        bVar4 = 0xff;
        param_2 = (long *)0x0;
      }
      else {
        bVar4 = (byte)uVar7;
        uVar7 = uVar7 & 0xff;
      }
    }
    bVar5 = *(byte *)((long)plVar9 + (long)(int)uVar7 + 0x139);
    if (bVar5 == 0) {
      bVar5 = bVar4;
      if (*(code **)(*plVar9 + 0x40) != FUN_0063d3c0) {
        bVar5 = (**(code **)(*plVar9 + 0x40))(plVar9,(int)(char)bVar4,0);
        uVar18 = uVar18 & 0xffffffff;
      }
      if (bVar5 == 0) goto switchD_0064bea3_caseD_4;
      *(byte *)((long)plVar9 + (long)(int)uVar7 + 0x139) = bVar5;
    }
    if (bVar5 != 10) goto switchD_0064bea3_caseD_4;
    goto LAB_0064c000;
  case 0x33:
    if ((param_2 == (long *)0x0) || (!bVar19)) {
      uVar7 = (uint)uVar18 & 0xff;
    }
    else if ((byte *)param_2[2] < (byte *)param_2[3]) {
      bVar4 = *(byte *)param_2[2];
      uVar7 = (uint)bVar4;
    }
    else {
      uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      uVar18 = uVar18 & 0xffffffff;
      if (uVar7 == 0xffffffff) {
        uVar7 = 0xff;
        bVar4 = 0xff;
        param_2 = (long *)0x0;
      }
      else {
        bVar4 = (byte)uVar7;
        uVar7 = uVar7 & 0xff;
      }
    }
    bVar5 = *(byte *)((long)plVar9 + (long)(int)uVar7 + 0x139);
    if (bVar5 == 0) {
      bVar5 = bVar4;
      if (*(code **)(*plVar9 + 0x40) != FUN_0063d3c0) {
        bVar5 = (**(code **)(*plVar9 + 0x40))(plVar9,(int)(char)bVar4,0);
        uVar18 = uVar18 & 0xffffffff;
      }
      if (bVar5 == 0) goto switchD_0064bea3_caseD_4;
      *(byte *)((long)plVar9 + (long)(int)uVar7 + 0x139) = bVar5;
    }
    if (bVar5 == 9) goto LAB_0064c000;
    goto switchD_0064bea3_caseD_4;
  case 0x37:
    uVar15 = local_298 & 0xffffffff00000000 | uVar18 & 0xffffffff;
    auVar21 = FUN_0064bca0(param_1,param_2,uVar15,param_4,param_5,param_6,&local_c4,param_8,
                           *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10));
LAB_0064c700:
    local_298 = uVar15 & 0xffffffff00000000 | auVar21._8_8_ & 0xffffffff;
  }
LAB_0064be1a:
  uVar18 = auVar21._8_8_;
  param_2 = auVar21._0_8_;
  uVar15 = uVar16 + 1;
  goto LAB_0064bd5e;
switchD_0064bea3_caseD_4:
  auVar21._8_8_ = uVar18;
  auVar21._0_8_ = param_2;
  local_c4 = local_c4 | 4;
  goto LAB_0064be1a;
}

