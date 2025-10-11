
void FUN_0075a270(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar2 = puVar1[3];
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_006d4220(puVar1[2],uVar2);
    FUN_006d4220(*puVar1,puVar1[1]);
    FUN_007104f0(puVar1);
    return;
  }
  return;
}

