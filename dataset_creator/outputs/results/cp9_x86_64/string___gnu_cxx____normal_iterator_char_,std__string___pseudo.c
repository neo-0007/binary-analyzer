
/* std::string::string<__gnu_cxx::__normal_iterator<char*, std::string >
   >(__gnu_cxx::__normal_iterator<char*, std::string >, __gnu_cxx::__normal_iterator<char*,
   std::string >, std::allocator<char> const&) */

void __thiscall
std::string::string<__gnu_cxx::__normal_iterator<char*,std::string>>
          (string *this,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  
  pcVar1 = _S_construct<__gnu_cxx::__normal_iterator<char*,std::string>>(param_2,param_3,param_4);
  *(char **)this = pcVar1;
  return;
}

