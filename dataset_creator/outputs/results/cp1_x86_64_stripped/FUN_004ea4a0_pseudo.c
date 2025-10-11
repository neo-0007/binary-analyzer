
int FUN_004ea4a0(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = 0;
  if (((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) ||
     (((*(byte *)(param_1 + 0x30) & 2) == 0 && (*(long *)(param_1 + 0x20) == 0)))) {
    puVar3 = (undefined4 *)0x0;
    uVar4 = 0;
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_asn1.c",0x3fd,"i2d_ECPrivateKey");
    FUN_0051f8f0(0x10,0xc0102,0);
  }
  else {
    puVar3 = (undefined4 *)FUN_004e85c0();
    if (puVar3 == (undefined4 *)0x0) {
      FUN_0051f420();
      uVar4 = 0;
      FUN_0051f540("../crypto/ec/ec_asn1.c",0x402,"i2d_ECPrivateKey");
      FUN_0051f8f0(0x10,0xc0100,0);
    }
    else {
      *puVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = FUN_004eecb0(param_1,&local_40);
      if (uVar4 == 0) {
        FUN_0051f420();
        uVar7 = 0x40b;
      }
      else {
        FUN_004a2150(*(undefined8 *)(puVar3 + 2),local_40,uVar4 & 0xffffffff);
        uVar1 = *(uint *)(param_1 + 0x30);
        local_40 = 0;
        if ((uVar1 & 1) == 0) {
          lVar5 = FUN_004e90c0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(puVar3 + 4));
          *(long *)(puVar3 + 4) = lVar5;
          if (lVar5 == 0) {
            FUN_0051f420();
            uVar7 = 0x416;
            goto LAB_004ea651;
          }
          uVar1 = *(uint *)(param_1 + 0x30);
        }
        if ((uVar1 & 2) == 0) {
          lVar5 = FUN_004a7820();
          *(long *)(puVar3 + 6) = lVar5;
          if (lVar5 == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/ec/ec_asn1.c",0x41e,"i2d_ECPrivateKey");
            FUN_0051f8f0(0x10,0xc0100,0);
            goto LAB_004ea609;
          }
          uVar6 = FUN_004ee960(param_1,*(undefined4 *)(param_1 + 0x34),&local_38,0);
          if (uVar6 == 0) {
            FUN_0051f420();
            uVar7 = 0x425;
            goto LAB_004ea651;
          }
          lVar5 = *(long *)(puVar3 + 6);
          *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffff0 | 8;
          FUN_004a2150(lVar5,local_38,uVar6 & 0xffffffff);
          local_38 = 0;
        }
        iVar2 = FUN_004e85b0(puVar3,param_2);
        if (iVar2 != 0) {
          FUN_0041aef0(local_40,uVar4,"../crypto/ec/ec_asn1.c",0x435);
          FUN_0041ad60(local_38,"../crypto/ec/ec_asn1.c",0x436);
          FUN_004e85d0(puVar3);
          goto LAB_004ea5aa;
        }
        FUN_0051f420();
        uVar7 = 0x430;
      }
LAB_004ea651:
      FUN_0051f540("../crypto/ec/ec_asn1.c",uVar7,"i2d_ECPrivateKey");
      FUN_0051f8f0(0x10,0x80010,0);
    }
  }
LAB_004ea609:
  FUN_0041aef0(local_40,uVar4,"../crypto/ec/ec_asn1.c",0x435);
  FUN_0041ad60(local_38,"../crypto/ec/ec_asn1.c",0x436);
  FUN_004e85d0(puVar3);
  iVar2 = 0;
LAB_004ea5aa:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

