
/* WARNING: Removing unreachable block (ram,0x006a63f8) */
/* WARNING: Removing unreachable block (ram,0x006a6741) */
/* WARNING: Removing unreachable block (ram,0x006a5eae) */
/* WARNING: Removing unreachable block (ram,0x006a5ec2) */
/* WARNING: Removing unreachable block (ram,0x006a5ec7) */
/* WARNING: Removing unreachable block (ram,0x006a6b1e) */
/* WARNING: Removing unreachable block (ram,0x006a5ed5) */
/* WARNING: Removing unreachable block (ram,0x006a5ed9) */
/* WARNING: Removing unreachable block (ram,0x006a5ee2) */
/* WARNING: Removing unreachable block (ram,0x006a5e50) */
/* WARNING: Removing unreachable block (ram,0x006a5e5e) */
/* WARNING: Removing unreachable block (ram,0x006a66e0) */
/* WARNING: Removing unreachable block (ram,0x006a5e74) */
/* WARNING: Removing unreachable block (ram,0x006a5e7c) */
/* WARNING: Removing unreachable block (ram,0x006a5e14) */
/* WARNING: Removing unreachable block (ram,0x006a5e1f) */
/* WARNING: Removing unreachable block (ram,0x006a65d0) */
/* WARNING: Removing unreachable block (ram,0x006a5e28) */
/* WARNING: Removing unreachable block (ram,0x006a5e8b) */
/* WARNING: Removing unreachable block (ram,0x006a5ea3) */
/* WARNING: Removing unreachable block (ram,0x006a66f0) */
/* WARNING: Removing unreachable block (ram,0x006a66fb) */
/* WARNING: Removing unreachable block (ram,0x006a6a0c) */
/* WARNING: Removing unreachable block (ram,0x006a6b59) */
/* WARNING: Removing unreachable block (ram,0x006a6a1f) */
/* WARNING: Removing unreachable block (ram,0x006a6a28) */
/* WARNING: Removing unreachable block (ram,0x006a6b30) */
/* WARNING: Removing unreachable block (ram,0x006a6a33) */
/* WARNING: Removing unreachable block (ram,0x006a676c) */
/* WARNING: Removing unreachable block (ram,0x006a6405) */
/* std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > std::money_get<wchar_t,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::_M_extract<true>(std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, std::ios_base&,
   std::_Ios_Iostate&, std::string&) const */

undefined1  [16]
std::money_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
_M_extract<true>(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,long param_6,uint *param_7,string *param_8)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  __moneypunct_cache<wchar_t,true> *this;
  ulong uVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined1 auVar8 [16];
  long local_e8;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined4 local_44;
  long local_40;
  
  local_70 = (undefined4)param_3;
  uStack_6c = (undefined4)((ulong)param_3 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_4;
  local_80 = param_5;
  local_78 = param_2;
  use_facet<std::ctype<wchar_t>>((locale *)(param_6 + 0xd0));
  uVar5 = locale::id::_M_id((id *)&moneypunct<wchar_t,true>::id);
  plVar2 = (long *)(*(long *)(*(long *)(param_6 + 0xd0) + 0x18) + uVar5 * 8);
  lVar7 = *plVar2;
  if (lVar7 == 0) {
                    /* try { // try from 006a690d to 006a6911 has its CatchHandler @ 006a6bda */
    this = (__moneypunct_cache<wchar_t,true> *)operator_new(0xa0);
    *(undefined4 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined ***)this = &PTR____moneypunct_cache_00927638;
    this[0x20] = (__moneypunct_cache<wchar_t,true>)0x0;
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined4 *)(this + 0x68) = 0;
    this[0x98] = (__moneypunct_cache<wchar_t,true>)0x0;
                    /* try { // try from 006a6996 to 006a699a has its CatchHandler @ 006a6bd1 */
    __moneypunct_cache<wchar_t,true>::_M_cache(this,(locale *)(param_6 + 0xd0));
    locale::_Impl::_M_install_cache(*(_Impl **)(param_6 + 0xd0),(facet *)this,uVar5);
    lVar7 = *plVar2;
  }
  local_58 = &DAT_00938278;
  if (*(char *)(lVar7 + 0x20) != '\0') {
                    /* try { // try from 006a5d45 to 006a5d49 has its CatchHandler @ 006a6bae */
    std::string::reserve((string *)&local_58,0x20);
  }
  local_50 = &DAT_00938278;
                    /* try { // try from 006a5d7a to 006a68fd has its CatchHandler @ 006a6ba5 */
  std::string::reserve((string *)&local_50,0x20);
  local_44 = *(undefined4 *)(lVar7 + 0x68);
  local_e8 = 0;
  while( true ) {
    if (*(byte *)((long)&local_44 + local_e8) < 5) {
                    /* WARNING: Could not recover jumptable at 0x006a5ded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar8 = (*(code *)((long)&UINT_00816164 +
                         (long)(int)(&UINT_00816164)[*(byte *)((long)&local_44 + local_e8)]))();
      return auVar8;
    }
    if (3 < (int)local_e8 + 1) break;
    local_e8 = local_e8 + 1;
  }
  if ((1 < *(ulong *)(local_50 + -0x18)) &&
     (uVar5 = std::string::find_first_not_of((string *)&local_50,'0',0), uVar5 != 0)) {
    uVar6 = *(ulong *)(local_50 + -0x18);
    if (uVar5 == 0xffffffffffffffff) {
      uVar5 = uVar6 - 1;
    }
    if (uVar5 <= uVar6) {
      uVar6 = uVar5;
    }
    std::string::_M_mutate((string *)&local_50,0,uVar6,0);
  }
  if (*(long *)(local_58 + -0x18) != 0) {
    std::string::push_back((string *)&local_58,'\0');
    cVar3 = __verify_grouping(*(char **)(lVar7 + 0x10),*(ulong *)(lVar7 + 0x18),(string *)&local_58)
    ;
    if (cVar3 == '\0') {
      *param_7 = *param_7 | 4;
    }
  }
  std::string::swap(param_8,(string *)&local_50);
  cVar3 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                    ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_78,
                     (istreambuf_iterator *)&local_88);
  if (cVar3 != '\0') {
    *param_7 = *param_7 | 2;
  }
  auVar8._8_4_ = local_70;
  auVar8._0_8_ = local_78;
  auVar8._12_4_ = uStack_6c;
  if ((allocator *)(local_50 + -0x18) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      piVar1 = (int *)(local_50 + -8);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar4 = *(int *)(local_50 + -8);
      *(int *)(local_50 + -8) = iVar4 + -1;
    }
    if (iVar4 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_50 + -0x18));
    }
  }
  if ((allocator *)(local_58 + -0x18) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      piVar1 = (int *)(local_58 + -8);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar4 = *(int *)(local_58 + -8);
      *(int *)(local_58 + -8) = iVar4 + -1;
    }
    if (iVar4 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_58 + -0x18));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

