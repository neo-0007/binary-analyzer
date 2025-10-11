
void FUN_0066a1b0(long *param_1,undefined8 *param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = param_1 + 0x21;
  FUN_00670010(plVar2);
  *param_1 = (long)&DAT_00936b40;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  param_1[0x3c] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x21] = (long)&DAT_00936b68;
  param_1[1] = 0;
                    /* try { // try from 0066a237 to 0066a23b has its CatchHandler @ 0066a334 */
  FUN_0066f450(plVar2,0);
  param_1[2] = (long)&DAT_00936af0;
  param_1[0x21] = (long)&DAT_00936b18;
                    /* try { // try from 0066a257 to 0066a25b has its CatchHandler @ 0066a32e */
  FUN_0066f450(plVar2,0);
  plVar1 = param_1 + 3;
  *param_1 = (long)&PTR_FUN_00936c58;
  param_1[0x21] = (long)&PTR_FUN_00936ca8;
  param_1[2] = (long)&PTR_FUN_00936c80;
                    /* try { // try from 0066a284 to 0066a288 has its CatchHandler @ 0066a2e5 */
  FUN_00665720(plVar1);
                    /* try { // try from 0066a28f to 0066a2d2 has its CatchHandler @ 0066a2dc */
  FUN_0066f450(plVar2,plVar1);
  lVar3 = FUN_00669ed0(plVar1,*param_2,param_3);
  lVar4 = *(long *)(*param_1 + -0x18) + (long)param_1;
  if (lVar3 != 0) {
    FUN_0066ec40(lVar4,0);
    return;
  }
  FUN_0066ec40(lVar4,*(uint *)(lVar4 + 0x20) | 4);
  return;
}

