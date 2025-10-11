
undefined8 FUN_005b3fd0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  
  iVar5 = param_2 + 7;
  if (-1 < param_2) {
    iVar5 = param_2;
  }
  iVar5 = iVar5 >> 3;
  bVar4 = (byte)(1 << (~(byte)param_2 & 7));
  bVar6 = 0;
  if (param_3 != 0) {
    bVar6 = bVar4;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  *(ulong *)(param_1 + 4) = *(ulong *)(param_1 + 4) & 0xfffffffffffffff0;
  if ((*param_1 <= iVar5) || (lVar2 = *(long *)(param_1 + 2), lVar2 == 0)) {
    if (param_3 == 0) {
      return 1;
    }
    iVar1 = iVar5 + 1;
    lVar2 = FUN_0041af40(*(undefined8 *)(param_1 + 2),(long)*param_1,(long)iVar1,
                         "../crypto/asn1/a_bitstr.c",0xa5);
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/a_bitstr.c",0xa7,"ASN1_BIT_STRING_set_bit");
      FUN_0051f8f0(0xd,0xc0100,0);
      return 0;
    }
    iVar3 = iVar1 - *param_1;
    if (0 < iVar3) {
      thunk_FUN_00713720(lVar2 + *param_1,0,(long)iVar3);
    }
    *(long *)(param_1 + 2) = lVar2;
    *param_1 = iVar1;
  }
  *(byte *)(lVar2 + iVar5) = ~bVar4 & *(byte *)(lVar2 + iVar5) | bVar6;
  iVar5 = *param_1;
  if (0 < iVar5) {
    lVar2 = (long)(int)(iVar5 - 1U);
    do {
      if (*(char *)(*(long *)(param_1 + 2) + lVar2) != '\0') {
        return 1;
      }
      *param_1 = (int)lVar2;
      lVar2 = lVar2 + -1;
    } while (((long)iVar5 + -2) - (ulong)(iVar5 - 1U) != lVar2);
  }
  return 1;
}

