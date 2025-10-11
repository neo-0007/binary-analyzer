
undefined8 FUN_004d88f0(long param_1,long param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)(param_1 + 0xa0) + 0x38);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  FUN_0051a270(*(undefined8 *)(param_1 + 0xa8));
  pcVar1 = *(code **)(param_2 + 0x30);
  *(long *)(param_1 + 0xa0) = param_2;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  return 1;
}

