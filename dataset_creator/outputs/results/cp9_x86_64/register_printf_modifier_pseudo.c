
undefined4 register_printf_modifier(uint *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint *puVar6;
  long lVar7;
  undefined4 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  
  uVar3 = *param_1;
  puVar6 = param_1;
  if (uVar3 == 0) {
LAB_007b6272:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    return 0xffffffff;
  }
  do {
    if (0xff < uVar3) goto LAB_007b6272;
    uVar3 = puVar6[1];
    puVar6 = puVar6 + 1;
  } while (uVar3 != 0);
  if (next_bit - 0x10U < 8) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x1c;
    return 0xffffffff;
  }
  LOCK();
  bVar9 = lock == 0;
  if (bVar9) {
    lock = 1;
  }
  UNLOCK();
  if (!bVar9) {
    __lll_lock_wait_private(&lock);
  }
  if ((__printf_modifier_table != (void *)0x0) ||
     (__printf_modifier_table = calloc(0xff,8), __printf_modifier_table != (void *)0x0)) {
    pvVar1 = __printf_modifier_table;
    lVar7 = (long)puVar6 - (long)param_1;
    puVar4 = (undefined8 *)malloc(lVar7 + 0x10);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *(undefined8 *)((long)pvVar1 + (ulong)(byte)*param_1 * 8);
      bVar5 = (byte)next_bit;
      next_bit = next_bit + 1;
      *(int *)(puVar4 + 1) = 1 << (bVar5 & 0x1f);
      wmemcpy((wchar_t *)((long)puVar4 + 0xc),(wchar_t *)(param_1 + 1),lVar7 >> 2);
      *(undefined8 **)((long)__printf_modifier_table + (ulong)(byte)*param_1 * 8) = puVar4;
      uVar8 = *(undefined4 *)(puVar4 + 1);
      goto LAB_007b6336;
    }
  }
  uVar8 = 0xffffffff;
LAB_007b6336:
  iVar2 = lock;
  LOCK();
  lock = 0;
  UNLOCK();
  if (1 < iVar2) {
    __lll_lock_wake_private(&lock);
  }
  return uVar8;
}

