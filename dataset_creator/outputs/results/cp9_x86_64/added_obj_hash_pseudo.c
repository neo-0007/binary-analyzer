
ulong added_obj_hash(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  
  iVar2 = *param_1;
  lVar5 = (long)iVar2;
  puVar3 = *(undefined8 **)(param_1 + 2);
  if (iVar2 == 2) {
    uVar4 = OPENSSL_LH_strhash(puVar3[1]);
    uVar6 = (long)*param_1 << 0x1e | (ulong)(uVar4 & 0x3fffffff);
  }
  else if (iVar2 < 3) {
    if (iVar2 == 0) {
      iVar2 = *(int *)((long)puVar3 + 0x14);
      pbVar8 = (byte *)puVar3[3];
      uVar4 = iVar2 << 0x14;
      if (0 < iVar2) {
        uVar6 = 0;
        do {
          bVar1 = *pbVar8;
          uVar7 = (int)uVar6 + 3;
          pbVar8 = pbVar8 + 1;
          uVar4 = uVar4 ^ (uint)bVar1 << ((char)uVar6 + (char)(uVar6 / 0x18) * -0x18 & 0x1fU);
          uVar6 = (ulong)uVar7;
        } while (iVar2 * 3 != uVar7);
        return lVar5 << 0x1e | (ulong)(uVar4 & 0x3fffffff);
      }
    }
    else {
      if (iVar2 != 1) {
        return 0;
      }
      uVar4 = OPENSSL_LH_strhash(*puVar3);
      lVar5 = (long)*param_1;
    }
    uVar6 = lVar5 << 0x1e | (ulong)(uVar4 & 0x3fffffff);
  }
  else {
    if (iVar2 != 3) {
      return 0;
    }
    uVar6 = lVar5 << 0x1e | (ulong)(*(uint *)(puVar3 + 2) & 0x3fffffff);
  }
  return uVar6;
}

