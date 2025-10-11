
void __netlink_free_handle(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *__ptr;
  long in_FS_OFFSET;
  
  uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  __ptr = *(undefined8 **)(param_1 + 0x10);
  while (__ptr != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*__ptr;
    free(__ptr);
    __ptr = puVar2;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
  return;
}

