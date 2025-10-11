
void OPENSSL_cleanse(void *ptr,size_t len)

{
  if (len < 0xf) {
    if (len == 0) {
      return;
    }
  }
  else {
    for (; ((ulong)ptr & 7) != 0; ptr = (void *)((long)ptr + 1)) {
      *(undefined1 *)ptr = 0;
      len = len - 1;
    }
    do {
      *(undefined8 *)ptr = 0;
      len = len - 8;
      ptr = (void *)((long)ptr + 8);
    } while ((len & 0xfffffffffffffff8) != 0);
    if (len == 0) {
      return;
    }
  }
  do {
    *(undefined1 *)ptr = 0;
    len = len - 1;
    ptr = (void *)((long)ptr + 1);
  } while (len != 0);
  return;
}

