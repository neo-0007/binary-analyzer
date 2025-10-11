
/* std::__facet_shims::(anonymous namespace)::messages_shim<wchar_t>::~messages_shim() */

void __thiscall
std::__facet_shims::(anonymous_namespace)::messages_shim<wchar_t>::~messages_shim
          (messages_shim<wchar_t> *this)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  
  *(undefined ***)this = &PTR__messages_shim_0090bbf0;
  plVar2 = *(long **)(this + 0x20);
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
  __cxx11::messages<wchar_t>::~messages((messages<wchar_t> *)this);
  operator_delete(this);
  return;
}

