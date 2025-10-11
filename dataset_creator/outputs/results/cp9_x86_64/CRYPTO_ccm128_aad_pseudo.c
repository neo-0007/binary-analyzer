
void CRYPTO_ccm128_aad(byte *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  
  if (param_3 != 0) {
    pbVar1 = param_1 + 0x10;
    *param_1 = *param_1 | 0x40;
    pcVar2 = *(code **)(param_1 + 0x28);
    (*pcVar2)(param_1,pbVar1,*(undefined8 *)(param_1 + 0x30));
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    bVar6 = (byte)param_3;
    bVar4 = (byte)(param_3 >> 8);
    if (param_3 < 0xff00) {
      param_1[0x11] = param_1[0x11] ^ bVar6;
      param_1[0x10] = param_1[0x10] ^ bVar4;
      uVar5 = 2;
    }
    else {
      param_1[0x10] = ~param_1[0x10];
      bVar8 = (byte)(param_3 >> 0x10);
      bVar7 = (byte)(param_3 >> 0x18);
      if (param_3 >> 0x20 == 0) {
        param_1[0x11] = param_1[0x11] ^ 0xfe;
        uVar5 = 6;
        param_1[0x12] = param_1[0x12] ^ bVar7;
        param_1[0x13] = param_1[0x13] ^ bVar8;
        param_1[0x14] = param_1[0x14] ^ bVar4;
        param_1[0x15] = param_1[0x15] ^ bVar6;
      }
      else {
        param_1[0x18] = param_1[0x18] ^ bVar4;
        uVar5 = 10;
        param_1[0x16] = param_1[0x16] ^ bVar7;
        param_1[0x17] = param_1[0x17] ^ bVar8;
        param_1[0x12] = (byte)(param_3 >> 0x38) ^ param_1[0x12];
        param_1[0x19] = param_1[0x19] ^ bVar6;
        param_1[0x11] = ~param_1[0x11];
        param_1[0x13] = (byte)(param_3 >> 0x30) ^ param_1[0x13];
        param_1[0x14] = (byte)(param_3 >> 0x28) ^ param_1[0x14];
        param_1[0x15] = (byte)(param_3 >> 0x20) ^ param_1[0x15];
      }
    }
    while( true ) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      for (; (uVar5 < 0x10 && (param_3 != 0)); param_3 = param_3 - 1) {
        param_1[(ulong)uVar5 + 0x10] = param_1[(ulong)uVar5 + 0x10] ^ *param_2;
        param_2 = param_2 + 1;
        uVar5 = uVar5 + 1;
      }
      (*pcVar2)(pbVar1,pbVar1,uVar3);
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      if (param_3 == 0) break;
      uVar5 = 0;
    }
    return;
  }
  return;
}

