
int FUN_0055fc20(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long in_FS_OFFSET;
  long local_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x2eb,"PKCS7_dataFinal");
    FUN_0051f8f0(0x21,0x8f,0);
    iVar2 = 0;
    goto LAB_0055ff12;
  }
  uVar3 = FUN_00561260();
  if (*(long *)(param_1 + 0x20) == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x2f2,"PKCS7_dataFinal");
    FUN_0051f8f0(0x21,0x7a,0);
    iVar2 = 0;
    goto LAB_0055ff12;
  }
  lVar4 = FUN_00405f40();
  if (lVar4 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x2f8,"PKCS7_dataFinal");
    FUN_0051f8f0(0x21,0xc0100,0);
    iVar2 = 0;
    goto LAB_0055ff12;
  }
  uVar1 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x10) = 0;
  switch(uVar1) {
  case 0x15:
    local_b0 = *(long *)(param_1 + 0x20);
    goto LAB_0055fed2;
  case 0x16:
    lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
    local_b0 = FUN_0055e460(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
    iVar2 = FUN_00423da0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x18));
    if ((iVar2 == 0x15) && (*(int *)(param_1 + 0x14) != 0)) {
      thunk_FUN_004a2270(local_b0);
      local_b0 = 0;
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x20) = 0;
    }
    break;
  case 0x17:
    local_b0 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x10);
    if (local_b0 == 0) {
      local_b0 = FUN_004a7670();
      if (local_b0 == 0) {
        FUN_0051f420();
        uVar3 = 0x316;
LAB_00560359:
        FUN_0051f540("../crypto/pkcs7/pk7_doit.c",uVar3,"PKCS7_dataFinal");
        FUN_0051f8f0(0x21,0xc0100,0);
        iVar2 = 0;
        goto LAB_0055ff02;
      }
      *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x10) = local_b0;
    }
    iVar2 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18));
    if ((iVar2 != 0x16) || (lVar9 = FUN_00560c40(param_1,2,0,0), lVar9 == 0)) goto LAB_0055feed;
    goto LAB_0055fefc;
  case 0x18:
    lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
    local_b0 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x10);
    if (local_b0 == 0) {
      local_b0 = FUN_004a7670();
      if (local_b0 == 0) {
        FUN_0051f420();
        uVar3 = 0x30a;
        goto LAB_00560359;
      }
      *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x10) = local_b0;
    }
    break;
  case 0x19:
    local_b0 = FUN_0055e460(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
    iVar2 = FUN_00423da0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x18));
    if ((iVar2 == 0x15) && (*(int *)(param_1 + 0x14) != 0)) {
      thunk_FUN_004a2270(local_b0);
      local_b0 = 0;
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x20) = 0;
    }
    uVar1 = FUN_00423da0(**(undefined8 **)(*(long *)(param_1 + 0x20) + 8));
    lVar9 = FUN_0055e230(&local_98,param_2,uVar1);
    if (lVar9 != 0) {
      iVar2 = FUN_00406090(local_98,local_88,&local_90);
      if ((iVar2 != 0) &&
         (iVar2 = thunk_FUN_004a1fa0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),local_88,
                                     local_90), iVar2 != 0)) goto LAB_0055fed2;
    }
    goto LAB_0055fec0;
  default:
    FUN_0051f420();
    FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x332,"PKCS7_dataFinal");
    FUN_0051f8f0(0x21,0x70,0);
    iVar2 = 0;
    goto LAB_0055ff02;
  }
  iVar10 = 0;
  if (lVar9 != 0) {
    for (; iVar2 = FUN_00436480(lVar9), iVar10 < iVar2; iVar10 = iVar10 + 1) {
      lVar5 = FUN_004364a0(lVar9,iVar10);
      if (*(long *)(lVar5 + 0x38) != 0) {
        uVar1 = FUN_00423da0(**(undefined8 **)(lVar5 + 0x10));
        lVar6 = FUN_0055e230(&local_98,param_2,uVar1);
        if ((lVar6 == 0) || (iVar2 = FUN_004074f0(lVar4,local_98), iVar2 == 0)) goto LAB_0055fec0;
        iVar2 = FUN_00436480(*(undefined8 *)(lVar5 + 0x18));
        if (0 < iVar2) {
          lVar6 = FUN_0055fbf0(lVar5,0x34);
          if ((lVar6 == 0) && (iVar2 = FUN_006044e0(lVar5,0), iVar2 == 0)) {
            FUN_0051f420();
            uVar3 = 0x2c8;
          }
          else {
            iVar2 = FUN_00406090(lVar4,local_88,&local_90);
            if (iVar2 == 0) {
              FUN_0051f420();
              FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x2cf,"do_pkcs7_signed_attrib");
              FUN_0051f8f0(0x21,0x80006,0);
              iVar2 = 0;
              goto LAB_0055ff02;
            }
            iVar2 = FUN_00604550(lVar5,local_88,local_90);
            if (iVar2 != 0) {
              iVar2 = FUN_0055f970(lVar5);
              if (iVar2 != 0) goto LAB_0055fd48;
              goto LAB_0055ff02;
            }
            FUN_0051f420();
            uVar3 = 0x2d3;
          }
          iVar2 = 0;
          FUN_0051f540("../crypto/pkcs7/pk7_doit.c",uVar3,"do_pkcs7_signed_attrib");
          FUN_0051f8f0(0x21,0xc0100,0);
          goto LAB_0055ff02;
        }
        local_90 = FUN_0040fb50(*(undefined8 *)(lVar5 + 0x38));
        lVar6 = FUN_0041ad90(local_90,"../crypto/pkcs7/pk7_doit.c",0x358);
        if (lVar6 == 0) goto LAB_0055fec0;
        uVar7 = FUN_005614f0(uVar3);
        uVar8 = FUN_005614d0(uVar3);
        iVar2 = FUN_005fe4f0(lVar4,lVar6,&local_90,*(undefined8 *)(lVar5 + 0x38),uVar8,uVar7);
        if (iVar2 == 0) {
          FUN_0041ad60(lVar6,"../crypto/pkcs7/pk7_doit.c",0x35f);
          FUN_0051f420();
          FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x360,"PKCS7_dataFinal");
          FUN_0051f8f0(0x21,0x80006,0);
          goto LAB_0055fec0;
        }
        FUN_004a2150(*(undefined8 *)(lVar5 + 0x28),lVar6,local_90);
      }
LAB_0055fd48:
    }
  }
LAB_0055fed2:
  iVar2 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18));
  if ((iVar2 == 0x16) && (lVar9 = FUN_00560c40(param_1,2,0,0), lVar9 != 0)) {
LAB_0055fefc:
    iVar2 = 1;
  }
  else {
    if (local_b0 != 0) {
LAB_0055feed:
      if ((*(byte *)(local_b0 + 0x10) & 0x10) == 0) {
        lVar9 = FUN_004ac3f0(param_2,0x401);
        if (lVar9 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x37e,"PKCS7_dataFinal");
          FUN_0051f8f0(0x21,0x6b,0);
          goto LAB_0055fec0;
        }
        uVar1 = FUN_004abd40(lVar9,3,0,&local_90);
        FUN_004ab6e0(lVar9,0x200);
        FUN_004abd40(lVar9,0x82,0,0);
        FUN_004a2150(local_b0,CONCAT44(uStack_8c,local_90),uVar1);
      }
      goto LAB_0055fefc;
    }
LAB_0055fec0:
    iVar2 = 0;
  }
LAB_0055ff02:
  FUN_00406b90(lVar4);
LAB_0055ff12:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar2;
}

