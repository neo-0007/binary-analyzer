
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00626180(long param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined **ppuVar8;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((DAT_00943a40 == '\0') && (iVar3 = FUN_006c3010(&DAT_00943a40), iVar3 != 0)) {
    _DAT_00943a80 = 0;
    _DAT_00943a60 = (undefined1  [16])0x0;
    _DAT_00943a70 = (undefined1  [16])0x0;
    FUN_006c3120(&DAT_00943a40);
  }
  iVar3 = FUN_0070a340();
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)FUN_006231b0(8);
    *puVar4 = &PTR_FUN_009339d8;
                    /* WARNING: Subroutine does not return */
    FUN_00624060(puVar4,&PTR_PTR_00933998,FUN_00622f00);
  }
  ppuVar8 = &PTR_DAT_00933c00;
  puVar2 = PTR_DAT_00933c00;
  do {
    lVar5 = param_3;
    if (puVar2 == (undefined *)0x0) {
      param_3 = -1;
LAB_0062621a:
      lVar6 = *(long *)(param_1 + 0x18);
      plVar7 = (long *)(lVar6 + lVar5 * 8);
      if (*plVar7 == 0) {
        if (DAT_0093ea10 == '\0') {
          LOCK();
          *(int *)(param_2 + 1) = (int)param_2[1] + 1;
          UNLOCK();
          lVar6 = *(long *)(param_1 + 0x18);
          plVar7 = (long *)(lVar6 + lVar5 * 8);
        }
        else {
          *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        }
        *plVar7 = (long)param_2;
        if (param_3 != -1) {
          if (DAT_0093ea10 == '\0') {
            LOCK();
            *(int *)(param_2 + 1) = (int)param_2[1] + 1;
            UNLOCK();
            lVar6 = *(long *)(param_1 + 0x18);
          }
          else {
            *(int *)(param_2 + 1) = (int)param_2[1] + 1;
          }
          *(long **)(lVar6 + param_3 * 8) = param_2;
        }
      }
      else if (param_2 != (long *)0x0) {
        if (*(code **)(*param_2 + 8) == FUN_006250a0) {
                    /* try { // try from 00626250 to 00626254 has its CatchHandler @ 0062637e */
          FUN_00625090();
          thunk_FUN_007104f0(param_2);
        }
        else {
                    /* try { // try from 00626348 to 00626349 has its CatchHandler @ 00626372 */
          (**(code **)(*param_2 + 8))(param_2);
        }
      }
      iVar3 = FUN_0070abb0(&DAT_00943a60);
      if (iVar3 == 0) {
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      puVar4 = (undefined8 *)FUN_006231b0(8);
      *puVar4 = &PTR_FUN_00933a00;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004026e7 to 004026eb has its CatchHandler @ 00402704 */
      FUN_00624060(puVar4,&PTR_PTR_009339b0,FUN_00622f20);
    }
    lVar6 = FUN_00625ba0();
    if (lVar6 == param_3) {
      param_3 = FUN_00625ba0(ppuVar8[1]);
      goto LAB_0062621a;
    }
    lVar5 = FUN_00625ba0(ppuVar8[1]);
    if (lVar5 == param_3) {
      lVar5 = FUN_00625ba0(*ppuVar8);
      goto LAB_0062621a;
    }
    puVar2 = ppuVar8[2];
    ppuVar8 = ppuVar8 + 2;
  } while( true );
}

