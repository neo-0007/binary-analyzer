
void FUN_00694120(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_00938438;
  puVar1[2] = &PTR_FUN_00938460;
  puVar1[0x10] = &PTR_FUN_00938488;
  puVar1[3] = &PTR_FUN_009380c8;
  if ((undefined8 *)puVar1[0xc] != puVar1 + 0xe) {
    thunk_FUN_007104f0();
  }
  puVar1[3] = &PTR_FUN_009388a8;
  FUN_00625980(puVar1 + 10);
  puVar1[1] = 0;
  puVar1[2] = &DAT_009382d0;
  *puVar1 = &DAT_00938320;
  puVar1[0x10] = &PTR_FUN_009370d8;
  FUN_00670330(puVar1 + 0x10);
  thunk_FUN_007104f0(puVar1);
  return;
}

