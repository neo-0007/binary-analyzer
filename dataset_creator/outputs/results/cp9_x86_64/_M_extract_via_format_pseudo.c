
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x006a6de9) overlaps instruction at (ram,0x006a6de8)
    */
/* std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::_M_extract_via_format(std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, std::ios_base&,
   std::_Ios_Iostate&, tm*, wchar_t const*) const */

undefined1  [16]
std::time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
_M_extract_via_format
          (long param_1,wstreambuf *param_2,undefined8 param_3,byte *param_4,ulong param_5,
          long param_6,string *param_7,byte *param_8,wchar_t *param_9)

{
  char *pcVar1;
  int *piVar2;
  byte *pbVar3;
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
  wchar_t wVar23;
  uint uVar28;
  __timepunct *p_Var29;
  ctype *pcVar30;
  istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *piVar31;
  long lVar32;
  byte *pbVar33;
  ulong uVar34;
  undefined8 uVar35;
  undefined4 uVar24;
  int iVar25;
  int iVar26;
  wchar_t wVar27;
  wchar_t *pwVar36;
  byte bVar37;
  byte extraout_DL;
  byte extraout_DL_00;
  ulong uVar38;
  byte bVar39;
  bool bVar40;
  istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *piVar41;
  ctype *pcVar42;
  istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *piVar43;
  long in_FS_OFFSET;
  bool bVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 local_270;
  long local_268;
  byte *local_258;
  string *local_250;
  undefined8 uStack_240;
  wchar_t *local_230;
  uint *local_228;
  long local_220;
  undefined1 local_218 [6];
  char cStack_212;
  string *local_210;
  undefined1 local_208 [16];
  ctype *local_1f8;
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
  wstreambuf *local_c8;
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
  
  auVar50._8_8_ = local_220;
  auVar50._0_8_ = local_228;
  auVar52._8_8_ = local_210;
  auVar52._0_8_ = _local_218;
  piVar43 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)0x0;
  local_c0 = (uint)param_3;
  uStack_bc = (undefined4)((ulong)param_3 >> 0x20);
  local_250 = param_7;
  local_258 = param_8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = param_4;
  local_d0 = param_5;
  local_c8 = param_2;
  p_Var29 = use_facet<std::__timepunct<wchar_t>>((locale *)(param_6 + 0xd0));
  pcVar30 = use_facet<std::ctype<wchar_t>>((locale *)(param_6 + 0xd0));
  piVar31 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)wcslen(param_9);
  auVar45._8_8_ = local_168._8_8_;
  auVar45._0_8_ = local_168._0_8_;
  local_b4 = 0;
  local_270 = (wchar_t *)CONCAT44(local_270._4_4_,(undefined4)local_d0);
  uVar34 = (ulong)local_c0;
  do {
    local_220 = auVar50._8_8_;
    local_228 = auVar50._0_8_;
    local_210 = auVar52._8_8_;
    _local_218 = auVar52._0_8_;
    bVar44 = (int)uVar34 == -1;
    bVar20 = local_c8 != (wstreambuf *)0x0 && bVar44;
    uVar34 = CONCAT71((int7)(uVar34 >> 8),bVar20);
    if (bVar20) {
      if (*(uint **)(local_c8 + 0x10) < *(uint **)(local_c8 + 0x18)) {
        uVar34 = (ulong)**(uint **)(local_c8 + 0x10);
      }
      else {
        local_168 = auVar45;
        uVar34 = (**(code **)(*(long *)local_c8 + 0x48))();
        auVar45 = local_168;
      }
      bVar44 = false;
      if ((int)uVar34 == -1) {
        local_c8 = (wstreambuf *)0x0;
        bVar44 = bVar20;
      }
    }
    bVar20 = local_d8 != (byte *)0x0 && (int)local_270 == -1;
    param_4 = (byte *)CONCAT71((int7)((ulong)param_4 >> 8),(int)local_270 == -1);
    if (bVar20) {
      if (*(int **)(local_d8 + 0x10) < *(int **)(local_d8 + 0x18)) {
        iVar25 = **(int **)(local_d8 + 0x10);
      }
      else {
        local_168 = auVar45;
        iVar25 = (**(code **)(*(long *)local_d8 + 0x48))();
        auVar45 = local_168;
      }
      param_4 = (byte *)0x0;
      if (iVar25 == -1) {
        local_d8 = (byte *)0x0;
        param_4 = (byte *)(CONCAT71((int7)(uVar34 >> 8),bVar20) & 0xffffffff);
      }
    }
    local_168 = auVar45;
    if ((bVar44 == SUB81(param_4,0)) || (piVar31 <= piVar43)) {
      if ((piVar43 == piVar31) && (local_b4 == 0)) goto LAB_006a3dc1;
LAB_006a3db9:
      *(uint *)param_7 = *(uint *)param_7 | 4;
LAB_006a3dc1:
      auVar49._8_4_ = local_c0;
      auVar49._0_8_ = local_c8;
      auVar49._12_4_ = uStack_bc;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return auVar49;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    if (local_b4 != 0) goto LAB_006a3db9;
    lVar4 = (long)piVar43 * 4;
    cVar21 = (**(code **)(*(long *)pcVar30 + 0x60))(pcVar30,param_9[(long)piVar43],0);
    if (cVar21 != '%') {
      wVar27 = param_9[(long)piVar43];
      wVar23 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get
                         ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_c8);
      auVar51._8_8_ = local_230;
      auVar51._0_8_ = local_c8;
      piVar41 = piVar43;
      if (wVar27 == wVar23) {
        wstreambuf::sbumpc(local_c8);
        auVar51._0_8_ = local_c8;
        uVar34 = 0xffffffff;
        local_c0 = 0xffffffff;
        auVar45 = local_168;
      }
      else {
        local_b4 = local_b4 | 4;
        uVar34 = (ulong)local_c0;
        auVar45 = local_168;
      }
      goto LAB_006a3d72;
    }
    piVar41 = piVar43 + 1;
    pcVar42 = pcVar30;
    cVar21 = (**(code **)(*(long *)pcVar30 + 0x60))(pcVar30,param_9[(long)(piVar43 + 1)],0);
    local_b0 = 0;
    if ((cVar21 == 'E') || (cVar21 == 'O')) {
      piVar41 = piVar43 + 2;
      pcVar42 = pcVar30;
      cVar21 = (**(code **)(*(long *)pcVar30 + 0x60))(pcVar30,param_9[(long)(piVar43 + 2)],0);
      bVar37 = cVar21 + 0xbf;
      bVar39 = extraout_DL_00;
      auVar14 = local_208;
      if (bVar37 < 0x39) goto LAB_006a3d30;
      goto switchD_006a3d41_caseD_4;
    }
    bVar37 = cVar21 + 0xbf;
    bVar39 = extraout_DL;
    auVar14 = local_208;
    if (0x38 < bVar37) goto switchD_006a3d41_caseD_4;
LAB_006a3d30:
    local_208._0_8_ = pcVar42;
    lVar32 = (long)(int)(&switchD_006a3d41::caseD_43)[(uint)bVar37];
    pbVar33 = (byte *)((long)&switchD_006a3d41::caseD_43 + lVar32);
    bVar22 = (byte)pbVar33;
    cVar21 = (char)param_4;
    local_268 = param_6;
    local_208 = auVar14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((uint)bVar37) {
    case 0:
      lVar4 = *(long *)(p_Var29 + 0x10);
      local_a8 = *(undefined8 *)(lVar4 + 0x58);
      local_a0 = *(undefined8 *)(lVar4 + 0x60);
      local_98 = *(undefined8 *)(lVar4 + 0x68);
      local_90 = *(undefined8 *)(lVar4 + 0x70);
      local_88 = *(undefined8 *)(lVar4 + 0x78);
      local_80 = *(undefined8 *)(lVar4 + 0x80);
      local_78 = *(undefined8 *)(lVar4 + 0x88);
      param_4 = local_d8;
      auVar47 = _M_extract_name(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                                &local_b0,&local_a8,7,param_6,&local_b4);
      uVar35 = auVar47._0_8_;
      local_f8._8_4_ = auVar47._8_4_;
      local_c0 = local_f8._8_4_;
      local_f8 = auVar47;
      auVar18 = auVar47;
      goto joined_r0x006a4185;
    case 1:
      lVar4 = *(long *)(p_Var29 + 0x10);
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
      auVar48 = _M_extract_name(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                                &local_b0,&local_a8,0xc,param_6,&local_b4);
      uVar35 = auVar48._0_8_;
      local_118._8_4_ = auVar48._8_4_;
      local_c0 = local_118._8_4_;
      local_118 = auVar48;
      auVar19 = auVar48;
      goto joined_r0x006a407c;
    case 2:
    case 0x18:
    case 0x38:
      param_4 = local_d8;
      auVar45 = _M_extract_num(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                               &local_b0,0,9999,4,param_6,&local_b4);
      auVar10._8_8_ = local_230;
      auVar10._0_8_ = auVar45._0_8_;
      auVar51._8_8_ = local_230;
      auVar51._0_8_ = auVar45._0_8_;
      local_208._8_4_ = auVar45._8_4_;
      local_c0 = local_208._8_4_;
      uVar34 = auVar45._8_8_ & 0xffffffff;
      local_208 = auVar45;
      auVar45 = local_168;
      if (local_b4 == 0) {
        iVar25 = local_b0 + -0x76c;
        if (local_b0 < 0) {
          iVar25 = local_b0 + 100;
        }
        *(int *)(param_8 + 0x14) = iVar25;
        param_4 = param_8;
        auVar51 = auVar10;
      }
      break;
    case 3:
      (**(code **)(*(long *)pcVar30 + 0x58))(pcVar30,"%m/%d/%y","%H:%M",&local_a8);
      param_4 = local_d8;
      auVar45 = _M_extract_via_format
                          (param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,param_6,
                           &local_b4,param_8,&local_a8);
      auVar51._8_8_ = local_230;
      auVar51._0_8_ = auVar45._0_8_;
      local_168._8_4_ = auVar45._8_4_;
      uVar34 = auVar45._8_8_ & 0xffffffff;
      local_c0 = local_168._8_4_;
      break;
    default:
      goto switchD_006a3d41_caseD_4;
    case 7:
      param_4 = local_d8;
      auVar49 = _M_extract_num(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                               &local_b0,0,0x17,2,param_6,&local_b4);
      auVar46._8_8_ = local_188._8_8_;
      auVar46._0_8_ = auVar49._0_8_;
      local_178._8_4_ = auVar49._8_4_;
      local_c0 = local_178._8_4_;
      auVar51 = local_188;
      local_178 = auVar49;
      auVar45 = local_168;
      goto joined_r0x006a4523;
    case 8:
      param_4 = local_d8;
      auVar46 = _M_extract_num(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                               &local_b0,1,0xc,2,param_6,&local_b4);
      local_188._0_8_ = auVar46._0_8_;
      local_188._8_4_ = auVar46._8_4_;
      local_c0 = local_188._8_4_;
      auVar51 = auVar46;
      auVar45 = local_168;
      auVar49 = auVar46;
joined_r0x006a4523:
      local_188 = auVar51;
      auVar51._8_8_ = local_230;
      auVar51._0_8_ = auVar49._0_8_;
      uVar34 = auVar49._8_8_ & 0xffffffff;
      if (local_b4 == 0) {
        local_188._8_8_ = auVar46._8_8_;
        local_c8 = auVar46._0_8_;
        auVar51._0_8_ = local_c8;
        *(int *)(param_8 + 8) = local_b0;
        param_4 = param_8;
      }
      break;
    case 0xc:
      param_4 = local_d8;
      auVar45 = _M_extract_num(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                               &local_b0,0,0x3b,2,param_6,&local_b4);
      auVar13._8_8_ = local_230;
      auVar13._0_8_ = auVar45._0_8_;
      auVar51._8_8_ = local_230;
      auVar51._0_8_ = auVar45._0_8_;
      local_1a8._8_4_ = auVar45._8_4_;
      uVar34 = auVar45._8_8_ & 0xffffffff;
      local_c0 = local_1a8._8_4_;
      local_1a8 = auVar45;
      auVar45 = local_168;
      if (local_b4 == 0) {
        *(int *)(param_8 + 4) = local_b0;
        param_4 = param_8;
        auVar51 = auVar13;
      }
      break;
    case 0x11:
      (**(code **)(*(long *)pcVar30 + 0x58))(pcVar30,"%H:%M","%H:%M:%S",&local_a8);
      param_4 = local_d8;
      auVar45 = _M_extract_via_format
                          (param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,param_6,
                           &local_b4,param_8,&local_a8);
      auVar51._8_8_ = local_230;
      auVar51._0_8_ = auVar45._0_8_;
      local_1b8._8_4_ = auVar45._8_4_;
      uVar34 = auVar45._8_8_ & 0xffffffff;
      local_c0 = local_1b8._8_4_;
      local_1b8 = auVar45;
      auVar45 = local_168;
      break;
    case 0x12:
      auVar49 = _M_extract_num(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                               &local_b0,0,0x3c,2,param_6,&local_b4);
      auVar12._8_8_ = local_230;
      auVar12._0_8_ = auVar49._0_8_;
      auVar51._8_8_ = local_230;
      auVar51._0_8_ = auVar49._0_8_;
      local_1c8._8_4_ = auVar49._8_4_;
      uVar34 = auVar49._8_8_ & 0xffffffff;
      local_c0 = local_1c8._8_4_;
      param_4 = (byte *)(ulong)local_b4;
      auVar45 = local_168;
      local_1c8 = auVar49;
      if (local_b4 == 0) {
        *(int *)param_8 = local_b0;
        param_4 = param_8;
        auVar51 = auVar12;
      }
      break;
    case 0x13:
      (**(code **)(*(long *)pcVar30 + 0x58))(pcVar30,"%H:%M:%S",&DAT_008144f2,&local_a8);
      param_4 = local_d8;
      auVar49 = _M_extract_via_format
                          (param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,param_6,
                           &local_b4,param_8,&local_a8);
      auVar51._8_8_ = local_230;
      auVar51._0_8_ = auVar49._0_8_;
      local_1d8._8_4_ = auVar49._8_4_;
      uVar34 = auVar49._8_8_ & 0xffffffff;
      local_c0 = local_1d8._8_4_;
      auVar45 = local_168;
      local_1d8 = auVar49;
      break;
    case 0x17:
      param_4 = local_d8;
      auVar45 = _M_extract_via_format
                          (param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,param_6,
                           &local_b4,param_8,*(undefined8 *)(*(long *)(p_Var29 + 0x10) + 0x20));
      local_1f8 = auVar45._0_8_;
      auVar51._8_8_ = local_230;
      auVar51._0_8_ = local_1f8;
      local_1f0 = auVar45._8_4_;
      uStack_1ec = auVar45._12_4_;
      uVar34 = auVar45._8_8_ & 0xffffffff;
      local_c0 = local_1f0;
      auVar45 = local_168;
      break;
    case 0x19:
      uVar24 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get
                         ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_c8);
      cVar21 = (**(code **)(*(long *)pcVar30 + 0x10))(pcVar30,0x100,uVar24);
      auVar14 = local_208;
      if (cVar21 == '\0') goto switchD_006a3d41_caseD_4;
      auVar52 = _M_extract_name(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                                &local_ac,PTR__S_timezones_0092dfe0,0xe,param_6,&local_b4);
      local_c8 = auVar52._0_8_;
      local_210._0_4_ = auVar52._8_4_;
      local_c0 = (uint)local_210;
      cVar21 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                         ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_c8,
                          (istreambuf_iterator *)&local_d8);
      auVar9._8_8_ = local_230;
      auVar9._0_8_ = local_c8;
      auVar51._8_8_ = local_230;
      auVar51._0_8_ = local_c8;
      if ((cVar21 == '\0') && (auVar51 = auVar9, local_b4 == 0 && local_ac == 0)) {
        iVar25 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get
                           ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_c8);
        uStack_240 = (undefined1 *)CONCAT44(iVar25,(undefined4)uStack_240);
        iVar26 = (**(code **)(*(long *)pcVar30 + 0x50))(pcVar30,0x2d);
        if (iVar25 != iVar26) {
          iVar25 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get
                             ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_c8);
          iVar26 = (**(code **)(*(long *)pcVar30 + 0x50))(pcVar30,0x2b);
          auVar51._0_8_ = local_c8;
          if (iVar25 != iVar26) goto LAB_006a42e3;
        }
        auVar50 = _M_extract_num(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                                 &local_ac,0,0x17,2,param_6,&local_b4);
        local_c8 = auVar50._0_8_;
        local_220._0_4_ = auVar50._8_4_;
        local_c0 = (undefined4)local_220;
        auVar51 = _M_extract_num(param_1,local_c8,CONCAT44(uStack_bc,(undefined4)local_220),local_d8
                                 ,local_d0,&local_ac,0,0x3b,2,param_6,&local_b4);
        local_230._0_4_ = auVar51._8_4_;
        local_c0 = (uint)local_230;
      }
