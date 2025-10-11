
ulong FUN_0042eac0(int param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  int local_dc;
  long local_d0;
  long local_c8;
  long local_b8;
  long local_a8;
  undefined4 local_90;
  int local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0x20;
  local_8c = 0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_dc = param_5;
  if (((*(byte *)(param_4 + 0xa4) & 0x20) != 0) && (local_dc = 8, param_5 != 1)) {
    local_dc = param_5;
  }
  lVar4 = FUN_004b2a70(*(undefined8 *)(param_4 + 8));
  if (lVar4 == 0) {
    lVar8 = 0;
    lVar7 = 0;
    uVar10 = 0xffffffff;
    local_d0 = 0;
    local_b8 = 0;
    goto LAB_0042ed34;
  }
  FUN_004b2c00(lVar4);
  uVar5 = FUN_004b2df0(lVar4);
  lVar6 = FUN_004b2df0(lVar4);
  iVar1 = FUN_004b7bb0(*(undefined8 *)(param_4 + 0x28));
  iVar2 = iVar1 + 7;
  if (iVar1 + 7 < 0) {
    iVar2 = iVar1 + 0xe;
  }
  iVar2 = iVar2 >> 3;
  local_b8 = (long)iVar2;
  lVar7 = FUN_0041ad90(local_b8,"../crypto/rsa/rsa_ossl.c",0x19a);
  if ((lVar6 == 0) || (lVar7 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x19c,"rsa_ossl_private_decrypt");
    uVar5 = 0xc0100;
LAB_0042ef38:
    FUN_0051f8f0(4,uVar5,0);
  }
  else {
    if (iVar2 < param_1) {
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x1a5,"rsa_ossl_private_decrypt");
      uVar5 = 0x6c;
      goto LAB_0042ef38;
    }
    if (param_1 < 1) {
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x1aa,"rsa_ossl_private_decrypt");
      uVar5 = 0x6f;
      goto LAB_0042ef38;
    }
    lVar8 = FUN_004b84d0(param_2,param_1,uVar5);
    if (lVar8 == 0) {
LAB_0042f198:
      local_d0 = 0;
      uVar10 = 0xffffffff;
      goto LAB_0042ed34;
    }
    iVar1 = FUN_004b77f0(uVar5,*(undefined8 *)(param_4 + 0x28));
    if (-1 < iVar1) {
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x1b3,"rsa_ossl_private_decrypt");
      uVar5 = 0x84;
      goto LAB_0042ef38;
    }
    uVar3 = *(uint *)(param_4 + 0xa4);
    if ((uVar3 & 2) != 0) {
      lVar8 = FUN_004b9bc0(param_4 + 0xa8,*(undefined8 *)(param_4 + 0xd0),
                           *(undefined8 *)(param_4 + 0x28),lVar4);
      if (lVar8 == 0) goto LAB_0042f198;
      uVar3 = *(uint *)(param_4 + 0xa4);
    }
    local_c8 = 0;
    local_a8 = 0;
    if ((uVar3 & 0x80) == 0) {
      local_c8 = FUN_0042e0d0(param_4,&local_8c,lVar4);
      if (local_c8 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x1bf,"rsa_ossl_private_decrypt");
        uVar5 = 0xc0103;
      }
      else {
        if ((local_8c != 0) || (local_a8 = FUN_004b2df0(lVar4), local_a8 != 0)) {
          iVar1 = FUN_0042ea40(local_c8,uVar5,local_a8,lVar4);
          if (iVar1 != 0) {
            uVar3 = *(uint *)(param_4 + 0xa4);
            goto LAB_0042ec3d;
          }
          goto LAB_0042ef44;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x1c6,"rsa_ossl_private_decrypt");
        uVar5 = 0xc0100;
      }
      goto LAB_0042ef38;
    }
