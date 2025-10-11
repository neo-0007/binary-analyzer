
long FUN_0055e4c0(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  long local_f8;
  long local_e8;
  undefined8 *local_d8;
  undefined8 local_d0;
  int *local_c8;
  long local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0;
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0xe8,"PKCS7_dataInit");
    FUN_0051f8f0(0x21,0x8f,0);
    local_f8 = 0;
    goto LAB_0055ea03;
  }
  uVar5 = FUN_00561260();
  uVar6 = FUN_005614d0(uVar5);
  uVar7 = FUN_005614f0(uVar5);
  if (*(long *)(param_1 + 0x20) == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0xfa,"PKCS7_dataInit");
    FUN_0051f8f0(0x21,0x7a,0);
    local_f8 = 0;
    goto LAB_0055ea03;
  }
  uVar1 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x10) = 0;
  switch(uVar1) {
  case 0x15:
    local_c8 = (int *)0x0;
    uVar13 = 0;
    lVar11 = 0;
    local_d8 = (undefined8 *)0x0;
    local_d0 = 0;
    local_e8 = 0;
    break;
  case 0x16:
    lVar11 = 0;
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    local_c8 = (int *)FUN_0055e460(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
    local_d8 = (undefined8 *)0x0;
    local_d0 = 0;
    local_e8 = 0;
    break;
  case 0x17:
    local_c8 = (int *)0x0;
    uVar13 = 0;
    local_e8 = 0;
    local_d0 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    lVar11 = *(long *)(lVar10 + 0x18);
    local_d8 = *(undefined8 **)(lVar10 + 8);
    if (lVar11 != 0) break;
    FUN_0051f420();
    uVar5 = 0x115;
LAB_0055e95e:
    lVar9 = 0;
    FUN_0051f540("../crypto/pkcs7/pk7_doit.c",uVar5,"PKCS7_dataInit");
    FUN_0051f8f0(0x21,0x74,0);
    lVar10 = 0;
    lVar11 = 0;
    goto LAB_0055e9e8;
  case 0x18:
    local_c8 = (int *)0x0;
    lVar10 = *(long *)(param_1 + 0x20);
    local_e8 = 0;
    local_d0 = *(undefined8 *)(lVar10 + 0x30);
    uVar13 = *(undefined8 *)(lVar10 + 8);
    lVar11 = *(long *)(*(long *)(lVar10 + 0x28) + 0x18);
    local_d8 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8);
    if (lVar11 == 0) {
      FUN_0051f420();
      uVar5 = 0x10c;
      goto LAB_0055e95e;
    }
    break;
  case 0x19:
    uVar13 = 0;
    lVar11 = 0;
    local_e8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    local_c8 = (int *)FUN_0055e460(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
    local_d8 = (undefined8 *)0x0;
    local_d0 = 0;
    break;
  default:
    FUN_0051f420();
    lVar9 = 0;
    FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x120,"PKCS7_dataInit");
    FUN_0051f8f0(0x21,0x70,0);
    lVar10 = 0;
    lVar11 = 0;
    goto LAB_0055e9e8;
  }
  for (iVar3 = 0; iVar2 = FUN_00436480(uVar13), iVar3 < iVar2; iVar3 = iVar3 + 1) {
    uVar8 = FUN_004364a0(uVar13,iVar3);
    iVar2 = FUN_0055ddf0(&local_b0,uVar8,uVar5);
    if (iVar2 == 0) goto LAB_0055ea30;
  }
  if ((local_e8 == 0) || (iVar3 = FUN_0055ddf0(&local_b0,local_e8,uVar5), iVar3 != 0)) {
    lVar9 = local_b0;
    if (lVar11 == 0) {
LAB_0055ea90:
      local_b0 = lVar9;
      local_f8 = param_2;
      if (param_2 != 0) {
LAB_0055eaa0:
        lVar10 = local_b0;
        if (local_b0 != 0) {
          FUN_004ac2c0(local_b0,local_f8);
          local_f8 = lVar10;
        }
        goto LAB_0055ea03;
      }
      iVar3 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18));
      if ((iVar3 == 0x16) && (lVar10 = FUN_00560c40(param_1,2,0,0), lVar10 != 0)) {
        uVar5 = FUN_005c0d60();
        local_f8 = FUN_004ab550(uVar5);
LAB_0055ec99:
        if (local_f8 != 0) goto LAB_0055eaa0;
      }
      else {
        if ((local_c8 != (int *)0x0) && (0 < *local_c8)) {
          local_f8 = FUN_005c0c20(*(undefined8 *)(local_c8 + 2));
          goto LAB_0055ec99;
        }
        uVar5 = FUN_005c0c00();
        local_f8 = FUN_004ab550(uVar5);
        if (local_f8 != 0) {
          FUN_004abd40(local_f8,0x82,0,0);
          goto LAB_0055eaa0;
        }
      }
      lVar10 = 0;
      lVar9 = 0;
      lVar11 = local_b0;
    }
    else {
      uVar5 = FUN_005fc7c0();
      lVar9 = FUN_004ab550(uVar5);
      if (lVar9 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x132,"PKCS7_dataInit");
        FUN_0051f8f0(0x21,0x80020,0);
        lVar10 = 0;
        lVar11 = local_b0;
      }
      else {
        FUN_004abd40(lVar9,0x81,0,&local_a8);
        iVar3 = FUN_0040a170(lVar11);
        iVar2 = FUN_00409910(lVar11);
        uVar1 = FUN_0040a260(lVar11);
        uVar5 = FUN_004239c0(uVar1);
        *local_d8 = uVar5;
        if ((iVar2 < 1) || (iVar4 = FUN_00429580(uVar6,local_98,(long)iVar2,0), 0 < iVar4)) {
          FUN_0051f000();
          uVar5 = FUN_0040a3d0(lVar11);
          lVar10 = FUN_00537960(uVar6,uVar5,uVar7);
          FUN_0051f050();
          if (lVar10 != 0) {
            lVar11 = lVar10;
          }
          iVar4 = FUN_00538a80(local_a8,lVar11,0,0,0,1);
          lVar11 = local_b0;
          if (iVar4 < 1) goto LAB_0055e9e8;
          FUN_00537a40(lVar10);
          iVar4 = FUN_00537860(local_a8,local_88);
          if ((0 < iVar4) && (iVar4 = FUN_00538a80(local_a8,0,0,local_88,local_98,1), 0 < iVar4)) {
            if (0 < iVar2) {
              if (local_d8[1] == 0) {
                lVar10 = FUN_004a7f10();
                local_d8[1] = lVar10;
                if (lVar10 == 0) goto LAB_0055e9e0;
              }
              iVar2 = FUN_0040a7f0(local_a8);
              if (iVar2 < 0) goto LAB_0055e9e0;
            }
            for (iVar2 = 0; iVar4 = FUN_00436480(local_d0), iVar2 < iVar4; iVar2 = iVar2 + 1) {
              lVar10 = FUN_004364a0(local_d0,iVar2);
              uVar5 = *(undefined8 *)(lVar10 + 0x28);
              lVar11 = FUN_0059ef80(*(undefined8 *)(lVar10 + 0x20));
              if (lVar11 == 0) goto LAB_0055e9e0;
              uVar6 = FUN_005614f0(uVar5);
              uVar5 = FUN_005614d0(uVar5);
              lVar11 = FUN_00413530(uVar5,lVar11,uVar6);
              if (lVar11 == 0) goto LAB_0055e9e0;
              iVar4 = FUN_005207f0(lVar11);
              if (iVar4 < 1) {
LAB_0055ea40:
                FUN_00412f00(lVar11);
                FUN_0041ad60(0,"../crypto/pkcs7/pk7_doit.c",0x96);
                lVar10 = 0;
                lVar11 = local_b0;
                goto LAB_0055e9e8;
              }
              iVar4 = FUN_0051fe70(lVar11,0,&local_a0,local_88);
              if (iVar4 < 1) goto LAB_0055ea40;
              lVar12 = FUN_0041ad90(CONCAT44(uStack_9c,local_a0),"../crypto/pkcs7/pk7_doit.c",0x85);
              if (lVar12 == 0) {
                FUN_0051f420();
                FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x88,"pkcs7_encode_rinfo");
                FUN_0051f8f0(0x21,0xc0100,0);
                FUN_00412f00(lVar11);
                FUN_0041ad60(0,"../crypto/pkcs7/pk7_doit.c",0x96);
                lVar10 = 0;
                lVar11 = local_b0;
                goto LAB_0055e9e8;
              }
              iVar4 = FUN_0051fe70(lVar11,lVar12,&local_a0);
              if (iVar4 < 1) {
                FUN_00412f00(lVar11);
                FUN_0041ad60(lVar12,"../crypto/pkcs7/pk7_doit.c",0x96);
                lVar10 = 0;
                lVar11 = local_b0;
                goto LAB_0055e9e8;
              }
              FUN_004a2150(*(undefined8 *)(lVar10 + 0x18),lVar12,local_a0);
              FUN_00412f00(lVar11);
              FUN_0041ad60(0,"../crypto/pkcs7/pk7_doit.c",0x96);
            }
            FUN_004227b0(local_88,(long)iVar3);
            if (local_b0 != 0) {
              FUN_004ac2c0(local_b0,lVar9);
              lVar9 = local_b0;
            }
            goto LAB_0055ea90;
          }
        }
LAB_0055e9e0:
        lVar10 = 0;
        lVar11 = local_b0;
      }
    }
  }
  else {
LAB_0055ea30:
    lVar10 = 0;
    lVar9 = 0;
    lVar11 = local_b0;
  }
LAB_0055e9e8:
  FUN_00537a40(lVar10);
  FUN_004ac4a0(lVar11);
  FUN_004ac4a0(lVar9);
  local_f8 = 0;
LAB_0055ea03:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return local_f8;
}

