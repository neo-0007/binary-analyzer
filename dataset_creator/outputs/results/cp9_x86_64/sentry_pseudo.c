
/* std::wostream::sentry::sentry(std::wostream&) */

void __thiscall std::wostream::sentry::sentry(sentry *this,wostream *param_1)

{
  long lVar1;
  uint uVar2;
  wostream *pwVar3;
  
  lVar1 = *(long *)param_1;
  *(wostream **)(this + 8) = param_1;
  *this = (sentry)0x0;
  pwVar3 = param_1 + *(long *)(lVar1 + -0x18);
  uVar2 = *(uint *)(pwVar3 + 0x20);
  if (*(wostream **)(pwVar3 + 0xd8) != (wostream *)0x0) {
    if (uVar2 != 0) goto LAB_0068cf24;
    flush(*(wostream **)(pwVar3 + 0xd8));
    pwVar3 = param_1 + *(long *)(*(long *)param_1 + -0x18);
  }
  uVar2 = *(uint *)(pwVar3 + 0x20);
  if (uVar2 == 0) {
    *this = (sentry)0x1;
    return;
  }
LAB_0068cf24:
  wios::clear((wios *)pwVar3,uVar2 | 4);
  return;
}

