
/* std::ios_base::imbue(std::locale const&) */

locale * std::ios_base::imbue(locale *param_1)

{
  locale *in_RDX;
  long in_RSI;
  
  locale::locale(param_1,(locale *)(in_RSI + 0xd0));
  locale::operator=((locale *)(in_RSI + 0xd0),in_RDX);
  _M_call_callbacks();
  return param_1;
}

