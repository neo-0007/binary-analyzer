
/* std::__facet_shims::(anonymous namespace)::time_get_shim<wchar_t>::~time_get_shim() */

void __thiscall
std::__facet_shims::(anonymous_namespace)::time_get_shim<wchar_t>::~time_get_shim
          (time_get_shim<wchar_t> *this)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  
  *(undefined ***)this = &PTR__time_get_shim_00929400;
  plVar2 = *(long **)(this + 0x10);
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
  *(undefined ***)this = &PTR__time_get_00929960;
  locale::facet::~facet((facet *)this);
  operator_delete(this);
  return;
}

