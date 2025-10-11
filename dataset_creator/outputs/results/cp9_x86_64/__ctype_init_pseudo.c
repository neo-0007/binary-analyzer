
void __ctype_init(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = **(long **)(in_FS_OFFSET + -0xd8);
  *(long *)(in_FS_OFFSET + -0x40) = *(long *)(lVar1 + 0x40) + 0x100;
  *(long *)(in_FS_OFFSET + -0x48) = *(long *)(lVar1 + 0x48) + 0x200;
  *(long *)(in_FS_OFFSET + -0x50) = *(long *)(lVar1 + 0x58) + 0x200;
  return;
}

