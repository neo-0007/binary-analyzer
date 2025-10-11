
void FUN_006b5e90(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  puVar3 = (undefined4 *)*param_1;
  plVar1 = param_1 + 2;
  if (plVar1 != (long *)puVar3) {
    uVar4 = param_1[1];
    if (uVar4 < 4) {
      if (uVar4 == 0) {
        *(undefined4 *)(param_1 + 2) = *puVar3;
        thunk_FUN_007104f0(puVar3,param_2,uVar4 + 1);
        *param_1 = (long)plVar1;
      }
      else {
        FUN_00756660(plVar1,puVar3);
        thunk_FUN_007104f0(*param_1);
        *param_1 = (long)plVar1;
      }
    }
    else if (uVar4 < (ulong)param_1[2]) {
      uVar2 = uVar4 + 1;
      if (uVar2 >> 0x3d == 0) {
                    /* try { // try from 006b5f02 to 006b5f5f has its CatchHandler @ 006b5f60 */
        lVar5 = FUN_006c31f0(uVar2 * 4);
        lVar6 = *param_1;
        if (uVar2 != 0) {
          FUN_00756660(lVar5,lVar6,uVar2);
          lVar6 = *param_1;
        }
        if (plVar1 != (long *)lVar6) {
          thunk_FUN_007104f0(lVar6);
        }
        *param_1 = lVar5;
        param_1[2] = uVar4;
        return;
      }
      if (uVar2 >> 0x3e != 0) {
        FUN_004037f1();
      }
      auVar7 = FUN_004037bc();
                    /* catch(type#1 @ 00933a40) { ... } // from try @ 006b5f02 with catch @ 006b5f60
                        */
      if (auVar7._8_8_ == 1) {
        FUN_006c2e40(auVar7._0_8_);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006b5f75 to 006b5f79 has its CatchHandler @ 006b5f8c */
        FUN_006240b0();
      }
      FUN_006c2e40(auVar7._0_8_);
      FUN_006c2eb0();
      return;
    }
  }
  return;
}

