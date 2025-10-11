
void buffer_free(void)

{
  long lVar1;
  
  dealloc_buffers = 1;
  if (freeres_list != 0) {
    do {
      lVar1 = freeres_list;
      free(*(void **)(freeres_list + 0xb0));
      freeres_list = *(long *)(lVar1 + 0xa8);
    } while (freeres_list != 0);
  }
  return;
}

