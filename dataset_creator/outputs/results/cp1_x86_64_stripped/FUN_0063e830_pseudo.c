
int FUN_0063e830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  undefined1 *local_88;
  long local_80;
  undefined1 local_78 [16];
  undefined1 *local_68;
  long local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = local_78;
  FUN_006a0e00(&local_88);
  local_68 = local_58;
                    /* try { // try from 0063e88d to 0063e891 has its CatchHandler @ 0063e955 */
  FUN_006a0e00(&local_68,param_4,param_5);
  puVar4 = local_88 + local_80;
  puVar5 = local_68 + local_60;
  puVar3 = local_68;
  puVar6 = local_88;
  do {
    iVar1 = FUN_006c5440(param_1,puVar6,puVar3);
    if (iVar1 != 0) {
LAB_0063e901:
      if (local_68 != local_58) {
        thunk_FUN_007104f0();
      }
      if (local_88 != local_78) {
        thunk_FUN_007104f0();
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return iVar1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    lVar2 = thunk_FUN_007129d0(puVar6);
    puVar6 = puVar6 + lVar2;
    lVar2 = thunk_FUN_007129d0(puVar3);
    puVar3 = puVar3 + lVar2;
    if (puVar4 == puVar6) {
      if (puVar5 == puVar3) goto LAB_0063e901;
      if (puVar4 == puVar6) {
        iVar1 = -1;
        goto LAB_0063e901;
      }
    }
    if (puVar5 == puVar3) {
      iVar1 = 1;
      goto LAB_0063e901;
    }
    puVar6 = puVar6 + 1;
    puVar3 = puVar3 + 1;
  } while( true );
}

