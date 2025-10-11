
void FUN_0066b6e0(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1[0x20] = &PTR_FUN_00936a08;
  *puVar1 = &PTR_FUN_009369e0;
  puVar1[2] = &PTR_FUN_009368e8;
                    /* try { // try from 0066b71c to 0066b720 has its CatchHandler @ 0066b77c */
  FUN_006692f0(puVar1 + 2);
  thunk_FUN_006c3ec0(puVar1 + 0xf);
  puVar1[2] = &PTR_FUN_009388a8;
  FUN_00625980(puVar1 + 9);
  puVar1[1] = 0;
  *puVar1 = &DAT_00936970;
  puVar1[0x20] = &PTR_FUN_009370d8;
  FUN_00670330(puVar1 + 0x20);
  thunk_FUN_007104f0(puVar1);
  return;
}

