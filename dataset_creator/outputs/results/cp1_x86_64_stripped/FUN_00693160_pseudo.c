
void FUN_00693160(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1[0xe] = &PTR_FUN_00938688;
  *puVar1 = &PTR_FUN_00938660;
  puVar1[1] = &PTR_FUN_009384a8;
  if ((undefined8 *)puVar1[10] != puVar1 + 0xc) {
    thunk_FUN_007104f0();
  }
  puVar1[1] = &PTR_FUN_00938928;
  FUN_00625980(puVar1 + 8);
  *puVar1 = &DAT_009385f0;
  puVar1[0xe] = &PTR_FUN_009370f8;
  FUN_00670330(puVar1 + 0xe);
  thunk_FUN_007104f0(puVar1);
  return;
}

