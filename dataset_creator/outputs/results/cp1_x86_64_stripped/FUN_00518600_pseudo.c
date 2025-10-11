
void FUN_00518600(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = FUN_00516bf0();
    (**(code **)(lVar1 + 0x80))(*(undefined8 *)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

