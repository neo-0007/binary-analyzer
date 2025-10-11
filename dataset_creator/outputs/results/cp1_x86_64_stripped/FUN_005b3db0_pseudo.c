
undefined4 * FUN_005b3db0(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  byte *pbVar7;
  
  if (param_3 < 1) {
    uVar6 = 0x98;
    puVar5 = (undefined4 *)0x0;
LAB_005b3ecf:
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_bitstr.c",0x89,"ossl_c2i_ASN1_BIT_STRING");
    FUN_0051f8f0(0xd,uVar6,0);
    if (param_1 == (long *)0x0) goto LAB_005b3f03;
  }
  else {
    if (0x7fffffff < param_3) {
      uVar6 = 0x97;
      puVar5 = (undefined4 *)0x0;
      goto LAB_005b3ecf;
    }
    if ((param_1 == (long *)0x0) || (puVar5 = (undefined4 *)*param_1, puVar5 == (undefined4 *)0x0))
    {
      puVar5 = (undefined4 *)FUN_004a7820();
      if (puVar5 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      pbVar7 = (byte *)*param_2;
      bVar3 = *pbVar7;
      if (bVar3 < 8) goto LAB_005b3e08;
      uVar6 = 0xdc;
      goto LAB_005b3ecf;
    }
    pbVar7 = (byte *)*param_2;
    bVar3 = *pbVar7;
    if (bVar3 < 8) {
LAB_005b3e08:
      pbVar7 = pbVar7 + 1;
      lVar1 = param_3 + -1;
      *(ulong *)(puVar5 + 4) = (ulong)(bVar3 | 8) | *(ulong *)(puVar5 + 4) & 0xfffffffffffffff0;
      if (param_3 == 1) {
        lVar4 = 0;
LAB_005b3e83:
        *puVar5 = (int)lVar1;
        FUN_0041ad60(*(undefined8 *)(puVar5 + 2),"../crypto/asn1/a_bitstr.c",0x81);
        puVar5[1] = 3;
        *(long *)(puVar5 + 2) = lVar4;
        if (param_1 != (long *)0x0) {
          *param_1 = (long)puVar5;
        }
        *param_2 = pbVar7;
        return puVar5;
      }
      lVar4 = FUN_0041ad90(lVar1,"../crypto/asn1/a_bitstr.c",0x75);
      if (lVar4 != 0) {
        lVar4 = thunk_FUN_00713a50(lVar4,pbVar7,lVar1);
        pbVar2 = (byte *)(lVar4 + -2 + param_3);
        *pbVar2 = *pbVar2 & (byte)(0xff << (bVar3 & 0x1f));
        pbVar7 = pbVar7 + lVar1;
        goto LAB_005b3e83;
      }
      uVar6 = 0xc0100;
      goto LAB_005b3ecf;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_bitstr.c",0x89,"ossl_c2i_ASN1_BIT_STRING");
    FUN_0051f8f0(0xd,0xdc,0);
  }
  if ((undefined4 *)*param_1 == puVar5) {
    return (undefined4 *)0x0;
  }
LAB_005b3f03:
  thunk_FUN_004a2270(puVar5);
  return (undefined4 *)0x0;
}

