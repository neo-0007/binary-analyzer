
void FUN_0066e0d0(undefined8 *param_1)

{
  param_1[0x20] = &PTR_FUN_00936de8;
  *param_1 = &PTR_FUN_00936dc0;
  param_1[2] = &PTR_FUN_00936cc8;
                    /* try { // try from 0066e104 to 0066e108 has its CatchHandler @ 0066e15b */
  FUN_0066beb0();
  thunk_FUN_006c3ec0(param_1 + 0xf);
  param_1[2] = &PTR_FUN_00938928;
  FUN_00625980(param_1 + 9);
  param_1[1] = 0;
  *param_1 = &DAT_00936d50;
  param_1[0x20] = &PTR_FUN_009370f8;
  FUN_00670330(param_1 + 0x20);
  return;
}

