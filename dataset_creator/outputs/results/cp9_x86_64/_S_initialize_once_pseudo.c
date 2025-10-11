
/* std::locale::_S_initialize_once() */

void std::locale::_S_initialize_once(void)

{
  _Impl::_Impl((_Impl *)::(anonymous_namespace)::c_locale_impl,2);
  _S_classic = ::(anonymous_namespace)::c_locale_impl;
  _S_global = ::(anonymous_namespace)::c_locale_impl;
  locale((locale *)&::(anonymous_namespace)::c_locale,
         (_Impl *)::(anonymous_namespace)::c_locale_impl);
  return;
}

