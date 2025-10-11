
/* __gnu_cxx::stdio_sync_filebuf<wchar_t, std::char_traits<wchar_t>
   >::stdio_sync_filebuf(__gnu_cxx::stdio_sync_filebuf<wchar_t, std::char_traits<wchar_t> >&&) */

void __thiscall
__gnu_cxx::stdio_sync_filebuf<wchar_t,std::char_traits<wchar_t>>::stdio_sync_filebuf
          (stdio_sync_filebuf<wchar_t,std::char_traits<wchar_t>> *this,stdio_sync_filebuf *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  std::wstreambuf::wstreambuf((wstreambuf *)this,(wstreambuf *)param_1);
  *(undefined ***)this = &PTR__stdio_sync_filebuf_00929b28;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(this + 0x40) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(this + 0x48) = uVar1;
  return;
}

