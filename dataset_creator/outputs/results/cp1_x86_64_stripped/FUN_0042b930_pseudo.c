
undefined8 FUN_0042b930(long param_1,long param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)(param_1 + 0x18) + 0x40);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  FUN_0051a270(*(undefined8 *)(param_1 + 0x20));
  pcVar1 = *(code **)(param_2 + 0x38);
  *(long *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  return 1;
}

