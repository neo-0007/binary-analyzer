
void FUN_0066b980(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00936c58;
  param_1[2] = &PTR_FUN_00936c80;
  param_1[0x21] = &PTR_FUN_00936ca8;
  param_1[3] = &PTR_FUN_009368e8;
                    /* try { // try from 0066b9bc to 0066b9c0 has its CatchHandler @ 0066ba21 */
  FUN_006692f0();
  thunk_FUN_006c3ec0(param_1 + 0x10);
  param_1[3] = &PTR_FUN_009388a8;
  FUN_00625980(param_1 + 10);
  param_1[1] = 0;
  param_1[2] = &DAT_00936af0;
  *param_1 = &DAT_00936b40;
  param_1[0x21] = &PTR_FUN_009370d8;
  FUN_00670330(param_1 + 0x21);
  return;
}

