
void FUN_004cc5f0(long param_1,undefined8 param_2)

{
  if (DAT_00940fd8 == 0) {
    DAT_00940fd8 = FUN_005cb940();
  }
  (**(code **)(DAT_00940fd8 + 0x10))(param_1);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}

