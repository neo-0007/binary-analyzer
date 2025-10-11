
void __cxa_end_catch(void)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  
  plVar2 = (long *)__cxa_get_globals_fast();
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    if (1 < *(long *)(lVar1 + 0x50) + 0xb8b1aabcbcd4d500U) {
      *plVar2 = 0;
      _Unwind_DeleteException(lVar1 + 0x50);
      return;
    }
    iVar3 = *(int *)(lVar1 + 0x28);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
      if (iVar3 == 0) {
        *plVar2 = *(long *)(lVar1 + 0x20);
      }
    }
    else {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        *plVar2 = *(long *)(lVar1 + 0x20);
        _Unwind_DeleteException(lVar1 + 0x50);
        return;
      }
      if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
    }
    *(int *)(lVar1 + 0x28) = iVar3;
  }
  return;
}

