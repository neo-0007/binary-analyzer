
void FUN_005a7b40(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined1 **)(param_1 + 0x40) = &LAB_005a4b00;
  *(code **)(param_1 + 0x78) = FUN_005a2ba0;
  return;
}

