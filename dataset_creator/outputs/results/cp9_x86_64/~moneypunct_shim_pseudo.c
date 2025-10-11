
/* std::__facet_shims::(anonymous namespace)::moneypunct_shim<wchar_t, true>::~moneypunct_shim() */

void __thiscall
std::__facet_shims::(anonymous_namespace)::moneypunct_shim<wchar_t,true>::~moneypunct_shim
          (moneypunct_shim<wchar_t,true> *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  
  *(undefined ***)this = &PTR__moneypunct_shim_009292d8;
  lVar2 = *(long *)(this + 0x20);
  plVar3 = *(long **)(this + 0x18);
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  if (__libc_single_threaded == '\0') {
    LOCK();
    plVar1 = plVar3 + 1;
    iVar4 = (int)*plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
  }
  else {
    iVar4 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar4 + -1;
  }
  if (iVar4 == 1) {
    (**(code **)(*plVar3 + 8))();
  }
  __cxx11::moneypunct<wchar_t,true>::~moneypunct((moneypunct<wchar_t,true> *)this);
  operator_delete(this);
  return;
}

