
void FUN_00663ba0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_006674c0();
  *param_1 = &PTR_FUN_009367a8;
                    /* try { // try from 00663bd7 to 00663c09 has its CatchHandler @ 00663c47 */
  FUN_006c3d40(param_1 + 0xd,param_2,param_3);
  cVar2 = FUN_006c3d30(param_1 + 0xd);
  if (cVar2 == '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0xf) = param_3;
  param_1[0x14] = param_4;
  FUN_00667af0(param_1);
  param_1[5] = 0;
  *(undefined2 *)((long)param_1 + 0xa9) = 0;
  uVar1 = param_1[0x13];
  param_1[4] = 0;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[6] = 0;
  return;
}

