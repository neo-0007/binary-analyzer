
/* std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::time_get(unsigned long) */

void __thiscall
std::time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::time_get
          (time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>> *this,
          ulong param_1)

{
  *(uint *)(this + 8) = (uint)(param_1 != 0);
  *(undefined ***)this = &PTR__time_get_0092be60;
  return;
}

