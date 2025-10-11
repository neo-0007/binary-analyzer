
void FUN_004cb570(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  
  bVar2 = *param_2;
  bVar1 = (char)bVar2 >> 7;
  if (0 < param_3 + -1) {
    lVar4 = 1;
    do {
      bVar3 = bVar2 * '\x02';
      bVar2 = param_2[lVar4];
      param_1[lVar4 + -1] = bVar2 >> 7 | bVar3;
      lVar4 = lVar4 + 1;
    } while ((ulong)(param_3 - 2) + 2 != lVar4);
    param_1 = param_1 + (param_3 + -1);
  }
  bVar3 = 0x87;
  if (param_3 != 0x10) {
    bVar3 = 0x1b;
  }
  *param_1 = bVar2 * '\x02' ^ bVar1 & bVar3;
  return;
}

