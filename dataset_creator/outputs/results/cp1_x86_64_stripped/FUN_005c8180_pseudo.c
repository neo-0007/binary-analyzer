
void FUN_005c8180(uint *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *param_1;
  uVar3 = param_1[1];
  if (param_2[0x20] == 0) {
    bVar2 = (byte)param_2[0x1f] & 0x1f;
    uVar4 = param_2[0x1e] + uVar3 << bVar2 | param_2[0x1e] + uVar3 >> 0x20 - bVar2;
    uVar5 = ((*(uint *)(&DAT_008177e0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_008173e0 + (ulong)(uVar4 & 0xff) * 4)) +
            *(int *)(&DAT_00816be0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4)) -
            *(int *)(&DAT_00816fe0 + (ulong)(uVar4 >> 0x18) * 4) ^ uVar5;
    uVar4 = param_2[0x1c] - uVar5;
    bVar2 = (byte)param_2[0x1d] & 0x1f;
    uVar4 = uVar4 << bVar2 | uVar4 >> 0x20 - bVar2;
    uVar3 = (*(int *)(&DAT_008173e0 + (ulong)(uVar4 & 0xff) * 4) +
             *(int *)(&DAT_008177e0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00816fe0 + (ulong)(uVar4 >> 0x18) * 4)) -
            *(int *)(&DAT_00816be0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^ uVar3;
    uVar4 = param_2[0x1a] ^ uVar3;
    bVar2 = (byte)param_2[0x1b] & 0x1f;
    uVar4 = uVar4 << bVar2 | uVar4 >> 0x20 - bVar2;
    uVar5 = (*(int *)(&DAT_008177e0 + (ulong)(uVar4 >> 8 & 0xff) * 4) -
            *(int *)(&DAT_008173e0 + (ulong)(uVar4 & 0xff) * 4)) +
            *(int *)(&DAT_00816fe0 + (ulong)(uVar4 >> 0x18) * 4) ^
            uVar5 ^ *(uint *)(&DAT_00816be0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4);
    bVar2 = (byte)param_2[0x19] & 0x1f;
    uVar4 = param_2[0x18] + uVar5 << bVar2 | param_2[0x18] + uVar5 >> 0x20 - bVar2;
    uVar3 = ((*(uint *)(&DAT_008177e0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_008173e0 + (ulong)(uVar4 & 0xff) * 4)) +
            *(int *)(&DAT_00816be0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4)) -
            *(int *)(&DAT_00816fe0 + (ulong)(uVar4 >> 0x18) * 4) ^ uVar3;
  }
  bVar2 = (byte)param_2[0x17] & 0x1f;
  uVar4 = param_2[0x16] - uVar3 << bVar2 | param_2[0x16] - uVar3 >> 0x20 - bVar2;
  uVar5 = (*(int *)(&DAT_008173e0 + (ulong)(uVar4 & 0xff) * 4) +
           *(int *)(&DAT_008177e0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00816fe0 + (ulong)(uVar4 >> 0x18) * 4)) -
          *(int *)(&DAT_00816be0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^ uVar5;
  uVar4 = param_2[0x14] ^ uVar5;
  bVar2 = (byte)param_2[0x15] & 0x1f;
  uVar4 = uVar4 << bVar2 | uVar4 >> 0x20 - bVar2;
  uVar3 = (*(int *)(&DAT_008177e0 + (ulong)(uVar4 >> 8 & 0xff) * 4) -
          *(int *)(&DAT_008173e0 + (ulong)(uVar4 & 0xff) * 4)) +
          *(int *)(&DAT_00816fe0 + (ulong)(uVar4 >> 0x18) * 4) ^
          uVar3 ^ *(uint *)(&DAT_00816be0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4);
  uVar4 = param_2[0x12] + uVar3;
  bVar2 = (byte)param_2[0x13] & 0x1f;
  uVar4 = uVar4 << bVar2 | uVar4 >> 0x20 - bVar2;
  uVar5 = ((*(uint *)(&DAT_008177e0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_008173e0 + (ulong)(uVar4 & 0xff) * 4)) +
          *(int *)(&DAT_00816be0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4)) -
          *(int *)(&DAT_00816fe0 + (ulong)(uVar4 >> 0x18) * 4) ^ uVar5;
  uVar4 = param_2[0x10] - uVar5;
  bVar2 = (byte)param_2[0x11] & 0x1f;
  uVar4 = uVar4 << bVar2 | uVar4 >> 0x20 - bVar2;
  uVar3 = (*(int *)(&DAT_008173e0 + (ulong)(uVar4 & 0xff) * 4) +
           *(int *)(&DAT_008177e0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00816fe0 + (ulong)(uVar4 >> 0x18) * 4)) -
          *(int *)(&DAT_00816be0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^ uVar3;
  uVar4 = param_2[0xe] ^ uVar3;
  bVar2 = (byte)param_2[0xf] & 0x1f;
  uVar4 = uVar4 << bVar2 | uVar4 >> 0x20 - bVar2;
  uVar5 = (*(int *)(&DAT_008177e0 + (ulong)(uVar4 >> 8 & 0xff) * 4) -
          *(int *)(&DAT_008173e0 + (ulong)(uVar4 & 0xff) * 4)) +
          *(int *)(&DAT_00816fe0 + (ulong)(uVar4 >> 0x18) * 4) ^
          uVar5 ^ *(uint *)(&DAT_00816be0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4);
  uVar4 = param_2[0xc] + uVar5;
  bVar2 = (byte)param_2[0xd] & 0x1f;
  uVar4 = uVar4 << bVar2 | uVar4 >> 0x20 - bVar2;
  uVar3 = ((*(uint *)(&DAT_008177e0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_008173e0 + (ulong)(uVar4 & 0xff) * 4)) +
          *(int *)(&DAT_00816be0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4)) -
          *(int *)(&DAT_00816fe0 + (ulong)(uVar4 >> 0x18) * 4) ^ uVar3;
  uVar4 = param_2[10] - uVar3;
  bVar2 = (byte)param_2[0xb] & 0x1f;
  uVar4 = uVar4 << bVar2 | uVar4 >> 0x20 - bVar2;
  uVar5 = (*(int *)(&DAT_008173e0 + (ulong)(uVar4 & 0xff) * 4) +
           *(int *)(&DAT_008177e0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00816fe0 + (ulong)(uVar4 >> 0x18) * 4)) -
          *(int *)(&DAT_00816be0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^ uVar5;
  uVar4 = param_2[8] ^ uVar5;
  bVar2 = (byte)param_2[9] & 0x1f;
  uVar4 = uVar4 << bVar2 | uVar4 >> 0x20 - bVar2;
  uVar3 = (*(int *)(&DAT_008177e0 + (ulong)(uVar4 >> 8 & 0xff) * 4) -
          *(int *)(&DAT_008173e0 + (ulong)(uVar4 & 0xff) * 4)) +
          *(int *)(&DAT_00816fe0 + (ulong)(uVar4 >> 0x18) * 4) ^
          uVar3 ^ *(uint *)(&DAT_00816be0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4);
  uVar4 = param_2[6] + uVar3;
  bVar2 = (byte)param_2[7] & 0x1f;
  uVar4 = uVar4 << bVar2 | uVar4 >> 0x20 - bVar2;
  uVar5 = ((*(uint *)(&DAT_008177e0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_008173e0 + (ulong)(uVar4 & 0xff) * 4)) +
          *(int *)(&DAT_00816be0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4)) -
          *(int *)(&DAT_00816fe0 + (ulong)(uVar4 >> 0x18) * 4) ^ uVar5;
  uVar4 = param_2[4] - uVar5;
  bVar2 = (byte)param_2[5] & 0x1f;
  uVar4 = uVar4 << bVar2 | uVar4 >> 0x20 - bVar2;
  uVar3 = (*(int *)(&DAT_008173e0 + (ulong)(uVar4 & 0xff) * 4) +
           *(int *)(&DAT_008177e0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00816fe0 + (ulong)(uVar4 >> 0x18) * 4)) -
          *(int *)(&DAT_00816be0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^ uVar3;
  uVar4 = param_2[2] ^ uVar3;
  bVar2 = (byte)param_2[3] & 0x1f;
  uVar4 = uVar4 << bVar2 | uVar4 >> 0x20 - bVar2;
  uVar4 = (*(int *)(&DAT_008177e0 + (ulong)(uVar4 >> 8 & 0xff) * 4) -
          *(int *)(&DAT_008173e0 + (ulong)(uVar4 & 0xff) * 4)) +
          *(int *)(&DAT_00816fe0 + (ulong)(uVar4 >> 0x18) * 4) ^
          uVar5 ^ *(uint *)(&DAT_00816be0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4);
  iVar1 = param_2[1];
  uVar5 = *param_2 + uVar4;
  param_1[1] = uVar4;
  bVar2 = (byte)iVar1 & 0x1f;
  uVar5 = uVar5 << bVar2 | uVar5 >> 0x20 - bVar2;
  *param_1 = ((*(uint *)(&DAT_008177e0 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_008173e0 + (ulong)(uVar5 & 0xff) * 4)) +
             *(int *)(&DAT_00816be0 + (ulong)(uVar5 >> 0x10 & 0xff) * 4)) -
             *(int *)(&DAT_00816fe0 + (ulong)(uVar5 >> 0x18) * 4) ^ uVar3;
  return;
}

