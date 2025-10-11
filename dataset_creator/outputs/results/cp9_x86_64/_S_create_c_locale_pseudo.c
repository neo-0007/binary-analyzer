
/* std::locale::facet::_S_create_c_locale(__locale_struct*&, char const*, __locale_struct*) */

void std::locale::facet::_S_create_c_locale
               (__locale_struct **param_1,char *param_2,__locale_struct *param_3)

{
  __locale_t p_Var1;
  
  p_Var1 = newlocale(0x40,param_2,param_3);
  *param_1 = p_Var1;
  if (p_Var1 != (__locale_t)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_runtime_error("locale::facet::_S_create_c_locale name not valid");
}

