
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long std::__copy_streambufs<char, std::char_traits<char> >(std::streambuf*, std::streambuf*) */

long std::__copy_streambufs<char,std::char_traits<char>>(streambuf *param_1,streambuf *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  bool local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = __copy_streambufs_eof<char,std::char_traits<char>>(param_1,param_2,&local_11);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

