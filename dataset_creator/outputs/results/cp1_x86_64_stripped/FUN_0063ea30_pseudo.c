
long * FUN_0063ea30(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long in_FS_OFFSET;
  undefined1 *local_68;
  long local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[1] = 0;
  *param_1 = (long)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = 0;
  local_68 = local_58;
                    /* try { // try from 0063ea90 to 0063ea94 has its CatchHandler @ 0063ec05 */
  FUN_006a0e00(&local_68,param_3,param_4);
  puVar8 = local_68;
  uVar7 = (param_4 - param_3) * 2;
  puVar2 = local_68 + local_60;
                    /* try { // try from 0063eab0 to 0063eab4 has its CatchHandler @ 0063ec57 */
  uVar3 = thunk_FUN_006c31f0(uVar7);
  while( true ) {
    uVar5 = FUN_006c5470(param_2,uVar3,puVar8,uVar7);
    if (uVar7 <= uVar5) {
      uVar7 = uVar5 + 1;
      thunk_FUN_007104f0(uVar3);
                    /* try { // try from 0063eb00 to 0063eb04 has its CatchHandler @ 0063ec60 */
      uVar3 = thunk_FUN_006c31f0(uVar7);
      uVar5 = FUN_006c5470(param_2,uVar3,puVar8,uVar7);
    }
    if (0x3fffffffffffffffU - param_1[1] < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00403998("basic_string::append");
    }
                    /* try { // try from 0063eb3a to 0063ebf6 has its CatchHandler @ 0063ebfc */
    FUN_0069fc40(param_1,uVar3);
    lVar6 = thunk_FUN_007129d0(puVar8);
    if (puVar2 == puVar8 + lVar6) break;
    lVar1 = param_1[1];
    puVar8 = puVar8 + lVar6 + 1;
    plVar4 = (long *)*param_1;
    if (param_1 + 2 == plVar4) {
      uVar5 = 0xf;
    }
    else {
      uVar5 = param_1[2];
    }
    if (uVar5 < lVar1 + 1U) {
      FUN_0069e300(param_1,lVar1,0,0,1);
      plVar4 = (long *)*param_1;
    }
    *(undefined1 *)((long)plVar4 + lVar1) = 0;
    param_1[1] = lVar1 + 1U;
    *(undefined1 *)(*param_1 + 1 + lVar1) = 0;
  }
  thunk_FUN_007104f0(uVar3);
  if (local_68 != local_58) {
    thunk_FUN_007104f0();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

