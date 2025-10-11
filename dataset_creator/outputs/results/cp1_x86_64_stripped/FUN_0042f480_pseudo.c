
undefined4
FUN_0042f480(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  long local_78;
  long local_68;
  long local_60;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  lVar5 = FUN_004b2a70(*(undefined8 *)(param_4 + 8));
  if (lVar5 == 0) {
    lVar8 = 0;
    uVar4 = 0xffffffff;
    local_68 = 0;
    goto LAB_0042f594;
  }
  FUN_004b2c00(lVar5);
  lVar6 = FUN_004b2df0(lVar5);
  lVar7 = FUN_004b2df0(lVar5);
  iVar1 = FUN_004b7bb0(*(undefined8 *)(param_4 + 0x28));
  iVar2 = iVar1 + 7;
  if (iVar1 + 7 < 0) {
    iVar2 = iVar1 + 0xe;
  }
  iVar2 = iVar2 >> 3;
  local_68 = (long)iVar2;
  lVar8 = FUN_0041ad90(local_68,"../crypto/rsa/rsa_ossl.c",0x10b);
  if ((lVar7 == 0) || (lVar8 == 0)) {
    FUN_0051f420();
    uVar10 = 0x10d;
LAB_0042f823:
    uVar4 = 0xffffffff;
    FUN_0051f540("../crypto/rsa/rsa_ossl.c",uVar10,"rsa_ossl_private_encrypt");
    FUN_0051f8f0(4,0xc0100,0);
    goto LAB_0042f594;
  }
  if (param_5 == 3) {
    iVar1 = FUN_0056bfa0(lVar8,iVar2,param_2,param_1);
  }
  else if (param_5 == 5) {
    iVar1 = FUN_004342f0(lVar8,iVar2,param_2,param_1);
  }
  else {
    if (param_5 != 1) {
      FUN_0051f420();
      uVar4 = 0xffffffff;
      FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x11c,"rsa_ossl_private_encrypt");
      FUN_0051f8f0(4,0x76,0);
      goto LAB_0042f594;
    }
    iVar1 = FUN_0042fda0(lVar8,iVar2,param_2,param_1);
  }
  if ((iVar1 < 1) || (lVar9 = FUN_004b84d0(lVar8,iVar2,lVar6), lVar9 == 0)) {
LAB_0042f8b8:
    uVar4 = 0xffffffff;
  }
  else {
    iVar1 = FUN_004b77f0(lVar6,*(undefined8 *)(param_4 + 0x28));
    if (-1 < iVar1) {
      FUN_0051f420();
      uVar4 = 0xffffffff;
      FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x127,"rsa_ossl_private_encrypt");
      FUN_0051f8f0(4,0x84,0);
      goto LAB_0042f594;
    }
    uVar3 = *(uint *)(param_4 + 0xa4);
    if ((uVar3 & 2) != 0) {
      lVar9 = FUN_004b9bc0(param_4 + 0xa8,*(undefined8 *)(param_4 + 0xd0),
                           *(undefined8 *)(param_4 + 0x28),lVar5);
      if (lVar9 == 0) goto LAB_0042f8b8;
      uVar3 = *(uint *)(param_4 + 0xa4);
    }
    local_78 = 0;
    local_60 = 0;
    if ((uVar3 & 0x80) == 0) {
      local_78 = FUN_0042e0d0(param_4,&local_44,lVar5);
      if (local_78 == 0) {
        FUN_0051f420();
        uVar4 = 0xffffffff;
        FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x133,"rsa_ossl_private_encrypt");
        FUN_0051f8f0(4,0xc0103,0);
        goto LAB_0042f594;
      }
      if ((local_44 == 0) && (local_60 = FUN_004b2df0(lVar5), local_60 == 0)) {
        FUN_0051f420();
        uVar10 = 0x13a;
        goto LAB_0042f823;
      }
      iVar1 = FUN_0042ea40(local_78,lVar6,local_60,lVar5);
      if (iVar1 == 0) goto LAB_0042f8b8;
      uVar3 = *(uint *)(param_4 + 0xa4);
    }
    if ((((uVar3 & 0x20) == 0) && (*(int *)(param_4 + 0x10) != 1)) &&
       (((*(long *)(param_4 + 0x40) == 0 ||
         (((*(long *)(param_4 + 0x48) == 0 || (*(long *)(param_4 + 0x50) == 0)) ||
          (*(long *)(param_4 + 0x58) == 0)))) || (*(long *)(param_4 + 0x60) == 0)))) {
      lVar9 = FUN_004b7690();
      if (lVar9 == 0) {
        FUN_0051f420();
        uVar10 = 0x14b;
        goto LAB_0042f823;
      }
      if (*(long *)(param_4 + 0x38) == 0) {
        uVar4 = 0xffffffff;
        FUN_0051f420();
        FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x14f,"rsa_ossl_private_encrypt");
        FUN_0051f8f0(4,0xb3,0);
        FUN_004b7fa0(lVar9);
        goto LAB_0042f594;
      }
      FUN_004b7d90(lVar9,*(long *)(param_4 + 0x38),4);
      iVar1 = (**(code **)(*(long *)(param_4 + 0x18) + 0x30))
                        (lVar7,lVar6,lVar9,*(undefined8 *)(param_4 + 0x28),lVar5,
                         *(undefined8 *)(param_4 + 0xa8));
      if (iVar1 == 0) {
        FUN_004b7fa0(lVar9);
        uVar4 = 0xffffffff;
        goto LAB_0042f594;
      }
      FUN_004b7fa0(lVar9);
    }
    else {
      iVar1 = (**(code **)(*(long *)(param_4 + 0x18) + 0x28))(lVar7,lVar6,param_4,lVar5);
      if (iVar1 == 0) goto LAB_0042f8b8;
    }
    if (local_78 != 0) {
      FUN_004b7e70(lVar7,4);
      iVar1 = FUN_004b19e0(lVar7,local_60,local_78,lVar5);
      if (iVar1 == 0) goto LAB_0042f8b8;
    }
    if (param_5 == 5) {
      iVar1 = FUN_004b18d0(lVar6,*(undefined8 *)(param_4 + 0x28),lVar7);
      if (iVar1 == 0) goto LAB_0042f8b8;
      iVar1 = FUN_004b7840(lVar7,lVar6);
      if (0 < iVar1) {
        lVar7 = lVar6;
      }
    }
    uVar4 = FUN_004b87b0(lVar7,param_3,iVar2);
  }
LAB_0042f594:
  FUN_004b2d50(lVar5);
  FUN_004b2b50(lVar5);
  FUN_0041aef0(lVar8,local_68,"../crypto/rsa/rsa_ossl.c",0x175);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar4;
}

