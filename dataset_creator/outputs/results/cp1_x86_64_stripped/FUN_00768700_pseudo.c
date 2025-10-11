
void FUN_00768700(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_007104f0(*puVar1);
    FUN_007104f0(puVar1[3]);
    FUN_007104f0(puVar1[4]);
    FUN_007104f0(puVar1);
    return;
  }
  return;
}

