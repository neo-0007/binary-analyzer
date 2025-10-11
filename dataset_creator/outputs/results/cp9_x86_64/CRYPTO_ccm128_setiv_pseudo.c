
undefined8 CRYPTO_ccm128_setiv(byte *param_1,byte *param_2,ulong param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  bVar1 = *param_1;
  uVar3 = 0xe - (bVar1 & 7);
  uVar4 = (ulong)uVar3;
  if (param_3 < uVar4) {
    return 0xffffffff;
  }
  if ((bVar1 & 7) < 3) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else {
    param_1[8] = (byte)((ulong)param_4 >> 0x38);
    param_1[9] = (byte)((ulong)param_4 >> 0x30);
    param_1[10] = (byte)((ulong)param_4 >> 0x28);
    param_1[0xb] = (byte)((ulong)param_4 >> 0x20);
  }
  uVar2 = (uint)param_4;
  *(uint *)(param_1 + 0xc) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  *param_1 = bVar1 & 0xbf;
  if (uVar3 < 8) {
    if ((uVar3 & 4) == 0) {
      if ((uVar3 != 0) && (param_1[1] = *param_2, (uVar3 & 2) != 0)) {
        *(undefined2 *)(param_1 + (uVar4 - 1)) = *(undefined2 *)(param_2 + (uVar4 - 2));
      }
    }
    else {
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)param_2;
      *(undefined4 *)(param_1 + (uVar4 - 3)) = *(undefined4 *)(param_2 + (uVar4 - 4));
    }
  }
  else {
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + (uVar4 - 7)) = *(undefined8 *)(param_2 + (uVar4 - 8));
    uVar3 = uVar3 + (int)(param_1 + (1 - ((ulong)(param_1 + 9) & 0xfffffffffffffff8))) & 0xfffffff8;
    if (7 < uVar3) {
      uVar2 = 0;
      do {
        uVar4 = (ulong)uVar2;
        uVar2 = uVar2 + 8;
        *(undefined8 *)(((ulong)(param_1 + 9) & 0xfffffffffffffff8) + uVar4) =
             *(undefined8 *)
              (param_2 +
              (uVar4 - (long)(param_1 + (1 - ((ulong)(param_1 + 9) & 0xfffffffffffffff8)))));
      } while (uVar2 < uVar3);
      return 0;
    }
  }
  return 0;
}

