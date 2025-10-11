
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x006b3e99) overlaps instruction at (ram,0x006b3e98)
    */

undefined1  [16]
FUN_006b0c70(long param_1,uint *param_2,undefined8 param_3,byte *param_4,ulong param_5,long param_6,
            uint *param_7,byte *param_8,ulong param_9)

{
  char *pcVar1;
  byte *pbVar2;
  int *piVar3;
  long lVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  bool bVar20;
  char cVar21;
  byte bVar22;
  byte bVar23;
  int iVar24;
  uint uVar27;
  long lVar28;
  long *plVar29;
  long **pplVar30;
  long lVar31;
  byte *pbVar32;
  ulong uVar33;
  undefined8 uVar34;
  undefined4 uVar25;
  int iVar26;
  byte bVar35;
  byte extraout_DL;
  byte extraout_DL_00;
  ulong uVar36;
  bool bVar37;
  long **pplVar38;
  long *plVar39;
  long **pplVar40;
  long in_FS_OFFSET;
  bool bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  ulong local_270;
  long local_268;
  byte *local_258;
  uint *local_250;
  undefined8 local_240;
  ulong local_230;
  uint *local_228;
  long local_220;
  undefined1 local_218 [6];
  char cStack_212;
  undefined8 local_210;
  undefined1 local_208 [16];
  long *local_1f8;
  uint local_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  byte *local_d8;
  ulong local_d0;
  uint *local_c8;
  uint local_c0;
  undefined4 uStack_bc;
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
  
  auVar48._8_8_ = local_220;
  auVar48._0_8_ = local_228;
  auVar50._8_8_ = local_210;
  auVar50._0_8_ = _local_218;
  bVar35 = 0;
  pplVar40 = (long **)0x0;
  local_c0 = (uint)param_3;
  uStack_bc = (undefined4)((ulong)param_3 >> 0x20);
  local_250 = param_7;
  local_258 = param_8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = param_4;
  local_d0 = param_5;
  local_c8 = param_2;
  lVar28 = FUN_006a68a0(param_6 + 0xd0);
  plVar29 = (long *)FUN_006a4ba0(param_6 + 0xd0);
  pplVar30 = (long **)thunk_FUN_007564d0(param_9);
  auVar43._8_8_ = local_168._8_8_;
  auVar43._0_8_ = local_168._0_8_;
  local_b4 = 0;
  local_270 = local_d0 & 0xffffffff;
  uVar33 = (ulong)local_c0;
  do {
    local_220 = auVar48._8_8_;
    local_228 = auVar48._0_8_;
    local_210 = auVar50._8_8_;
    _local_218 = auVar50._0_8_;
    bVar41 = (int)uVar33 == -1;
    bVar20 = local_c8 != (uint *)0x0 && bVar41;
    uVar33 = CONCAT71((int7)(uVar33 >> 8),bVar20);
    if (bVar20) {
      if (*(uint **)(local_c8 + 4) < *(uint **)(local_c8 + 6)) {
        uVar33 = (ulong)**(uint **)(local_c8 + 4);
      }
      else {
        local_168 = auVar43;
        uVar33 = (**(code **)(*(long *)local_c8 + 0x48))();
        auVar43 = local_168;
      }
      bVar41 = false;
      if ((int)uVar33 == -1) {
        local_c8 = (uint *)0x0;
        bVar41 = bVar20;
      }
    }
    bVar20 = local_d8 != (byte *)0x0 && (int)local_270 == -1;
    param_4 = (byte *)CONCAT71((int7)((ulong)param_4 >> 8),(int)local_270 == -1);
    if (bVar20) {
      if (*(int **)(local_d8 + 0x10) < *(int **)(local_d8 + 0x18)) {
        iVar26 = **(int **)(local_d8 + 0x10);
      }
      else {
        local_168 = auVar43;
        iVar26 = (**(code **)(*(long *)local_d8 + 0x48))();
        auVar43 = local_168;
      }
      param_4 = (byte *)0x0;
      if (iVar26 == -1) {
        local_d8 = (byte *)0x0;
        param_4 = (byte *)(CONCAT71((int7)(uVar33 >> 8),bVar20) & 0xffffffff);
      }
    }
    local_168 = auVar43;
    if ((bVar41 == SUB81(param_4,0)) || (pplVar30 <= pplVar40)) {
      if ((pplVar40 == pplVar30) && (local_b4 == 0)) goto LAB_006b0e71;
LAB_006b0e69:
      *param_7 = *param_7 | 4;
LAB_006b0e71:
      auVar47._8_4_ = local_c0;
      auVar47._0_8_ = local_c8;
      auVar47._12_4_ = uStack_bc;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return auVar47;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    if (local_b4 != 0) goto LAB_006b0e69;
    lVar4 = (long)pplVar40 * 4;
    cVar21 = (**(code **)(*plVar29 + 0x60))(plVar29,*(int *)(param_9 + lVar4),0);
    if (cVar21 != '%') {
      iVar26 = *(int *)(param_9 + lVar4);
      iVar24 = FUN_006aa130(&local_c8);
      auVar49._8_8_ = local_230;
      auVar49._0_8_ = local_c8;
      pplVar38 = pplVar40;
      if (iVar26 == iVar24) {
        FUN_0069d900(local_c8);
        auVar49._0_8_ = local_c8;
        uVar33 = 0xffffffff;
        local_c0 = 0xffffffff;
        auVar43 = local_168;
      }
      else {
        local_b4 = local_b4 | 4;
        uVar33 = (ulong)local_c0;
        auVar43 = local_168;
      }
      goto LAB_006b0e22;
    }
    pplVar38 = (long **)((long)pplVar40 + 1);
    plVar39 = plVar29;
    cVar21 = (**(code **)(*plVar29 + 0x60))(plVar29,*(undefined4 *)(param_9 + 4 + lVar4),0);
    local_b0 = 0;
    if ((cVar21 == 'E') || (cVar21 == 'O')) {
      pplVar38 = (long **)((long)pplVar40 + 2);
      plVar39 = plVar29;
      cVar21 = (**(code **)(*plVar29 + 0x60))(plVar29,*(undefined4 *)(param_9 + 8 + lVar4),0);
      bVar22 = cVar21 + 0xbf;
      bVar42 = extraout_DL_00;
      auVar14 = local_208;
      if (bVar22 < 0x39) goto LAB_006b0de0;
      goto switchD_006b0df1_caseD_4;
    }
    bVar22 = cVar21 + 0xbf;
    bVar42 = extraout_DL;
    auVar14 = local_208;
    if (0x38 < bVar22) goto switchD_006b0df1_caseD_4;
LAB_006b0de0:
    local_208._0_8_ = plVar39;
    lVar31 = (long)(int)(&switchD_006b0df1::caseD_43)[(uint)bVar22];
    pbVar32 = (byte *)((long)&switchD_006b0df1::caseD_43 + lVar31);
    bVar23 = (byte)pbVar32;
    cVar21 = (char)param_4;
    local_268 = param_6;
    local_208 = auVar14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((uint)bVar22) {
    case 0:
      lVar4 = *(long *)(lVar28 + 0x10);
      local_a8 = *(undefined8 *)(lVar4 + 0x58);
      local_a0 = *(undefined8 *)(lVar4 + 0x60);
      local_98 = *(undefined8 *)(lVar4 + 0x68);
      local_90 = *(undefined8 *)(lVar4 + 0x70);
      local_88 = *(undefined8 *)(lVar4 + 0x78);
      local_80 = *(undefined8 *)(lVar4 + 0x80);
      local_78 = *(undefined8 *)(lVar4 + 0x88);
      param_4 = local_d8;
      auVar45 = FUN_006afd10(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                             &local_b0,&local_a8,7,param_6,&local_b4);
      uVar34 = auVar45._0_8_;
      local_f8._8_4_ = auVar45._8_4_;
      local_c0 = local_f8._8_4_;
      local_f8 = auVar45;
      auVar18 = auVar45;
      goto joined_r0x006b1235;
    case 1:
      lVar4 = *(long *)(lVar28 + 0x10);
      local_a8 = *(undefined8 *)(lVar4 + 200);
      local_a0 = *(undefined8 *)(lVar4 + 0xd0);
      local_98 = *(undefined8 *)(lVar4 + 0xd8);
      local_90 = *(undefined8 *)(lVar4 + 0xe0);
      local_88 = *(undefined8 *)(lVar4 + 0xe8);
      local_80 = *(undefined8 *)(lVar4 + 0xf0);
      local_78 = *(undefined8 *)(lVar4 + 0xf8);
      local_70 = *(undefined8 *)(lVar4 + 0x100);
      local_68 = *(undefined8 *)(lVar4 + 0x108);
      local_60 = *(undefined8 *)(lVar4 + 0x110);
      local_58 = *(undefined8 *)(lVar4 + 0x118);
      local_50 = *(undefined8 *)(lVar4 + 0x120);
      param_4 = local_d8;
      auVar46 = FUN_006afd10(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                             &local_b0,&local_a8,0xc,param_6,&local_b4);
      uVar34 = auVar46._0_8_;
      local_118._8_4_ = auVar46._8_4_;
      local_c0 = local_118._8_4_;
      local_118 = auVar46;
      auVar19 = auVar46;
      goto joined_r0x006b112c;
    case 2:
    case 0x18:
    case 0x38:
      param_4 = local_d8;
      auVar43 = FUN_006a4d80(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                             &local_b0,0,9999,4,param_6,&local_b4);
      auVar10._8_8_ = local_230;
      auVar10._0_8_ = auVar43._0_8_;
      auVar49._8_8_ = local_230;
      auVar49._0_8_ = auVar43._0_8_;
      local_208._8_4_ = auVar43._8_4_;
      local_c0 = local_208._8_4_;
      uVar33 = auVar43._8_8_ & 0xffffffff;
      local_208 = auVar43;
      auVar43 = local_168;
      if (local_b4 == 0) {
        iVar26 = local_b0 + -0x76c;
        if (local_b0 < 0) {
          iVar26 = local_b0 + 100;
        }
        *(int *)(param_8 + 0x14) = iVar26;
        param_4 = param_8;
        auVar49 = auVar10;
      }
      break;
    case 3:
      (**(code **)(*plVar29 + 0x58))(plVar29,"%m/%d/%y","%H:%M",&local_a8);
      param_4 = local_d8;
      auVar43 = FUN_006b0c70(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,param_6
                             ,&local_b4,param_8,&local_a8);
      auVar49._8_8_ = local_230;
      auVar49._0_8_ = auVar43._0_8_;
      local_168._8_4_ = auVar43._8_4_;
      uVar33 = auVar43._8_8_ & 0xffffffff;
      local_c0 = local_168._8_4_;
      break;
    default:
      goto switchD_006b0df1_caseD_4;
    case 7:
      param_4 = local_d8;
      auVar47 = FUN_006a4d80(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                             &local_b0,0,0x17,2,param_6,&local_b4);
      auVar44._8_8_ = local_188._8_8_;
      auVar44._0_8_ = auVar47._0_8_;
      local_178._8_4_ = auVar47._8_4_;
      local_c0 = local_178._8_4_;
      auVar49 = local_188;
      local_178 = auVar47;
      auVar43 = local_168;
      goto joined_r0x006b15d3;
    case 8:
      param_4 = local_d8;
      auVar44 = FUN_006a4d80(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                             &local_b0,1,0xc,2,param_6,&local_b4);
      local_188._0_8_ = auVar44._0_8_;
      local_188._8_4_ = auVar44._8_4_;
      local_c0 = local_188._8_4_;
      auVar49 = auVar44;
      auVar43 = local_168;
      auVar47 = auVar44;
joined_r0x006b15d3:
      local_188 = auVar49;
      auVar49._8_8_ = local_230;
      auVar49._0_8_ = auVar47._0_8_;
      uVar33 = auVar47._8_8_ & 0xffffffff;
      if (local_b4 == 0) {
        local_188._8_8_ = auVar44._8_8_;
        local_c8 = auVar44._0_8_;
        auVar49._0_8_ = local_c8;
        *(int *)(param_8 + 8) = local_b0;
        param_4 = param_8;
      }
      break;
    case 0xc:
      param_4 = local_d8;
      auVar43 = FUN_006a4d80(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                             &local_b0,0,0x3b,2,param_6,&local_b4);
      auVar13._8_8_ = local_230;
      auVar13._0_8_ = auVar43._0_8_;
      auVar49._8_8_ = local_230;
      auVar49._0_8_ = auVar43._0_8_;
      local_1a8._8_4_ = auVar43._8_4_;
      uVar33 = auVar43._8_8_ & 0xffffffff;
      local_c0 = local_1a8._8_4_;
      local_1a8 = auVar43;
      auVar43 = local_168;
      if (local_b4 == 0) {
        *(int *)(param_8 + 4) = local_b0;
        param_4 = param_8;
        auVar49 = auVar13;
      }
      break;
    case 0x11:
      (**(code **)(*plVar29 + 0x58))(plVar29,"%H:%M","%H:%M:%S",&local_a8);
      param_4 = local_d8;
      auVar43 = FUN_006b0c70(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,param_6
                             ,&local_b4,param_8,&local_a8);
      auVar49._8_8_ = local_230;
      auVar49._0_8_ = auVar43._0_8_;
      local_1b8._8_4_ = auVar43._8_4_;
      uVar33 = auVar43._8_8_ & 0xffffffff;
      local_c0 = local_1b8._8_4_;
      local_1b8 = auVar43;
      auVar43 = local_168;
      break;
    case 0x12:
      auVar47 = FUN_006a4d80(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                             &local_b0,0,0x3c,2,param_6,&local_b4);
      auVar12._8_8_ = local_230;
      auVar12._0_8_ = auVar47._0_8_;
      auVar49._8_8_ = local_230;
      auVar49._0_8_ = auVar47._0_8_;
      local_1c8._8_4_ = auVar47._8_4_;
      uVar33 = auVar47._8_8_ & 0xffffffff;
      local_c0 = local_1c8._8_4_;
      param_4 = (byte *)(ulong)local_b4;
      auVar43 = local_168;
      local_1c8 = auVar47;
      if (local_b4 == 0) {
        *(int *)param_8 = local_b0;
        param_4 = param_8;
        auVar49 = auVar12;
      }
      break;
    case 0x13:
      (**(code **)(*plVar29 + 0x58))(plVar29,"%H:%M:%S",&DAT_0081e7d2,&local_a8);
      param_4 = local_d8;
      auVar47 = FUN_006b0c70(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,param_6
                             ,&local_b4,param_8,&local_a8);
      auVar49._8_8_ = local_230;
      auVar49._0_8_ = auVar47._0_8_;
      local_1d8._8_4_ = auVar47._8_4_;
      uVar33 = auVar47._8_8_ & 0xffffffff;
      local_c0 = local_1d8._8_4_;
      auVar43 = local_168;
      local_1d8 = auVar47;
      break;
    case 0x17:
      param_4 = local_d8;
      auVar43 = FUN_006b0c70(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,param_6
                             ,&local_b4,param_8,*(undefined8 *)(*(long *)(lVar28 + 0x10) + 0x20));
      local_1f8 = auVar43._0_8_;
      auVar49._8_8_ = local_230;
      auVar49._0_8_ = local_1f8;
      local_1f0 = auVar43._8_4_;
      uStack_1ec = auVar43._12_4_;
      uVar33 = auVar43._8_8_ & 0xffffffff;
      local_c0 = local_1f0;
      auVar43 = local_168;
      break;
    case 0x19:
      uVar25 = FUN_006aa130(&local_c8);
      cVar21 = (**(code **)(*plVar29 + 0x10))(plVar29,0x100,uVar25);
      auVar14 = local_208;
      if (cVar21 == '\0') goto switchD_006b0df1_caseD_4;
      auVar50 = FUN_006afd10(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                             &local_ac,PTR_PTR_0093afe0,0xe,param_6,&local_b4);
      local_c8 = auVar50._0_8_;
      local_210._0_4_ = auVar50._8_4_;
      local_c0 = (uint)local_210;
      cVar21 = FUN_006aa060(&local_c8,&local_d8);
      auVar9._8_8_ = local_230;
      auVar9._0_8_ = local_c8;
      auVar49._8_8_ = local_230;
      auVar49._0_8_ = local_c8;
      if ((cVar21 == '\0') && (auVar49 = auVar9, local_b4 == 0 && local_ac == 0)) {
        iVar26 = FUN_006aa130(&local_c8);
        local_240 = (undefined1 *)CONCAT44(iVar26,(undefined4)local_240);
        iVar24 = (**(code **)(*plVar29 + 0x50))(plVar29,0x2d);
        if (iVar26 != iVar24) {
          iVar26 = FUN_006aa130(&local_c8);
          iVar24 = (**(code **)(*plVar29 + 0x50))(plVar29,0x2b);
          auVar49._0_8_ = local_c8;
          if (iVar26 != iVar24) goto LAB_006b1393;
        }
        auVar48 = FUN_006a4d80(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                               &local_ac,0,0x17,2,param_6,&local_b4);
        local_c8 = auVar48._0_8_;
        local_220._0_4_ = auVar48._8_4_;
        local_c0 = (undefined4)local_220;
        auVar49 = FUN_006a4d80(param_1,local_c8,CONCAT44(uStack_bc,(undefined4)local_220),local_d8,
                               local_d0,&local_ac,0,0x3b,2,param_6,&local_b4);
        local_230._0_4_ = auVar49._8_4_;
        local_c0 = (uint)local_230;
      }
LAB_006b1393:
      uVar33 = (ulong)local_c0;
      local_270 = local_d0 & 0xffffffff;
      param_4 = (byte *)(local_d0 & 0xffffffff);
      auVar43 = local_168;
      break;
    case 0x20:
      lVar4 = *(long *)(lVar28 + 0x10);
      local_a8 = *(undefined8 *)(lVar4 + 0x90);
      local_a0 = *(undefined8 *)(lVar4 + 0x98);
      local_98 = *(undefined8 *)(lVar4 + 0xa0);
      local_90 = *(undefined8 *)(lVar4 + 0xa8);
      local_88 = *(undefined8 *)(lVar4 + 0xb0);
      local_80 = *(undefined8 *)(lVar4 + 0xb8);
      local_78 = *(undefined8 *)(lVar4 + 0xc0);
      auVar43 = FUN_006afd10(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                             &local_b0,&local_a8,7,param_6,&local_b4);
      auVar18._8_8_ = auVar43._8_8_;
      auVar18._0_8_ = local_f8._0_8_;
      uVar34 = auVar43._0_8_;
      auVar45._8_8_ = local_f8._8_8_;
      auVar45._0_8_ = uVar34;
      local_e8._8_4_ = auVar43._8_4_;
      param_4 = (byte *)(ulong)local_b4;
      local_c0 = local_e8._8_4_;
      local_e8 = auVar43;
joined_r0x006b1235:
      auVar49._8_8_ = local_230;
      auVar49._0_8_ = uVar34;
      uVar33 = auVar18._8_8_ & 0xffffffff;
      auVar43 = local_168;
      if (local_b4 == 0) {
        local_f8._8_8_ = auVar45._8_8_;
        local_c8 = auVar45._0_8_;
        auVar49._0_8_ = local_c8;
        local_f8._0_8_ = auVar18._0_8_;
        *(int *)(param_8 + 0x18) = local_b0;
        param_4 = param_8;
      }
      break;
    case 0x21:
    case 0x27:
      lVar4 = *(long *)(lVar28 + 0x10);
      local_a8 = *(undefined8 *)(lVar4 + 0x128);
      local_a0 = *(undefined8 *)(lVar4 + 0x130);
      local_98 = *(undefined8 *)(lVar4 + 0x138);
      local_90 = *(undefined8 *)(lVar4 + 0x140);
      local_88 = *(undefined8 *)(lVar4 + 0x148);
      local_80 = *(undefined8 *)(lVar4 + 0x150);
      local_78 = *(undefined8 *)(lVar4 + 0x158);
      local_70 = *(undefined8 *)(lVar4 + 0x160);
      local_68 = *(undefined8 *)(lVar4 + 0x168);
      local_60 = *(undefined8 *)(lVar4 + 0x170);
      local_58 = *(undefined8 *)(lVar4 + 0x178);
      local_50 = *(undefined8 *)(lVar4 + 0x180);
      param_4 = local_d8;
      auVar43 = FUN_006afd10(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                             &local_b0,&local_a8,0xc,param_6,&local_b4);
      auVar19._8_8_ = auVar43._8_8_;
      auVar19._0_8_ = local_118._0_8_;
      uVar34 = auVar43._0_8_;
      auVar46._8_8_ = local_118._8_8_;
      auVar46._0_8_ = uVar34;
      local_108._8_4_ = auVar43._8_4_;
      local_c0 = local_108._8_4_;
      local_108 = auVar43;
joined_r0x006b112c:
      auVar49._8_8_ = local_230;
      auVar49._0_8_ = uVar34;
      uVar33 = auVar19._8_8_ & 0xffffffff;
      auVar43 = local_168;
      if (local_b4 == 0) {
        local_118._8_8_ = auVar46._8_8_;
        local_c8 = auVar46._0_8_;
        auVar49._0_8_ = local_c8;
        local_118._0_8_ = auVar19._0_8_;
        *(int *)(param_8 + 0x10) = local_b0;
        param_4 = param_8;
      }
      break;
    case 0x22:
      param_4 = local_d8;
      auVar43 = FUN_006b0c70(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,param_6
                             ,&local_b4,param_8,*(undefined8 *)(*(long *)(lVar28 + 0x10) + 0x30));
      auVar49._8_8_ = local_230;
      auVar49._0_8_ = auVar43._0_8_;
      local_128._8_4_ = auVar43._8_4_;
      uVar33 = auVar43._8_8_ & 0xffffffff;
      local_c0 = local_128._8_4_;
      local_128 = auVar43;
      auVar43 = local_168;
      break;
    case 0x23:
      param_4 = local_d8;
      auVar43 = FUN_006a4d80(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                             &local_b0,1,0x1f,2,param_6,&local_b4);
      local_c8 = auVar43._0_8_;
      local_138._8_4_ = auVar43._8_4_;
      uVar33 = auVar43._8_8_ & 0xffffffff;
      local_c0 = local_138._8_4_;
      local_138 = auVar43;
      goto joined_r0x006b1a70;
    case 0x24:
      uVar25 = FUN_006aa130(&local_c8);
      cVar21 = (**(code **)(*plVar29 + 0x10))(plVar29,0x2000,uVar25);
      if (cVar21 == '\0') {
        param_4 = local_d8;
        auVar43 = FUN_006a4d80(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                               &local_b0,10,0x1f,2,param_6,&local_b4);
        local_c8 = auVar43._0_8_;
        local_158._8_4_ = auVar43._8_4_;
        local_c0 = local_158._8_4_;
        local_158 = auVar43;
        auVar43 = local_148;
      }
      else {
        FUN_0069d900(local_c8);
        local_c0 = 0xffffffff;
        param_4 = local_d8;
        auVar43 = FUN_006a4d80(param_1,local_c8,CONCAT44(uStack_bc,0xffffffff),local_d8,local_d0,
                               &local_b0,1,9,1,param_6,&local_b4);
        local_c8 = auVar43._0_8_;
        local_148._8_4_ = auVar43._8_4_;
        local_c0 = local_148._8_4_;
      }
      uVar33 = (ulong)local_c0;
      local_148 = auVar43;
joined_r0x006b1a70:
      auVar49._8_8_ = local_230;
      auVar49._0_8_ = local_c8;
      auVar43 = local_168;
      if (local_b4 == 0) {
        *(int *)(param_8 + 0xc) = local_b0;
        param_4 = param_8;
      }
      break;
    case 0x2c:
      param_4 = local_d8;
      auVar47 = FUN_006a4d80(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                             &local_b0,1,0xc,2,param_6,&local_b4);
      auVar11._8_8_ = local_230;
      auVar11._0_8_ = auVar47._0_8_;
      auVar49._8_8_ = local_230;
      auVar49._0_8_ = auVar47._0_8_;
      local_198._8_4_ = auVar47._8_4_;
      uVar33 = auVar47._8_8_ & 0xffffffff;
      local_c0 = local_198._8_4_;
      auVar43 = local_168;
      local_198 = auVar47;
      if (local_b4 == 0) {
        *(int *)(param_8 + 0x10) = local_b0 + -1;
        param_4 = param_8;
        auVar49 = auVar11;
      }
      break;
    case 0x2d:
      uVar25 = FUN_006aa130(&local_c8);
      cVar21 = (**(code **)(*plVar29 + 0x60))(plVar29,uVar25,0);
      auVar14 = local_208;
      if (cVar21 != '\n') goto switchD_006b0df1_caseD_4;
LAB_006b1b36:
      FUN_0069d900(local_c8);
      auVar49._8_8_ = local_230;
      auVar49._0_8_ = local_c8;
      uVar33 = 0xffffffff;
      local_c0 = 0xffffffff;
      auVar43 = local_168;
      break;
    case 0x33:
      uVar25 = FUN_006aa130(&local_c8);
      cVar21 = (**(code **)(*plVar29 + 0x60))(plVar29,uVar25,0);
      auVar14 = local_208;
      if (cVar21 == '\t') goto LAB_006b1b36;
switchD_006b0df1_caseD_4:
      auVar49._8_8_ = local_230;
      auVar49._0_8_ = local_c8;
      local_b4 = local_b4 | 4;
      uVar33 = (ulong)local_c0;
      local_208 = auVar14;
      auVar43 = local_168;
      break;
    case 0x37:
      param_4 = local_d8;
      auVar47 = FUN_006b0c70(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,param_6
                             ,&local_b4,param_8,*(undefined8 *)(*(long *)(lVar28 + 0x10) + 0x10));
      auVar49._8_8_ = local_230;
      auVar49._0_8_ = auVar47._0_8_;
      local_1e8._8_4_ = auVar47._8_4_;
      uVar33 = auVar47._8_8_ & 0xffffffff;
      local_c0 = local_1e8._8_4_;
      auVar43 = local_168;
      local_1e8 = auVar47;
      break;
    case 0x39:
      goto LAB_006b2dcb;
    case 0x3a:
      goto LAB_006b329a;
    case 0x3b:
      pbVar2 = (byte *)(CONCAT71((int7)((ulong)pbVar32 >> 8),bVar23 | *pbVar32) + 0x65247c);
      *pbVar2 = *pbVar2 + (bVar23 | *pbVar32);
      bVar35 = *pbVar2;
      goto code_r0x006b3104;
    case 0x3c:
      *pbVar32 = *pbVar32;
      *(char *)((long)&DWORD_008824ac + param_9) =
           *(char *)((long)&DWORD_008824ac + param_9) + cVar21;
      *pbVar32 = *pbVar32 + bVar23;
      plVar39 = (long *)local_208._0_8_;
      goto code_r0x006b30af;
    case 0x3d:
      goto switchD_006b0df1_caseD_3d;
    case 0x3e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3f:
      *pbVar32 = *pbVar32 + bVar23;
      "basic_string::_M_create"[lVar31] = "basic_string::_M_create"[lVar31] + cVar21;
      goto LAB_006b425a;
    case 0x40:
      goto switchD_006b0df1_caseD_40;
    case 0x41:
      bVar35 = (byte)((ulong)param_4 >> 8) & bVar42;
      goto code_r0x006b4052;
    case 0x42:
      pcVar1 = "St15basic_streambufIwSt11char_traitsIwEE" + lVar31 + 0x23;
      cVar5 = *pcVar1;
      *pcVar1 = *pcVar1 + cVar21;
      if (SCARRY1(cVar5,cVar21) != *pcVar1 < '\0') goto LAB_006b3e98;
      bVar41 = false;
      *param_4 = *param_4 & bVar23;
      bVar20 = *param_4 == 0;
      goto code_r0x006b3e77;
    case 0x43:
      *(undefined1 *)local_208._0_8_ = (undefined1)switchD_006b0df1::caseD_43;
      piVar3 = (int *)(local_208._0_8_ + (ulong)bVar35 * -2 + -0x170016ed);
      *piVar3 = *piVar3 + -1;
      (*(code *)((long)&switchD_006b0df1::caseD_43 + (ulong)bVar35 * -2 + 1))();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_006b0e22:
    local_230 = auVar49._8_8_;
    local_c8 = auVar49._0_8_;
    pplVar40 = (long **)((long)pplVar38 + 1);
  } while( true );
switchD_006b0df1_caseD_40:
  if (*(byte *)(lVar4 + 0x20) != 0) {
    if (*(int *)(lVar4 + 0x28) == (int)pplVar38) {
      if (local_218[5] == 0) {
        if ((int)plVar29 != 0) {
          lVar28 = *(long *)(local_1d8._0_8_ + -0x18);
          uVar33 = lVar28 + 1;
          local_208 = auVar14;
          if ((*(ulong *)(local_1d8._0_8_ + -0x10) < uVar33) || (0 < *(int *)(local_1d8._0_8_ + -8))
             ) {
            FUN_00638bc0(local_1d8,uVar33);
          }
          *(char *)(local_1d8._0_8_ + *(long *)(local_1d8._0_8_ + -0x18)) = (char)plVar29;
          plVar29 = (long *)0x0;
          if ((undefined1 *)local_1d8._0_8_ != &DAT_009452b8) {
            *(undefined4 *)(local_1d8._0_8_ + -8) = 0;
            *(ulong *)(local_1d8._0_8_ + -0x18) = uVar33;
            *(undefined1 *)(local_1d8._0_8_ + lVar28 + 1) = 0;
          }
LAB_006b3ff7:
          do {
            if ((ulong)local_1f8[2] < (ulong)local_1f8[3]) {
              local_1f8[2] = local_1f8[2] + 4;
            }
            else {
              (**(code **)(*local_1f8 + 0x50))();
            }
            local_1f0 = 0xffffffff;
            bVar41 = local_1f8 != (long *)0x0;
            param_9 = 1;
            auVar14 = local_208;
            if (bVar41) {
              if ((int *)local_1f8[2] < (int *)local_1f8[3]) {
                iVar26 = *(int *)local_1f8[2];
              }
              else {
                iVar26 = (**(code **)(*local_1f8 + 0x48))();
                auVar14 = local_208;
              }
              param_9 = 0;
              if (iVar26 == -1) {
                local_1f8 = (long *)0x0;
                param_9 = (ulong)bVar41;
              }
            }
            local_208._0_8_ = auVar14._0_8_;
            local_208._8_4_ = auVar14._8_4_;
            bVar42 = local_208._8_4_ == -1;
            bVar35 = (long *)local_208._0_8_ != (long *)0x0 && (bool)bVar42;
            pplVar38 = (long **)(ulong)bVar35;
code_r0x006b4052:
            if (bVar35 != 0) {
              if (*(int **)(local_208._0_8_ + 0x10) < *(int **)(local_208._0_8_ + 0x18)) {
                iVar26 = **(int **)(local_208._0_8_ + 0x10);
              }
              else {
                lVar28 = *(long *)local_208._0_8_;
                local_208 = auVar14;
                iVar26 = (**(code **)(lVar28 + 0x48))();
                auVar14 = local_208;
              }
              local_208._8_8_ = auVar14._8_8_;
              bVar42 = 0;
              if (iVar26 != -1) goto LAB_006b4058;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = local_208._8_8_;
              auVar14._8_8_ = 0;
              auVar14._0_8_ = local_208._8_8_;
              auVar14 = auVar14 << 0x40;
              local_208 = auVar15 << 0x40;
              if ((byte)param_9 != (byte)pplVar38) goto LAB_006b4060;
LAB_006b4450:
              auVar14 = local_208;
              param_9 = 1;
              goto LAB_006b4455;
            }
LAB_006b4058:
            local_208 = auVar14;
            if ((byte)param_9 == bVar42) goto LAB_006b4450;
LAB_006b4060:
            pplVar38 = (long **)(ulong)local_1f0;
            if ((local_1f8 != (long *)0x0) && (local_1f0 == 0xffffffff)) {
              if ((uint *)local_1f8[2] < (uint *)local_1f8[3]) {
                uVar27 = *(uint *)local_1f8[2];
              }
              else {
                local_208 = auVar14;
                uVar27 = (**(code **)(*local_1f8 + 0x48))();
                auVar14 = local_208;
              }
              pplVar38 = (long **)(ulong)uVar27;
              if (uVar27 == 0xffffffff) {
                local_1f8 = (long *)0x0;
              }
            }
            local_208 = auVar14;
            lVar28 = thunk_FUN_00756540(local_270,pplVar38,10);
            if (lVar28 == 0) {
              bVar35 = *(int *)(lVar4 + 0x24) != (int)pplVar38 | local_218[5];
              param_9 = (ulong)bVar35;
              auVar14 = local_208;
              if (bVar35 == 0) {
                if (*(int *)(lVar4 + 0x60) < 1) {
                  local_218 = (undefined1  [6])CONCAT15(0,local_218._0_5_);
                  goto LAB_006b4450;
                }
                local_218._0_5_ = (uint5)plVar29 & 0xffffffff;
                plVar29 = (long *)0x0;
                local_218 = (undefined1  [6])CONCAT15(1,local_218._0_5_);
                goto LAB_006b3ff7;
              }
              goto switchD_006b0df1_caseD_40;
            }
            uVar6 = PTR_DAT_0093d5c0[lVar28 - param_1 >> 2];
            lVar28 = *(long *)(local_1d8._8_8_ + -0x18);
            uVar33 = lVar28 + 1;
            if ((*(ulong *)(local_1d8._8_8_ + -0x10) < uVar33) ||
               (0 < *(int *)(local_1d8._8_8_ + -8))) {
              FUN_00638bc0(param_7,uVar33);
            }
            *(undefined1 *)(local_1d8._8_8_ + *(long *)(local_1d8._8_8_ + -0x18)) = uVar6;
            if ((undefined1 *)local_1d8._8_8_ != &DAT_009452b8) {
              *(undefined4 *)(local_1d8._8_8_ + -8) = 0;
              *(ulong *)(local_1d8._8_8_ + -0x18) = uVar33;
              *(undefined1 *)(local_1d8._8_8_ + lVar28 + 1) = 0;
            }
            plVar29 = (long *)(ulong)((int)plVar29 + 1);
          } while( true );
        }
        param_9 = 0;
      }
      else {
        param_9 = (ulong)local_218[5];
      }
    }
    else {
      param_9 = (ulong)*(byte *)(lVar4 + 0x20);
    }
  }
LAB_006b4455:
  if (*(long *)(local_1d8._8_8_ + -0x18) != 0) goto LAB_006b4173;
LAB_006b4468:
  pplVar40 = (long **)local_208;
  pplVar38 = &local_1f8;
  goto LAB_006b4475;
LAB_006b425a:
  local_208 = auVar14;
  cVar21 = FUN_006aa060(pplVar38,pplVar40);
  if ((cVar21 == '\x01') || (local_230 <= param_9)) goto LAB_006b4830;
  uVar27 = local_1f0;
  if ((local_1f8 == (long *)0x0) || (local_1f0 != 0xffffffff)) {
LAB_006b4220:
    auVar14 = local_208;
    if (*(uint *)(*(long *)(lVar4 + 0x30) + param_9 * 4) != uVar27) goto LAB_006b42d0;
  }
  else {
    if ((uint *)local_1f8[2] < (uint *)local_1f8[3]) {
      uVar27 = *(uint *)local_1f8[2];
    }
    else {
      uVar27 = (**(code **)(*local_1f8 + 0x48))();
    }
    if (uVar27 != 0xffffffff) goto LAB_006b4220;
    local_1f8 = (long *)0x0;
    auVar14 = local_208;
    if (*(int *)(*(long *)(lVar4 + 0x30) + param_9 * 4) != -1) goto LAB_006b42d0;
  }
  if ((ulong)local_1f8[2] < (ulong)local_1f8[3]) {
    local_1f8[2] = local_1f8[2] + 4;
    auVar14 = local_208;
  }
  else {
    (**(code **)(*local_1f8 + 0x50))();
    auVar14 = local_208;
  }
  local_1f0 = 0xffffffff;
  param_9 = param_9 + 1;
  goto LAB_006b425a;
code_r0x006b3104:
  if (bVar35 != 0) {
    bVar42 = local_218[5];
    goto LAB_006b3495;
  }
  if ((int)plVar29 != 0) {
    lVar28 = *(long *)(local_1d8._0_8_ + -0x18);
    uVar33 = lVar28 + 1;
    if ((*(ulong *)(local_1d8._0_8_ + -0x10) < uVar33) || (0 < *(int *)(local_1d8._0_8_ + -8))) {
      FUN_00638bc0(local_1d8,uVar33);
    }
    *(char *)(local_1d8._0_8_ + *(long *)(local_1d8._0_8_ + -0x18)) = (char)plVar29;
    plVar29 = (long *)0x0;
    if ((undefined1 *)local_1d8._0_8_ != &DAT_009452b8) {
      *(undefined4 *)(local_1d8._0_8_ + -8) = 0;
      *(ulong *)(local_1d8._0_8_ + -0x18) = uVar33;
      *(undefined1 *)(local_1d8._0_8_ + lVar28 + 1) = 0;
    }
LAB_006b3037:
    if ((ulong)local_1f8[2] < (ulong)local_1f8[3]) {
      local_1f8[2] = local_1f8[2] + 4;
    }
    else {
      (**(code **)(*local_1f8 + 0x50))();
    }
    local_1f0 = 0xffffffff;
    bVar20 = local_1f8 != (long *)0x0;
    bVar41 = true;
    if (bVar20) {
      if ((int *)local_1f8[2] < (int *)local_1f8[3]) {
        iVar26 = *(int *)local_1f8[2];
      }
      else {
        iVar26 = (**(code **)(*local_1f8 + 0x48))();
      }
      bVar41 = false;
      if (iVar26 == -1) {
        local_1f8 = (long *)0x0;
        bVar41 = bVar20;
      }
    }
    bVar20 = local_208._8_4_ == -1;
    bVar37 = (long *)local_208._0_8_ != (long *)0x0 && bVar20;
    if (bVar37) {
      if (*(int **)(local_208._0_8_ + 0x10) < *(int **)(local_208._0_8_ + 0x18)) {
        iVar26 = **(int **)(local_208._0_8_ + 0x10);
      }
      else {
        iVar26 = (**(code **)(*(long *)local_208._0_8_ + 0x48))();
      }
      bVar20 = false;
      if (iVar26 != -1) goto LAB_006b3098;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = local_208._8_8_;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = local_208._8_8_;
      local_208 = auVar16 << 0x40;
      auVar50 = auVar17 << 0x40;
      if (bVar41 != bVar37) goto LAB_006b30a0;
LAB_006b3490:
      local_208 = auVar50;
      bVar42 = 1;
      goto LAB_006b3495;
    }
LAB_006b3098:
    auVar50 = local_208;
    if (bVar41 == bVar20) goto LAB_006b3490;
LAB_006b30a0:
    pplVar38 = (long **)(ulong)local_1f0;
    plVar39 = local_1f8;
code_r0x006b30af:
    if ((plVar39 != (long *)0x0) && ((int)pplVar38 == -1)) {
      if ((uint *)plVar39[2] < (uint *)plVar39[3]) {
        uVar27 = *(uint *)plVar39[2];
      }
      else {
        uVar27 = (**(code **)(*plVar39 + 0x48))();
      }
      pplVar38 = (long **)(ulong)uVar27;
      if (uVar27 == 0xffffffff) {
        local_1f8 = (long *)0x0;
      }
    }
    lVar28 = thunk_FUN_00756540(local_270,(ulong)pplVar38 & 0xffffffff,10);
    if (lVar28 != 0) {
      uVar6 = PTR_DAT_0093d5c0[lVar28 - param_1 >> 2];
      lVar28 = *(long *)(local_1d8._8_8_ + -0x18);
      uVar33 = lVar28 + 1;
      if ((*(ulong *)(local_1d8._8_8_ + -0x10) < uVar33) || (0 < *(int *)(local_1d8._8_8_ + -8))) {
        FUN_00638bc0(param_7,uVar33);
      }
      *(undefined1 *)(local_1d8._8_8_ + *(long *)(local_1d8._8_8_ + -0x18)) = uVar6;
      if ((undefined1 *)local_1d8._8_8_ != &DAT_009452b8) {
        *(undefined4 *)(local_1d8._8_8_ + -8) = 0;
        *(ulong *)(local_1d8._8_8_ + -0x18) = uVar33;
        *(undefined1 *)(local_1d8._8_8_ + lVar28 + 1) = 0;
      }
      plVar29 = (long *)(ulong)((int)plVar29 + 1);
      goto LAB_006b3037;
    }
    bVar42 = *(int *)(lVar4 + 0x24) != (int)pplVar38 | local_218[5];
    if (bVar42 == 0) {
      if (*(int *)(lVar4 + 0x60) < 1) {
        local_218 = (undefined1  [6])CONCAT15(0,local_218._0_5_);
        auVar50 = local_208;
        goto LAB_006b3490;
      }
      local_218._0_5_ = (uint5)plVar29 & 0xffffffff;
      plVar29 = (long *)0x0;
      local_218 = (undefined1  [6])CONCAT15(1,local_218._0_5_);
      goto LAB_006b3037;
    }
    if ((*(byte *)(lVar4 + 0x20) == 0) ||
       (bVar35 = local_218[5], bVar42 = *(byte *)(lVar4 + 0x20),
       *(int *)(lVar4 + 0x28) != (int)pplVar38)) goto LAB_006b3495;
    goto code_r0x006b3104;
  }
  bVar42 = 0;
LAB_006b3495:
  auVar14 = local_208;
  if (*(long *)(local_1d8._8_8_ + -0x18) != 0) goto LAB_006b31b3;
LAB_006b34a8:
  pplVar40 = (long **)local_208;
  pplVar38 = &local_1f8;
  goto LAB_006b34b5;
LAB_006b329a:
  local_208 = auVar14;
  cVar21 = FUN_006aa060(pplVar38,pplVar40);
  if ((cVar21 == '\x01') || (local_230 <= param_9)) goto LAB_006b3870;
  uVar27 = local_1f0;
  if ((local_1f8 == (long *)0x0) || (local_1f0 != 0xffffffff)) {
LAB_006b3260:
    if (*(uint *)(*(long *)(lVar4 + 0x30) + param_9 * 4) != uVar27) goto LAB_006b3310;
  }
  else {
    if ((uint *)local_1f8[2] < (uint *)local_1f8[3]) {
      uVar27 = *(uint *)local_1f8[2];
    }
    else {
      uVar27 = (**(code **)(*local_1f8 + 0x48))();
    }
    if (uVar27 != 0xffffffff) goto LAB_006b3260;
    local_1f8 = (long *)0x0;
    if (*(int *)(*(long *)(lVar4 + 0x30) + param_9 * 4) != -1) goto LAB_006b3310;
  }
  if ((ulong)local_1f8[2] < (ulong)local_1f8[3]) {
    local_1f8[2] = local_1f8[2] + 4;
    auVar14 = local_208;
  }
  else {
    (**(code **)(*local_1f8 + 0x50))();
    auVar14 = local_208;
  }
  local_1f0 = 0xffffffff;
  param_9 = param_9 + 1;
  goto LAB_006b329a;
LAB_006b2dcb:
  local_1d8._0_8_ = &DAT_009452b8;
  if (*(char *)(lVar4 + 0x20) != '\0') {
    FUN_00638bc0(local_1d8,0x20);
  }
  local_1d8._8_8_ = &DAT_009452b8;
  local_250 = (uint *)(local_1d8 + 8);
  FUN_00638bc0(local_250,0x20);
  plVar29 = (long *)0x0;
  local_268 = 0;
  local_1c8._4_4_ = *(undefined4 *)(lVar4 + 0x68);
  local_240 = local_1c8 + 4;
  local_258 = (byte *)0x0;
  _local_218 = 0;
  while( true ) {
    if ((byte)local_240[local_268] < 5) {
                    /* WARNING: Could not recover jumptable at 0x006b2e9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar50 = (*(code *)((long)&UINT_00820644 +
                          (long)(int)(&UINT_00820644)[(byte)local_240[local_268]]))();
      return auVar50;
    }
LAB_006b387b:
    bVar42 = 1;
    auVar14 = local_208;
LAB_006b31b3:
    iVar26 = (int)plVar29;
    local_208 = auVar14;
    if ((3 < (int)local_268 + 1) || (bVar42 == 0)) break;
    local_268 = local_268 + 1;
  }
  if (((byte *)0x1 < local_258 & bVar42) == 0) {
    if (bVar42 == 0) goto LAB_006b34a8;
    uVar33 = *(ulong *)(local_1d8._8_8_ + -0x18);
    uVar34 = _local_218;
  }
  else {
switchD_006b0df1_caseD_3d:
    iVar26 = (int)plVar29;
    if (cStack_212 == '\0') {
      local_268 = *(long *)(lVar4 + 0x40);
    }
    else {
      local_268 = *(long *)(lVar4 + 0x50);
    }
    pbVar32 = (byte *)0x1;
    pplVar40 = (long **)local_208;
    pplVar38 = &local_1f8;
    while( true ) {
      local_208 = auVar14;
      cVar21 = FUN_006aa060(pplVar38,pplVar40);
      if ((cVar21 == '\x01') || (local_258 <= pbVar32)) break;
      uVar27 = local_1f0;
      if ((local_1f0 == 0xffffffff) && (local_1f8 != (long *)0x0)) {
        if ((uint *)local_1f8[2] < (uint *)local_1f8[3]) {
          uVar27 = *(uint *)local_1f8[2];
        }
        else {
          uVar27 = (**(code **)(*local_1f8 + 0x48))();
        }
        if (uVar27 == 0xffffffff) {
          local_1f8 = (long *)0x0;
        }
      }
      if (*(uint *)(local_268 + (long)pbVar32 * 4) != uVar27) goto LAB_006b34b5;
      if ((ulong)local_1f8[2] < (ulong)local_1f8[3]) {
        local_1f8[2] = local_1f8[2] + 4;
        auVar14 = local_208;
      }
      else {
        (**(code **)(*local_1f8 + 0x50))();
        auVar14 = local_208;
      }
      local_1f0 = 0xffffffff;
      pbVar32 = pbVar32 + 1;
    }
    if (pbVar32 != local_258) goto LAB_006b34b5;
    uVar33 = *(ulong *)(local_1d8._8_8_ + -0x18);
    uVar34 = _local_218;
  }
  if (1 < uVar33) {
    uVar33 = FUN_006376e0(local_250,0x30,0);
    if (uVar33 != 0) {
      uVar36 = *(ulong *)(local_1d8._8_8_ + -0x18);
      if (uVar33 == 0xffffffffffffffff) {
        uVar33 = uVar36 - 1;
      }
      if (uVar33 <= uVar36) {
        uVar36 = uVar33;
      }
      FUN_00637f00(local_250,0,uVar36,0);
    }
  }
  cStack_212 = (char)((ulong)uVar34 >> 0x30);
  if (cStack_212 != '\0') {
    if (-1 < *(int *)(local_1d8._8_8_ + -8)) {
      FUN_00638140(local_250);
    }
    if (*(char *)local_1d8._8_8_ != '0') {
      if (-1 < *(int *)(local_1d8._8_8_ + -8)) {
        FUN_00638140(local_250);
      }
      FUN_00638440(local_250,0,0,1,0x2d);
      *(undefined4 *)(local_1d8._8_8_ + -8) = 0xffffffff;
    }
  }
  local_218[5] = (byte)((ulong)uVar34 >> 0x28);
  if (*(long *)(local_1d8._0_8_ + -0x18) != 0) {
    local_218[0] = (char)uVar34;
    cVar21 = (char)iVar26;
    if (local_218[5] != '\0') {
      cVar21 = local_218[0];
    }
    FUN_006390c0(local_1d8,(int)cVar21);
    cVar21 = FUN_006c6980(*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18),local_1d8);
    if (cVar21 == '\0') {
      *local_228 = *local_228 | 4;
    }
  }
  if (local_218[5] != '\0') {
    pplVar40 = (long **)local_208;
    pplVar38 = &local_1f8;
    if (iVar26 != *(int *)(lVar4 + 0x60)) goto LAB_006b34b5;
  }
  pplVar40 = (long **)local_208;
  pplVar38 = &local_1f8;
  FUN_00637180(local_210,local_250);
  goto LAB_006b34bd;
LAB_006b4830:
  auVar14 = local_208;
  if (param_9 == local_230) goto LAB_006b483b;
LAB_006b42d0:
  if (param_9 == 0) {
    param_9 = (ulong)((*(uint *)(local_220 + 0x18) >> 9 ^ 1) & 1);
LAB_006b4173:
    while (((int)local_268 + 1 < 4 && ((char)param_9 != '\0'))) {
      local_268 = local_268 + 1;
      if ((byte)local_240[local_268] < 5) {
        local_208 = auVar14;
                    /* WARNING: Could not recover jumptable at 0x006b3e5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar50 = (*(code *)((long)&UINT_00820658 +
                            (long)(int)(&UINT_00820658)[(byte)local_240[local_268]]))();
        return auVar50;
      }
LAB_006b483b:
      param_9 = 1;
    }
    bVar41 = param_8 == (byte *)0x0;
    bVar20 = param_8 == (byte *)0x1;
code_r0x006b3e77:
    iVar26 = (int)plVar29;
    if (((!bVar41 && !bVar20) & (byte)param_9) == 0) {
      if ((byte)param_9 == 0) goto LAB_006b4468;
      uVar33 = *(ulong *)(local_1d8._8_8_ + -0x18);
      uVar34 = _local_218;
      local_208 = auVar14;
    }
    else {
      if (cStack_212 == '\0') {
        local_268 = *(long *)(lVar4 + 0x40);
      }
      else {
        local_268 = *(long *)(lVar4 + 0x50);
      }
LAB_006b3e98:
      iVar26 = (int)plVar29;
      pbVar32 = (byte *)0x1;
      pplVar40 = (long **)local_208;
      pplVar38 = &local_1f8;
      while( true ) {
        local_208 = auVar14;
        cVar21 = FUN_006aa060(pplVar38,pplVar40);
        if ((cVar21 == '\x01') || (param_8 <= pbVar32)) break;
        uVar27 = local_1f0;
        if ((local_1f0 == 0xffffffff) && (local_1f8 != (long *)0x0)) {
          if ((uint *)local_1f8[2] < (uint *)local_1f8[3]) {
            uVar27 = *(uint *)local_1f8[2];
          }
          else {
            uVar27 = (**(code **)(*local_1f8 + 0x48))();
          }
          if (uVar27 == 0xffffffff) {
            local_1f8 = (long *)0x0;
          }
        }
        auVar14 = local_208;
        if (*(uint *)(local_268 + (long)pbVar32 * 4) != uVar27) goto LAB_006b4475;
        if ((ulong)local_1f8[2] < (ulong)local_1f8[3]) {
          local_1f8[2] = local_1f8[2] + 4;
        }
        else {
          (**(code **)(*local_1f8 + 0x50))();
          auVar14 = local_208;
        }
        local_1f0 = 0xffffffff;
        pbVar32 = pbVar32 + 1;
      }
      auVar14 = local_208;
      if (pbVar32 != param_8) goto LAB_006b4475;
      uVar33 = *(ulong *)(local_1d8._8_8_ + -0x18);
      uVar34 = _local_218;
    }
    if (1 < uVar33) {
      uVar33 = FUN_006376e0(param_7,0x30,0);
      if (uVar33 != 0) {
        uVar36 = *(ulong *)(local_1d8._8_8_ + -0x18);
        if (uVar33 == 0xffffffffffffffff) {
          uVar33 = uVar36 - 1;
        }
        if (uVar33 <= uVar36) {
          uVar36 = uVar33;
        }
        FUN_00637f00(param_7,0,uVar36,0);
      }
    }
    cStack_212 = (char)((ulong)uVar34 >> 0x30);
    if (cStack_212 != '\0') {
      if (-1 < *(int *)(local_1d8._8_8_ + -8)) {
        FUN_00638140(param_7);
      }
      if (*(char *)local_1d8._8_8_ != '0') {
        if (-1 < *(int *)(local_1d8._8_8_ + -8)) {
          FUN_00638140(param_7);
        }
                    /* try { // try from 006b4abf to 006b4bda has its CatchHandler @ 006b4c15 */
        FUN_00638440(param_7,0,0,1,0x2d);
        *(undefined4 *)(local_1d8._8_8_ + -8) = 0xffffffff;
      }
    }
    local_218[5] = (byte)((ulong)uVar34 >> 0x28);
    auVar14 = local_208;
    if (*(long *)(local_1d8._0_8_ + -0x18) != 0) {
      local_218[0] = (char)uVar34;
      cVar21 = (char)iVar26;
      if (local_218[5] != '\0') {
        cVar21 = local_218[0];
      }
      FUN_006390c0(local_1d8,(int)cVar21);
      cVar21 = FUN_006c6980(*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18),local_1d8);
      auVar14 = local_208;
      if (cVar21 == '\0') {
        *local_228 = *local_228 | 4;
      }
    }
    if (local_218[5] != '\0') {
      pplVar40 = (long **)local_208;
      pplVar38 = &local_1f8;
      if (iVar26 != *(int *)(lVar4 + 0x60)) goto LAB_006b4475;
    }
    pplVar40 = (long **)local_208;
    pplVar38 = &local_1f8;
    local_208 = auVar14;
    FUN_00637180(local_210,param_7);
    goto LAB_006b447d;
  }
LAB_006b4475:
  *local_228 = *local_228 | 4;
  local_208 = auVar14;
LAB_006b447d:
  cVar21 = FUN_006aa060(pplVar38,pplVar40);
  if (cVar21 != '\0') {
    *local_228 = *local_228 | 2;
  }
  auVar8._8_4_ = local_1f0;
  auVar8._0_8_ = local_1f8;
  auVar8._12_4_ = uStack_1ec;
  if ((undefined8 *)(local_1d8._8_8_ + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar3 = (int *)(local_1d8._8_8_ + -8);
      iVar26 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
    }
    else {
      iVar26 = *(int *)(local_1d8._8_8_ + -8);
      *(int *)(local_1d8._8_8_ + -8) = iVar26 + -1;
    }
    if (iVar26 < 1) {
      thunk_FUN_007104f0((undefined8 *)(local_1d8._8_8_ + -0x18),local_1e8 + 0xf);
    }
  }
  if ((undefined8 *)(local_1d8._0_8_ + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar3 = (int *)(local_1d8._0_8_ + -8);
      iVar26 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
    }
    else {
      iVar26 = *(int *)(local_1d8._0_8_ + -8);
      *(int *)(local_1d8._0_8_ + -8) = iVar26 + -1;
    }
    if (iVar26 < 1) {
      thunk_FUN_007104f0((undefined8 *)(local_1d8._0_8_ + -0x18),param_7);
    }
  }
  if (local_1c8._8_8_ == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
LAB_006b3870:
  if (param_9 == local_230) goto LAB_006b387b;
LAB_006b3310:
  if (param_9 == 0) {
    bVar42 = ((byte)(*(uint *)(local_220 + 0x18) >> 9) ^ 1) & 1;
    auVar14 = local_208;
    goto LAB_006b31b3;
  }
LAB_006b34b5:
  *local_228 = *local_228 | 4;
LAB_006b34bd:
  cVar21 = FUN_006aa060(pplVar38,pplVar40);
  if (cVar21 != '\0') {
    *local_228 = *local_228 | 2;
  }
  auVar7._8_4_ = local_1f0;
  auVar7._0_8_ = local_1f8;
  auVar7._12_4_ = uStack_1ec;
  if ((undefined8 *)(local_1d8._8_8_ + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar3 = (int *)(local_1d8._8_8_ + -8);
      iVar26 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
    }
    else {
      iVar26 = *(int *)(local_1d8._8_8_ + -8);
      *(int *)(local_1d8._8_8_ + -8) = iVar26 + -1;
    }
    if (iVar26 < 1) {
      thunk_FUN_007104f0((undefined8 *)(local_1d8._8_8_ + -0x18),local_1e8 + 0xf);
    }
  }
  if ((undefined8 *)(local_1d8._0_8_ + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar3 = (int *)(local_1d8._0_8_ + -8);
      iVar26 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
    }
    else {
      iVar26 = *(int *)(local_1d8._0_8_ + -8);
      *(int *)(local_1d8._0_8_ + -8) = iVar26 + -1;
    }
    if (iVar26 < 1) {
      thunk_FUN_007104f0((undefined8 *)(local_1d8._0_8_ + -0x18),local_250);
    }
  }
  if (local_1c8._8_8_ == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

