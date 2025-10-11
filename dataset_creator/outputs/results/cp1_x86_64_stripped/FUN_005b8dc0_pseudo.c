
int FUN_005b8dc0(undefined8 param_1,undefined8 *param_2,int *param_3,undefined8 param_4,
                undefined8 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  long in_FS_OFFSET;
  int local_50;
  int local_4c;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  uVar5 = FUN_0040b080(param_5);
  piVar6 = (int *)FUN_00415850(uVar5);
  if (piVar6 == (int *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_verify.c",0x7d,"ASN1_item_verify_ctx");
    iVar3 = -1;
    FUN_0051f8f0(0xd,0xc0102,0);
    goto LAB_005b8f1c;
  }
  if ((param_3[1] == 3) && ((*(byte *)(param_3 + 4) & 7) != 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_verify.c",0x82,"ASN1_item_verify_ctx");
    iVar3 = -1;
    FUN_0051f8f0(0xd,0xdc,0);
    goto LAB_005b8f1c;
  }
  uVar2 = FUN_00423da0(*param_2);
  iVar3 = FUN_00424c50(uVar2,&local_50,&local_4c);
  if (iVar3 == 0) {
    FUN_0051f420();
    uVar5 = 0x88;
LAB_005b9021:
    FUN_0051f540("../crypto/asn1/a_verify.c",uVar5,"ASN1_item_verify_ctx");
    uVar5 = 199;
LAB_005b9037:
    lVar7 = 0;
    iVar3 = -1;
    FUN_0051f8f0(0xd,uVar5,0);
  }
  else if (local_50 == 0) {
    if ((*piVar6 == 0) || (*(long *)(piVar6 + 0x18) != 0)) {
      if (local_4c != 0x390) goto LAB_005b8e57;
      iVar3 = FUN_0040e680(piVar6,"RSA");
      if ((iVar3 == 0) && (iVar3 = FUN_0040e680(piVar6,"RSA-PSS"), iVar3 == 0)) {
        FUN_0051f420();
        uVar5 = 0xa7;
        goto LAB_005b90b1;
      }
      iVar3 = FUN_00569e30(param_5,0,param_2,piVar6);
      if (iVar3 < 1) {
        FUN_0051f420();
        FUN_0051f540("../crypto/asn1/a_verify.c",0xac,"ASN1_item_verify_ctx");
        uVar5 = 0xc0103;
        goto LAB_005b9037;
      }
LAB_005b8eae:
      iVar3 = -1;
    }
    else {
      if ((*(long *)(piVar6 + 2) == 0) ||
         (pcVar1 = *(code **)(*(long *)(piVar6 + 2) + 200), pcVar1 == (code *)0x0)) {
        FUN_0051f420();
        uVar5 = 0x8e;
        goto LAB_005b9021;
      }
      iVar3 = (*pcVar1)(param_5,param_1,param_4,param_2,param_3,piVar6);
      if (iVar3 < 1) {
        FUN_0051f420();
        uVar5 = 0x99;
        goto LAB_005b90e1;
      }
      if (iVar3 == 1) {
        lVar7 = 0;
        goto LAB_005b8f07;
      }
    }
    iVar4 = FUN_004a6000(param_4,&local_48,param_1);
    if (iVar4 < 1) {
      FUN_0051f420();
      lVar7 = 0;
      FUN_0051f540("../crypto/asn1/a_verify.c",0xcd,"ASN1_item_verify_ctx");
      FUN_0051f8f0(0xd,0xc0103,0);
    }
    else if (local_48 == 0) {
      FUN_0051f420();
      lVar7 = 0;
      FUN_0051f540("../crypto/asn1/a_verify.c",0xd1,"ASN1_item_verify_ctx");
      FUN_0051f8f0(0xd,0xc0100,0);
    }
    else {
      lVar7 = (long)iVar4;
      iVar3 = FUN_0040d420(param_5,*(undefined8 *)(param_3 + 2),(long)*param_3,local_48,lVar7);
      if (iVar3 < 1) {
        FUN_0051f420();
        FUN_0051f540("../crypto/asn1/a_verify.c",0xd9,"ASN1_item_verify_ctx");
        FUN_0051f8f0(0xd,0x80006,0);
      }
      else {
        iVar3 = 1;
      }
    }
  }
  else {
LAB_005b8e57:
    uVar5 = FUN_00423b00(local_4c);
    iVar3 = FUN_0040e680(piVar6,uVar5);
    if (iVar3 == 0) {
      FUN_0051f420();
      uVar5 = 0xb2;
LAB_005b90b1:
      FUN_0051f540("../crypto/asn1/a_verify.c",uVar5,"ASN1_item_verify_ctx");
      uVar5 = 200;
      goto LAB_005b9037;
    }
    if (local_50 == 0) {
      lVar7 = 0;
    }
    else {
      uVar5 = FUN_00423b00();
      lVar7 = FUN_0040d800(uVar5);
      if (lVar7 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/asn1/a_verify.c",0xb9,"ASN1_item_verify_ctx");
        uVar5 = 0xa1;
        goto LAB_005b9037;
      }
    }
    iVar3 = FUN_0040cb10(param_5,0,lVar7,0,piVar6);
    if (iVar3 != 0) goto LAB_005b8eae;
    FUN_0051f420();
    uVar5 = 0xc4;
    iVar3 = 0;
LAB_005b90e1:
    lVar7 = 0;
    FUN_0051f540("../crypto/asn1/a_verify.c",uVar5,"ASN1_item_verify_ctx");
    FUN_0051f8f0(0xd,0x80006,0);
  }
LAB_005b8f07:
  FUN_0041aef0(local_48,lVar7,"../crypto/asn1/a_verify.c",0xde);
LAB_005b8f1c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar3;
}

