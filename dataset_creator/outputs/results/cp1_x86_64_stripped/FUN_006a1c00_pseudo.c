
int FUN_006a1c00(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  int *piVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long in_FS_OFFSET;
  undefined *local_68;
  undefined1 local_49;
  undefined *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == param_3) {
    puVar6 = &DAT_009452d8;
  }
  else {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403890("basic_string::_S_construct null not valid");
    }
    puVar6 = (undefined *)FUN_006a1b60(param_2,param_3,&local_49);
  }
  local_48 = puVar6;
  if (param_4 == param_5) {
    local_68 = &DAT_009452d8;
  }
  else {
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403890("basic_string::_S_construct null not valid");
    }
                    /* try { // try from 006a1c72 to 006a1e04 has its CatchHandler @ 006a1e11 */
    local_68 = (undefined *)FUN_006a1b60(param_4,param_5,&local_49);
  }
  puVar2 = puVar6 + *(long *)(puVar6 + -0x18) * 4;
  lVar3 = *(long *)(local_68 + -0x18);
  puVar8 = local_68;
  do {
    iVar4 = FUN_006c5530(param_1,puVar6,puVar8);
    if (iVar4 != 0) {
LAB_006a1cf4:
      if ((undefined8 *)(local_68 + -0x18) != &DAT_009452c0) {
        if (DAT_0093ea10 == '\0') {
          LOCK();
          piVar1 = (int *)(local_68 + -8);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(local_68 + -8);
          *(int *)(local_68 + -8) = iVar5 + -1;
        }
        if (iVar5 < 1) {
          thunk_FUN_007104f0(local_68 + -0x18,&local_49);
        }
      }
      if ((undefined8 *)(local_48 + -0x18) != &DAT_009452c0) {
        if (DAT_0093ea10 == '\0') {
          LOCK();
          piVar1 = (int *)(local_48 + -8);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(local_48 + -8);
          *(int *)(local_48 + -8) = iVar5 + -1;
        }
        if (iVar5 < 1) {
          thunk_FUN_007104f0(local_48 + -0x18,&local_49);
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return iVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    lVar7 = thunk_FUN_007564d0(puVar6);
    puVar6 = puVar6 + lVar7 * 4;
    lVar7 = thunk_FUN_007564d0(puVar8);
    puVar8 = puVar8 + lVar7 * 4;
    if (puVar2 == puVar6) {
      if (local_68 + lVar3 * 4 == puVar8) goto LAB_006a1cf4;
      if (puVar2 == puVar6) {
        iVar4 = -1;
        goto LAB_006a1cf4;
      }
    }
    if (local_68 + lVar3 * 4 == puVar8) {
      iVar4 = 1;
      goto LAB_006a1cf4;
    }
    puVar6 = puVar6 + 4;
    puVar8 = puVar8 + 4;
  } while( true );
}