LAB_006a42e3:
      uVar34 = (ulong)local_c0;
      local_270._4_4_ = (undefined4)((ulong)&local_b4 >> 0x20);
      local_270 = (wchar_t *)CONCAT44(local_270._4_4_,(undefined4)local_d0);
      param_4 = (byte *)(local_d0 & 0xffffffff);
      auVar45 = local_168;
      break;
    case 0x20:
      lVar4 = *(long *)(p_Var29 + 0x10);
      local_a8 = *(undefined8 *)(lVar4 + 0x90);
      local_a0 = *(undefined8 *)(lVar4 + 0x98);
      local_98 = *(undefined8 *)(lVar4 + 0xa0);
      local_90 = *(undefined8 *)(lVar4 + 0xa8);
      local_88 = *(undefined8 *)(lVar4 + 0xb0);
      local_80 = *(undefined8 *)(lVar4 + 0xb8);
      local_78 = *(undefined8 *)(lVar4 + 0xc0);
      auVar45 = _M_extract_name(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                                &local_b0,&local_a8,7,param_6,&local_b4);
      auVar18._8_8_ = auVar45._8_8_;
      auVar18._0_8_ = local_f8._0_8_;
      uVar35 = auVar45._0_8_;
      auVar47._8_8_ = local_f8._8_8_;
      auVar47._0_8_ = uVar35;
      local_e8._8_4_ = auVar45._8_4_;
      param_4 = (byte *)(ulong)local_b4;
      local_c0 = local_e8._8_4_;
      local_e8 = auVar45;
