
void FUN_0066cd80(long *param_1,undefined8 *param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = param_1 + 0x21;
  FUN_00670010(plVar2);
  *param_1 = (long)&DAT_00936f20;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((long)param_1 + 0x1ec) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x21] = (long)&DAT_00936f48;
  param_1[1] = 0;
                    /* try { // try from 0066ce0f to 0066ce13 has its CatchHandler @ 0066cf0c */
  FUN_0066fda0(plVar2,0);
  param_1[2] = (long)&DAT_00936ed0;
  param_1[0x21] = (long)&DAT_00936ef8;
                    /* try { // try from 0066ce2f to 0066ce33 has its CatchHandler @ 0066cf06 */
  FUN_0066fda0(plVar2,0);
  plVar1 = param_1 + 3;
  *param_1 = (long)&PTR_FUN_00937038;
  param_1[0x21] = (long)&PTR_FUN_00937088;
  param_1[2] = (long)&PTR_FUN_00937060;
                    /* try { // try from 0066ce5c to 0066ce60 has its CatchHandler @ 0066cebd */
  FUN_006674c0(plVar1);
                    /* try { // try from 0066ce67 to 0066ceaa has its CatchHandler @ 0066ceb4 */
  FUN_0066fda0(plVar2,plVar1);
  lVar3 = FUN_0066caa0(plVar1,*param_2,param_3);
  lVar4 = *(long *)(*param_1 + -0x18) + (long)param_1;
  if (lVar3 != 0) {
    FUN_0066f6e0(lVar4,0);
    return;
  }
  FUN_0066f6e0(lVar4,*(uint *)(lVar4 + 0x20) | 4);
  return;
}

