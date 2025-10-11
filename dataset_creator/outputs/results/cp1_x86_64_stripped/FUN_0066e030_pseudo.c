
void FUN_0066e030(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1[0x1f] = &PTR_FUN_00936ea8;
  *puVar1 = &PTR_FUN_00936e80;
  puVar1[1] = &PTR_FUN_00936cc8;
                    /* try { // try from 0066e06b to 0066e06f has its CatchHandler @ 0066e0ba */
  FUN_0066beb0(puVar1 + 1);
  thunk_FUN_006c3ec0(puVar1 + 0xe);
  puVar1[1] = &PTR_FUN_00938928;
  FUN_00625980(puVar1 + 8);
  *puVar1 = &DAT_00936e10;
  puVar1[0x1f] = &PTR_FUN_009370f8;
  FUN_00670330(puVar1 + 0x1f);
  return;
}

