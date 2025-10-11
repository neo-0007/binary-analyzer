
/* std::__use_cache<std::__numpunct_cache<wchar_t> >::TEMPNAMEPLACEHOLDERVALUE(std::locale const&)
   const */

long __thiscall
std::__use_cache<std::__numpunct_cache<wchar_t>>::operator()
          (__use_cache<std::__numpunct_cache<wchar_t>> *this,locale *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  __numpunct_cache<wchar_t> *this_00;
  
  uVar3 = locale::id::_M_id((id *)&numpunct<wchar_t>::id);
  plVar1 = (long *)(*(long *)(*(long *)param_1 + 0x18) + uVar3 * 8);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    return lVar2;
  }
                    /* try { // try from 0069b4f5 to 0069b4f9 has its CatchHandler @ 0069b57e */
  this_00 = (__numpunct_cache<wchar_t> *)operator_new(0x150);
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined ***)this_00 = &PTR____numpunct_cache_009276c8;
  this_00[0x20] = (__numpunct_cache<wchar_t>)0x0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  this_00[0x148] = (__numpunct_cache<wchar_t>)0x0;
                    /* try { // try from 0069b55c to 0069b560 has its CatchHandler @ 0069b587 */
  __numpunct_cache<wchar_t>::_M_cache(this_00,param_1);
  locale::_Impl::_M_install_cache(*(_Impl **)param_1,(facet *)this_00,uVar3);
  return *plVar1;
}

