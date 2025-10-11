
/* char* std::string::_S_construct<char const*>(char const*, char const*, std::allocator<char>
   const&, std::forward_iterator_tag) [clone .isra.0] */

char * std::string::_S_construct<char_const*>
                 (undefined1 *param_1,undefined1 *param_2,allocator *param_3)

{
  ulong *puVar1;
  ulong *__dest;
  ulong __n;
  
  if (param_1 == param_2) {
    return &DAT_00938278;
  }
  if (param_1 != (undefined1 *)0x0) {
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
                    /* WARNING: Subroutine does not return */
  __throw_logic_error("basic_string::_S_construct null not valid");
}

