
/* std::__facet_shims::(anonymous namespace)::money_put_shim<char>::~money_put_shim() */

void __thiscall
std::__facet_shims::(anonymous_namespace)::money_put_shim<char>::~money_put_shim
          (money_put_shim<char> *this)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  
  *(undefined ***)this = &PTR__money_put_shim_0090bb28;
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
  *(undefined ***)this = &PTR__money_put_00928c70;
  locale::facet::~facet((facet *)this);
  operator_delete(this);
  return;
}

