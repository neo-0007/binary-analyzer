
wint_t towlower_l(wint_t __wc,__locale_t __locale)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 **)
            (__locale->__locales[0] +
            (ulong)(*(int *)(__locale->__locales[0] + 0xd0) + 1) * 8 + 0x40);
  uVar2 = __wc >> ((byte)*puVar1 & 0x1f);
  if (((uVar2 < (uint)puVar1[1]) && (puVar1[uVar2 + 5] != 0)) &&
     (uVar2 = *(uint *)((long)puVar1 +
                       (ulong)(uint)puVar1[uVar2 + 5] +
                       (ulong)(__wc >> ((byte)puVar1[2] & 0x1f) & puVar1[3]) * 4), uVar2 != 0)) {
    return __wc + *(int *)((long)puVar1 + (ulong)uVar2 + (ulong)(__wc & puVar1[4]) * 4);
  }
  return __wc;
}

