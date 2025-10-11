
/* std::wostream::sentry::~sentry() */

void __thiscall std::wostream::sentry::~sentry(sentry *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  wios *pwVar5;
  
  plVar1 = *(long **)(this + 8);
  lVar2 = *(long *)(*plVar1 + -0x18);
  if ((*(byte *)((long)plVar1 + lVar2 + 0x19) & 0x20) != 0) {
    cVar3 = uncaught_exception();
    if ((cVar3 == '\0') && (plVar1 = *(long **)((long)plVar1 + lVar2 + 0xe8), plVar1 != (long *)0x0)
       ) {
      iVar4 = (**(code **)(*plVar1 + 0x30))();
      if (iVar4 == -1) {
        pwVar5 = (wios *)((long)*(long **)(this + 8) + *(long *)(**(long **)(this + 8) + -0x18));
        wios::clear(pwVar5,*(uint *)(pwVar5 + 0x20) | 1);
      }
    }
    return;
  }
  return;
}

