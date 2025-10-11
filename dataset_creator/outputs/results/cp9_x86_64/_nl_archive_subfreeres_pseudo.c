
void _nl_archive_subfreeres(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *__ptr;
  long lVar3;
  void *__ptr_00;
  long *__ptr_01;
  
  __ptr_01 = archloaded;
  if (archloaded == (long *)0x0) {
LAB_007c32bc:
    archloaded = (long *)0x0;
    if (archmapped != (undefined8 *)0x0) {
      if ((void **)archmapped != &headmap) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("archmapped == &headmap","loadarchive.c",0x216,"_nl_archive_subfreeres");
      }
      archmapped = (undefined8 *)0x0;
      munmap(headmap,(ulong)DAT_0093929c);
      __ptr = puRam00000000009392a0;
      while (__ptr != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)__ptr[2];
        munmap((void *)*__ptr,(ulong)*(uint *)((long)__ptr + 0xc));
        free(__ptr);
        __ptr = puVar2;
      }
    }
    return;
  }
LAB_007c3268:
  lVar3 = 0;
  plVar1 = (long *)*__ptr_01;
  free((void *)__ptr_01[1]);
  do {
    if (lVar3 != 6) {
      __ptr_00 = (void *)__ptr_01[lVar3 + 2];
      if (__ptr_00 != (void *)0x0) {
        if (*(code **)((long)__ptr_00 + 0x20) != (code *)0x0) {
          (**(code **)((long)__ptr_00 + 0x20))();
          __ptr_00 = (void *)__ptr_01[lVar3 + 2];
        }
        free(__ptr_00);
      }
      if (lVar3 == 0xc) break;
    }
    lVar3 = lVar3 + 1;
  } while( true );
  free(__ptr_01);
  __ptr_01 = plVar1;
  if (plVar1 == (long *)0x0) goto LAB_007c32bc;
  goto LAB_007c3268;
}

