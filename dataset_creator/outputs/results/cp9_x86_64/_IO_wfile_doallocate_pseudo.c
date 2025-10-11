
undefined8 _IO_wfile_doallocate(byte *param_1)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    _IO_file_doallocate();
    lVar1 = *(long *)(param_1 + 0x38);
  }
  uVar3 = *(long *)(param_1 + 0x40) - lVar1;
  if ((*param_1 & 1) != 0) {
    uVar3 = (*(long *)(param_1 + 0x40) - lVar1) + 3U >> 2;
  }
  pvVar2 = malloc(uVar3 * 4);
  if (pvVar2 != (void *)0x0) {
    _IO_wsetb(param_1,pvVar2,(void *)((long)pvVar2 + uVar3 * 4),1);
    return 1;
  }
  return 0xffffffff;
}