joined_r0x006a4185:
      auVar51._8_8_ = local_230;
      auVar51._0_8_ = uVar35;
      uVar34 = auVar18._8_8_ & 0xffffffff;
      auVar45 = local_168;
      if (local_b4 == 0) {
        local_f8._8_8_ = auVar47._8_8_;
        local_c8 = auVar47._0_8_;
        auVar51._0_8_ = local_c8;
        local_f8._0_8_ = auVar18._0_8_;
        *(int *)(param_8 + 0x18) = local_b0;
        param_4 = param_8;
      }
      break;
    case 0x21:
    case 0x27:
      lVar4 = *(long *)(p_Var29 + 0x10);
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
      auVar45 = _M_extract_name(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                                &local_b0,&local_a8,0xc,param_6,&local_b4);
      auVar19._8_8_ = auVar45._8_8_;
      auVar19._0_8_ = local_118._0_8_;
      uVar35 = auVar45._0_8_;
      auVar48._8_8_ = local_118._8_8_;
      auVar48._0_8_ = uVar35;
      local_108._8_4_ = auVar45._8_4_;
      local_c0 = local_108._8_4_;
      local_108 = auVar45;
joined_r0x006a407c:
      auVar51._8_8_ = local_230;
      auVar51._0_8_ = uVar35;
      uVar34 = auVar19._8_8_ & 0xffffffff;
      auVar45 = local_168;
      if (local_b4 == 0) {
        local_118._8_8_ = auVar48._8_8_;
        local_c8 = auVar48._0_8_;
        auVar51._0_8_ = local_c8;
        local_118._0_8_ = auVar19._0_8_;
        *(int *)(param_8 + 0x10) = local_b0;
        param_4 = param_8;
      }
      break;
    case 0x22:
      param_4 = local_d8;
      auVar45 = _M_extract_via_format
                          (param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,param_6,
                           &local_b4,param_8,*(undefined8 *)(*(long *)(p_Var29 + 0x10) + 0x30));
      auVar51._8_8_ = local_230;
      auVar51._0_8_ = auVar45._0_8_;
      local_128._8_4_ = auVar45._8_4_;
      uVar34 = auVar45._8_8_ & 0xffffffff;
      local_c0 = local_128._8_4_;
      local_128 = auVar45;
      auVar45 = local_168;
      break;
    case 0x23:
      param_4 = local_d8;
      auVar45 = _M_extract_num(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                               &local_b0,1,0x1f,2,param_6,&local_b4);
      local_c8 = auVar45._0_8_;
      local_138._8_4_ = auVar45._8_4_;
      uVar34 = auVar45._8_8_ & 0xffffffff;
      local_c0 = local_138._8_4_;
      local_138 = auVar45;
      goto joined_r0x006a49c0;
    case 0x24:
      uVar24 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get
                         ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_c8);
      cVar21 = (**(code **)(*(long *)pcVar30 + 0x10))(pcVar30,0x2000,uVar24);
      if (cVar21 == '\0') {
        param_4 = local_d8;
        auVar45 = _M_extract_num(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                                 &local_b0,10,0x1f,2,param_6,&local_b4);
        local_c8 = auVar45._0_8_;
        local_158._8_4_ = auVar45._8_4_;
        local_c0 = local_158._8_4_;
        local_158 = auVar45;
        auVar45 = local_148;
      }
      else {
        wstreambuf::sbumpc(local_c8);
        local_c0 = 0xffffffff;
        param_4 = local_d8;
        auVar45 = _M_extract_num(param_1,local_c8,CONCAT44(uStack_bc,0xffffffff),local_d8,local_d0,
                                 &local_b0,1,9,1,param_6,&local_b4);
        local_c8 = auVar45._0_8_;
        local_148._8_4_ = auVar45._8_4_;
        local_c0 = local_148._8_4_;
      }
      uVar34 = (ulong)local_c0;
      local_148 = auVar45;
