
void FUN_00670940(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1[2] = &DAT_00937310;
  *puVar1 = &DAT_00937360;
  puVar1[1] = 0;
  puVar1[3] = &PTR_FUN_009370f8;
  FUN_00670330(puVar1 + 3);
  thunk_FUN_007104f0(puVar1);
  return;
}

