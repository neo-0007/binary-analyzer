
/* std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::get(std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, std::ios_base&,
   std::_Ios_Iostate&, tm*, wchar_t const*, wchar_t const*) const */

long * std::time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::get
                 (undefined8 param_1,long *param_2,ulong param_3,long *param_4,ulong param_5,
                 long param_6,uint *param_7,undefined8 param_8,undefined4 *param_9,
                 undefined4 *param_10)

{
  locale *plVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ctype *pcVar8;
  ctype *pcVar9;
  long *plVar10;
  bool bVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auVar18 [12];
  long *local_b8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  int local_88;
  undefined4 local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  long local_40;
  
  uVar14 = param_3 & 0xffffffff;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = (locale *)(param_6 + 0xd0);
  pcVar8 = use_facet<std::ctype<wchar_t>>(plVar1);
  *param_7 = 0;
  if (param_9 == param_10) {
LAB_006a57b3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  bVar15 = (int)param_5 == -1;
  local_b8 = param_4;
  local_a0 = param_3;
  local_98 = param_5;
  do {
    uVar12 = local_a0;
    bVar16 = (int)uVar14 == -1;
    bVar3 = param_2 != (long *)0x0 && bVar16;
    bVar17 = bVar16;
    if (bVar3) {
      if ((int *)param_2[2] < (int *)param_2[3]) {
        iVar6 = *(int *)param_2[2];
      }
      else {
        iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      if (iVar6 == -1) {
        param_2 = (long *)0x0;
      }
      bVar17 = iVar6 == -1 && bVar3;
    }
    bVar11 = local_b8 != (long *)0x0 && bVar15;
    bVar3 = bVar15;
    if (bVar11) {
      if ((int *)local_b8[2] < (int *)local_b8[3]) {
        iVar6 = *(int *)local_b8[2];
      }
      else {
        iVar6 = (**(code **)(*local_b8 + 0x48))();
      }
      plVar10 = (long *)0x0;
      if (iVar6 != -1) {
        plVar10 = local_b8;
      }
      local_b8 = plVar10;
      bVar3 = iVar6 == -1 && bVar11;
    }
    if (bVar3 == bVar17) {
      *param_7 = 6;
      goto LAB_006a57b3;
    }
    cVar2 = (**(code **)(*(long *)pcVar8 + 0x60))(pcVar8,*param_9,0);
    if (cVar2 == '%') {
      puVar13 = param_9 + 1;
      if (param_10 == puVar13) {
LAB_006a5bd0:
        *param_7 = 4;
        goto LAB_006a57b3;
      }
      cVar2 = (**(code **)(*(long *)pcVar8 + 0x60))(pcVar8,param_9[1],0);
      if ((cVar2 == 'E') || (cVar2 == 'O')) {
        puVar13 = param_9 + 2;
        if (param_10 == puVar13) goto LAB_006a5bd0;
        cVar4 = (**(code **)(*(long *)pcVar8 + 0x60))(pcVar8,param_9[2],0);
        local_88 = (int)cVar4;
        pcVar9 = use_facet<std::ctype<wchar_t>>(plVar1);
        *param_7 = 0;
        local_58 = (**(code **)(*(long *)pcVar9 + 0x50))(pcVar9,0x25);
        if (cVar2 == '\0') goto LAB_006a5700;
        local_4c = 0;
        local_54 = (int)cVar2;
        local_50 = local_88;
      }
      else {
        local_88 = (int)cVar2;
        pcVar9 = use_facet<std::ctype<wchar_t>>(plVar1);
        *param_7 = 0;
        local_58 = (**(code **)(*(long *)pcVar9 + 0x50))(pcVar9,0x25);
LAB_006a5700:
        local_50 = 0;
        local_54 = local_88;
      }
      local_90 = local_98 & 0xffffffff00000000;
      local_a0 = local_a0 & 0xffffffff00000000;
      auVar18 = _M_extract_via_format
                          (param_1,param_2,uVar12 & 0xffffffff00000000 | uVar14,local_b8,
                           local_98 & 0xffffffff00000000 | param_5 & 0xffffffff,param_6,param_7,
                           param_8,&local_58);
      plVar10 = auVar18._0_8_;
      bVar17 = auVar18._8_4_ == 0xffffffff;
      uVar14 = (ulong)auVar18._8_4_;
      bVar3 = plVar10 != (long *)0x0 && bVar17;
      param_2 = plVar10;
      if (bVar3) {
        if ((int *)plVar10[2] < (int *)plVar10[3]) {
          iVar6 = *(int *)plVar10[2];
        }
        else {
          iVar6 = (**(code **)(*plVar10 + 0x48))(plVar10);
        }
        bVar17 = iVar6 == -1 && bVar3;
        param_2 = (long *)0x0;
        if (iVar6 != -1) {
          param_2 = plVar10;
        }
      }
      bVar3 = bVar15;
      if ((local_b8 != (long *)0x0) && (bVar15)) {
        if ((int *)local_b8[2] < (int *)local_b8[3]) {
          iVar6 = *(int *)local_b8[2];
        }
        else {
          iVar6 = (**(code **)(*local_b8 + 0x48))();
        }
        bVar3 = iVar6 == -1;
      }
      if (bVar3 == bVar17) {
        *param_7 = *param_7 | 2;
      }
      param_9 = puVar13 + 1;
      local_98 = local_90;
    }
    else {
      cVar2 = (**(code **)(*(long *)pcVar8 + 0x10))(pcVar8,0x2000,*param_9);
      if (cVar2 != '\0') {
        do {
          param_9 = param_9 + 1;
          if (param_10 == param_9) break;
          cVar2 = (**(code **)(*(long *)pcVar8 + 0x10))(pcVar8,0x2000,*param_9);
        } while (cVar2 != '\0');
        do {
          bVar3 = (int)uVar14 == -1;
          bVar17 = param_2 != (long *)0x0;
          if (bVar17 && bVar3) {
            if ((int *)param_2[2] < (int *)param_2[3]) {
              iVar6 = *(int *)param_2[2];
            }
            else {
              iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
            }
            if (iVar6 == -1) {
              param_2 = (long *)0x0;
            }
            bVar17 = iVar6 == -1 && (bVar17 && bVar3);
            if (local_b8 != (long *)0x0 && bVar15) goto LAB_006a58e8;
LAB_006a5853:
            if (bVar17 == bVar15) goto joined_r0x006a55f8;
          }
          else {
            bVar17 = bVar3;
            if (local_b8 == (long *)0x0 || !bVar15) goto LAB_006a5853;
LAB_006a58e8:
            bVar16 = local_b8 != (long *)0x0;
            if ((int *)local_b8[2] < (int *)local_b8[3]) {
              iVar6 = *(int *)local_b8[2];
            }
            else {
              iVar6 = (**(code **)(*local_b8 + 0x48))();
            }
            plVar10 = (long *)0x0;
            if (iVar6 != -1) {
              plVar10 = local_b8;
            }
            local_b8 = plVar10;
            if (bVar17 == (iVar6 == -1 && (bVar16 && bVar15))) goto joined_r0x006a55f8;
          }
          uVar12 = uVar14;
          if ((param_2 != (long *)0x0) && (bVar3)) {
            if ((uint *)param_2[2] < (uint *)param_2[3]) {
              uVar7 = *(uint *)param_2[2];
            }
            else {
              uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
            }
            uVar12 = (ulong)uVar7;
            if (uVar7 == 0xffffffff) {
              param_2 = (long *)0x0;
            }
          }
          cVar2 = (**(code **)(*(long *)pcVar8 + 0x10))(pcVar8,0x2000,uVar12);
          if (cVar2 == '\0') goto joined_r0x006a55f8;
          if ((ulong)param_2[2] < (ulong)param_2[3]) {
            param_2[2] = param_2[2] + 4;
          }
          else {
            (**(code **)(*param_2 + 0x50))(param_2);
          }
          uVar14 = 0xffffffff;
        } while( true );
      }
      uVar12 = uVar14;
      if ((param_2 == (long *)0x0) || (!bVar16)) {
LAB_006a5592:
        iVar6 = (**(code **)(*(long *)pcVar8 + 0x40))(pcVar8,uVar12);
        iVar5 = (**(code **)(*(long *)pcVar8 + 0x40))(pcVar8,*param_9);
        if (iVar6 != iVar5) {
LAB_006a55b2:
          iVar6 = (**(code **)(*(long *)pcVar8 + 0x30))(pcVar8,uVar14);
          iVar5 = (**(code **)(*(long *)pcVar8 + 0x30))(pcVar8,*param_9);
          if (iVar5 != iVar6) goto LAB_006a5bd0;
        }
      }
      else {
        if ((uint *)param_2[2] < (uint *)param_2[3]) {
          uVar7 = *(uint *)param_2[2];
        }
        else {
          uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (uVar7 == 0xffffffff) {
          param_2 = (long *)0x0;
          uVar12 = (ulong)uVar7;
          goto LAB_006a5592;
        }
        iVar6 = (**(code **)(*(long *)pcVar8 + 0x40))(pcVar8,(ulong)uVar7);
        iVar5 = (**(code **)(*(long *)pcVar8 + 0x40))(pcVar8,*param_9);
        if (iVar5 != iVar6) {
          if ((uint *)param_2[2] < (uint *)param_2[3]) {
            uVar7 = *(uint *)param_2[2];
          }
          else {
            uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          uVar14 = (ulong)uVar7;
          if (uVar7 == 0xffffffff) {
            param_2 = (long *)0x0;
          }
          goto LAB_006a55b2;
        }
      }
      if ((ulong)param_2[2] < (ulong)param_2[3]) {
        param_2[2] = param_2[2] + 4;
      }
      else {
        (**(code **)(*param_2 + 0x50))(param_2);
      }
      param_9 = param_9 + 1;
      uVar14 = 0xffffffff;
    }
joined_r0x006a55f8:
    if ((param_9 == param_10) || (*param_7 != 0)) goto LAB_006a57b3;
  } while( true );
}

