
/* std::wios::_M_cache_locale(std::locale const&) */

void __thiscall std::wios::_M_cache_locale(wios *this,locale *param_1)

{
  bool bVar1;
  ctype *pcVar2;
  num_put *pnVar3;
  num_get *pnVar4;
  
  bVar1 = has_facet<std::ctype<wchar_t>>(param_1);
  if (bVar1) {
    pcVar2 = use_facet<std::ctype<wchar_t>>(param_1);
  }
  else {
    pcVar2 = (ctype *)0x0;
  }
  *(ctype **)(this + 0xf0) = pcVar2;
  bVar1 = has_facet<std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>>
                    (param_1);
  if (bVar1) {
    pnVar3 = use_facet<std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>>
                       (param_1);
  }
  else {
    pnVar3 = (num_put *)0x0;
  }
  *(num_put **)(this + 0xf8) = pnVar3;
  bVar1 = has_facet<std::num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>>
                    (param_1);
  if (bVar1) {
    pnVar4 = use_facet<std::num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>>
                       (param_1);
    *(num_get **)(this + 0x100) = pnVar4;
    return;
  }
  *(undefined8 *)(this + 0x100) = 0;
  return;
}

