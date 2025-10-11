
long i2c_ibuf(byte *param_1,long param_2,int param_3,long *param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  
  if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
    uVar6 = 0;
    lVar8 = 1;
    uVar7 = 0;
    param_2 = 0;
  }
  else {
    bVar3 = *param_1;
    lVar8 = param_2;
    if (param_3 == 0) {
      if (bVar3 < 0x80) {
        uVar7 = 0;
        uVar6 = 0;
      }
      else {
        uVar7 = 1;
        uVar6 = 0;
        lVar8 = param_2 + 1;
      }
    }
    else if (bVar3 < 0x81) {
      if (bVar3 == 0x80) {
        if (param_2 == 1) {
          lVar8 = 1;
          uVar7 = 0;
          uVar6 = 0;
        }
        else {
          pbVar5 = param_1 + 1;
          bVar3 = 0;
          do {
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            bVar3 = bVar3 | bVar1;
          } while (param_1 + param_2 != pbVar5);
          uVar6 = (uint)(byte)-(bVar3 != 0);
          uVar4 = (byte)-(bVar3 != 0) & 1;
          uVar7 = (ulong)uVar4;
          lVar8 = (ulong)uVar4 + param_2;
        }
      }
      else {
        uVar6 = 0xffffffff;
        uVar7 = 0;
      }
    }
    else {
      uVar6 = 0xffffffff;
      uVar7 = 1;
      lVar8 = param_2 + 1;
    }
  }
  if ((param_4 != (long *)0x0) && (puVar2 = (undefined1 *)*param_4, puVar2 != (undefined1 *)0x0)) {
    *puVar2 = (char)uVar6;
    if (param_2 != 0) {
      uVar4 = uVar6 & 1;
      do {
        param_2 = param_2 + -1;
        uVar4 = uVar4 + ((param_1[param_2] ^ uVar6) & 0xff);
        puVar2[param_2 + uVar7] = (char)uVar4;
        uVar4 = uVar4 >> 8;
      } while (param_2 != 0);
    }
    *param_4 = *param_4 + lVar8;
  }
  return lVar8;
}

