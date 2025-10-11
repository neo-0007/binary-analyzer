
/* std::codecvt<wchar_t, char, __mbstate_t>::do_max_length() const */

ulong __thiscall
std::codecvt<wchar_t,char,__mbstate_t>::do_max_length(codecvt<wchar_t,char,__mbstate_t> *this)

{
  __locale_t __dataset;
  size_t sVar1;
  
  __dataset = uselocale(*(__locale_t *)(this + 0x10));
  sVar1 = __ctype_get_mb_cur_max();
  uselocale(__dataset);
  return sVar1 & 0xffffffff;
}

