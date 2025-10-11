
undefined8
FUN_005b8ac0(code *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = FUN_00405f40();
  if (lVar3 == 0) {
    FUN_0051f420();
    uVar4 = 0x24;
LAB_005b8cb0:
    FUN_0051f540("../crypto/asn1/a_verify.c",uVar4,"ASN1_verify");
    uVar4 = 0xffffffff;
    FUN_0051f8f0(0xd,0xc0100,0);
    goto LAB_005b8bdf;
  }
  uVar1 = FUN_00423da0(*param_2);
  uVar4 = FUN_00423b00(uVar1);
  lVar5 = FUN_0040d800(uVar4);
  if (lVar5 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_verify.c",0x2a,"ASN1_verify");
    uVar4 = 0xffffffff;
    FUN_0051f8f0(0xd,0xa1,0);
    goto LAB_005b8bdf;
  }
  if ((param_3[1] == 3) && ((*(byte *)(param_3 + 4) & 7) != 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_verify.c",0x2f,"ASN1_verify");
    uVar4 = 0xffffffff;
    FUN_0051f8f0(0xd,0xdc,0);
    goto LAB_005b8bdf;
  }
  iVar2 = (*param_1)(param_4,0);
  if (iVar2 < 1) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_verify.c",0x35,"ASN1_verify");
    uVar4 = 0xffffffff;
    FUN_0051f8f0(0xd,0xc0103,0);
    goto LAB_005b8bdf;
  }
  lVar8 = (long)iVar2;
  lVar6 = FUN_0041ad90(lVar8,"../crypto/asn1/a_verify.c",0x38);
  if (lVar6 == 0) {
    FUN_0051f420();
    uVar4 = 0x3a;
    goto LAB_005b8cb0;
  }
  local_48 = lVar6;
  (*param_1)(param_4,&local_48);
  iVar2 = FUN_00407430(lVar3,lVar5,0);
  if (iVar2 == 0) {
    FUN_0041aef0(lVar6,lVar8,"../crypto/asn1/a_verify.c",0x43);
LAB_005b8bb0:
    FUN_0051f420();
    uVar7 = 0x46;
  }
  else {
    iVar2 = FUN_00405f60(lVar3,lVar6,lVar8);
    if (iVar2 == 0) {
      FUN_0041aef0(lVar6,lVar8,"../crypto/asn1/a_verify.c",0x43);
      goto LAB_005b8bb0;
    }
    FUN_0041aef0(lVar6,lVar8,"../crypto/asn1/a_verify.c",0x43);
    iVar2 = FUN_005fe8b0(lVar3,*(undefined8 *)(param_3 + 2),*param_3,param_5);
    if (0 < iVar2) {
      uVar4 = 1;
      goto LAB_005b8bdf;
    }
    FUN_0051f420();
    uVar7 = 0x4d;
  }
  uVar4 = 0;
  FUN_0051f540("../crypto/asn1/a_verify.c",uVar7,"ASN1_verify");
  FUN_0051f8f0(0xd,0x80006,0);
LAB_005b8bdf:
  FUN_00406b90(lVar3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

