
int FUN_00653940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
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
  FUN_006b8500(&local_88);
  local_68 = local_58;
                    /* try { // try from 0065399d to 006539a1 has its CatchHandler @ 00653a6d */
  FUN_006b8500(&local_68,param_4,param_5);
  puVar1 = local_88 + local_80 * 4;
  puVar2 = local_68 + local_60 * 4;
  puVar5 = local_68;
  puVar6 = local_88;
  do {
    iVar3 = FUN_006c5490(param_1,puVar6,puVar5);
    if (iVar3 != 0) {
LAB_00653a13:
      if (local_68 != local_58) {
        thunk_FUN_007104f0();
      }
      if (local_88 != local_78) {
        thunk_FUN_007104f0();
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return iVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    lVar4 = thunk_FUN_007564d0(puVar6);
    puVar6 = puVar6 + lVar4 * 4;
    lVar4 = thunk_FUN_007564d0(puVar5);
    puVar5 = puVar5 + lVar4 * 4;
    if (puVar1 == puVar6) {
      if (puVar2 == puVar5) goto LAB_00653a13;
      if (puVar1 == puVar6) {
        iVar3 = -1;
        goto LAB_00653a13;
      }
    }
    if (puVar2 == puVar5) {
      iVar3 = 1;
      goto LAB_00653a13;
    }
    puVar6 = puVar6 + 4;
    puVar5 = puVar5 + 4;
  } while( true );
}

