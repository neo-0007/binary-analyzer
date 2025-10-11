
undefined8 FUN_005babf0(undefined8 param_1,int *param_2,char *param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  long lVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int local_64;
  long local_60;
  int local_58;
  
  param_2[1] = 2;
  iVar2 = FUN_004abaa0(param_1,param_3,param_4);
  if (iVar2 < 1) {
    lVar7 = 0;
  }
  else {
    bVar1 = true;
    local_58 = 0;
    local_64 = 0;
    lVar7 = 0;
    do {
      local_60 = (long)iVar2;
      pcVar8 = param_3 + local_60 + -1;
      cVar6 = *pcVar8;
      if (cVar6 == '\n') {
        *pcVar8 = '\0';
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) break;
        pcVar8 = param_3 + local_60 + -2;
        cVar6 = *pcVar8;
        local_60 = local_60 + -1;
      }
      if (cVar6 == '\r') {
        *pcVar8 = '\0';
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) break;
        local_60 = (long)iVar2;
        cVar6 = param_3[local_60 + -1];
      }
      iVar11 = 0;
      pcVar8 = param_3;
      do {
        iVar3 = FUN_005466b0((int)*pcVar8,0x10);
        if (iVar3 == 0) goto LAB_005bacb2;
        iVar11 = iVar11 + 1;
        pcVar8 = pcVar8 + 1;
      } while (iVar11 < iVar2);
      pcVar8 = param_3 + local_60;
      iVar11 = iVar2;
LAB_005bacb2:
      *pcVar8 = '\0';
      if (iVar11 < 2) break;
      pcVar8 = param_3;
      if (((bVar1) && (*param_3 == '0')) && (param_3[1] == '0')) {
        pcVar8 = param_3 + 2;
        iVar11 = iVar11 + -2;
      }
      uVar5 = iVar11 - (uint)(cVar6 == '\\');
      if ((uVar5 & 1) != 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/asn1/f_int.c",0x67,"a2i_ASN1_INTEGER");
        FUN_0051f8f0(0xd,0x91,0);
        FUN_0041ad60(lVar7,"../crypto/asn1/f_int.c",0x68);
        return 0;
      }
      iVar2 = (int)uVar5 >> 1;
      iVar11 = local_64 + iVar2;
      lVar4 = lVar7;
      if (local_58 < iVar11) {
        lVar4 = FUN_0041af40(lVar7,(long)local_58,(long)(iVar11 + iVar2),"../crypto/asn1/f_int.c",
                             0x6d);
        local_58 = iVar11 + iVar2;
        if (lVar4 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/asn1/f_int.c",0x6f,"a2i_ASN1_INTEGER");
          FUN_0051f8f0(0xd,0xc0100,0);
          FUN_0041ad60(lVar7,"../crypto/asn1/f_int.c",0x70);
          return 0;
        }
      }
      lVar7 = lVar4;
      if (iVar2 != 0) {
        pbVar10 = (byte *)(lVar4 + local_64);
        do {
          iVar3 = FUN_0041c520(*pcVar8);
          if (iVar3 < 0) {
LAB_005bad67:
            FUN_0051f420();
            FUN_0051f540("../crypto/asn1/f_int.c",0x7a,"a2i_ASN1_INTEGER");
            FUN_0051f8f0(0xd,0x8d,0);
            goto LAB_005bad9d;
          }
          *pbVar10 = *pbVar10 << 4 | (byte)iVar3;
          iVar3 = FUN_0041c520(pcVar8[1]);
          if (iVar3 < 0) goto LAB_005bad67;
          pbVar9 = pbVar10 + 1;
          pcVar8 = pcVar8 + 2;
          *pbVar10 = *pbVar10 << 4 | (byte)iVar3;
          pbVar10 = pbVar9;
        } while (pbVar9 != (byte *)((long)local_64 + 1 + (ulong)(iVar2 - 1) + lVar4));
      }
      if (cVar6 != '\\') {
        *(long *)(param_2 + 2) = lVar4;
        *param_2 = iVar11;
        return 1;
      }
      iVar2 = FUN_004abaa0(param_1,param_3,param_4);
      bVar1 = false;
      local_64 = iVar11;
    } while (0 < iVar2);
  }
LAB_005bad9d:
  FUN_0051f420();
  FUN_0051f540("../crypto/asn1/f_int.c",0x8b,"a2i_ASN1_INTEGER");
  FUN_0051f8f0(0xd,0x96,0);
  FUN_0041ad60(lVar7,"../crypto/asn1/f_int.c",0x8c);
  return 0;
}

