
undefined8 FUN_004acbc0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(code **)(param_1 + 0x20) = FUN_004ac960;
  return 1;
}

