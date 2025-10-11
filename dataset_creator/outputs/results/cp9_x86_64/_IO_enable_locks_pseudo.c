
void _IO_enable_locks(void)

{
  undefined *puVar1;
  
  if (stdio_needs_locking == 0) {
    stdio_needs_locking = 1;
    puVar1 = _IO_list_all;
    if (_IO_list_all != (undefined *)0x0) {
      do {
        *(uint *)(puVar1 + 0x74) = *(uint *)(puVar1 + 0x74) | 0x80;
        puVar1 = *(undefined **)(puVar1 + 0x68);
      } while (puVar1 != (undefined *)0x0);
    }
  }
  return;
}

