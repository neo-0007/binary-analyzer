
void FUN_0066e880(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_00937038;
  puVar1[2] = &PTR_FUN_00937060;
  puVar1[0x21] = &PTR_FUN_00937088;
  puVar1[3] = &PTR_FUN_00936cc8;
                    /* try { // try from 0066e8c4 to 0066e8c8 has its CatchHandler @ 0066e932 */
  FUN_0066beb0(puVar1 + 3);
  thunk_FUN_006c3ec0(puVar1 + 0x10);
  puVar1[3] = &PTR_FUN_00938928;
  FUN_00625980(puVar1 + 10);
  puVar1[1] = 0;
  puVar1[2] = &DAT_00936ed0;
  *puVar1 = &DAT_00936f20;
  puVar1[0x21] = &PTR_FUN_009370f8;
  FUN_00670330(puVar1 + 0x21);
  thunk_FUN_007104f0(puVar1);
  return;
}

