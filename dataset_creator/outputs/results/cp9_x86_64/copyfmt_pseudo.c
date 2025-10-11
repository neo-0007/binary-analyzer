
/* std::wios::copyfmt(std::wios const&) */

wios * __thiscall std::wios::copyfmt(wios *this,wios *param_1)

{
  wios wVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  wios *pwVar7;
  wios *pwVar8;
  long lVar9;
  long in_FS_OFFSET;
  locale alStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this == param_1) goto LAB_0066ca10;
  pwVar7 = this + 0x40;
  if (*(int *)(param_1 + 0xc0) < 9) {
LAB_0066c8c5:
    lVar9 = *(long *)(param_1 + 0x28);
  }
  else {
    pwVar7 = (wios *)operator_new__((long)*(int *)(param_1 + 0xc0) << 4);
    lVar9 = (long)*(int *)(param_1 + 0xc0) + -1;
    pwVar8 = pwVar7;
    if (lVar9 < 0) goto LAB_0066c8c5;
    do {
      lVar9 = lVar9 + -1;
      *(undefined8 *)pwVar8 = 0;
      *(undefined8 *)(pwVar8 + 8) = 0;
      pwVar8 = pwVar8 + 0x10;
    } while (lVar9 != -1);
    lVar9 = *(long *)(param_1 + 0x28);
  }
  if (lVar9 != 0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
    }
  }
  ios_base::_M_call_callbacks((ios_base *)this,0);
  pwVar8 = *(wios **)(this + 200);
  if (pwVar8 != this + 0x40) {
    if (pwVar8 != (wios *)0x0) {
      operator_delete__(pwVar8);
    }
    *(undefined8 *)(this + 200) = 0;
  }
  ios_base::_M_dispose_callbacks((ios_base *)this);
  iVar2 = *(int *)(param_1 + 0xc0);
  *(long *)(this + 0x28) = lVar9;
  if (0 < iVar2) {
    lVar9 = *(long *)(param_1 + 200);
    lVar6 = 0;
    do {
      uVar4 = ((undefined8 *)(lVar9 + lVar6))[1];
      *(undefined8 *)(pwVar7 + lVar6) = *(undefined8 *)(lVar9 + lVar6);
      *(undefined8 *)(pwVar7 + lVar6 + 8) = uVar4;
      lVar6 = lVar6 + 0x10;
    } while ((long)iVar2 * 0x10 != lVar6);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  wVar1 = param_1[0xe4];
  *(wios **)(this + 200) = pwVar7;
  *(int *)(this + 0xc0) = iVar2;
  *(undefined4 *)(this + 0x18) = uVar5;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)(param_1 + 0xd8);
  if (wVar1 == (wios)0x0) {
    plVar3 = *(long **)(param_1 + 0xf0);
    if (plVar3 == (long *)0x0) goto LAB_0066cb00;
    uVar5 = (**(code **)(*plVar3 + 0x50))(plVar3,0x20);
    param_1[0xe4] = (wios)0x1;
    wVar1 = this[0xe4];
    *(undefined4 *)(param_1 + 0xe0) = uVar5;
  }
  else {
    wVar1 = this[0xe4];
    uVar5 = *(undefined4 *)(param_1 + 0xe0);
  }
  if (wVar1 == (wios)0x0) {
    plVar3 = *(long **)(this + 0xf0);
    if (plVar3 == (long *)0x0) {
LAB_0066cb00:
                    /* WARNING: Subroutine does not return */
      __throw_bad_cast();
    }
    (**(code **)(*plVar3 + 0x50))(plVar3,0x20);
    this[0xe4] = (wios)0x1;
  }
  *(undefined4 *)(this + 0xe0) = uVar5;
  locale::locale(alStack_38,(locale *)(param_1 + 0xd0));
  locale::operator=((locale *)(this + 0xd0),alStack_38);
  locale::~locale(alStack_38);
  _M_cache_locale(this,(locale *)(this + 0xd0));
  ios_base::_M_call_callbacks((ios_base *)this,2);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  clear(this,*(undefined4 *)(this + 0x20));
LAB_0066ca10:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return this;
}

