
undefined8 FUN_0050f480(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_004b8260(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
  if (lVar1 != 0) {
    lVar1 = FUN_004b8260(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
    if (lVar1 != 0) {
      lVar1 = FUN_004b8260(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
      if (lVar1 != 0) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        return 1;
      }
    }
  }
  return 0;
}