LAB_0042ec3d:
    if ((((uVar3 & 0x20) == 0) && (*(int *)(param_4 + 0x10) != 1)) &&
       (((*(long *)(param_4 + 0x40) == 0 ||
         (((*(long *)(param_4 + 0x48) == 0 || (*(long *)(param_4 + 0x50) == 0)) ||
          (*(long *)(param_4 + 0x58) == 0)))) || (*(long *)(param_4 + 0x60) == 0)))) {
      lVar9 = FUN_004b7690();
      if (lVar9 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x1d8,"rsa_ossl_private_decrypt");
        uVar5 = 0xc0100;
        local_d0 = 0;
LAB_0042f2d4:
        lVar8 = 0;
        uVar10 = 0xffffffff;
        FUN_0051f8f0(4,uVar5,0);
        goto LAB_0042ed34;
      }
      if (*(long *)(param_4 + 0x38) == 0) {
        FUN_0051f420();
        uVar10 = 0xffffffff;
        FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x1dc,"rsa_ossl_private_decrypt");
        FUN_0051f8f0(4,0xb3,0);
        FUN_004b7fa0(lVar9);
        local_d0 = 0;
        lVar8 = 0;
        goto LAB_0042ed34;
      }
      FUN_004b7d90(lVar9,*(long *)(param_4 + 0x38),4);
      iVar1 = (**(code **)(*(long *)(param_4 + 0x18) + 0x30))
                        (lVar6,uVar5,lVar9,*(undefined8 *)(param_4 + 0x28),lVar4,
                         *(undefined8 *)(param_4 + 0xa8));
      if (iVar1 != 0) {
        FUN_004b7fa0(lVar9);
        goto LAB_0042ec60;
      }
LAB_0042f2a8:
      FUN_004b7fa0(lVar9);
    }
    else {
      iVar1 = (**(code **)(*(long *)(param_4 + 0x18) + 0x28))(lVar6,uVar5,param_4,lVar4);
      if (iVar1 != 0) {
LAB_0042ec60:
        local_d0 = 0;
        lVar8 = 0;
        if (local_dc == 1) {
          lVar9 = FUN_004b7690();
          if (lVar9 == 0) {
            FUN_0051f420();
            uVar5 = 0x1f5;
            lVar8 = 0;
LAB_0042f3a3:
            uVar10 = 0xffffffff;
            FUN_0051f540("../crypto/rsa/rsa_ossl.c",uVar5,"rsa_ossl_private_decrypt");
            FUN_0051f8f0(4,0xc0100,0);
            goto LAB_0042ed34;
          }
          if (*(long *)(param_4 + 0x38) == 0) {
            FUN_0051f420();
            uVar10 = 0xffffffff;
            FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x1f9,"rsa_ossl_private_decrypt");
            FUN_0051f8f0(4,0xb3,0);
            lVar8 = 0;
            FUN_004b7fa0(lVar9);
            local_d0 = 0;
            goto LAB_0042ed34;
          }
          FUN_004b7d90(lVar9,*(long *)(param_4 + 0x38),4);
          iVar1 = FUN_004b87b0(lVar9,lVar7,iVar2);
          if (iVar1 < 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x1ff,"rsa_ossl_private_decrypt");
            FUN_0051f8f0(4,0xc0103,0);
            goto LAB_0042f2a8;
          }
          FUN_004b7fa0(lVar9);
          local_d0 = FUN_004069d0(*(undefined8 *)(param_4 + 8),"sha256",0);
          if (local_d0 == 0) {
            FUN_0051f420();
            uVar5 = 0x20e;
          }
          else {
            iVar1 = FUN_00407440(lVar7,local_b8,local_88,0,local_d0,0);
            if (0 < iVar1) {
              lVar8 = FUN_00545280();
              if (lVar8 == 0) {
                FUN_0051f420();
                uVar5 = 0x219;
                goto LAB_0042f3a3;
              }
              iVar1 = FUN_00544dc0(lVar8,local_88,0x20,local_d0,0);
              if (iVar1 < 1) {
                FUN_0051f420();
                uVar5 = 0x21e;
              }
              else {
                if (param_1 < iVar2) {
                  thunk_FUN_00713720(lVar7,0,(long)(iVar2 - param_1));
                  iVar1 = FUN_00545040(lVar8,lVar7,(long)(iVar2 - param_1));
                  if (iVar1 < 1) {
                    FUN_0051f420();
                    uVar5 = 0x225;
                    goto LAB_0042f0b4;
                  }
                }
                iVar1 = FUN_00545040(lVar8,param_2,(long)param_1);
                if (iVar1 < 1) {
                  FUN_0051f420();
                  uVar5 = 0x22a;
                }
                else {
                  local_90 = 0x20;
                  iVar1 = FUN_00545060(lVar8,local_68,&local_90);
                  if (0 < iVar1) goto LAB_0042ec77;
                  FUN_0051f420();
                  uVar5 = 0x230;
                }
              }
LAB_0042f0b4:
              uVar10 = 0xffffffff;
              FUN_0051f540("../crypto/rsa/rsa_ossl.c",uVar5,"rsa_ossl_private_decrypt");
              FUN_0051f8f0(4,0xc0103,0);
              goto LAB_0042ed34;
            }
            FUN_0051f420();
            uVar5 = 0x213;
          }
          FUN_0051f540("../crypto/rsa/rsa_ossl.c",uVar5,"rsa_ossl_private_decrypt");
          uVar5 = 0xc0103;
          goto LAB_0042f2d4;
        }
