
/* void std::__cxx11::string::insert<__gnu_cxx::__normal_iterator<char*, std::__cxx11::string >
   >(__gnu_cxx::__normal_iterator<char*, std::__cxx11::string >, __gnu_cxx::__normal_iterator<char*,
   std::__cxx11::string >, __gnu_cxx::__normal_iterator<char*, std::__cxx11::string >) */

void __thiscall
std::__cxx11::string::insert<__gnu_cxx::__normal_iterator<char*,std::__cxx11::string>>
          (string *this,long param_2,char *param_3,long param_4)

{
  ulong uVar1;
  
  uVar1 = param_2 - *(long *)this;
  if (uVar1 <= *(ulong *)(this + 8)) {
    _M_replace(this,uVar1,0,param_3,param_4 - (long)param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_out_of_range_fmt
            ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",uVar1)
  ;
}

