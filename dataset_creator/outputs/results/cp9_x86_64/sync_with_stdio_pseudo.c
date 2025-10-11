
/* std::ios_base::sync_with_stdio(bool) */

char std::ios_base::sync_with_stdio(bool param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  Init local_41;
  long local_40;
  
  cVar1 = Init::_S_synced_with_stdio;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((!param_1) && (Init::_S_synced_with_stdio != '\0')) {
    Init::Init(&local_41);
    Init::_S_synced_with_stdio = '\0';
    __gnu_internal::buf_cout_sync._0_8_ = &PTR__streambuf_0092b4a8;
    locale::~locale((locale *)(__gnu_internal::buf_cout_sync + 0x38));
    __gnu_internal::buf_cin_sync._0_8_ = &PTR__streambuf_0092b4a8;
    locale::~locale((locale *)(__gnu_internal::buf_cin_sync + 0x38));
    __gnu_internal::buf_cerr_sync._0_8_ = &PTR__streambuf_0092b4a8;
    locale::~locale((locale *)(__gnu_internal::buf_cerr_sync + 0x38));
    __gnu_internal::buf_wcout_sync._0_8_ = &PTR__wstreambuf_0092b528;
    locale::~locale((locale *)(__gnu_internal::buf_wcout_sync + 0x38));
    __gnu_internal::buf_wcin_sync._0_8_ = &PTR__wstreambuf_0092b528;
    locale::~locale((locale *)(__gnu_internal::buf_wcin_sync + 0x38));
    __gnu_internal::buf_wcerr_sync._0_8_ = &PTR__wstreambuf_0092b528;
    locale::~locale((locale *)(__gnu_internal::buf_wcerr_sync + 0x38));
                    /* try { // try from 006239c6 to 00623b0a has its CatchHandler @ 00623b1d */
    __gnu_cxx::stdio_filebuf<char,std::char_traits<char>>::stdio_filebuf
              ((stdio_filebuf<char,std::char_traits<char>> *)__gnu_internal::buf_cout,stdout,0x10,
               0x2000);
    __gnu_cxx::stdio_filebuf<char,std::char_traits<char>>::stdio_filebuf
              ((stdio_filebuf<char,std::char_traits<char>> *)__gnu_internal::buf_cin,stdin,8,0x2000)
    ;
    __gnu_cxx::stdio_filebuf<char,std::char_traits<char>>::stdio_filebuf
              ((stdio_filebuf<char,std::char_traits<char>> *)__gnu_internal::buf_cerr,stderr,0x10,
               0x2000);
    ios::rdbuf((ios *)&DAT_009367a8,(streambuf *)__gnu_internal::buf_cout);
    ios::rdbuf((ios *)&DAT_009368d0,(streambuf *)__gnu_internal::buf_cin);
    ios::rdbuf((ios *)&DAT_00936688,(streambuf *)__gnu_internal::buf_cerr);
    ios::rdbuf((ios *)&DAT_00936568,(streambuf *)__gnu_internal::buf_cerr);
    __gnu_cxx::stdio_filebuf<wchar_t,std::char_traits<wchar_t>>::stdio_filebuf
              ((stdio_filebuf<wchar_t,std::char_traits<wchar_t>> *)__gnu_internal::buf_wcout,stdout,
               0x10,0x2000);
    __gnu_cxx::stdio_filebuf<wchar_t,std::char_traits<wchar_t>>::stdio_filebuf
              ((stdio_filebuf<wchar_t,std::char_traits<wchar_t>> *)__gnu_internal::buf_wcin,stdin,8,
               0x2000);
    __gnu_cxx::stdio_filebuf<wchar_t,std::char_traits<wchar_t>>::stdio_filebuf
              ((stdio_filebuf<wchar_t,std::char_traits<wchar_t>> *)__gnu_internal::buf_wcerr,stderr,
               0x10,0x2000);
    wios::rdbuf((wios *)&DAT_00936328,(wstreambuf *)__gnu_internal::buf_wcout);
    wios::rdbuf((wios *)&DAT_00936450,(wstreambuf *)__gnu_internal::buf_wcin);
    wios::rdbuf((wios *)&DAT_00936208,(wstreambuf *)__gnu_internal::buf_wcerr);
    wios::rdbuf((wios *)&DAT_009360e8,(wstreambuf *)__gnu_internal::buf_wcerr);
    Init::~Init(&local_41);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

