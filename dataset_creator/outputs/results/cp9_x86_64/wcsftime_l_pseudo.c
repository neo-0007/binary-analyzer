
size_t wcsftime_l(wchar_t *__s,size_t __maxsize,wchar_t *__format,tm *__tp,__locale_t __loc)

{
  long lVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = __strftime_internal();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

