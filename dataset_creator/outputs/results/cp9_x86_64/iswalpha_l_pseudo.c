
int iswalpha_l(wint_t __wc,__locale_t __locale)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if ((__wc & 0xffffff80) != 0) {
    puVar1 = *(undefined4 **)
              (__locale->__locales[0] +
              (ulong)(*(int *)(__locale->__locales[0] + 200) + 2) * 8 + 0x40);
    bVar2 = (byte)*puVar1 & 0x1f;
    uVar3 = __wc >> bVar2;
    uVar4 = 0 >> bVar2;
    if (((uVar3 < (uint)puVar1[1]) && (puVar1[uVar3 + 5] != 0)) &&
       (uVar3 = *(uint *)((long)puVar1 +
                         (ulong)(uint)puVar1[uVar3 + 5] +
                         (ulong)(__wc >> ((byte)puVar1[2] & 0x1f) & puVar1[3]) * 4), uVar3 != 0)) {
      uVar4 = *(uint *)((long)puVar1 + (ulong)uVar3 + (ulong)(__wc >> 5 & puVar1[4]) * 4) >>
              ((byte)__wc & 0x1f) & 1;
    }
    return uVar4;
  }
  return __locale->__ctype_b[__wc] & 0x400;
}

