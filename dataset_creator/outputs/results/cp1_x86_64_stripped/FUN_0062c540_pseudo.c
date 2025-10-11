
ulong FUN_0062c540(undefined8 *param_1,ulong param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  
  pbVar3 = (byte *)*param_1;
  uVar4 = 0xfffffffe;
  uVar5 = (long)param_1[1] - (long)pbVar3;
  if ((byte *)param_1[1] != pbVar3) {
    bVar1 = *pbVar3;
    if (bVar1 < 0x80) {
      *param_1 = pbVar3 + 1;
      return (ulong)bVar1;
    }
    if (0xc1 < bVar1) {
      if (bVar1 < 0xe0) {
        if (uVar5 == 1) {
          return 0xfffffffe;
        }
        if ((pbVar3[1] & 0xc0) == 0x80) {
          uVar4 = (ulong)((uint)bVar1 * 0x40 + -0x3080 + (uint)pbVar3[1]);
          if (param_2 < uVar4) {
            return uVar4;
          }
          *param_1 = pbVar3 + 2;
          return uVar4;
        }
      }
      else if (bVar1 < 0xf0) {
        if (uVar5 < 3) {
          return 0xfffffffe;
        }
        bVar2 = pbVar3[1];
        if (((bVar2 & 0xc0) == 0x80) &&
           (((bVar1 != 0xe0 || (0x9f < bVar2)) && ((pbVar3[2] & 0xc0) == 0x80)))) {
          uVar4 = (ulong)((uint)bVar2 * 0x40 + (uint)bVar1 * 0x1000 + -0xe2080 + (uint)pbVar3[2]);
          if (param_2 < uVar4) {
            return uVar4;
          }
          *param_1 = pbVar3 + 3;
          return uVar4;
        }
      }
      else if (bVar1 < 0xf5) {
        if (uVar5 < 4) {
          return 0xfffffffe;
        }
        bVar2 = pbVar3[1];
        if (((((bVar2 & 0xc0) == 0x80) && ((bVar1 != 0xf0 || (0x8f < bVar2)))) &&
            ((bVar1 != 0xf4 || (bVar2 < 0x90)))) &&
           (((pbVar3[2] & 0xc0) == 0x80 && ((pbVar3[3] & 0xc0) == 0x80)))) {
          uVar4 = (ulong)((uint)bVar1 * 0x40000 + -0x3c82080 + (uint)pbVar3[3] +
                          (uint)bVar2 * 0x1000 + (uint)pbVar3[2] * 0x40);
          if (param_2 < uVar4) {
            return uVar4;
          }
          *param_1 = pbVar3 + 4;
          return uVar4;
        }
      }
    }
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

