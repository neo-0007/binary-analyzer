
void hst_map_free(void)

{
  void *__ptr;
  
  __ptr = DAT_0093dd28;
  if (DAT_0093dd28 != (void *)0xffffffffffffffff) {
    DAT_0093dd28 = (void *)0xffffffffffffffff;
    free(__ptr);
    return;
  }
  return;
}

