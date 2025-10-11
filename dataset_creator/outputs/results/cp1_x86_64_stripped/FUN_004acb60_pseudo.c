
undefined8 FUN_004acb60(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(code **)(param_1 + 0x10) = FUN_004ac930;
  return 1;
}

