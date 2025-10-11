
byte * __fopen_internal(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  byte *__ptr;
  long lVar1;
  undefined1 *puVar2;
  
  __ptr = (byte *)malloc(0x1d8);
  if (__ptr == (byte *)0x0) {
    __ptr = (byte *)0x0;
  }
  else {
    *(byte **)(__ptr + 0x88) = __ptr + 0xe0;
    _IO_no_init(__ptr,0,0,__ptr + 0xf0,_IO_wfile_jumps);
    *(undefined1 **)(__ptr + 0xd8) = _IO_file_jumps;
    _IO_new_file_init_internal(__ptr);
    lVar1 = _IO_new_file_fopen(__ptr,param_1,param_2,param_3);
    if (lVar1 == 0) {
      _IO_un_link(__ptr);
      free(__ptr);
      return (byte *)0x0;
    }
    if (((__ptr[0x74] & 1) != 0) && ((*__ptr & 8) != 0)) {
      puVar2 = _IO_file_jumps_maybe_mmap;
      if (0 < *(int *)(__ptr + 0xc0)) {
        puVar2 = _IO_wfile_jumps_maybe_mmap;
      }
      *(undefined1 **)(__ptr + 0xd8) = puVar2;
      *(undefined1 **)(*(long *)(__ptr + 0xa0) + 0xe0) = _IO_wfile_jumps_maybe_mmap;
    }
  }
  return __ptr;
}

