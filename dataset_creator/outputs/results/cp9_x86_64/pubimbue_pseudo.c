
/* std::wstreambuf::pubimbue(std::locale const&) */

locale * std::wstreambuf::pubimbue(locale *param_1)

{
  locale *in_RDX;
  long *in_RSI;
  
  locale::locale(param_1,(locale *)(in_RSI + 7));
  if (*(code **)(*in_RSI + 0x10) != imbue) {
                    /* try { // try from 00690616 to 00690617 has its CatchHandler @ 0069061a */
    (**(code **)(*in_RSI + 0x10))();
  }
  locale::operator=((locale *)(in_RSI + 7),in_RDX);
  return param_1;
}

