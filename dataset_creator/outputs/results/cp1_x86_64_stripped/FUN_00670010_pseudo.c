
void FUN_00670010(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_00937128;
  puVar1 = param_1 + 8;
  do {
    *puVar1 = 0;
    puVar2 = puVar1 + 2;
    puVar1[1] = 0;
    puVar1 = puVar2;
  } while (param_1 + 0x18 != puVar2);
  param_1[0x19] = param_1 + 8;
  *(undefined4 *)(param_1 + 0x18) = 8;
  FUN_006274c0();
  return;
}

