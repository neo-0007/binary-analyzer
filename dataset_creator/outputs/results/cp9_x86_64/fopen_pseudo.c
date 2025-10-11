
FILE * fopen(char *__filename,char *__modes)

{
  FILE *__ptr;
  long lVar1;
  undefined1 *puVar2;
  
  __ptr = (FILE *)malloc(0x1d8);
  if (__ptr == (FILE *)0x0) {
    __ptr = (FILE *)0x0;
  }
  else {
    __ptr->_lock = &__ptr[1]._IO_read_ptr;
    _IO_no_init(__ptr,0,0,&__ptr[1]._IO_read_base,_IO_wfile_jumps);
    *(undefined1 **)(__ptr + 1) = _IO_file_jumps;
    _IO_new_file_init_internal(__ptr);
    lVar1 = _IO_new_file_fopen(__ptr,__filename,__modes,1);
    if (lVar1 == 0) {
      _IO_un_link(__ptr);
      free(__ptr);
      return (FILE *)0x0;
    }
    if (((__ptr->_flags2 & 1) != 0) && ((__ptr->_flags & 8) != 0)) {
      puVar2 = _IO_file_jumps_maybe_mmap;
      if (0 < __ptr->_mode) {
        puVar2 = _IO_wfile_jumps_maybe_mmap;
      }
      *(undefined1 **)(__ptr + 1) = puVar2;
      *(undefined1 **)((long)__ptr->__pad2 + 0xe0) = _IO_wfile_jumps_maybe_mmap;
    }
  }
  return __ptr;
}

