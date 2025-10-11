
void FUN_0067bb90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_30 [2];
  
  param_1[2] = 0;
  param_1[3] = 0;
  *(uint *)(param_1 + 1) = (uint)(param_4 != 0);
  *param_1 = &PTR_FUN_00937b38;
  local_30[0] = param_2;
  uVar2 = FUN_006256d0();
  iVar1 = thunk_FUN_00712780(param_3,uVar2);
  if (iVar1 != 0) {
    lVar3 = thunk_FUN_007129d0(param_3);
                    /* try { // try from 0067bc1f to 0067bc23 has its CatchHandler @ 0067bc37 */
    uVar2 = thunk_FUN_006c31f0(lVar3 + 1);
    thunk_FUN_00713a50(uVar2,param_3,lVar3 + 1);
  }
  param_1[3] = uVar2;
  uVar2 = FUN_006c4570(local_30);
  param_1[2] = uVar2;
  return;
}

