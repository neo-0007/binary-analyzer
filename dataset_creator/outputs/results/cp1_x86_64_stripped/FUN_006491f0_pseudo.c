
void FUN_006491f0(undefined8 *param_1,long param_2)

{
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_00935650;
                    /* try { // try from 00649223 to 00649227 has its CatchHandler @ 00649230 */
  FUN_00627c60(param_1,0,0);
  return;
}

