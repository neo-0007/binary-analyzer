
void FUN_0066b630(undefined8 *param_1)

{
  param_1[0x20] = &PTR_FUN_00936a08;
  *param_1 = &PTR_FUN_009369e0;
  param_1[2] = &PTR_FUN_009368e8;
                    /* try { // try from 0066b664 to 0066b668 has its CatchHandler @ 0066b6c4 */
  FUN_006692f0();
  thunk_FUN_006c3ec0(param_1 + 0xf);
  param_1[2] = &PTR_FUN_009388a8;
  FUN_00625980(param_1 + 9);
  param_1[1] = 0;
  *param_1 = &DAT_00936970;
  param_1[0x20] = &PTR_FUN_009370d8;
  FUN_00670330(param_1 + 0x20);
  thunk_FUN_007104f0(param_1);
  return;
}

