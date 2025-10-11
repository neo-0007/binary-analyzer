
void _IO_wdefault_finish(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xa0);
  if ((*(void **)(lVar2 + 0x30) != (void *)0x0) && ((*(byte *)(param_1 + 0x74) & 8) == 0)) {
    free(*(void **)(lVar2 + 0x30));
    lVar2 = *(long *)(param_1 + 0xa0);
    *(undefined1 (*) [16])(lVar2 + 0x30) = (undefined1  [16])0x0;
  }
  for (puVar1 = *(undefined8 **)(param_1 + 0x60); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    puVar1[1] = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    free(*(void **)(lVar2 + 0x40));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  _IO_un_link(param_1);
  return;
}