LAB_0042ec77:
        if (local_c8 == 0) {
LAB_0042eca9:
          uVar3 = FUN_004b87b0(lVar6,lVar7,iVar2);
          uVar10 = (ulong)uVar3;
          if (-1 < (int)uVar3) {
            if (local_dc == 4) {
              uVar3 = FUN_0056ccf0(param_3,iVar2,lVar7,uVar10,iVar2,0,0);
              uVar10 = (ulong)uVar3;
            }
            else if (local_dc < 5) {
              if (local_dc == 1) {
                uVar3 = FUN_00430570(*(undefined8 *)(param_4 + 8),param_3,iVar2,lVar7,uVar10,iVar2,
                                     local_68);
                uVar10 = (ulong)uVar3;
              }
              else {
                if (local_dc != 3) goto LAB_0042f0e0;
                thunk_FUN_00713a50(param_3,lVar7,(long)(int)uVar3);
              }
            }
            else {
              if (local_dc != 8) {
LAB_0042f0e0:
                FUN_0051f420();
                uVar10 = 0xffffffff;
                FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x24b,"rsa_ossl_private_decrypt");
                FUN_0051f8f0(4,0x76,0);
                goto LAB_0042ed34;
              }
              uVar3 = FUN_00430210(param_3,iVar2,lVar7,uVar10,iVar2);
              uVar10 = (ulong)uVar3;
            }
            FUN_0051f420();
            FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x254,"rsa_ossl_private_decrypt");
            FUN_0051f8f0(4,0x72,0);
            FUN_0051f240((uint)(uVar10 >> 0x1f) ^ 1);
            goto LAB_0042ed34;
          }
        }
        else {
          FUN_004b7e70(lVar6,4);
          iVar1 = FUN_004b19e0(lVar6,local_a8,local_c8,lVar4);
          if (iVar1 != 0) goto LAB_0042eca9;
        }
        uVar10 = 0xffffffff;
        goto LAB_0042ed34;
      }
    }
  }
LAB_0042ef44:
  local_d0 = 0;
  lVar8 = 0;
  uVar10 = 0xffffffff;
LAB_0042ed34:
  FUN_00545130(lVar8);
  FUN_00406a50(local_d0);
  FUN_004b2d50(lVar4);
  FUN_004b2b50(lVar4);
  FUN_0041aef0(lVar7,local_b8,"../crypto/rsa/rsa_ossl.c",0x25d);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar10;
}

