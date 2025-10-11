
void FUN_004c0280(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long in_FS_OFFSET;
  byte bVar13;
  ulong local_2c40 [4];
  ulong local_2c20;
  ulong uStack_2c18;
  ulong local_2c10;
  ulong uStack_2c08;
  ulong local_2c00;
  ulong uStack_2bf8;
  ulong local_2bf0;
  ulong uStack_2be8;
  ulong local_2be0;
  ulong uStack_2bd8;
  ulong local_2bd0;
  ulong uStack_2bc8;
  undefined8 local_2bc0;
  ulong local_2bb8 [4];
  ulong local_2b98;
  ulong uStack_2b90;
  ulong local_2b88;
  ulong uStack_2b80;
  ulong local_2b78;
  ulong uStack_2b70;
  ulong local_2b68;
  ulong uStack_2b60;
  ulong local_2b58;
  ulong uStack_2b50;
  ulong local_2b48;
  ulong uStack_2b40;
  undefined8 local_2b38;
  undefined8 local_2b00 [20];
  undefined1 local_2a60 [160];
  undefined8 local_29c0 [20];
  undefined8 local_2920 [20];
  undefined1 local_2880 [320];
  undefined1 local_2740 [320];
  undefined1 local_2600 [4480];
  undefined1 local_1480 [5176];
  long local_48;
  
  bVar13 = 0;
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  puVar7 = local_2b00;
  for (lVar5 = 0x28; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  thunk_FUN_00713720(local_2880,0,0x2800);
  puVar7 = local_29c0;
  for (lVar5 = 0x28; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + (ulong)bVar13 * -2 + 1;
  }
  local_29c0[0] = 1;
  local_2920[0] = 1;
  FUN_004bf1e0(local_2880,local_29c0,param_5,param_4,param_6);
  FUN_004bf1e0(local_2740,param_2,param_5,param_4,param_6);
  puVar10 = local_2740;
  puVar12 = local_2600;
  do {
    puVar11 = puVar10 + 0x140;
    FUN_004bf1e0(puVar12,puVar10,puVar10,param_4,param_6);
    FUN_004bf1e0(puVar12 + 0x140,puVar12,local_2740,param_4,param_6);
    puVar10 = puVar11;
    puVar12 = puVar12 + 0x280;
  } while (puVar11 != local_1480);
  puVar1 = (ulong *)*param_3;
  local_2c40[0] = *puVar1;
  local_2c40[1] = puVar1[1];
  local_2c40[2] = puVar1[2];
  local_2c40[3] = puVar1[3];
  local_2c20 = puVar1[4];
  uStack_2c18 = puVar1[5];
  local_2c10 = puVar1[6];
  uStack_2c08 = puVar1[7];
  local_2c00 = puVar1[8];
  uStack_2bf8 = puVar1[9];
  local_2bf0 = puVar1[10];
  uStack_2be8 = puVar1[0xb];
  local_2be0 = puVar1[0xc];
  uStack_2bd8 = puVar1[0xd];
  local_2bd0 = puVar1[0xe];
  uStack_2bc8 = puVar1[0xf];
  puVar1 = (ulong *)param_3[1];
  local_2bc0 = 0;
  local_2bb8[0] = *puVar1;
  local_2bb8[1] = puVar1[1];
  local_2bb8[2] = puVar1[2];
  local_2bb8[3] = puVar1[3];
  local_2b98 = puVar1[4];
  uStack_2b90 = puVar1[5];
  local_2b88 = puVar1[6];
  uStack_2b80 = puVar1[7];
  local_2b78 = puVar1[8];
  uStack_2b70 = puVar1[9];
  local_2b68 = puVar1[10];
  uStack_2b60 = puVar1[0xb];
  local_2b58 = puVar1[0xc];
  uStack_2b50 = puVar1[0xd];
  local_2b48 = puVar1[0xe];
  uVar2 = puVar1[0xf];
  local_2b38 = 0;
  uStack_2b40 = uVar2;
  FUN_004bf800(local_2b00,local_2880,uStack_2bc8 >> 0x3c,0);
  FUN_004bf800(local_2a60,local_2880,uVar2 >> 0x3c,1);
  uVar9 = 0x3f7;
  do {
    iVar8 = (int)uVar9 >> 6;
    bVar4 = (byte)uVar9;
    uVar6 = (uint)(local_2c40[iVar8] >> (bVar4 & 0x3f));
    if ((uVar9 & 0x3f) < 0x3c) {
      FUN_004bf800(local_29c0,local_2880,uVar6 & 0x1f,0);
      uVar6 = (uint)(local_2bb8[iVar8] >> (bVar4 & 0x3f));
    }
    else {
      bVar3 = 0x40 - (char)(uVar9 & 0x3f);
      FUN_004bf800(local_29c0,local_2880,
                   (uVar6 ^ (uint)(local_2c40[iVar8 + 1] << (bVar3 & 0x3f))) & 0x1f,0);
      uVar6 = (uint)(local_2bb8[iVar8 + 1] << (bVar3 & 0x3f)) ^
              (uint)(local_2bb8[iVar8] >> (bVar4 & 0x3f));
    }
    uVar9 = uVar9 - 5;
    FUN_004bf800(local_2920,local_2880,uVar6 & 0x1f,1);
    FUN_004bf1e0(local_2b00,local_2b00,local_2b00,param_4,param_6);
    FUN_004bf1e0(local_2b00,local_2b00,local_2b00,param_4,param_6);
    FUN_004bf1e0(local_2b00,local_2b00,local_2b00,param_4,param_6);
    FUN_004bf1e0(local_2b00,local_2b00,local_2b00,param_4,param_6);
    FUN_004bf1e0(local_2b00,local_2b00,local_2b00,param_4,param_6);
    FUN_004bf1e0(local_2b00,local_2b00,local_29c0,param_4,param_6);
  } while (uVar9 != 0xfffffffb);
  puVar7 = local_29c0;
  for (lVar5 = 0x28; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + (ulong)bVar13 * -2 + 1;
  }
  local_29c0[0] = 1;
  local_2920[0] = 1;
  FUN_004bf1e0(param_1,local_2b00,local_29c0,param_4,param_6);
  FUN_004227b0(local_2c40,0x110);
  FUN_004227b0(local_2b00,0x140);
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

