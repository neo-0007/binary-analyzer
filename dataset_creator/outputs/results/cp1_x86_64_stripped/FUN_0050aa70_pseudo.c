
bool FUN_0050aa70(long param_1)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  iVar1 = FUN_004b7380(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 4) {
    iVar1 = FUN_004b7380(*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 4) {
      puVar2 = (ulong *)FUN_004b7440(*(undefined8 *)(param_1 + 0x10));
      uVar3 = puVar2[3] ^ 0x18905f76a53755c6 |
              puVar2[2] ^ 0x79fb732b77622510 |
              puVar2[1] ^ 0x75ba95fc5fedb601 | *puVar2 ^ 0x79e730d418a9143c;
      if (-1 < (long)(-uVar3 | uVar3)) {
        puVar2 = (ulong *)FUN_004b7440(*(undefined8 *)(param_1 + 0x18));
        uVar3 = puVar2[3] ^ 0x8571ff1825885d85 |
                puVar2[2] ^ 0xd2e88688dd21f325 |
                puVar2[1] ^ 0x8b4ab8e4ba19e45c | *puVar2 ^ 0xddf25357ce95560a;
        if (-1 < (long)(-uVar3 | uVar3)) {
          lVar4 = FUN_0050a550(*(undefined8 *)(param_1 + 0x20));
          return lVar4 != 0;
        }
      }
    }
  }
  return false;
}

