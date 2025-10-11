
/* __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >::~stdio_filebuf() */

void __thiscall
__gnu_cxx::stdio_filebuf<char,std::char_traits<char>>::~stdio_filebuf
          (stdio_filebuf<char,std::char_traits<char>> *this)

{
  ~stdio_filebuf(this);
  operator_delete(this);
  return;
}

