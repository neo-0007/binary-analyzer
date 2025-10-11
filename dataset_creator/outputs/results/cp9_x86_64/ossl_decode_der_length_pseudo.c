
undefined8 ossl_decode_der_length(long *param_1,long *param_2)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    pbVar6 = (byte *)*param_1;
    uVar4 = lVar3 - 1;
    bVar2 = *pbVar6;
    uVar5 = (ulong)bVar2;
    pbVar1 = pbVar6 + 1;
    param_1[1] = uVar4;
    *param_1 = (long)pbVar1;
    if ((char)bVar2 < '\0') {
      if (bVar2 == 0x81) {
        if (uVar4 != 0) {
          uVar5 = (ulong)pbVar6[1];
          uVar4 = lVar3 - 2;
          pbVar6 = pbVar6 + 2;
          if (uVar5 <= uVar4) goto LAB_005385e1;
        }
      }
      else if (bVar2 == 0x82) {
        if (uVar4 < 2) {
          return 0;
        }
        uVar4 = lVar3 - 3;
        uVar5 = (ulong)(ushort)(*(ushort *)(pbVar6 + 1) << 8 | *(ushort *)(pbVar6 + 1) >> 8);
        if (uVar4 < uVar5) {
          return 0;
        }
        pbVar6 = pbVar6 + 3;
LAB_005385e1:
        *param_1 = (long)(pbVar6 + uVar5);
        param_1[1] = uVar4 - uVar5;
        *param_2 = (long)pbVar6;
        param_2[1] = uVar5;
        return 1;
      }
    }
    else if (uVar5 <= uVar4) {
      *param_2 = (long)pbVar1;
      param_2[1] = uVar5;
      *param_1 = (long)(pbVar1 + uVar5);
      param_1[1] = param_1[1] - uVar5;
      return 1;
    }
  }
  return 0;
}

