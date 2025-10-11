
__locale_t uselocale(__locale_t __dataset)

{
  __locale_t p_Var1;
  long in_FS_OFFSET;
  bool bVar2;
  
  p_Var1 = *(__locale_t *)(in_FS_OFFSET + -0x78);
  if (__dataset != (__locale_t)0x0) {
    if (__dataset == (__locale_t)0xffffffffffffffff) {
      __dataset = (__locale_t)&_nl_global_locale;
    }
    bVar2 = PTR__nl_current_LC_PAPER_used_0092df60 != (undefined *)0x0;
    *(__locale_t *)(in_FS_OFFSET + -0x78) = __dataset;
    if (bVar2) {
      *(__locale_data ***)(in_FS_OFFSET + -0x80) = __dataset->__locales + 3;
    }
    if (PTR__nl_current_LC_PAPER_used_0092dfa0 != (undefined *)0x0) {
      *(__locale_t *)(in_FS_OFFSET + -0xd8) = __dataset;
    }
    if (PTR__nl_current_LC_PAPER_used_0092df88 != (undefined *)0x0) {
      *(__locale_data ***)(in_FS_OFFSET + -200) = __dataset->__locales + 4;
    }
    if (PTR__nl_current_LC_PAPER_used_0092df80 != (undefined *)0x0) {
      *(__locale_data ***)(in_FS_OFFSET + -0xc0) = __dataset->__locales + 1;
    }
    if (PTR__nl_current_LC_PAPER_used_0092df38 != (undefined *)0x0) {
      *(__locale_data ***)(in_FS_OFFSET + -0xb8) = __dataset->__locales + 2;
    }
    if (PTR__nl_current_LC_PAPER_used_0092df70 != (undefined *)0x0) {
      *(__locale_data ***)(in_FS_OFFSET + -0xd0) = __dataset->__locales + 5;
    }
    if (PTR__nl_current_LC_PAPER_used_0092ded8 != (undefined *)0x0) {
      *(__locale_data ***)(in_FS_OFFSET + -0xb0) = __dataset->__locales + 7;
    }
    if (PTR__nl_current_LC_PAPER_used_0092df30 != (undefined *)0x0) {
      *(__locale_data ***)(in_FS_OFFSET + -0xa8) = __dataset->__locales + 8;
    }
    if (PTR__nl_current_LC_PAPER_used_0092dee8 != (undefined *)0x0) {
      *(__locale_data ***)(in_FS_OFFSET + -0xa0) = __dataset->__locales + 9;
    }
    if (PTR__nl_current_LC_PAPER_used_0092dfc0 != (undefined *)0x0) {
      *(__locale_data ***)(in_FS_OFFSET + -0x98) = __dataset->__locales + 10;
    }
    if (PTR__nl_current_LC_PAPER_used_0092df20 != (undefined *)0x0) {
      *(__locale_data ***)(in_FS_OFFSET + -0x90) = __dataset->__locales + 0xb;
    }
    if (PTR__nl_current_LC_PAPER_used_0092df18 != (undefined *)0x0) {
      *(__locale_data ***)(in_FS_OFFSET + -0x88) = __dataset->__locales + 0xc;
    }
    *(ushort **)(in_FS_OFFSET + -0x40) = __dataset->__ctype_b;
    *(int **)(in_FS_OFFSET + -0x50) = __dataset->__ctype_tolower;
    *(int **)(in_FS_OFFSET + -0x48) = __dataset->__ctype_toupper;
  }
  if (p_Var1 == (__locale_t)&_nl_global_locale) {
    p_Var1 = (__locale_t)0xffffffffffffffff;
  }
  return p_Var1;
}

