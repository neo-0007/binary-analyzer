
void free(void *__ptr)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  
  if (__ptr == (void *)0x0) {
    return;
  }
  uVar1 = (long)__ptr - 0x10;
  uVar3 = *(ulong *)((long)__ptr + -8);
  uVar2 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  if ((uVar3 & 2) == 0) {
    if ((*(long *)(in_FS_OFFSET + -0x30) == 0) && (*(char *)(in_FS_OFFSET + -0x28) == '\0')) {
      tcache_init_part_0();
      uVar3 = *(ulong *)((long)__ptr + -8);
    }
    puVar4 = &main_arena;
    if ((uVar3 & 4) != 0) {
      uVar3 = DAT_00931110 * -4;
      if (DAT_00931110 == 0) {
        uVar3 = 0xfffffffffc000000;
      }
      puVar4 = *(undefined4 **)(uVar3 & uVar1);
    }
    _int_free(puVar4,uVar1,0);
    *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar2;
    return;
  }
  if (((DAT_00931128 == 0) && (DAT_009310f0 < uVar3)) && (uVar3 < 0x2000001)) {
    DAT_009310f0 = uVar3 & 0xfffffffffffffff8;
    mp_ = DAT_009310f0 * 2;
  }
  munmap_chunk(uVar1);
  *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar2;
  return;
}

