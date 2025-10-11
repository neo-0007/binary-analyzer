
/* std::locale::facet::_S_lc_ctype_c_locale(__locale_struct*, char const*) */

void std::locale::facet::_S_lc_ctype_c_locale(__locale_struct *param_1,char *param_2)

{
  __locale_t __base;
  __locale_t p_Var1;
  
  __base = duplocale(param_1);
  if (__base == (__locale_t)0x0) {
                    /* WARNING: Subroutine does not return */
    __throw_runtime_error("locale::facet::_S_lc_ctype_c_locale duplocale error");
  }
  p_Var1 = newlocale(1,param_2,__base);
  if (p_Var1 != (__locale_t)0x0) {
    return;
  }
  freelocale(__base);
                    /* WARNING: Subroutine does not return */
  __throw_runtime_error("locale::facet::_S_lc_ctype_c_locale newlocale error");
}

