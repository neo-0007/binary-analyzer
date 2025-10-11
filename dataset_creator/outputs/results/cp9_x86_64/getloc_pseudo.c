
/* std::wstreambuf::getloc() const */

void std::wstreambuf::getloc(void)

{
  long in_RSI;
  locale *in_RDI;
  
  locale::locale(in_RDI,(locale *)(in_RSI + 0x38));
  return;
}

