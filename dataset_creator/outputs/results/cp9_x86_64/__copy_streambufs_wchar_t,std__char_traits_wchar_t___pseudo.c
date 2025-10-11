
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long std::__copy_streambufs<wchar_t, std::char_traits<wchar_t> >(std::wstreambuf*,
   std::wstreambuf*) */

long std::__copy_streambufs<wchar_t,std::char_traits<wchar_t>>
               (wstreambuf *param_1,wstreambuf *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  bool local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = __copy_streambufs_eof<wchar_t,std::char_traits<wchar_t>>(param_1,param_2,&local_11);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

