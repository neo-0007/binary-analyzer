
wint_t towctrans(wint_t __wc,wctrans_t __desc)

{
  uint uVar1;
  
  if ((((__desc != (wctrans_t)0x0) &&
       (uVar1 = __wc >> ((byte)*__desc & 0x1f), uVar1 < (uint)__desc[1])) &&
      (__desc[uVar1 + 5] != 0)) &&
     (uVar1 = *(uint *)((long)__desc +
                       (ulong)(uint)__desc[uVar1 + 5] +
                       (ulong)(__wc >> ((byte)__desc[2] & 0x1f) & __desc[3]) * 4), uVar1 != 0)) {
    return __wc + *(int *)((long)__desc + (ulong)uVar1 + (ulong)(__wc & __desc[4]) * 4);
  }
  return __wc;
}

