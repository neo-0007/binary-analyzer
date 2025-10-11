
/* __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >::stdio_filebuf(_IO_FILE*,
   std::_Ios_Openmode, unsigned long) */

void __thiscall
__gnu_cxx::stdio_filebuf<wchar_t,std::char_traits<wchar_t>>::stdio_filebuf
          (stdio_filebuf<wchar_t,std::char_traits<wchar_t>> *this,undefined8 param_1,
          undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  
  std::wfilebuf::wfilebuf((wfilebuf *)this);
  *(undefined ***)this = &PTR__stdio_filebuf_00929c28;
                    /* try { // try from 00660a37 to 00660a69 has its CatchHandler @ 00660aa7 */
  std::__basic_file<char>::sys_open((__basic_file<char> *)(this + 0x68),param_1,param_3);
  cVar2 = std::__basic_file<char>::is_open((__basic_file<char> *)(this + 0x68));
  if (cVar2 == '\0') {
    return;
  }
  *(undefined4 *)(this + 0x78) = param_3;
  *(undefined8 *)(this + 0xa0) = param_4;
  std::wfilebuf::_M_allocate_internal_buffer((wfilebuf *)this);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0xa9) = 0;
  uVar1 = *(undefined8 *)(this + 0x98);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}

