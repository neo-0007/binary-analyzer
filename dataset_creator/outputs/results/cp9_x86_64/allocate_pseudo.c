
/* (anonymous namespace)::pool::allocate(unsigned long) [clone .constprop.0] */

ulong * (anonymous_namespace)::pool::allocate(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)emergency_pool);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __gnu_cxx::__throw_concurrence_lock_error();
  }
  uVar3 = param_1 + 0x10;
  puVar6 = (ulong *)(emergency_pool + 0x28);
  if (uVar3 < 0x10) {
    uVar3 = 0x10;
  }
  uVar3 = uVar3 + 0xf & 0xfffffffffffffff0;
  puVar5 = (ulong *)emergency_pool._40_8_;
  if (emergency_pool._40_8_ == 0) {
    puVar7 = (ulong *)0x0;
  }
  else {
    do {
      uVar1 = *puVar5;
      puVar7 = (ulong *)puVar5[1];
      if (uVar3 <= uVar1) {
        if (uVar1 - uVar3 < 0x10) {
          *puVar5 = uVar1;
          puVar4 = puVar7;
        }
        else {
          puVar4 = (ulong *)((long)puVar5 + uVar3);
          puVar4[1] = (ulong)puVar7;
          puVar5 = (ulong *)*puVar6;
          *puVar4 = uVar1 - uVar3;
          *puVar5 = uVar3;
        }
        *puVar6 = (ulong)puVar4;
        puVar7 = puVar5 + 2;
        break;
      }
      puVar6 = puVar5 + 1;
      puVar5 = puVar7;
    } while (puVar7 != (ulong *)0x0);
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)emergency_pool);
  if (iVar2 == 0) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __gnu_cxx::__throw_concurrence_unlock_error();
}

