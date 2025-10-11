
void _dl_add_to_namespace_list(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)_dl_load_write_lock);
  puVar1 = (&_dl_ns)[param_2 * 0x14];
  if (puVar1 == (undefined *)0x0) {
    (&_dl_ns)[param_2 * 0x14] = param_1;
  }
  else {
    do {
      puVar2 = puVar1;
      puVar1 = *(undefined **)(puVar2 + 0x18);
    } while (*(undefined **)(puVar2 + 0x18) != (undefined *)0x0);
    *(undefined **)(param_1 + 0x20) = puVar2;
    *(undefined **)(puVar2 + 0x18) = param_1;
  }
  (&DAT_00931b88)[param_2 * 0x28] = (&DAT_00931b88)[param_2 * 0x28] + 1;
  *(long *)(param_1 + 0x480) = _dl_load_adds;
  _dl_load_adds = _dl_load_adds + 1;
  pthread_mutex_unlock((pthread_mutex_t *)_dl_load_write_lock);
  return;
}

