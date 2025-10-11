
ulong FUN_005b5b10(undefined8 param_1,long param_2,long param_3,int *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  long in_FS_OFFSET;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  long local_158;
  long local_148;
  long local_140;
  long local_138;
  ulong local_130;
  ulong local_128;
  undefined1 *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined1 local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_148 = param_3;
  local_140 = param_2;
  lVar4 = FUN_0040b020(param_6);
  uVar5 = FUN_0040b080(param_6);
  lVar6 = FUN_00415850(uVar5);
  if (lVar6 == 0) {
    FUN_0051f420();
    lVar6 = 0;
    FUN_0051f540("../crypto/asn1/a_sign.c",0xa6,"ASN1_item_sign_ctx");
    FUN_0051f8f0(0xd,0xd9,0);
    lVar4 = 0;
    goto LAB_005b5d68;
  }
  if (*(long *)(lVar6 + 8) == 0) {
    piVar7 = (int *)FUN_0040b080(param_6);
    if ((piVar7 == (int *)0x0) ||
       ((iVar2 = *piVar7, (iVar2 - 0x40U & 0xffffffbf) != 0 && (iVar2 - 0x10U & 0xffffffef) != 0 &&
        (iVar2 != 0x100)))) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/a_sign.c",0xb2,"ASN1_item_sign_ctx");
      FUN_0051f8f0(0xd,0xd9,0);
    }
    else {
      FUN_0041e2e0(&local_178,"algorithm-id",local_c8,0x80);
      local_f8 = local_158;
      local_118 = local_178;
      uStack_110 = uStack_170;
      local_108 = local_168;
      uStack_100 = uStack_160;
      FUN_0041e470(&local_178);
      local_f0 = local_178;
      uStack_e8 = uStack_170;
      local_d0 = local_158;
      local_e0 = local_168;
      uStack_d8 = uStack_160;
      iVar2 = FUN_00413e50(piVar7,&local_118);
      lVar4 = local_f8;
      if (0 < iVar2) {
        if (local_f8 != 0) {
          if ((local_140 == 0) ||
             (local_120 = local_c8, lVar6 = FUN_004a8760(&local_140,&local_120,local_f8), lVar6 != 0
             )) {
            if ((local_148 == 0) ||
               (local_120 = local_c8, lVar4 = FUN_004a8760(&local_148,&local_120,lVar4), lVar4 != 0)
               ) goto LAB_005b5bdf;
            FUN_0051f420();
            uVar5 = 0xd0;
          }
          else {
            FUN_0051f420();
            uVar5 = 199;
          }
          FUN_0051f540("../crypto/asn1/a_sign.c",uVar5,"ASN1_item_sign_ctx");
          uVar5 = 0xc0103;
          goto LAB_005b60af;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/asn1/a_sign.c",0xbf,"ASN1_item_sign_ctx");
        FUN_0051f8f0(0xd,0xc6,0);
      }
    }
LAB_005b60bb:
    lVar4 = 0;
    lVar6 = 0;
  }
  else {
    pcVar1 = *(code **)(*(long *)(lVar6 + 8) + 0xd0);
    if (pcVar1 == (code *)0x0) {
LAB_005b5ca0:
      if (lVar4 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/asn1/a_sign.c",0xeb,"ASN1_item_sign_ctx");
        uVar5 = 0xd9;
LAB_005b60af:
        FUN_0051f8f0(0xd,uVar5,0);
        goto LAB_005b60bb;
      }
      iVar2 = FUN_0040e580(lVar6);
      if (iVar2 != 0x494) {
        iVar2 = **(int **)(lVar6 + 8);
      }
      uVar3 = FUN_0040aaf0(lVar4);
      iVar2 = FUN_00424d10(&local_120,uVar3,iVar2);
      if (iVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/asn1/a_sign.c",0xf6,"ASN1_item_sign_ctx");
        uVar5 = 0xc6;
      }
      else {
        uVar8 = -(uint)((*(ulong *)(*(long *)(lVar6 + 8) + 8) & 4) == 0) | 5;
        if (local_140 != 0) {
          uVar5 = FUN_004239c0((ulong)local_120 & 0xffffffff);
          FUN_004a8880(local_140,uVar5,uVar8,0);
        }
        if (local_148 != 0) {
          uVar5 = FUN_004239c0((ulong)local_120 & 0xffffffff);
          FUN_004a8880(local_148,uVar5,uVar8,0);
        }
LAB_005b5bdf:
        iVar2 = FUN_004a6000(param_5,&local_138,param_1);
        if (0 < iVar2) {
          lVar6 = (long)iVar2;
          iVar2 = FUN_0040d0e0(param_6,0,&local_128,local_138,lVar6);
          if (iVar2 == 0) {
            lVar4 = 0;
            local_130 = 0;
            FUN_0051f420();
            FUN_0051f540("../crypto/asn1/a_sign.c",0x10f,"ASN1_item_sign_ctx");
            FUN_0051f8f0(0xd,0x80006,0);
          }
          else {
            local_130 = local_128;
            lVar4 = FUN_0041ad90(local_128,"../crypto/asn1/a_sign.c",0x113);
            if ((local_138 == 0) || (lVar4 == 0)) {
              local_130 = 0;
              FUN_0051f420();
              FUN_0051f540("../crypto/asn1/a_sign.c",0x116,"ASN1_item_sign_ctx");
              FUN_0051f8f0(0xd,0xc0100,0);
            }
            else {
              iVar2 = FUN_0040d0e0(param_6,lVar4,&local_130,local_138,lVar6);
              if (iVar2 == 0) {
                local_130 = 0;
                FUN_0051f420();
                FUN_0051f540("../crypto/asn1/a_sign.c",0x11c,"ASN1_item_sign_ctx");
                FUN_0051f8f0(0xd,0x80006,0);
              }
              else {
                FUN_0041ad60(*(undefined8 *)(param_4 + 2),"../crypto/asn1/a_sign.c",0x11f);
                *(long *)(param_4 + 2) = lVar4;
                lVar4 = 0;
                *param_4 = (int)local_130;
                *(ulong *)(param_4 + 4) = *(ulong *)(param_4 + 4) & 0xfffffffffffffff0 | 8;
              }
            }
          }
          goto LAB_005b5d68;
        }
        local_130 = 0;
        FUN_0051f420();
        FUN_0051f540("../crypto/asn1/a_sign.c",0x109,"ASN1_item_sign_ctx");
        uVar5 = 0xc0103;
      }
    }
    else {
      iVar2 = (*pcVar1)(param_6,param_1,param_5,local_140,local_148,param_4);
      if (iVar2 == 1) {
        local_130 = (ulong)*param_4;
        lVar6 = 0;
        lVar4 = 0;
        goto LAB_005b5d68;
      }
      if (0 < iVar2) {
        if (iVar2 == 2) goto LAB_005b5ca0;
        goto LAB_005b5bdf;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/a_sign.c",0xe2,"ASN1_item_sign_ctx");
      uVar5 = 0x80006;
    }
    lVar6 = 0;
    lVar4 = 0;
    FUN_0051f8f0(0xd,uVar5,0);
  }
LAB_005b5d68:
  FUN_0041aef0(local_138,lVar6,"../crypto/asn1/a_sign.c",0x12a);
  FUN_0041aef0(lVar4,local_128,"../crypto/asn1/a_sign.c",299);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return local_130 & 0xffffffff;
}

