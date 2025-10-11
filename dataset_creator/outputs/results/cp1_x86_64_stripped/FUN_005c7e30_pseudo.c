
void FUN_005c7e30(uint *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *param_2 + param_1[1];
  bVar1 = (byte)param_2[1] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar5 = ((*(uint *)(&DAT_008177e0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_008173e0 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(&DAT_00816be0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4)) -
          *(int *)(&DAT_00816fe0 + (ulong)(uVar2 >> 0x18) * 4) ^ *param_1;
  uVar2 = param_2[2] ^ uVar5;
  bVar1 = (byte)param_2[3] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = (*(int *)(&DAT_008177e0 + (ulong)(uVar2 >> 8 & 0xff) * 4) -
          *(int *)(&DAT_008173e0 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(&DAT_00816fe0 + (ulong)(uVar2 >> 0x18) * 4) ^
          param_1[1] ^ *(uint *)(&DAT_00816be0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4);
  uVar2 = param_2[4] - uVar3;
  bVar1 = (byte)param_2[5] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar5 = (*(int *)(&DAT_008173e0 + (ulong)(uVar2 & 0xff) * 4) +
           *(int *)(&DAT_008177e0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00816fe0 + (ulong)(uVar2 >> 0x18) * 4)) -
          *(int *)(&DAT_00816be0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ uVar5;
  uVar2 = param_2[6] + uVar5;
  bVar1 = (byte)param_2[7] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = ((*(uint *)(&DAT_008177e0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_008173e0 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(&DAT_00816be0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4)) -
          *(int *)(&DAT_00816fe0 + (ulong)(uVar2 >> 0x18) * 4) ^ uVar3;
  uVar2 = param_2[8] ^ uVar3;
  bVar1 = (byte)param_2[9] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar4 = (*(int *)(&DAT_008177e0 + (ulong)(uVar2 >> 8 & 0xff) * 4) -
          *(int *)(&DAT_008173e0 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(&DAT_00816fe0 + (ulong)(uVar2 >> 0x18) * 4) ^
          uVar5 ^ *(uint *)(&DAT_00816be0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4);
  uVar2 = param_2[10] - uVar4;
  bVar1 = (byte)param_2[0xb] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = (*(int *)(&DAT_008173e0 + (ulong)(uVar2 & 0xff) * 4) +
           *(int *)(&DAT_008177e0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00816fe0 + (ulong)(uVar2 >> 0x18) * 4)) -
          *(int *)(&DAT_00816be0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ uVar3;
  uVar2 = param_2[0xc] + uVar3;
  bVar1 = (byte)param_2[0xd] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar4 = ((*(uint *)(&DAT_008177e0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_008173e0 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(&DAT_00816be0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4)) -
          *(int *)(&DAT_00816fe0 + (ulong)(uVar2 >> 0x18) * 4) ^ uVar4;
  uVar2 = param_2[0xe] ^ uVar4;
  bVar1 = (byte)param_2[0xf] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar5 = (*(int *)(&DAT_008177e0 + (ulong)(uVar2 >> 8 & 0xff) * 4) -
          *(int *)(&DAT_008173e0 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(&DAT_00816fe0 + (ulong)(uVar2 >> 0x18) * 4) ^
          uVar3 ^ *(uint *)(&DAT_00816be0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4);
  uVar2 = param_2[0x10] - uVar5;
  bVar1 = (byte)param_2[0x11] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar4 = (*(int *)(&DAT_008173e0 + (ulong)(uVar2 & 0xff) * 4) +
           *(int *)(&DAT_008177e0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00816fe0 + (ulong)(uVar2 >> 0x18) * 4)) -
          *(int *)(&DAT_00816be0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ uVar4;
  uVar2 = param_2[0x12] + uVar4;
  bVar1 = (byte)param_2[0x13] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar5 = ((*(uint *)(&DAT_008177e0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_008173e0 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(&DAT_00816be0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4)) -
          *(int *)(&DAT_00816fe0 + (ulong)(uVar2 >> 0x18) * 4) ^ uVar5;
  uVar2 = param_2[0x14] ^ uVar5;
  bVar1 = (byte)param_2[0x15] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = (*(int *)(&DAT_008177e0 + (ulong)(uVar2 >> 8 & 0xff) * 4) -
          *(int *)(&DAT_008173e0 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(&DAT_00816fe0 + (ulong)(uVar2 >> 0x18) * 4) ^
          uVar4 ^ *(uint *)(&DAT_00816be0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4);
  bVar1 = (byte)param_2[0x17] & 0x1f;
  uVar2 = param_2[0x16] - uVar3 << bVar1 | param_2[0x16] - uVar3 >> 0x20 - bVar1;
  uVar5 = (*(int *)(&DAT_008173e0 + (ulong)(uVar2 & 0xff) * 4) +
           *(int *)(&DAT_008177e0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00816fe0 + (ulong)(uVar2 >> 0x18) * 4)) -
          *(int *)(&DAT_00816be0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ uVar5;
  if (param_2[0x20] == 0) {
    bVar1 = (byte)param_2[0x19] & 0x1f;
    uVar2 = param_2[0x18] + uVar5 << bVar1 | param_2[0x18] + uVar5 >> 0x20 - bVar1;
    uVar3 = ((*(uint *)(&DAT_008177e0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_008173e0 + (ulong)(uVar2 & 0xff) * 4)) +
            *(int *)(&DAT_00816be0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4)) -
            *(int *)(&DAT_00816fe0 + (ulong)(uVar2 >> 0x18) * 4) ^ uVar3;
    uVar2 = param_2[0x1a] ^ uVar3;
    bVar1 = (byte)param_2[0x1b] & 0x1f;
    uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
    uVar5 = (*(int *)(&DAT_008177e0 + (ulong)(uVar2 >> 8 & 0xff) * 4) -
            *(int *)(&DAT_008173e0 + (ulong)(uVar2 & 0xff) * 4)) +
            *(int *)(&DAT_00816fe0 + (ulong)(uVar2 >> 0x18) * 4) ^
            uVar5 ^ *(uint *)(&DAT_00816be0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4);
    uVar2 = param_2[0x1c] - uVar5;
    bVar1 = (byte)param_2[0x1d] & 0x1f;
    uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
    uVar3 = (*(int *)(&DAT_008173e0 + (ulong)(uVar2 & 0xff) * 4) +
             *(int *)(&DAT_008177e0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00816fe0 + (ulong)(uVar2 >> 0x18) * 4)) -
            *(int *)(&DAT_00816be0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ uVar3;
    bVar1 = (byte)param_2[0x1f] & 0x1f;
    uVar2 = param_2[0x1e] + uVar3 << bVar1 | param_2[0x1e] + uVar3 >> 0x20 - bVar1;
    uVar5 = ((*(uint *)(&DAT_008177e0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_008173e0 + (ulong)(uVar2 & 0xff) * 4)) +
            *(int *)(&DAT_00816be0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4)) -
            *(int *)(&DAT_00816fe0 + (ulong)(uVar2 >> 0x18) * 4) ^ uVar5;
  }
  param_1[1] = uVar3;
  *param_1 = uVar5;
  return;
}

