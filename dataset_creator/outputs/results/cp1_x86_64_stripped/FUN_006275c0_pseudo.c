
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_006275c0(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined1 *local_58 [2];
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00627480();
  if (DAT_00945068 == '\0') {
    iVar3 = FUN_006c3010(&DAT_00945068);
    if (iVar3 != 0) {
      _DAT_009450a0 = 0;
      _DAT_00945080 = (undefined1  [16])0x0;
      _DAT_00945090 = (undefined1  [16])0x0;
      FUN_006c3120(&DAT_00945068);
    }
  }
  iVar3 = FUN_0070a340();
  uVar2 = DAT_00943a30;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004021c3();
  }
  piVar1 = (int *)*param_2;
  DAT_00943a30 = DAT_00943a38;
  if (piVar1 != DAT_00943a38) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      DAT_00943a30 = (int *)*param_2;
    }
    else {
      *piVar1 = *piVar1 + 1;
      DAT_00943a30 = piVar1;
    }
  }
                    /* try { // try from 00627653 to 00627657 has its CatchHandler @ 00627732 */
  FUN_006251b0(local_58,param_2);
  iVar3 = FUN_006a07e0(local_58,&DAT_008216cc);
  if (iVar3 != 0) {
    FUN_006debc0(6,local_58[0]);
  }
  if (local_58[0] != local_48) {
    thunk_FUN_007104f0();
  }
  iVar3 = FUN_0070abb0(&DAT_00945080);
  if (iVar3 == 0) {
    FUN_006251a0(param_1,uVar2);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  puVar4 = (undefined8 *)FUN_006231b0(8);
  *puVar4 = &PTR_FUN_00933a00;
                    /* WARNING: Subroutine does not return */
  FUN_00624060(puVar4,&PTR_PTR_009339b0,FUN_00622f20);
}

