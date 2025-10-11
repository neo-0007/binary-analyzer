
void freeres(void)

{
  long *__ptr;
  long lVar1;
  undefined1 (*pauVar2) [16];
  
  pauVar2 = global;
  if (global != (undefined1 (*) [16])0x0) {
    __ptr = *(long **)global[2];
    if (__ptr != (long *)0x0) {
      if (*__ptr == 0) {
                    /* WARNING: Subroutine does not return */
        conf_decrement_part_0();
      }
      lVar1 = *__ptr + -1;
      if (lVar1 == 0) {
        free(__ptr);
        pauVar2 = global;
      }
      else {
        *__ptr = lVar1;
      }
      *(undefined8 *)pauVar2[2] = 0;
    }
    free(*(void **)pauVar2[1]);
    *(undefined8 *)pauVar2[1] = 0;
    *pauVar2 = (undefined1  [16])0x0;
    free(global);
    global = (undefined1 (*) [16])0x0;
  }
  return;
}

