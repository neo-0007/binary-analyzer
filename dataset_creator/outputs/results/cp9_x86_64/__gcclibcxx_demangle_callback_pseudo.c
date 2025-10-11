
uint __gcclibcxx_demangle_callback(long param_1,long param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = d_demangle_callback_constprop_0();
    return -(uint)(iVar1 == 0) & 0xfffffffe;
  }
  return 0xfffffffd;
}

