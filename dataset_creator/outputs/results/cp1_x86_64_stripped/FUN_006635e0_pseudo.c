
void FUN_006635e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00936cc8;
                    /* try { // try from 006635f6 to 006635fa has its CatchHandler @ 0066361c */
  FUN_0066beb0();
  thunk_FUN_006c3ec0(param_1 + 0xd);
  *param_1 = &PTR_FUN_00938928;
  FUN_00625980(param_1 + 7);
  return;
}

