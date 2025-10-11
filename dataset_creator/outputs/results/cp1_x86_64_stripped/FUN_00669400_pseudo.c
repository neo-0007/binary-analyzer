
void FUN_00669400(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009368e8;
                    /* try { // try from 00669416 to 0066941a has its CatchHandler @ 0066943c */
  FUN_006692f0();
  thunk_FUN_006c3ec0(param_1 + 0xd);
  *param_1 = &PTR_FUN_009388a8;
  FUN_00625980(param_1 + 7);
  return;
}

