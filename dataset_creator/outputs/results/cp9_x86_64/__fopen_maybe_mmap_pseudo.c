
byte * __fopen_maybe_mmap(byte *param_1)

{
  undefined1 *puVar1;
  
  if (((param_1[0x74] & 1) != 0) && ((*param_1 & 8) != 0)) {
    puVar1 = _IO_file_jumps_maybe_mmap;
    if (0 < *(int *)(param_1 + 0xc0)) {
      puVar1 = _IO_wfile_jumps_maybe_mmap;
    }
    *(undefined1 **)(param_1 + 0xd8) = puVar1;
    *(undefined1 **)(*(long *)(param_1 + 0xa0) + 0xe0) = _IO_wfile_jumps_maybe_mmap;
  }
  return param_1;
}

