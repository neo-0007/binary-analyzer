
undefined8 FUN_0050f410(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_004b8260(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40));
  if (lVar1 != 0) {
    lVar1 = FUN_004b8260(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_2 + 0x60));
    if (lVar1 != 0) {
      lVar1 = FUN_004b8260(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0x68));
      if (lVar1 != 0) {
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
        return 1;
      }
    }
  }
  return 0;
}

