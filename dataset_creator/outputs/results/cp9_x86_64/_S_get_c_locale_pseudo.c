
/* std::locale::facet::_S_get_c_locale() */

undefined8 std::locale::facet::_S_get_c_locale(void)

{
  pthread_once(&_S_once,_S_initialize_once);
  return _S_c_locale;
}

