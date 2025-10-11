
void tdestroy(void *__root,__free_fn_t __freefct)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (__root != (void *)0x0) {
    puVar1 = (undefined8 *)(*(ulong *)((long)__root + 8) & 0xfffffffffffffffe);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)((long)__root + 0x10);
    }
    else {
      puVar2 = (undefined8 *)(puVar1[1] & 0xfffffffffffffffe);
      if (puVar2 != (undefined8 *)0x0) {
        if ((puVar2[1] & 0xfffffffffffffffe) != 0) {
          tdestroy_recurse();
        }
        if (puVar2[2] != 0) {
          tdestroy_recurse(puVar2[2],__freefct);
        }
        (*__freefct)((void *)*puVar2);
        free(puVar2);
      }
      puVar2 = (undefined8 *)puVar1[2];
      if (puVar2 != (undefined8 *)0x0) {
        if ((puVar2[1] & 0xfffffffffffffffe) != 0) {
          tdestroy_recurse(puVar2[1] & 0xfffffffffffffffe,__freefct);
        }
        if (puVar2[2] != 0) {
          tdestroy_recurse(puVar2[2],__freefct);
        }
        (*__freefct)((void *)*puVar2);
        free(puVar2);
      }
      (*__freefct)((void *)*puVar1);
      free(puVar1);
      puVar1 = *(undefined8 **)((long)__root + 0x10);
    }
    if (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)(puVar1[1] & 0xfffffffffffffffe);
      if (puVar2 != (undefined8 *)0x0) {
        if ((puVar2[1] & 0xfffffffffffffffe) != 0) {
          tdestroy_recurse(puVar2[1] & 0xfffffffffffffffe,__freefct);
        }
        if (puVar2[2] != 0) {
          tdestroy_recurse(puVar2[2],__freefct);
        }
        (*__freefct)((void *)*puVar2);
        free(puVar2);
      }
      if (puVar1[2] != 0) {
        tdestroy_recurse(puVar1[2],__freefct);
      }
      (*__freefct)((void *)*puVar1);
      free(puVar1);
    }
                    /* WARNING: Load size is inaccurate */
    (*__freefct)(*__root);
    free(__root);
    return;
  }
  return;
}

