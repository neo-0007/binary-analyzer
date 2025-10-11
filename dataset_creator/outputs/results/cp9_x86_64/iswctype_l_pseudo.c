
int iswctype_l(wint_t __wc,wctype_t __desc,__locale_t __locale)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  uVar2 = 0;
  if ((((__desc != 0) &&
       (uVar3 = __wc >> ((byte)*(undefined4 *)__desc & 0x1f), uVar2 = uVar1,
       uVar3 < *(uint *)(__desc + 4))) &&
      (uVar1 = *(uint *)(__desc + (ulong)(uVar3 + 5) * 4), uVar1 != 0)) &&
     (uVar1 = *(uint *)(__desc + (ulong)(__wc >> ((byte)*(undefined4 *)(__desc + 8) & 0x1f) &
                                        *(uint *)(__desc + 0xc)) * 4 + (ulong)uVar1), uVar1 != 0)) {
    uVar2 = *(uint *)(__desc + (ulong)(__wc >> 5 & *(uint *)(__desc + 0x10)) * 4 + (ulong)uVar1) >>
            ((byte)__wc & 0x1f) & 1;
  }
  return uVar2;
}

