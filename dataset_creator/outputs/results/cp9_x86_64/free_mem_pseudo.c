
void free_mem(void)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  long lVar2;
  void *__ptr_00;
  
  if (__printf_modifier_table != (void *)0x0) {
    lVar2 = 0;
    __ptr_00 = __printf_modifier_table;
    do {
      __ptr = *(undefined8 **)((long)__ptr_00 + lVar2);
      while (__ptr != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)*__ptr;
        free(__ptr);
        __ptr = puVar1;
        __ptr_00 = __printf_modifier_table;
      }
      lVar2 = lVar2 + 8;
    } while (lVar2 != 0x7f8);
    free(__ptr_00);
    return;
  }
  return;
}