joined_r0x006a49c0:
      auVar51._8_8_ = local_230;
      auVar51._0_8_ = local_c8;
      auVar45 = local_168;
      if (local_b4 == 0) {
        *(int *)(param_8 + 0xc) = local_b0;
        param_4 = param_8;
      }
      break;
    case 0x2c:
      param_4 = local_d8;
      auVar49 = _M_extract_num(param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,
                               &local_b0,1,0xc,2,param_6,&local_b4);
      auVar11._8_8_ = local_230;
      auVar11._0_8_ = auVar49._0_8_;
      auVar51._8_8_ = local_230;
      auVar51._0_8_ = auVar49._0_8_;
      local_198._8_4_ = auVar49._8_4_;
      uVar34 = auVar49._8_8_ & 0xffffffff;
      local_c0 = local_198._8_4_;
      auVar45 = local_168;
      local_198 = auVar49;
      if (local_b4 == 0) {
        *(int *)(param_8 + 0x10) = local_b0 + -1;
        param_4 = param_8;
        auVar51 = auVar11;
      }
      break;
    case 0x2d:
      uVar24 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get
                         ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_c8);
      cVar21 = (**(code **)(*(long *)pcVar30 + 0x60))(pcVar30,uVar24,0);
      auVar14 = local_208;
      if (cVar21 != '\n') goto switchD_006a3d41_caseD_4;
LAB_006a4a86:
      wstreambuf::sbumpc(local_c8);
      auVar51._8_8_ = local_230;
      auVar51._0_8_ = local_c8;
      uVar34 = 0xffffffff;
      local_c0 = 0xffffffff;
      auVar45 = local_168;
      break;
    case 0x33:
      uVar24 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get
                         ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_c8);
      cVar21 = (**(code **)(*(long *)pcVar30 + 0x60))(pcVar30,uVar24,0);
      auVar14 = local_208;
      if (cVar21 == '\t') goto LAB_006a4a86;
switchD_006a3d41_caseD_4:
      auVar51._8_8_ = local_230;
      auVar51._0_8_ = local_c8;
      local_b4 = local_b4 | 4;
      uVar34 = (ulong)local_c0;
      local_208 = auVar14;
      auVar45 = local_168;
      break;
    case 0x37:
      param_4 = local_d8;
      auVar49 = _M_extract_via_format
                          (param_1,local_c8,CONCAT44(uStack_bc,local_c0),local_d8,local_d0,param_6,
                           &local_b4,param_8,*(undefined8 *)(*(long *)(p_Var29 + 0x10) + 0x10));
      auVar51._8_8_ = local_230;
      auVar51._0_8_ = auVar49._0_8_;
      local_1e8._8_4_ = auVar49._8_4_;
      uVar34 = auVar49._8_8_ & 0xffffffff;
      local_c0 = local_1e8._8_4_;
      auVar45 = local_168;
      local_1e8 = auVar49;
      break;
    case 0x39:
      goto LAB_006a5d1b;
    case 0x3a:
      goto LAB_006a61ea;
    case 0x3b:
      pbVar3 = (byte *)(CONCAT71((int7)((ulong)pbVar33 >> 8),bVar22 | *pbVar33) + 0x65247c);
      *pbVar3 = *pbVar3 + (bVar22 | *pbVar33);
      bVar39 = *pbVar3;
      goto code_r0x006a6054;
    case 0x3c:
      *pbVar33 = *pbVar33;
      *(char *)(param_9 + 0x22092b) = (char)param_9[0x22092b] + cVar21;
      *pbVar33 = *pbVar33 + bVar22;
      pcVar42 = (ctype *)local_208._0_8_;
      goto code_r0x006a5fff;
    case 0x3d:
      goto switchD_006a3d41_caseD_3d;
    case 0x3e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3f:
      *pbVar33 = *pbVar33 + bVar22;
      "basic_string::_M_create"[lVar32] = "basic_string::_M_create"[lVar32] + cVar21;
      goto LAB_006a71aa;
    case 0x40:
      goto switchD_006a3d41_caseD_40;
    case 0x41:
      bVar37 = (byte)((ulong)param_4 >> 8) & bVar39;
      goto code_r0x006a6fa2;
    case 0x42:
      pcVar1 = "St15basic_streambufIwSt11char_traitsIwEE" + lVar32 + 0x23;
      cVar5 = *pcVar1;
      *pcVar1 = *pcVar1 + cVar21;
      if (SCARRY1(cVar5,cVar21) != *pcVar1 < '\0') goto LAB_006a6de8;
      bVar44 = false;
      *param_4 = *param_4 & bVar22;
      bVar20 = *param_4 == 0;
      goto code_r0x006a6dc7;
    case 0x43:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_006a3d72:
    local_230 = auVar51._8_8_;
    local_c8 = auVar51._0_8_;
    piVar43 = piVar41 + 1;
  } while( true );
