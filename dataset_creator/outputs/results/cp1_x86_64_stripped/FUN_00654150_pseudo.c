
long * FUN_00654150(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined1 *local_68;
  long local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  local_68 = local_58;
                    /* try { // try from 006541b3 to 006541b7 has its CatchHandler @ 0065436d */
  FUN_006b8500(&local_68,param_3,param_4);
  puVar6 = local_68;
  uVar7 = param_4 - param_3;
  puVar1 = local_68 + local_60 * 4;
  uVar8 = (long)uVar7 >> 1;
  if (0x3ffffffffffffffc < uVar7) {
                    /* try { // try from 00654376 to 0065437a has its CatchHandler @ 00654364 */
    uVar3 = FUN_00403cf5();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00654294 with catch @ 0065437b
                        */
    FUN_006c2e40(uVar3);
    thunk_FUN_007104f0(uVar7);
LAB_0065435f:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0065435f to 00654363 has its CatchHandler @ 006543c1 */
    FUN_006240b0();
  }
                    /* try { // try from 006541ef to 006541f3 has its CatchHandler @ 00654364 */
  uVar3 = thunk_FUN_006c31f0(uVar8 * 4);
  do {
    uVar7 = FUN_006c54c0(param_2,uVar3,puVar6,uVar8);
    if (uVar8 <= uVar7) {
      uVar8 = uVar7 + 1;
      thunk_FUN_007104f0(uVar3);
      if (0x1ffffffffffffffe < uVar8) {
                    /* try { // try from 00654355 to 00654359 has its CatchHandler @ 0065434c */
        FUN_00403cf5();
        FUN_006c2e40();
        goto LAB_0065435f;
      }
                    /* try { // try from 0065425a to 0065425e has its CatchHandler @ 0065434c */
      uVar3 = thunk_FUN_006c31f0(uVar8 * 4);
      uVar7 = FUN_006c54c0(param_2,uVar3,puVar6,uVar8);
    }
    if (0xfffffffffffffffU - param_1[1] < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00403998("basic_string::append");
    }
                    /* try { // try from 00654294 to 00654346 has its CatchHandler @ 0065437b */
    FUN_006b7280(param_1,uVar3);
    lVar5 = thunk_FUN_007564d0(puVar6);
    if (puVar1 == puVar6 + lVar5 * 4) {
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
    lVar2 = param_1[1];
    puVar6 = puVar6 + lVar5 * 4 + 4;
    plVar4 = (long *)*param_1;
    if (param_1 + 2 == plVar4) {
      uVar7 = 3;
    }
    else {
      uVar7 = param_1[2];
    }
    if (uVar7 < lVar2 + 1U) {
      FUN_006b5810(param_1,lVar2,0,0,1);
      plVar4 = (long *)*param_1;
    }
    *(undefined4 *)((long)plVar4 + lVar2 * 4) = 0;
    param_1[1] = lVar2 + 1U;
    *(undefined4 *)((long)plVar4 + lVar2 * 4 + 4) = 0;
  } while( true );
}

