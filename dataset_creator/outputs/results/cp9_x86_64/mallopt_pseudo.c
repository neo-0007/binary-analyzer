
undefined4 mallopt(undefined4 param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  uVar2 = (ulong)param_2;
  if (__malloc_initialized == '\0') {
    ptmalloc_init_part_0();
  }
  LOCK();
  bVar4 = main_arena == 0;
  if (bVar4) {
    main_arena = 1;
  }
  UNLOCK();
  if (!bVar4) {
    __lll_lock_wait_private(&main_arena);
  }
  malloc_consolidate(&main_arena);
  iVar1 = main_arena;
  switch(param_1) {
  case 1:
    uVar3 = 0;
    if ((uVar2 < 0xa1) &&
       (global_max_fast = uVar2 + 8 & 0xfffffffffffffff0, uVar3 = param_1, uVar2 < 8)) {
      global_max_fast = 0x10;
    }
    break;
  case 0xfffffff8:
    uVar3 = 1;
    if (0 < param_2) {
      DAT_00931100 = uVar2;
    }
    break;
  case 0xfffffff9:
    uVar3 = 1;
    if (0 < param_2) {
      DAT_009310f8 = uVar2;
    }
    break;
  case 0xfffffffa:
    perturb_byte = param_2;
    uVar3 = 1;
    break;
  default:
    uVar3 = 1;
    break;
  case 0xfffffffc:
    DAT_00931128 = 1;
    DAT_00931120 = param_2;
    uVar3 = 1;
    break;
  case 0xfffffffd:
    DAT_00931128 = 1;
    DAT_009310f0 = uVar2;
    uVar3 = 1;
    break;
  case 0xfffffffe:
    DAT_00931128 = 1;
    DAT_009310e8 = uVar2;
    uVar3 = 1;
    break;
  case 0xffffffff:
    DAT_00931128 = 1;
    mp_ = uVar2;
    uVar3 = 1;
  }
  LOCK();
  main_arena = 0;
  UNLOCK();
  if (iVar1 < 2) {
    return uVar3;
  }
  __lll_lock_wake_private(&main_arena);
  return uVar3;
}