switchD_006a3d41_caseD_40:
  if (*(byte *)(lVar4 + 0x20) != 0) {
    if (*(int *)(lVar4 + 0x28) == (int)piVar41) {
      if (local_218[5] == 0) {
        if ((int)pcVar30 != 0) {
          lVar32 = *(long *)(local_1d8._0_8_ + -0x18);
          uVar34 = lVar32 + 1;
          local_208 = auVar14;
          if ((*(ulong *)(local_1d8._0_8_ + -0x10) < uVar34) || (0 < *(int *)(local_1d8._0_8_ + -8))
             ) {
            std::string::reserve((string *)local_1d8,uVar34);
          }
          *(char *)(local_1d8._0_8_ + *(long *)(local_1d8._0_8_ + -0x18)) = (char)pcVar30;
          pcVar30 = (ctype *)0x0;
          if ((undefined1 *)local_1d8._0_8_ != &DAT_00938278) {
            *(undefined4 *)(local_1d8._0_8_ + -8) = 0;
            *(ulong *)(local_1d8._0_8_ + -0x18) = uVar34;
            *(undefined1 *)(local_1d8._0_8_ + lVar32 + 1) = 0;
          }
LAB_006a6f47:
          do {
            if (*(ulong *)(local_1f8 + 0x10) < *(ulong *)(local_1f8 + 0x18)) {
              *(ulong *)(local_1f8 + 0x10) = *(ulong *)(local_1f8 + 0x10) + 4;
            }
            else {
              (**(code **)(*(long *)local_1f8 + 0x50))();
            }
            local_1f0 = 0xffffffff;
            bVar44 = local_1f8 != (ctype *)0x0;
            param_9 = (wchar_t *)0x1;
            auVar14 = local_208;
            if (bVar44) {
              if (*(int **)(local_1f8 + 0x10) < *(int **)(local_1f8 + 0x18)) {
                iVar25 = **(int **)(local_1f8 + 0x10);
              }
              else {
                iVar25 = (**(code **)(*(long *)local_1f8 + 0x48))();
                auVar14 = local_208;
              }
              param_9 = (wchar_t *)0x0;
              if (iVar25 == -1) {
                local_1f8 = (ctype *)0x0;
                param_9 = (wchar_t *)(ulong)bVar44;
              }
            }
            local_208._0_8_ = auVar14._0_8_;
            local_208._8_4_ = auVar14._8_4_;
            bVar39 = local_208._8_4_ == -1;
            bVar37 = (ctype *)local_208._0_8_ != (ctype *)0x0 && (bool)bVar39;
            piVar41 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)(ulong)bVar37;
code_r0x006a6fa2:
            if (bVar37 != 0) {
              if (*(int **)(local_208._0_8_ + 0x10) < *(int **)(local_208._0_8_ + 0x18)) {
                iVar25 = **(int **)(local_208._0_8_ + 0x10);
              }
              else {
                lVar32 = *(long *)local_208._0_8_;
                local_208 = auVar14;
                iVar25 = (**(code **)(lVar32 + 0x48))();
                auVar14 = local_208;
              }
              local_208._8_8_ = auVar14._8_8_;
              bVar39 = 0;
              if (iVar25 != -1) goto LAB_006a6fa8;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = local_208._8_8_;
              auVar14._8_8_ = 0;
              auVar14._0_8_ = local_208._8_8_;
              auVar14 = auVar14 << 0x40;
              local_208 = auVar15 << 0x40;
              if ((byte)param_9 != (byte)piVar41) goto LAB_006a6fb0;
LAB_006a73a0:
              auVar14 = local_208;
              param_9 = (wchar_t *)0x1;
              goto LAB_006a73a5;
            }
LAB_006a6fa8:
            local_208 = auVar14;
            if ((byte)param_9 == bVar39) goto LAB_006a73a0;
LAB_006a6fb0:
            piVar41 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)(ulong)local_1f0;
            if ((local_1f8 != (ctype *)0x0) && (local_1f0 == 0xffffffff)) {
              if (*(uint **)(local_1f8 + 0x10) < *(uint **)(local_1f8 + 0x18)) {
                uVar28 = **(uint **)(local_1f8 + 0x10);
              }
              else {
                local_208 = auVar14;
                uVar28 = (**(code **)(*(long *)local_1f8 + 0x48))();
                auVar14 = local_208;
              }
              piVar41 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)(ulong)uVar28;
              if (uVar28 == 0xffffffff) {
                local_1f8 = (ctype *)0x0;
              }
            }
            local_208 = auVar14;
            pwVar36 = wmemchr(local_270,(wchar_t)piVar41,10);
            if (pwVar36 == (wchar_t *)0x0) {
              bVar39 = *(wchar_t *)(lVar4 + 0x24) != (wchar_t)piVar41 | local_218[5];
              param_9 = (wchar_t *)(ulong)bVar39;
              auVar14 = local_208;
              if (bVar39 == 0) {
                if (*(int *)(lVar4 + 0x60) < 1) {
                  local_218 = (undefined1  [6])CONCAT15(0,local_218._0_5_);
                  goto LAB_006a73a0;
                }
                local_218._0_5_ = (uint5)pcVar30 & 0xffffffff;
                pcVar30 = (ctype *)0x0;
                local_218 = (undefined1  [6])CONCAT15(1,local_218._0_5_);
                goto LAB_006a6f47;
              }
              goto switchD_006a3d41_caseD_40;
            }
            uVar6 = money_base::_S_atoms[(long)pwVar36 - param_1 >> 2];
            lVar32 = *(long *)(local_1d8._8_8_ + -0x18);
            uVar34 = lVar32 + 1;
            if ((*(ulong *)(local_1d8._8_8_ + -0x10) < uVar34) ||
               (0 < *(int *)(local_1d8._8_8_ + -8))) {
              std::string::reserve(param_7,uVar34);
            }
            *(undefined1 *)(local_1d8._8_8_ + *(long *)(local_1d8._8_8_ + -0x18)) = uVar6;
            if ((undefined1 *)local_1d8._8_8_ != &DAT_00938278) {
              *(undefined4 *)(local_1d8._8_8_ + -8) = 0;
              *(ulong *)(local_1d8._8_8_ + -0x18) = uVar34;
              *(undefined1 *)(local_1d8._8_8_ + lVar32 + 1) = 0;
            }
            pcVar30 = (ctype *)(ulong)((int)pcVar30 + 1);
          } while( true );
        }
        param_9 = (wchar_t *)0x0;
      }
      else {
        param_9 = (wchar_t *)(ulong)local_218[5];
      }
    }
    else {
      param_9 = (wchar_t *)(ulong)*(byte *)(lVar4 + 0x20);
    }
  }
LAB_006a73a5:
  if (*(long *)(local_1d8._8_8_ + -0x18) != 0) goto LAB_006a70c3;
LAB_006a73b8:
  piVar43 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)local_208;
  piVar41 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_1f8;
  goto LAB_006a73c5;
LAB_006a71aa:
  local_208 = auVar14;
  cVar21 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal(piVar41,piVar43);
  if ((cVar21 == '\x01') || (local_230 <= param_9)) goto LAB_006a7780;
  uVar28 = local_1f0;
  if ((local_1f8 == (ctype *)0x0) || (local_1f0 != 0xffffffff)) {
LAB_006a7170:
    auVar14 = local_208;
    if (*(uint *)(*(long *)(lVar4 + 0x30) + (long)param_9 * 4) != uVar28) goto LAB_006a7220;
  }
  else {
    if (*(uint **)(local_1f8 + 0x10) < *(uint **)(local_1f8 + 0x18)) {
      uVar28 = **(uint **)(local_1f8 + 0x10);
    }
    else {
      uVar28 = (**(code **)(*(long *)local_1f8 + 0x48))();
    }
    if (uVar28 != 0xffffffff) goto LAB_006a7170;
    local_1f8 = (ctype *)0x0;
    auVar14 = local_208;
    if (*(int *)(*(long *)(lVar4 + 0x30) + (long)param_9 * 4) != -1) goto LAB_006a7220;
  }
  if (*(ulong *)(local_1f8 + 0x10) < *(ulong *)(local_1f8 + 0x18)) {
    *(ulong *)(local_1f8 + 0x10) = *(ulong *)(local_1f8 + 0x10) + 4;
    auVar14 = local_208;
  }
  else {
    (**(code **)(*(long *)local_1f8 + 0x50))();
    auVar14 = local_208;
  }
  local_1f0 = 0xffffffff;
  param_9 = (wchar_t *)((long)param_9 + 1);
  goto LAB_006a71aa;
