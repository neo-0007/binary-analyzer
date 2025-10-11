
void __nptl_deallocate_tsd(void)

{
  long lVar1;
  void *__ptr;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long in_FS_OFFSET;
  byte bVar8;
  
  bVar8 = 0;
  if (*(char *)(in_FS_OFFSET + 0x610) == '\0') {
    return;
  }
  lVar7 = 4;
  do {
    *(undefined1 *)(in_FS_OFFSET + 0x610) = 0;
    puVar6 = &DAT_00939988;
    lVar5 = 0;
    do {
      lVar1 = *(long *)(in_FS_OFFSET + lVar5 * 8 + 0x510);
      if (lVar1 != 0) {
        plVar3 = (long *)(lVar1 + 8);
        puVar4 = puVar6;
        do {
          if (((*plVar3 != 0) && (*plVar3 = 0, plVar3[-1] == puVar4[-1])) &&
             ((code *)*puVar4 != (code *)0x0)) {
            (*(code *)*puVar4)();
          }
          plVar3 = plVar3 + 2;
          puVar4 = puVar4 + 2;
        } while (plVar3 != (long *)(lVar1 + 0x208));
      }
      lVar5 = lVar5 + 1;
      puVar6 = puVar6 + 0x40;
    } while (lVar5 != 0x20);
    if (*(char *)(in_FS_OFFSET + 0x610) == '\0') goto LAB_006ffd86;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar7 = *(long *)(in_FS_OFFSET + 0x10);
  *(undefined8 *)(lVar7 + 0x310) = 0;
  *(undefined8 *)(lVar7 + 0x508) = 0;
  puVar6 = (undefined8 *)(lVar7 + 0x318U & 0xfffffffffffffff8);
  uVar2 = (ulong)(((int)lVar7 - (int)puVar6) + 0x510U >> 3);
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + (ulong)bVar8 * -2 + 1;
  }
LAB_006ffd86:
  lVar7 = 1;
  do {
    __ptr = *(void **)(in_FS_OFFSET + lVar7 * 8 + 0x510);
    if (__ptr != (void *)0x0) {
      free(__ptr);
      *(undefined8 *)(in_FS_OFFSET + lVar7 * 8 + 0x510) = 0;
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x20);
  *(undefined1 *)(in_FS_OFFSET + 0x610) = 0;
  return;
}

