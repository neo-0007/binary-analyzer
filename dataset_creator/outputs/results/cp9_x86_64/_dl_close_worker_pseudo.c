
void _dl_close_worker(long param_1,undefined1 param_2)

{
  *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x318) + -1;
  if ((*(ulong *)(param_1 + 0x318) & 0x3ffffffff) == 0x200000000) {
    if (dl_close_state_2 == 0) {
      _dl_close_worker_part_0_isra_0(*(undefined8 *)(param_1 + 0x30),param_2);
      return;
    }
    dl_close_state_2 = 2;
  }
  if (((byte)_dl_debug_mask & 0x40) == 0) {
    return;
  }
  _dl_debug_printf("\nclosing file=%s; direct_opencount=%u\n",*(undefined8 *)(param_1 + 8));
  return;
}

