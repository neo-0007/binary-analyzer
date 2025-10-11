
void __nptl_free_stacks(ulong param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  
  plVar4 = DAT_0093de28;
  plVar5 = (long *)DAT_0093de28[1];
  if (DAT_0093de28 != &_dl_stack_cache) {
    do {
      if ((int)plVar4[2] < 1) {
        lVar1 = *plVar4;
        plVar2 = (long *)plVar4[1];
        *(long **)(lVar1 + 8) = plVar2;
        *plVar2 = lVar1;
        _dl_in_flight_stack = 0;
        _dl_stack_cache_actsize = _dl_stack_cache_actsize - plVar4[0x7b];
        _dl_deallocate_tls(plVar4 + -0x58,0);
        iVar3 = munmap((void *)plVar4[0x7a],plVar4[0x7b]);
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (_dl_stack_cache_actsize <= param_1) {
          return;
        }
      }
      bVar6 = plVar5 != &_dl_stack_cache;
      plVar4 = plVar5;
      plVar5 = (long *)plVar5[1];
    } while (bVar6);
  }
  return;
}

