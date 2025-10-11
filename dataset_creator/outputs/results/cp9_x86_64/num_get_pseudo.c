
/* std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::num_get(unsigned long) */

void __thiscall
std::num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::num_get
          (num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>> *this,
          ulong param_1)

{
  *(uint *)(this + 8) = (uint)(param_1 != 0);
  *(undefined ***)this = &PTR__num_get_0092ba10;
  return;
}