code_r0x006a6054:
  if (bVar39 != 0) {
    bVar37 = local_218[5];
    goto LAB_006a63e5;
  }
  if ((int)pcVar30 != 0) {
    lVar32 = *(long *)(local_1d8._0_8_ + -0x18);
    uVar34 = lVar32 + 1;
    if ((*(ulong *)(local_1d8._0_8_ + -0x10) < uVar34) || (0 < *(int *)(local_1d8._0_8_ + -8))) {
      std::string::reserve((string *)local_1d8,uVar34);
    }
    *(char *)(local_1d8._0_8_ + *(long *)(local_1d8._0_8_ + -0x18)) = (char)pcVar30;
    pcVar30 = (ctype *)0x0;
    if ((undefined1 *)local_1d8._0_8_ != &DAT_00938278) {
      *(undefined4 *)(local_1d8._0_8_ + -8) = 0;
      *(ulong *)(local_1d8._0_8_ + -0x18) = uVar34;
      *(undefined1 *)(local_1d8._0_8_ + lVar32 + 1) = 0;
    }
LAB_006a5f87:
    if (*(ulong *)(local_1f8 + 0x10) < *(ulong *)(local_1f8 + 0x18)) {
      *(ulong *)(local_1f8 + 0x10) = *(ulong *)(local_1f8 + 0x10) + 4;
    }
    else {
      (**(code **)(*(long *)local_1f8 + 0x50))();
    }
    local_1f0 = 0xffffffff;
    bVar20 = local_1f8 != (ctype *)0x0;
    bVar44 = true;
    if (bVar20) {
      if (*(int **)(local_1f8 + 0x10) < *(int **)(local_1f8 + 0x18)) {
        iVar25 = **(int **)(local_1f8 + 0x10);
      }
      else {
        iVar25 = (**(code **)(*(long *)local_1f8 + 0x48))();
      }
      bVar44 = false;
      if (iVar25 == -1) {
        local_1f8 = (ctype *)0x0;
        bVar44 = bVar20;
      }
    }
    bVar20 = local_208._8_4_ == -1;
    bVar40 = (long *)local_208._0_8_ != (long *)0x0 && bVar20;
    if (bVar40) {
      if (*(int **)(local_208._0_8_ + 0x10) < *(int **)(local_208._0_8_ + 0x18)) {
        iVar25 = **(int **)(local_208._0_8_ + 0x10);
      }
      else {
        iVar25 = (**(code **)(*(long *)local_208._0_8_ + 0x48))();
      }
      bVar20 = false;
      if (iVar25 != -1) goto LAB_006a5fe8;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = local_208._8_8_;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = local_208._8_8_;
      local_208 = auVar16 << 0x40;
      auVar52 = auVar17 << 0x40;
      if (bVar44 != bVar40) goto LAB_006a5ff0;
LAB_006a63e0:
      local_208 = auVar52;
      bVar37 = 1;
      goto LAB_006a63e5;
    }
LAB_006a5fe8:
    auVar52 = local_208;
    if (bVar44 == bVar20) goto LAB_006a63e0;
LAB_006a5ff0:
    piVar41 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)(ulong)local_1f0;
    pcVar42 = local_1f8;
code_r0x006a5fff:
    wVar27 = (wchar_t)piVar41;
    if ((pcVar42 != (ctype *)0x0) && (wVar27 == L'\xffffffff')) {
      if (*(wchar_t **)(pcVar42 + 0x10) < *(wchar_t **)(pcVar42 + 0x18)) {
        wVar27 = **(wchar_t **)(pcVar42 + 0x10);
      }
      else {
        wVar27 = (**(code **)(*(long *)pcVar42 + 0x48))();
      }
      if (wVar27 == L'\xffffffff') {
        local_1f8 = (ctype *)0x0;
      }
    }
    pwVar36 = wmemchr(local_270,wVar27,10);
    if (pwVar36 != (wchar_t *)0x0) {
      uVar6 = money_base::_S_atoms[(long)pwVar36 - param_1 >> 2];
      lVar32 = *(long *)(local_1d8._8_8_ + -0x18);
      uVar34 = lVar32 + 1;
      if ((*(ulong *)(local_1d8._8_8_ + -0x10) < uVar34) || (0 < *(int *)(local_1d8._8_8_ + -8))) {
        std::string::reserve(param_7,uVar34);
      }
      *(undefined1 *)(local_1d8._8_8_ + *(long *)(local_1d8._8_8_ + -0x18)) = uVar6;
      if ((undefined1 *)local_1d8._8_8_ != &DAT_00938278) {
        *(undefined4 *)(local_1d8._8_8_ + -8) = 0;
        *(ulong *)(local_1d8._8_8_ + -0x18) = uVar34;
        *(undefined1 *)(local_1d8._8_8_ + lVar32 + 1) = 0;
      }
      pcVar30 = (ctype *)(ulong)((int)pcVar30 + 1);
      goto LAB_006a5f87;
    }
    bVar37 = *(wchar_t *)(lVar4 + 0x24) != wVar27 | local_218[5];
    if (bVar37 == 0) {
      if (*(int *)(lVar4 + 0x60) < 1) {
        local_218 = (undefined1  [6])CONCAT15(0,local_218._0_5_);
        auVar52 = local_208;
        goto LAB_006a63e0;
      }
      local_218._0_5_ = (uint5)pcVar30 & 0xffffffff;
      pcVar30 = (ctype *)0x0;
      local_218 = (undefined1  [6])CONCAT15(1,local_218._0_5_);
      goto LAB_006a5f87;
    }
    if ((*(byte *)(lVar4 + 0x20) == 0) ||
       (bVar39 = local_218[5], bVar37 = *(byte *)(lVar4 + 0x20),
       *(wchar_t *)(lVar4 + 0x28) != wVar27)) goto LAB_006a63e5;
    goto code_r0x006a6054;
  }
  bVar37 = 0;
LAB_006a63e5:
  auVar14 = local_208;
  if (*(long *)(local_1d8._8_8_ + -0x18) != 0) goto LAB_006a6103;
LAB_006a63f8:
  piVar43 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)local_208;
  piVar41 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_1f8;
  goto LAB_006a6405;
LAB_006a61ea:
  local_208 = auVar14;
  cVar21 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal(piVar41,piVar43);
  if ((cVar21 == '\x01') || (local_230 <= param_9)) goto LAB_006a67c0;
  uVar28 = local_1f0;
  if ((local_1f8 == (ctype *)0x0) || (local_1f0 != 0xffffffff)) {
LAB_006a61b0:
    if (*(uint *)(*(long *)(lVar4 + 0x30) + (long)param_9 * 4) != uVar28) goto LAB_006a6260;
  }
  else {
    if (*(uint **)(local_1f8 + 0x10) < *(uint **)(local_1f8 + 0x18)) {
      uVar28 = **(uint **)(local_1f8 + 0x10);
    }
    else {
      uVar28 = (**(code **)(*(long *)local_1f8 + 0x48))();
    }
    if (uVar28 != 0xffffffff) goto LAB_006a61b0;
    local_1f8 = (ctype *)0x0;
    if (*(int *)(*(long *)(lVar4 + 0x30) + (long)param_9 * 4) != -1) goto LAB_006a6260;
  }
  if (*(ulong *)(local_1f8 + 0x10) < *(ulong *)(local_1f8 + 0x18)) {
    *(ulong *)(local_1f8 + 0x10) = *(ulong *)(local_1f8 + 0x10) + 4;
    auVar14 = local_208;
  }
  else {
    (**(code **)(*(long *)local_1f8 + 0x50))();
    auVar14 = local_208;
  }
  local_1f0 = 0xffffffff;
  param_9 = (wchar_t *)((long)param_9 + 1);
  goto LAB_006a61ea;
