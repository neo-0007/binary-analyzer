
/* std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::do_get_weekday(std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, std::ios_base&,
   std::_Ios_Iostate&, tm*) const */

undefined1  [16]
std::time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::do_get_weekday
          (undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
          long param_6,uint *param_7,long param_8)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  __timepunct *p_Var4;
  long *plVar5;
  long *plVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined4 local_c0;
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
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  p_Var4 = use_facet<std::__timepunct<wchar_t>>((locale *)(param_6 + 0xd0));
  lVar1 = *(long *)(p_Var4 + 0x10);
  local_bc = 0;
  local_b8 = *(undefined8 *)(lVar1 + 0x90);
  local_b0 = *(undefined8 *)(lVar1 + 0x98);
  local_a8 = *(undefined8 *)(lVar1 + 0xa0);
  local_a0 = *(undefined8 *)(lVar1 + 0xa8);
  local_98 = *(undefined8 *)(lVar1 + 0xb0);
  local_90 = *(undefined8 *)(lVar1 + 0xb8);
  local_88 = *(undefined8 *)(lVar1 + 0xc0);
  local_80 = *(undefined8 *)(lVar1 + 0x58);
  local_78 = *(undefined8 *)(lVar1 + 0x60);
  local_70 = *(undefined8 *)(lVar1 + 0x68);
  local_68 = *(undefined8 *)(lVar1 + 0x70);
  local_60 = *(undefined8 *)(lVar1 + 0x78);
  local_58 = *(undefined8 *)(lVar1 + 0x80);
  local_50 = *(undefined8 *)(lVar1 + 0x88);
  auVar8 = _M_extract_wday_or_month
                     (param_1,param_2,param_3,param_4,param_5,&local_c0,&local_b8,7,param_6,
                      &local_bc);
  plVar5 = auVar8._0_8_;
  if (local_bc == 0) {
    *(undefined4 *)(param_8 + 0x18) = local_c0;
  }
  else {
    *param_7 = *param_7 | 4;
  }
  bVar7 = auVar8._8_4_ == -1;
  bVar2 = plVar5 != (long *)0x0 && bVar7;
  plVar6 = plVar5;
  if (bVar2) {
    if ((int *)plVar5[2] < (int *)plVar5[3]) {
      iVar3 = *(int *)plVar5[2];
    }
    else {
      iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
    }
    plVar6 = (long *)0x0;
    if (iVar3 != -1) {
      plVar6 = plVar5;
    }
    bVar7 = iVar3 == -1 && bVar2;
  }
  bVar2 = (int)param_5 == -1;
  if ((param_4 != (long *)0x0) && (bVar2)) {
    if ((int *)param_4[2] < (int *)param_4[3]) {
      iVar3 = *(int *)param_4[2];
    }
    else {
      iVar3 = (**(code **)(*param_4 + 0x48))(param_4);
    }
    bVar2 = iVar3 == -1;
  }
  if (bVar7 == bVar2) {
    *param_7 = *param_7 | 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar8._8_8_ = param_3 & 0xffffffff00000000 | auVar8._8_8_ & 0xffffffff;
    auVar8._0_8_ = plVar6;
    return auVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

