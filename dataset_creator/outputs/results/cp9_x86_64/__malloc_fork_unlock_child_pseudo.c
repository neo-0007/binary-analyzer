
void __malloc_fork_unlock_child(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  
  if (__malloc_initialized != '\0') {
    free_list_lock = 0;
    puVar1 = *(undefined4 **)(in_FS_OFFSET + -0x20);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar1 + 0x220) = 1;
    }
    free_list = (undefined4 *)0x0;
    puVar3 = &main_arena;
    do {
      while (*puVar3 = 0, puVar1 != puVar3) {
        *(undefined8 *)(puVar3 + 0x220) = 0;
        puVar2 = puVar3;
        *(undefined4 **)(puVar3 + 0x21e) = free_list;
        free_list = puVar2;
        puVar3 = *(undefined4 **)(puVar3 + 0x21c);
        if (puVar3 == &main_arena) {
          list_lock = 0;
          return;
        }
      }
      puVar3 = *(undefined4 **)(puVar1 + 0x21c);
    } while (puVar3 != &main_arena);
    list_lock = 0;
  }
  return;
}

