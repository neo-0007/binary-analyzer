
/* char* std::string::_S_construct<__gnu_cxx::__normal_iterator<char*, std::string >
   >(__gnu_cxx::__normal_iterator<char*, std::string >, __gnu_cxx::__normal_iterator<char*,
   std::string >, std::allocator<char> const&, std::forward_iterator_tag) */

char * std::string::_S_construct<__gnu_cxx::__normal_iterator<char*,std::string>>
                 (undefined1 *param_1,undefined1 *param_2,allocator *param_3)

{
  ulong *puVar1;
  ulong *__dest;
  ulong __n;
  
  if (param_2 != param_1) {
    __n = (long)param_2 - (long)param_1;
    puVar1 = (ulong *)_Rep::_S_create(__n,0,param_3);
    __dest = puVar1 + 3;
    if (__n == 1) {
      *(undefined1 *)(puVar1 + 3) = *param_1;
    }
    else {
      __dest = (ulong *)memcpy(__dest,param_1,__n);
    }
    if (puVar1 != &_Rep::_S_empty_rep_storage) {
      *(undefined4 *)(puVar1 + 2) = 0;
      *puVar1 = __n;
      *(undefined1 *)((long)puVar1 + __n + 0x18) = 0;
    }
    return (char *)__dest;
  }
  return &DAT_00938278;
}

