
void do_release_all(void *param_1)

{
  if (*(long *)((long)param_1 + 0x10) != 0) {
    __libc_dlclose();
  }
  free(param_1);
  return;
}

