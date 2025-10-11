
/* std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::put(std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, std::ios_base&, wchar_t,
   unsigned long long) const */

void std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::put
               (long *param_1)

{
  if (*(code **)(*param_1 + 0x30) == do_put) {
    _M_insert_int<unsigned_long_long>();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0069c3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}

