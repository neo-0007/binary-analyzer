
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006274c0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  *param_1 = 0;
                    /* try { // try from 006274d2 to 006274d6 has its CatchHandler @ 0062758a */
  FUN_00627480();
  piVar3 = DAT_00943a30;
  *param_1 = DAT_00943a30;
  if (piVar3 != DAT_00943a38) {
    if (DAT_00945068 == '\0') {
      iVar1 = FUN_006c3010(&DAT_00945068);
      if (iVar1 != 0) {
        _DAT_009450a0 = 0;
        _DAT_00945080 = (undefined1  [16])0x0;
        _DAT_00945090 = (undefined1  [16])0x0;
        FUN_006c3120(&DAT_00945068);
      }
    }
    iVar1 = FUN_0070a340(&DAT_00945080);
    piVar3 = DAT_00943a30;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004021c3();
    }
    if (DAT_0093ea10 == '\0') {
      LOCK();
      *DAT_00943a30 = *DAT_00943a30 + 1;
      UNLOCK();
      piVar3 = DAT_00943a30;
    }
    else {
      *DAT_00943a30 = *DAT_00943a30 + 1;
    }
    *param_1 = piVar3;
    iVar1 = FUN_0070abb0(&DAT_00945080);
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)FUN_006231b0(8);
      *puVar2 = &PTR_FUN_00933a00;
                    /* WARNING: Subroutine does not return */
      FUN_00624060(puVar2,&PTR_PTR_009339b0,FUN_00622f20);
    }
  }
  return;
}

