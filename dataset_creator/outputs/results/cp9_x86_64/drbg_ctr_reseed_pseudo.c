
undefined1  [16]
drbg_ctr_reseed(long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if (param_2 != 0) {
    lVar2 = *(long *)(param_1 + 0xf8);
    uVar4 = 1;
    pbVar6 = (byte *)(lVar2 + 99);
    do {
      bVar1 = *pbVar6;
      pbVar7 = pbVar6 + -1;
      *pbVar6 = (byte)(uVar4 + bVar1);
      uVar4 = uVar4 + bVar1 >> 8;
      pbVar6 = pbVar7;
    } while ((byte *)(lVar2 + 0x53) != pbVar7);
    iVar5 = ctr_update(param_1,param_2,param_3,param_4,param_5,0);
    return ZEXT116(iVar5 != 0);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_3;
  return auVar3 << 0x40;
}

