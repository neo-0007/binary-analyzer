
undefined4 * arena_get_retry(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *local_20;
  
  iVar1 = main_arena;
  if (param_1 == &main_arena) {
    LOCK();
    main_arena = 0;
    UNLOCK();
    if (1 < iVar1) {
      __lll_lock_wake_private(&main_arena);
    }
    local_20 = (undefined4 *)get_free_list();
    if (local_20 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)arena_get2_part_0(param_2,&main_arena);
      return puVar2;
    }
  }
  else {
    LOCK();
    iVar1 = *param_1;
    *param_1 = 0;
    UNLOCK();
    if (1 < iVar1) {
      __lll_lock_wake_private();
    }
    LOCK();
    bVar3 = main_arena == 0;
    if (bVar3) {
      main_arena = 1;
    }
    UNLOCK();
    local_20 = &main_arena;
    if (!bVar3) {
      local_20 = &main_arena;
      __lll_lock_wait_private(&main_arena);
    }
  }
  return local_20;
}

