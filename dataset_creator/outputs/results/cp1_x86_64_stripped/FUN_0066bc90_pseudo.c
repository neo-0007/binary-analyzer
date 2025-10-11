
void FUN_0066bc90(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_00936c58;
  puVar1[2] = &PTR_FUN_00936c80;
  puVar1[0x21] = &PTR_FUN_00936ca8;
  puVar1[3] = &PTR_FUN_009368e8;
                    /* try { // try from 0066bcd4 to 0066bcd8 has its CatchHandler @ 0066bd42 */
  FUN_006692f0(puVar1 + 3);
  thunk_FUN_006c3ec0(puVar1 + 0x10);
  puVar1[3] = &PTR_FUN_009388a8;
  FUN_00625980(puVar1 + 10);
  puVar1[1] = 0;
  puVar1[2] = &DAT_00936af0;
  *puVar1 = &DAT_00936b40;
  puVar1[0x21] = &PTR_FUN_009370d8;
  FUN_00670330(puVar1 + 0x21);
  thunk_FUN_007104f0(puVar1);
  return;
}

