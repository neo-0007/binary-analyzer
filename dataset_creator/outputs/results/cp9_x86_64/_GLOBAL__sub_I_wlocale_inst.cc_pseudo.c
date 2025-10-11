
void _GLOBAL__sub_I_wlocale_inst_cc(void)

{
  if (std::num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id == '\0')
  {
    std::num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id = '\x01';
  }
  if (std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id == '\0')
  {
    std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id = '\x01';
  }
  if (std::money_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id ==
      '\0') {
    std::money_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id = '\x01'
    ;
  }
  if (std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id ==
      '\0') {
    std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id = '\x01'
    ;
  }
  if (std::moneypunct<wchar_t,false>::id == '\0') {
    std::moneypunct<wchar_t,false>::id = '\x01';
  }
  if (std::moneypunct<wchar_t,true>::id == '\0') {
    std::moneypunct<wchar_t,true>::id = '\x01';
  }
  if (std::numpunct<wchar_t>::id == '\0') {
    std::numpunct<wchar_t>::id = '\x01';
  }
  if (std::__timepunct<wchar_t>::id == '\0') {
    std::__timepunct<wchar_t>::id = '\x01';
  }
  if (std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id == '\0'
     ) {
    std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id = '\x01';
  }
  if (std::time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id == '\0'
     ) {
    std::time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id = '\x01';
  }
  if (std::messages<wchar_t>::id == '\0') {
    std::messages<wchar_t>::id = '\x01';
  }
  if (std::collate<wchar_t>::id == '\0') {
    std::collate<wchar_t>::id = '\x01';
  }
  return;
}

