
long _IO_file_setbuf_mmap(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined1 **)(param_1 + 0xd8) = _IO_file_jumps;
  *(undefined1 **)(*(long *)(param_1 + 0xa0) + 0xe0) = _IO_wfile_jumps;
  lVar2 = _IO_default_setbuf();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    return param_1;
  }
  *(undefined1 **)(param_1 + 0xd8) = _IO_file_jumps_mmap;
  *(undefined1 **)(*(long *)(param_1 + 0xa0) + 0xe0) = _IO_wfile_jumps_mmap;
  return 0;
}

