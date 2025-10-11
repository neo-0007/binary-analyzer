
/* std::locale::facet::_S_destroy_c_locale(__locale_struct*&) */

void std::locale::facet::_S_destroy_c_locale(__locale_struct **param_1)

{
  __locale_t p_Var1;
  
  if (*param_1 == (__locale_struct *)0x0) {
    return;
  }
  p_Var1 = (__locale_t)_S_get_c_locale();
  if (*param_1 != p_Var1) {
    freelocale(*param_1);
    return;
  }
  return;
}

