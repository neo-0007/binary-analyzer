
void _nl_postload_ctype(void)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  DAT_00930a48 = *(long *)(_nl_global_locale + 0x40) + 0x100;
  lVar1 = *(long *)(_nl_global_locale + 0x58) + 0x200;
  lVar2 = *(long *)(_nl_global_locale + 0x48) + 0x200;
  DAT_00930a50 = lVar1;
  DAT_00930a58 = lVar2;
  if (*(undefined ***)(in_FS_OFFSET + -0x78) != &_nl_global_locale) {
    return;
  }
  *(long *)(in_FS_OFFSET + -0x40) = DAT_00930a48;
  *(long *)(in_FS_OFFSET + -0x48) = lVar2;
  *(long *)(in_FS_OFFSET + -0x50) = lVar1;
  return;
}

