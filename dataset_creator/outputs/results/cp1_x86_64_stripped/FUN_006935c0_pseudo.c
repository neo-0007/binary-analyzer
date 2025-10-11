
void FUN_006935c0(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1[0xf] = &PTR_FUN_009385c8;
  *puVar1 = &PTR_FUN_009385a0;
  puVar1[2] = &PTR_FUN_009384a8;
  if ((undefined8 *)puVar1[0xb] != puVar1 + 0xd) {
    thunk_FUN_007104f0();
  }
  puVar1[2] = &PTR_FUN_00938928;
  FUN_00625980(puVar1 + 9);
  puVar1[1] = 0;
  *puVar1 = &DAT_00938530;
  puVar1[0xf] = &PTR_FUN_009370f8;
  FUN_00670330(puVar1 + 0xf);
  thunk_FUN_007104f0(puVar1);
  return;
}

