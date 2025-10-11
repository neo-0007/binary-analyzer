
void FUN_0066b440(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1[0x1f] = &PTR_FUN_00936ac8;
  *puVar1 = &PTR_FUN_00936aa0;
  puVar1[1] = &PTR_FUN_009368e8;
                    /* try { // try from 0066b47b to 0066b47f has its CatchHandler @ 0066b4ca */
  FUN_006692f0(puVar1 + 1);
  thunk_FUN_006c3ec0(puVar1 + 0xe);
  puVar1[1] = &PTR_FUN_009388a8;
  FUN_00625980(puVar1 + 8);
  *puVar1 = &DAT_00936a30;
  puVar1[0x1f] = &PTR_FUN_009370d8;
  FUN_00670330(puVar1 + 0x1f);
  return;
}

