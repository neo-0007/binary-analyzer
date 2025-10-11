
/* std::__facet_shims::(anonymous namespace)::numpunct_shim<wchar_t>::~numpunct_shim() */

void __thiscall
std::__facet_shims::(anonymous_namespace)::numpunct_shim<wchar_t>::~numpunct_shim
          (numpunct_shim<wchar_t> *this)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  
  *(undefined ***)this = &PTR__numpunct_shim_00929258;
  plVar2 = *(long **)(this + 0x18);
  *(undefined8 *)(*(long *)(this + 0x20) + 0x18) = 0;
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
  __cxx11::numpunct<wchar_t>::~numpunct((numpunct<wchar_t> *)this);
  operator_delete(this);
  return;
}

