
undefined1  [16]
drbg_ctr_instantiate
          (long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  ulong extraout_RDX;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 auVar9 [16];
  
  puVar2 = *(undefined8 **)(param_1 + 0xf8);
  if (param_2 == 0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_3;
    return auVar3 << 0x40;
  }
  *(undefined1 (*) [16])((long)puVar2 + 0x34) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)puVar2 + 0x44) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)puVar2 + 0x54) = (undefined1  [16])0x0;
  iVar5 = EVP_CipherInit_ex((EVP_CIPHER_CTX *)*puVar2,(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                            (uchar *)((long)puVar2 + 0x34),(uchar *)0x0,-1);
  if (iVar5 != 0) {
    uVar6 = 1;
    pbVar7 = (byte *)((long)puVar2 + 99);
    do {
      bVar1 = *pbVar7;
      pbVar8 = pbVar7 + -1;
      *pbVar7 = (byte)(uVar6 + bVar1);
      uVar6 = uVar6 + bVar1 >> 8;
      pbVar7 = pbVar8;
    } while ((byte *)((long)puVar2 + 0x53) != pbVar8);
    iVar5 = ctr_update(param_1,param_2,param_3,param_6,param_7,param_4);
    auVar9._1_7_ = 0;
    auVar9[0] = iVar5 != 0;
    auVar9._8_8_ = param_5;
    return auVar9;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = extraout_RDX;
  return auVar4 << 0x40;
}

