
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__verify_grouping(char const*, unsigned long, std::__cxx11::string const&) */

void std::__verify_grouping(char *param_1,ulong param_2,string *param_3)

{
                    /* try { // try from 006b214f to 006b2153 has its CatchHandler @ 006b2159 */
  __verify_grouping_impl(param_1,param_2,*(char **)param_3,*(ulong *)(param_3 + 8));
  return;
}

