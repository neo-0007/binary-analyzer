
void FUN_00701c30(long param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 0) {
    if (*(int *)(param_1 + 0xc0) != 0) goto LAB_00701c5d;
    uVar6 = 0xffffffff;
  }
  else {
    if ((*(int *)(param_1 + 0xc0) != 0) || (param_2 == 0)) goto LAB_00701c5d;
    puVar2 = *(undefined8 **)(param_1 + 0xa0);
    *(undefined8 **)(param_1 + 0x98) = puVar2 + 0xd;
    puVar2[0xb] = 0;
    *puVar2 = puVar2[1];
    puVar2[4] = puVar2[3];
    *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x60) = 0;
    FUN_0075a700(&local_48);
    if (local_40 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("fcts.towc_nsteps == 1","iofwide.c",0x50,"_IO_fwide");
    }
    if (local_30 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("fcts.tomb_nsteps == 1","iofwide.c",0x51,"_IO_fwide");
    }
    *(undefined4 *)(puVar2 + 0x11) = 1;
    puVar2[0xd] = local_48;
    puVar2[0x10] = DAT_008291c0;
    lVar3 = *(long *)(param_1 + 0xa0);
    puVar2[0x14] = local_38;
    uVar5 = DAT_008291c8;
    *(undefined4 *)(puVar2 + 0x18) = 1;
    lVar1 = lVar3 + 0x58;
    uVar4 = *(undefined8 *)(lVar3 + 0xe0);
    puVar2[0x12] = lVar1;
    puVar2[0x17] = uVar5;
    puVar2[0x19] = lVar1;
    *(undefined8 *)(param_1 + 0xd8) = uVar4;
    uVar6 = 1;
  }
  *(undefined4 *)(param_1 + 0xc0) = uVar6;
LAB_00701c5d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

