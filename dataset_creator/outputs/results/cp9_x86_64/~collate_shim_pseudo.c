
/* std::__facet_shims::(anonymous namespace)::collate_shim<char>::~collate_shim() */

void __thiscall
std::__facet_shims::(anonymous_namespace)::collate_shim<char>::~collate_shim
          (collate_shim<char> *this)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  
  *(undefined ***)this = &PTR__collate_shim_00929150;
  plVar2 = *(long **)(this + 0x18);
  if (__libc_single_threaded == '\0') {
    LOCK();
    plVar1 = plVar2 + 1;
    iVar3 = (int)*plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
  }
  else {
    iVar3 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar3 + -1;
  }
  if (iVar3 == 1) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined ***)this = &PTR__collate_00928968;
  locale::facet::_S_destroy_c_locale((__locale_struct **)(this + 0x10));
  locale::facet::~facet((facet *)this);
  operator_delete(this);
  return;
}

