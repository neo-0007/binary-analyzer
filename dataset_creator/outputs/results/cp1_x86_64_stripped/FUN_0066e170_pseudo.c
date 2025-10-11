
void FUN_0066e170(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1[0x20] = &PTR_FUN_00936de8;
  *puVar1 = &PTR_FUN_00936dc0;
  puVar1[2] = &PTR_FUN_00936cc8;
                    /* try { // try from 0066e1ab to 0066e1af has its CatchHandler @ 0066e202 */
  FUN_0066beb0(puVar1 + 2);
  thunk_FUN_006c3ec0(puVar1 + 0xf);
  puVar1[2] = &PTR_FUN_00938928;
  FUN_00625980(puVar1 + 9);
  puVar1[1] = 0;
  *puVar1 = &DAT_00936d50;
  puVar1[0x20] = &PTR_FUN_009370f8;
  FUN_00670330(puVar1 + 0x20);
  return;
}