LAB_006a5d1b:
  local_1d8._0_8_ = &DAT_00938278;
  if (*(char *)(lVar4 + 0x20) != '\0') {
    std::string::reserve((string *)local_1d8,0x20);
  }
  local_1d8._8_8_ = &DAT_00938278;
  local_250 = (string *)(local_1d8 + 8);
  std::string::reserve(local_250,0x20);
  pcVar30 = (ctype *)0x0;
  local_268 = 0;
  local_1c8._4_4_ = *(undefined4 *)(lVar4 + 0x68);
  uStack_240 = local_1c8 + 4;
  local_258 = (byte *)0x0;
  _local_218 = 0;
  while( true ) {
    if ((byte)uStack_240[local_268] < 5) {
                    /* WARNING: Could not recover jumptable at 0x006a5ded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar52 = (*(code *)((long)&UINT_00816164 +
                          (long)(int)(&UINT_00816164)[(byte)uStack_240[local_268]]))();
      return auVar52;
    }
LAB_006a67cb:
    bVar37 = 1;
    auVar14 = local_208;
LAB_006a6103:
    iVar25 = (int)pcVar30;
    local_208 = auVar14;
    if ((3 < (int)local_268 + 1) || (bVar37 == 0)) break;
    local_268 = local_268 + 1;
  }
  if (((byte *)0x1 < local_258 & bVar37) == 0) {
    if (bVar37 == 0) goto LAB_006a63f8;
    uVar34 = *(ulong *)(local_1d8._8_8_ + -0x18);
    uVar35 = _local_218;
  }
  else {
switchD_006a3d41_caseD_3d:
    iVar25 = (int)pcVar30;
    if (cStack_212 == '\0') {
      local_268 = *(long *)(lVar4 + 0x40);
    }
    else {
      local_268 = *(long *)(lVar4 + 0x50);
    }
    pbVar33 = (byte *)0x1;
    piVar43 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)local_208;
    piVar41 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_1f8;
    while( true ) {
      local_208 = auVar14;
      cVar21 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal(piVar41,piVar43);
      if ((cVar21 == '\x01') || (local_258 <= pbVar33)) break;
      uVar28 = local_1f0;
      if ((local_1f0 == 0xffffffff) && (local_1f8 != (ctype *)0x0)) {
        if (*(uint **)(local_1f8 + 0x10) < *(uint **)(local_1f8 + 0x18)) {
          uVar28 = **(uint **)(local_1f8 + 0x10);
        }
        else {
          uVar28 = (**(code **)(*(long *)local_1f8 + 0x48))();
        }
        if (uVar28 == 0xffffffff) {
          local_1f8 = (ctype *)0x0;
        }
      }
      if (*(uint *)(local_268 + (long)pbVar33 * 4) != uVar28) goto LAB_006a6405;
      if (*(ulong *)(local_1f8 + 0x10) < *(ulong *)(local_1f8 + 0x18)) {
        *(ulong *)(local_1f8 + 0x10) = *(ulong *)(local_1f8 + 0x10) + 4;
        auVar14 = local_208;
      }
      else {
        (**(code **)(*(long *)local_1f8 + 0x50))();
        auVar14 = local_208;
      }
      local_1f0 = 0xffffffff;
      pbVar33 = pbVar33 + 1;
    }
    if (pbVar33 != local_258) goto LAB_006a6405;
    uVar34 = *(ulong *)(local_1d8._8_8_ + -0x18);
    uVar35 = _local_218;
  }
  if (1 < uVar34) {
    uVar34 = std::string::find_first_not_of(local_250,'0',0);
    if (uVar34 != 0) {
      uVar38 = *(ulong *)(local_1d8._8_8_ + -0x18);
      if (uVar34 == 0xffffffffffffffff) {
        uVar34 = uVar38 - 1;
      }
      if (uVar34 <= uVar38) {
        uVar38 = uVar34;
      }
      std::string::_M_mutate(local_250,0,uVar38,0);
    }
  }
  cStack_212 = (char)((ulong)uVar35 >> 0x30);
  if (cStack_212 != '\0') {
    if (-1 < *(int *)(local_1d8._8_8_ + -8)) {
      std::string::_M_leak_hard(local_250);
    }
    if (*(char *)local_1d8._8_8_ != '0') {
      if (-1 < *(int *)(local_1d8._8_8_ + -8)) {
        std::string::_M_leak_hard(local_250);
      }
      std::string::_M_replace_aux(local_250,0,0,1,'-');
      *(undefined4 *)(local_1d8._8_8_ + -8) = 0xffffffff;
    }
  }
  local_218[5] = (byte)((ulong)uVar35 >> 0x28);
  if (*(long *)(local_1d8._0_8_ + -0x18) != 0) {
    local_218[0] = (char)uVar35;
    cVar21 = (char)iVar25;
    if (local_218[5] != '\0') {
      cVar21 = local_218[0];
    }
    std::string::push_back((string *)local_1d8,cVar21);
    cVar21 = __verify_grouping(*(char **)(lVar4 + 0x10),*(ulong *)(lVar4 + 0x18),(string *)local_1d8
                              );
    if (cVar21 == '\0') {
      *local_228 = *local_228 | 4;
    }
  }
  if (local_218[5] != '\0') {
    piVar43 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)local_208;
    piVar41 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_1f8;
    if (iVar25 != *(int *)(lVar4 + 0x60)) goto LAB_006a6405;
  }
  piVar43 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)local_208;
  piVar41 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_1f8;
  std::string::swap(local_210,local_250);
  goto LAB_006a640d;
LAB_006a7780:
  auVar14 = local_208;
  if (param_9 == local_230) goto LAB_006a778b;
LAB_006a7220:
  if (param_9 == (wchar_t *)0x0) {
    param_9 = (wchar_t *)(ulong)((*(uint *)(local_220 + 0x18) >> 9 ^ 1) & 1);
LAB_006a70c3:
    while (((int)local_268 + 1 < 4 && ((char)param_9 != '\0'))) {
      local_268 = local_268 + 1;
      if ((byte)uStack_240[local_268] < 5) {
        local_208 = auVar14;
                    /* WARNING: Could not recover jumptable at 0x006a6dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar52 = (*(code *)((long)&UINT_00816178 +
                            (long)(int)(&UINT_00816178)[(byte)uStack_240[local_268]]))();
        return auVar52;
      }
LAB_006a778b:
      param_9 = (wchar_t *)0x1;
    }
    bVar44 = param_8 == (byte *)0x0;
    bVar20 = param_8 == (byte *)0x1;
code_r0x006a6dc7:
    iVar25 = (int)pcVar30;
    if (((!bVar44 && !bVar20) & (byte)param_9) == 0) {
      if ((byte)param_9 == 0) goto LAB_006a73b8;
      uVar34 = *(ulong *)(local_1d8._8_8_ + -0x18);
      uVar35 = _local_218;
      local_208 = auVar14;
    }
    else {
      if (cStack_212 == '\0') {
        local_268 = *(long *)(lVar4 + 0x40);
      }
      else {
        local_268 = *(long *)(lVar4 + 0x50);
      }
LAB_006a6de8:
      iVar25 = (int)pcVar30;
      pbVar33 = (byte *)0x1;
      piVar43 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)local_208;
      piVar41 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_1f8;
      while( true ) {
        local_208 = auVar14;
        cVar21 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal(piVar41,piVar43);
        if ((cVar21 == '\x01') || (param_8 <= pbVar33)) break;
        uVar28 = local_1f0;
        if ((local_1f0 == 0xffffffff) && (local_1f8 != (ctype *)0x0)) {
          if (*(uint **)(local_1f8 + 0x10) < *(uint **)(local_1f8 + 0x18)) {
            uVar28 = **(uint **)(local_1f8 + 0x10);
          }
          else {
            uVar28 = (**(code **)(*(long *)local_1f8 + 0x48))();
          }
          if (uVar28 == 0xffffffff) {
            local_1f8 = (ctype *)0x0;
          }
        }
        auVar14 = local_208;
        if (*(uint *)(local_268 + (long)pbVar33 * 4) != uVar28) goto LAB_006a73c5;
        if (*(ulong *)(local_1f8 + 0x10) < *(ulong *)(local_1f8 + 0x18)) {
          *(ulong *)(local_1f8 + 0x10) = *(ulong *)(local_1f8 + 0x10) + 4;
        }
        else {
          (**(code **)(*(long *)local_1f8 + 0x50))();
          auVar14 = local_208;
        }
        local_1f0 = 0xffffffff;
        pbVar33 = pbVar33 + 1;
      }
      auVar14 = local_208;
      if (pbVar33 != param_8) goto LAB_006a73c5;
      uVar34 = *(ulong *)(local_1d8._8_8_ + -0x18);
      uVar35 = _local_218;
    }
    if (1 < uVar34) {
      uVar34 = std::string::find_first_not_of(param_7,'0',0);
      if (uVar34 != 0) {
        uVar38 = *(ulong *)(local_1d8._8_8_ + -0x18);
        if (uVar34 == 0xffffffffffffffff) {
          uVar34 = uVar38 - 1;
        }
        if (uVar34 <= uVar38) {
          uVar38 = uVar34;
        }
        std::string::_M_mutate(param_7,0,uVar38,0);
      }
    }
    cStack_212 = (char)((ulong)uVar35 >> 0x30);
    if (cStack_212 != '\0') {
      if (-1 < *(int *)(local_1d8._8_8_ + -8)) {
        std::string::_M_leak_hard(param_7);
      }
      if (*(char *)local_1d8._8_8_ != '0') {
        if (-1 < *(int *)(local_1d8._8_8_ + -8)) {
          std::string::_M_leak_hard(param_7);
        }
        std::string::_M_replace_aux(param_7,0,0,1,'-');
        *(undefined4 *)(local_1d8._8_8_ + -8) = 0xffffffff;
      }
    }
    local_218[5] = (byte)((ulong)uVar35 >> 0x28);
    auVar14 = local_208;
    if (*(long *)(local_1d8._0_8_ + -0x18) != 0) {
      local_218[0] = (char)uVar35;
      cVar21 = (char)iVar25;
      if (local_218[5] != '\0') {
        cVar21 = local_218[0];
      }
      std::string::push_back((string *)local_1d8,cVar21);
      cVar21 = __verify_grouping(*(char **)(lVar4 + 0x10),*(ulong *)(lVar4 + 0x18),
                                 (string *)local_1d8);
      auVar14 = local_208;
      if (cVar21 == '\0') {
        *local_228 = *local_228 | 4;
      }
    }
    if (local_218[5] != '\0') {
      piVar43 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)local_208;
      piVar41 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_1f8;
      if (iVar25 != *(int *)(lVar4 + 0x60)) goto LAB_006a73c5;
    }
    piVar43 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)local_208;
    piVar41 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_1f8;
    local_208 = auVar14;
    std::string::swap(local_210,param_7);
    goto LAB_006a73cd;
  }
LAB_006a73c5:
  *local_228 = *local_228 | 4;
  local_208 = auVar14;
LAB_006a73cd:
  cVar21 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal(piVar41,piVar43);
  if (cVar21 != '\0') {
    *local_228 = *local_228 | 2;
  }
  auVar8._8_4_ = local_1f0;
  auVar8._0_8_ = local_1f8;
  auVar8._12_4_ = uStack_1ec;
  if ((allocator *)(local_1d8._8_8_ + -0x18) !=
      (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      piVar2 = (int *)(local_1d8._8_8_ + -8);
      iVar25 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
    }
    else {
      iVar25 = *(int *)(local_1d8._8_8_ + -8);
      *(int *)(local_1d8._8_8_ + -8) = iVar25 + -1;
    }
    if (iVar25 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_1d8._8_8_ + -0x18));
    }
  }
  if ((allocator *)(local_1d8._0_8_ + -0x18) !=
      (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      piVar2 = (int *)(local_1d8._0_8_ + -8);
      iVar25 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
    }
    else {
      iVar25 = *(int *)(local_1d8._0_8_ + -8);
      *(int *)(local_1d8._0_8_ + -8) = iVar25 + -1;
    }
    if (iVar25 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_1d8._0_8_ + -0x18));
    }
  }
  if (local_1c8._8_8_ == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
LAB_006a67c0:
  if (param_9 == local_230) goto LAB_006a67cb;
LAB_006a6260:
  if (param_9 == (wchar_t *)0x0) {
    bVar37 = ((byte)(*(uint *)(local_220 + 0x18) >> 9) ^ 1) & 1;
    auVar14 = local_208;
    goto LAB_006a6103;
  }
LAB_006a6405:
  *local_228 = *local_228 | 4;
LAB_006a640d:
  cVar21 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal(piVar41,piVar43);
  if (cVar21 != '\0') {
    *local_228 = *local_228 | 2;
  }
  auVar7._8_4_ = local_1f0;
  auVar7._0_8_ = local_1f8;
  auVar7._12_4_ = uStack_1ec;
  if ((allocator *)(local_1d8._8_8_ + -0x18) !=
      (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      piVar2 = (int *)(local_1d8._8_8_ + -8);
      iVar25 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
    }
    else {
      iVar25 = *(int *)(local_1d8._8_8_ + -8);
      *(int *)(local_1d8._8_8_ + -8) = iVar25 + -1;
    }
    if (iVar25 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_1d8._8_8_ + -0x18));
    }
  }
  if ((allocator *)(local_1d8._0_8_ + -0x18) !=
      (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      piVar2 = (int *)(local_1d8._0_8_ + -8);
      iVar25 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
    }
    else {
      iVar25 = *(int *)(local_1d8._0_8_ + -8);
      *(int *)(local_1d8._0_8_ + -8) = iVar25 + -1;
    }
    if (iVar25 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_1d8._0_8_ + -0x18));
    }
  }
  if (local_1c8._8_8_ == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

