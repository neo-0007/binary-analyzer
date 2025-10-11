
long FUN_0059d060(undefined8 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  if (param_2 == (char *)0x0) {
    FUN_0051f420();
    lVar3 = 0;
    FUN_0051f540("../crypto/x509/v3_utl.c",0xca,"s2i_ASN1_INTEGER");
    FUN_0051f8f0(0x22,0x6d,0);
    goto LAB_0059d10f;
  }
  local_28 = FUN_004b7690();
  if (local_28 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_utl.c",0xcf,"s2i_ASN1_INTEGER");
    FUN_0051f8f0(0x22,0xc0100,0);
    lVar3 = 0;
    goto LAB_0059d10f;
  }
  cVar1 = *param_2;
  bVar4 = cVar1 == '-';
  if (bVar4) {
    cVar1 = param_2[1];
    param_2 = param_2 + 1;
  }
  if ((cVar1 == '0') && ((param_2[1] & 0xdfU) == 0x58)) {
    param_2 = param_2 + 2;
    iVar2 = FUN_004b2590(&local_28,param_2);
  }
  else {
    iVar2 = FUN_004b27f0(&local_28,param_2);
  }
  if ((iVar2 == 0) || (param_2[iVar2] != '\0')) {
    FUN_004b7fa0(local_28);
    lVar3 = 0;
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_utl.c",0xe7,"s2i_ASN1_INTEGER");
    FUN_0051f8f0(0x22,100,0);
    goto LAB_0059d10f;
  }
  if (bVar4) {
    iVar2 = FUN_004b7ba0();
    if (iVar2 != 0) goto LAB_0059d0f7;
    lVar3 = FUN_0049fa60(local_28,0);
    FUN_004b7fa0(local_28);
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 4) = *(uint *)(lVar3 + 4) | 0x100;
      goto LAB_0059d10f;
    }
  }
  else {
LAB_0059d0f7:
    lVar3 = FUN_0049fa60(local_28,0);
    FUN_004b7fa0(local_28);
    if (lVar3 != 0) goto LAB_0059d10f;
  }
  FUN_0051f420();
  lVar3 = 0;
  FUN_0051f540("../crypto/x509/v3_utl.c",0xf1,"s2i_ASN1_INTEGER");
  FUN_0051f8f0(0x22,0x65,0);
LAB_0059d10f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

