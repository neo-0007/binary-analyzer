
void _dl_close(long param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)_dl_load_lock);
  if (*(char *)(param_1 + 799) == '\0') {
    if (*(int *)(param_1 + 0x318) == 0) {
      pthread_mutex_unlock((pthread_mutex_t *)_dl_load_lock);
                    /* WARNING: Subroutine does not return */
      _dl_signal_error(0,*(undefined8 *)(param_1 + 8),0,"shared object not open");
    }
    *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x318) + -1;
    if ((*(ulong *)(param_1 + 0x318) & 0x3ffffffff) == 0x200000000) {
      if (dl_close_state_2 == 0) {
        _dl_close_worker_part_0_isra_0(*(undefined8 *)(param_1 + 0x30),0);
        goto LAB_0077a851;
      }
      dl_close_state_2 = 2;
    }
    if (((byte)_dl_debug_mask & 0x40) != 0) {
      _dl_debug_printf("\nclosing file=%s; direct_opencount=%u\n",*(undefined8 *)(param_1 + 8));
    }
  }
LAB_0077a851:
  pthread_mutex_unlock((pthread_mutex_t *)_dl_load_lock);
  return;
}

