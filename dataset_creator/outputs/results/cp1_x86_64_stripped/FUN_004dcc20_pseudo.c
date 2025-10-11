
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_004dcc20(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  undefined1 local_188 [64];
  undefined1 local_148 [64];
  undefined1 local_108 [64];
  ulong local_c8 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  byte local_50;
  long local_40;
  
  lVar1 = param_1 + 0x40;
  lVar2 = param_1 + 0x80;
  lVar3 = param_1 + 0xc0;
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_78 = param_2[2];
  uStack_70 = param_2[3];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = param_2[6];
  local_68 = param_2[4];
  uStack_60 = param_2[5];
  bVar4 = *(byte *)(param_2 + 7);
  local_50 = bVar4 & 0x7f;
  uVar12 = FUN_004df310(lVar1,&local_88,1,0);
  uVar16 = (ulong)local_50;
  FUN_005cda50(param_1,lVar1);
  FUN_004df0f0(lVar2,&DAT_007ebc20,param_1);
  FUN_005cd990(lVar3,param_1,0x98a9);
  FUN_004df0f0(lVar3,&DAT_007ebc60,lVar3);
  FUN_004df0f0(lVar3,&DAT_007ebc20,lVar3);
  FUN_005cd6f0(param_1,lVar2,lVar3);
  uVar13 = FUN_004df5e0(lVar3,param_1);
  FUN_005cd6f0(param_1,lVar3,lVar2);
  uVar14 = FUN_004df080(param_1);
  uVar14 = -(ulong)((bVar4 & 0x80) == 0) ^ uVar14;
  FUN_004df0f0(local_c8,&DAT_007ebc60,param_1);
  lVar15 = 0;
  do {
    *(ulong *)(param_1 + lVar15 * 8) =
         local_c8[lVar15] & ~uVar14 | *(ulong *)(param_1 + lVar15 * 8) & uVar14;
    uVar11 = _UNK_007ebc58;
    uVar10 = _DAT_007ebc50;
    uVar9 = _UNK_007ebc48;
    uVar8 = _DAT_007ebc40;
    uVar7 = _UNK_007ebc38;
    uVar6 = _DAT_007ebc30;
    uVar5 = _UNK_007ebc28;
    lVar15 = lVar15 + 1;
  } while (lVar15 != 8);
  *(undefined8 *)(param_1 + 0x80) = _DAT_007ebc20;
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  *(undefined8 *)(param_1 + 0x90) = uVar6;
  *(undefined8 *)(param_1 + 0x98) = uVar7;
  *(undefined8 *)(param_1 + 0xa0) = uVar8;
  *(undefined8 *)(param_1 + 0xa8) = uVar9;
  *(undefined8 *)(param_1 + 0xb0) = uVar10;
  *(undefined8 *)(param_1 + 0xb8) = uVar11;
  FUN_005cda50(local_108,param_1);
  FUN_005cda50(local_188,lVar1);
  FUN_004df1e0(local_c8,local_108,local_188);
  FUN_004df1e0(lVar3,lVar1,param_1);
  FUN_005cda50(local_148,lVar3);
  FUN_004df0f0(local_148,local_148,local_c8);
  FUN_004df0f0(lVar3,local_188,local_108);
  FUN_005cda50(param_1,lVar2);
  FUN_004df1e0(lVar2,param_1,param_1);
  FUN_004df0f0(local_188,lVar2,local_c8);
  FUN_005cd6f0(param_1,local_188,local_148);
  FUN_005cd6f0(lVar2,lVar3,local_188);
  FUN_005cd6f0(lVar1,lVar3,local_c8);
  FUN_005cd6f0(lVar3,local_148,local_c8);
  FUN_004227b0(local_188,0x40);
  FUN_004227b0(local_148,0x40);
  FUN_004227b0(local_108,0x40);
  FUN_004227b0(local_c8,0x40);
  FUN_004227b0(&local_88,0x39);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (long)(~uVar16 & uVar16 - 1) >> 0x3f & uVar12 & uVar13 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

