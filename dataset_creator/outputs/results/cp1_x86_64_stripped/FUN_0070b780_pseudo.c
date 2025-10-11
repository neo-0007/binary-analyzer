
void FUN_0070b780(void)

{
  uint *puVar1;
  long in_FS_OFFSET;
  
  if ((*(char *)(*(long *)(in_FS_OFFSET + 0x10) + 0x971) == '\0') &&
     ((*(uint *)(in_FS_OFFSET + 0x308) & 0x38) == 8)) {
    *(undefined8 *)(in_FS_OFFSET + 0x630) = 0xffffffffffffffff;
    LOCK();
    puVar1 = (uint *)(*(long *)(in_FS_OFFSET + 0x10) + 0x308);
    *puVar1 = *puVar1 | 0x10;
    UNLOCK();
    func_0x00000000(*(undefined8 *)(in_FS_OFFSET + 0x300));
    DAT_0093e084 = FUN_00769460(1);
    DAT_0093e088 = FUN_00769490(1);
    return;
  }
  return;
}

