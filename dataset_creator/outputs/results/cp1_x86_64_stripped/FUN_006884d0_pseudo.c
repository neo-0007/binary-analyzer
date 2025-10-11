
long * FUN_006884d0(undefined8 param_1,long *param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,long param_6,uint *param_7,int *param_8,long param_9)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  undefined1 auVar14 [12];
  undefined8 local_e8;
  undefined8 local_e0;
  long *local_d8;
  ulong local_d0;
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
  undefined1 local_4a [10];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = param_4;
  local_e0 = param_5;
  local_d8 = param_2;
  local_d0 = param_3;
  lVar7 = FUN_0067e030(param_6 + 0xd0);
  plVar8 = (long *)FUN_0067c1e0(param_6 + 0xd0);
  uVar9 = thunk_FUN_007129d0(param_9);
  local_c4 = 0;
  cVar2 = FUN_00681960(&local_d8,&local_e8);
  uVar12 = 0;
  while ((cVar2 != '\x01' && (uVar12 < uVar9))) {
    if (local_c4 != 0) goto LAB_0068865c;
    bVar4 = *(byte *)(param_9 + uVar12);
    bVar3 = *(byte *)((long)plVar8 + (ulong)bVar4 + 0x139);
    if (bVar3 == 0) {
      bVar3 = bVar4;
      if (*(code **)(*plVar8 + 0x40) != FUN_0063d3c0) {
        bVar3 = (**(code **)(*plVar8 + 0x40))(plVar8,(int)(char)bVar4,0);
      }
      if (bVar3 != 0) {
        *(byte *)((long)plVar8 + (ulong)bVar4 + 0x139) = bVar3;
        goto LAB_006885fa;
      }
LAB_00688603:
      bVar4 = *(byte *)(param_9 + uVar12);
      uVar10 = local_d0 & 0xffffffff;
      if ((local_d8 != (long *)0x0) && ((int)local_d0 == -1)) {
        if ((byte *)local_d8[2] < (byte *)local_d8[3]) {
          uVar10 = (ulong)*(byte *)local_d8[2];
        }
        else {
          uVar10 = (**(code **)(*local_d8 + 0x48))();
          if ((int)uVar10 == -1) {
            local_d8 = (long *)0x0;
          }
        }
      }
      uVar13 = uVar12;
      if (bVar4 != (byte)uVar10) goto switchD_0068871a_caseD_4;
LAB_00688740:
      FUN_0069d140(local_d8);
      local_d0 = CONCAT44(local_d0._4_4_,0xffffffff);
      goto LAB_00688633;
    }
LAB_006885fa:
    if (bVar3 != 0x25) goto LAB_00688603;
    bVar4 = *(byte *)(param_9 + 1 + uVar12);
    uVar13 = uVar12 + 1;
    bVar3 = *(byte *)((long)plVar8 + (ulong)bVar4 + 0x139);
    if (bVar3 == 0) {
      bVar3 = bVar4;
      if (*(code **)(*plVar8 + 0x40) != FUN_0063d3c0) {
        bVar3 = (**(code **)(*plVar8 + 0x40))(plVar8,(int)(char)bVar4,0);
      }
      if (bVar3 != 0) {
        *(byte *)((long)plVar8 + (ulong)bVar4 + 0x139) = bVar3;
        goto LAB_006886e0;
      }
      goto switchD_0068871a_caseD_4;
    }
LAB_006886e0:
    local_c0 = 0;
    if ((bVar3 == 0x45) || (bVar3 == 0x4f)) {
      uVar13 = uVar12 + 2;
      bVar3 = FUN_00679a50(plVar8,(int)*(char *)(param_9 + uVar13),0);
    }
    switch(bVar3 + 0xbf) {
    case 0:
      lVar1 = *(long *)(lVar7 + 0x10);
      local_b8 = *(undefined8 *)(lVar1 + 0x58);
      local_b0 = *(undefined8 *)(lVar1 + 0x60);
      local_a8 = *(undefined8 *)(lVar1 + 0x68);
      local_a0 = *(undefined8 *)(lVar1 + 0x70);
      local_98 = *(undefined8 *)(lVar1 + 0x78);
      local_90 = *(undefined8 *)(lVar1 + 0x80);
      local_88 = *(undefined8 *)(lVar1 + 0x88);
      auVar14 = FUN_00687660(param_1,local_d8,local_d0,local_e8,local_e0,&local_c0,&local_b8,7,
                             param_6,&local_c4);
      local_d8 = auVar14._0_8_;
      local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
      goto joined_r0x00688e42;
    case 1:
      lVar1 = *(long *)(lVar7 + 0x10);
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
      auVar14 = FUN_00687660(param_1,local_d8,local_d0,local_e8,local_e0,&local_c0,&local_b8,0xc,
                             param_6,&local_c4);
      local_d8 = auVar14._0_8_;
      local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
      if (local_c4 == 0) {
        param_8[4] = local_c0;
      }
      break;
    case 2:
    case 0x18:
    case 0x38:
      auVar14 = FUN_0067c520(param_1,local_d8,local_d0,local_e8,local_e0,&local_c0,0,9999,4,param_6,
                             &local_c4);
      local_d8 = auVar14._0_8_;
      local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
      if (local_c4 == 0) {
        iVar6 = local_c0 + -0x76c;
        if (local_c0 < 0) {
          iVar6 = local_c0 + 100;
        }
        param_8[5] = iVar6;
      }
      break;
    case 3:
      FUN_006799c0(plVar8,"%m/%d/%y");
      auVar14 = FUN_006884d0(param_1,local_d8,local_d0,local_e8,local_e0,param_6,&local_c4,param_8,
                             local_4a);
      local_d8 = auVar14._0_8_;
      local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
      break;
    case 7:
      auVar14 = FUN_0067c520(param_1,local_d8,local_d0,local_e8,local_e0,&local_c0,0,0x17,2,param_6,
                             &local_c4);
      local_d8 = auVar14._0_8_;
      local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
      if (local_c4 == 0) {
        param_8[2] = local_c0;
      }
      break;
    case 8:
      auVar14 = FUN_0067c520(param_1,local_d8,local_d0,local_e8,local_e0,&local_c0,1,0xc,2,param_6,
                             &local_c4);
      local_d8 = auVar14._0_8_;
      local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
      if (local_c4 == 0) {
        param_8[2] = local_c0;
      }
      break;
    case 0xc:
      auVar14 = FUN_0067c520(param_1,local_d8,local_d0,local_e8,local_e0,&local_c0,0,0x3b,2,param_6,
                             &local_c4);
      local_d8 = auVar14._0_8_;
      local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
      if (local_c4 == 0) {
        param_8[1] = local_c0;
      }
      break;
    case 0x11:
      FUN_006799c0(plVar8,"%H:%M");
      auVar14 = FUN_006884d0(param_1,local_d8,local_d0,local_e8,local_e0,param_6,&local_c4,param_8,
                             local_4a);
      local_d8 = auVar14._0_8_;
      local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
      break;
    case 0x12:
      auVar14 = FUN_0067c520(param_1,local_d8,local_d0,local_e8,local_e0,&local_c0,0,0x3c,2,param_6,
                             &local_c4);
      local_d8 = auVar14._0_8_;
      local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
      if (local_c4 == 0) {
        *param_8 = local_c0;
      }
      break;
    case 0x13:
      FUN_006799c0(plVar8,"%H:%M:%S");
      auVar14 = FUN_006884d0(param_1,local_d8,local_d0,local_e8,local_e0,param_6,&local_c4,param_8,
                             local_4a);
      local_d8 = auVar14._0_8_;
      local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
      break;
    case 0x17:
      auVar14 = FUN_006884d0(param_1,local_d8,local_d0,local_e8,local_e0,param_6,&local_c4,param_8,
                             *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x20));
      local_d8 = auVar14._0_8_;
      local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
      break;
    case 0x19:
      bVar4 = FUN_00681a20(&local_d8);
      if ((*(byte *)(plVar8[6] + 1 + (ulong)bVar4 * 2) & 1) == 0) goto switchD_0068871a_caseD_4;
      uVar11 = local_e8;
      auVar14 = FUN_00687660(param_1,local_d8,local_d0,local_e8,local_e0,&local_bc,PTR_PTR_0093af68,
                             0xe,param_6,&local_c4);
      local_d8 = auVar14._0_8_;
      local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
      cVar2 = FUN_00681960(&local_d8,&local_e8);
      if ((cVar2 == '\0') && (local_c4 == 0 && local_bc == 0)) {
        cVar2 = FUN_00681a20(&local_d8);
        if ((char)plVar8[7] == '\0') {
          cVar5 = FUN_00678db0(plVar8,0x2d);
        }
        else {
          cVar5 = *(char *)((long)plVar8 + 0x66);
        }
        if (cVar2 != cVar5) {
          cVar2 = FUN_00681a20(&local_d8);
          if ((char)plVar8[7] == '\0') {
            cVar5 = FUN_00678db0(plVar8,0x2b);
          }
          else {
            cVar5 = *(char *)((long)plVar8 + 100);
          }
          if (cVar2 != cVar5) break;
        }
        auVar14 = FUN_0067c520(param_1,local_d8,local_d0,local_e8,local_e0,&local_bc,0,0x17,2,
                               param_6,&local_c4,uVar11);
        local_d8 = auVar14._0_8_;
        local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
        auVar14 = FUN_0067c520(param_1,local_d8,local_d0,local_e8,local_e0,&local_bc,0,0x3b,2,
                               param_6,&local_c4);
        local_d8 = auVar14._0_8_;
        local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
      }
      break;
    case 0x20:
      lVar1 = *(long *)(lVar7 + 0x10);
      local_b8 = *(undefined8 *)(lVar1 + 0x90);
      local_b0 = *(undefined8 *)(lVar1 + 0x98);
      local_a8 = *(undefined8 *)(lVar1 + 0xa0);
      local_a0 = *(undefined8 *)(lVar1 + 0xa8);
      local_98 = *(undefined8 *)(lVar1 + 0xb0);
      local_90 = *(undefined8 *)(lVar1 + 0xb8);
      local_88 = *(undefined8 *)(lVar1 + 0xc0);
      auVar14 = FUN_00687660(param_1,local_d8,local_d0,local_e8,local_e0,&local_c0,&local_b8,7,
                             param_6,&local_c4);
      local_d8 = auVar14._0_8_;
      local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
joined_r0x00688e42:
      if (local_c4 == 0) {
        param_8[6] = local_c0;
      }
      break;
    case 0x21:
    case 0x27:
      lVar1 = *(long *)(lVar7 + 0x10);
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
      auVar14 = FUN_00687660(param_1,local_d8,local_d0,local_e8,local_e0,&local_c0,&local_b8,0xc,
                             param_6,&local_c4);
      local_d8 = auVar14._0_8_;
      local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
      if (local_c4 == 0) {
        param_8[4] = local_c0;
      }
      break;
    case 0x22:
      auVar14 = FUN_006884d0(param_1,local_d8,local_d0,local_e8,local_e0,param_6,&local_c4,param_8,
                             *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x30));
      local_d8 = auVar14._0_8_;
      local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
      break;
    case 0x23:
      auVar14 = FUN_0067c520(param_1,local_d8,local_d0,local_e8,local_e0,&local_c0,1,0x1f,2,param_6,
                             &local_c4);
      local_d8 = auVar14._0_8_;
      local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
      if (local_c4 == 0) {
        param_8[3] = local_c0;
      }
      break;
    case 0x24:
      bVar4 = FUN_00681a20(&local_d8);
      if ((*(byte *)(plVar8[6] + 1 + (ulong)bVar4 * 2) & 0x20) == 0) {
        auVar14 = FUN_0067c520(param_1,local_d8,local_d0,local_e8,local_e0,&local_c0,10,0x1f,2,
                               param_6,&local_c4);
        local_d8 = auVar14._0_8_;
        local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
      }
      else {
        FUN_0069d140(local_d8);
        local_d0 = CONCAT44(local_d0._4_4_,0xffffffff);
        auVar14 = FUN_0067c520(param_1,local_d8,local_d0,local_e8,local_e0,&local_c0,1,9,1,param_6,
                               &local_c4);
        local_d8 = auVar14._0_8_;
        local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
      }
      if (local_c4 == 0) {
        param_8[3] = local_c0;
      }
      break;
    case 0x2c:
      auVar14 = FUN_0067c520(param_1,local_d8,local_d0,local_e8,local_e0,&local_c0,1,0xc,2,param_6,
                             &local_c4);
      local_d8 = auVar14._0_8_;
      local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
      if (local_c4 == 0) {
        param_8[4] = local_c0 + -1;
      }
      break;
    case 0x2d:
      cVar2 = FUN_00681a20(&local_d8);
      cVar2 = FUN_00679a50(plVar8,(int)cVar2,0);
      if (cVar2 != '\n') goto switchD_0068871a_caseD_4;
      goto LAB_00688740;
    case 0x33:
      cVar2 = FUN_00681a20(&local_d8);
      cVar2 = FUN_00679a50(plVar8,(int)cVar2,0);
      if (cVar2 == '\t') goto LAB_00688740;
    default:
switchD_0068871a_caseD_4:
      local_c4 = local_c4 | 4;
      break;
    case 0x37:
      auVar14 = FUN_006884d0(param_1,local_d8,local_d0,local_e8,local_e0,param_6,&local_c4,param_8,
                             *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x10));
      local_d8 = auVar14._0_8_;
      local_d0 = CONCAT44(local_d0._4_4_,auVar14._8_4_);
    }
LAB_00688633:
    cVar2 = FUN_00681960(&local_d8,&local_e8);
    uVar12 = uVar13 + 1;
  }
  if ((local_c4 != 0) || (uVar12 != uVar9)) {
LAB_0068865c:
    *param_7 = *param_7 | 4;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return local_d8;
}

