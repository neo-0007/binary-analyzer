
/* __gnu_cxx::stdio_sync_filebuf<wchar_t, std::char_traits<wchar_t> >::~stdio_sync_filebuf() */

void __thiscall
__gnu_cxx::stdio_sync_filebuf<wchar_t,std::char_traits<wchar_t>>::~stdio_sync_filebuf
          (stdio_sync_filebuf<wchar_t,std::char_traits<wchar_t>> *this)

{
  *(undefined ***)this = &PTR__wstreambuf_0092b528;
  std::locale::~locale((locale *)(this + 0x38));
  operator_delete(this);
  return;
}

