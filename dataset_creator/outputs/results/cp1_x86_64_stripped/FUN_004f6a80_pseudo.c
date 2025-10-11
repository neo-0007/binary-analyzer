
long * FUN_004f6a80(undefined8 param_1,int param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  long local_80;
  int local_68;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  lVar3 = FUN_004ee2d0(param_5);
  lVar4 = FUN_004ee2e0(param_5);
  if (lVar3 == 0) {
    FUN_0051f420();
    plVar5 = (long *)0x0;
    FUN_0051f540("../crypto/ec/ecdsa_ossl.c",0xd1,"ossl_ecdsa_simple_sign_sig");
    FUN_0051f8f0(0x10,0xc0102,0);
    goto LAB_004f6d63;
  }
  if (lVar4 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ecdsa_ossl.c",0xd5,"ossl_ecdsa_simple_sign_sig");
    FUN_0051f8f0(0x10,0x7d,0);
    plVar5 = (long *)0x0;
    goto LAB_004f6d63;
  }
  iVar1 = FUN_004eed80(param_5);
  if (iVar1 == 0) {
    FUN_0051f420();
    plVar5 = (long *)0x0;
    FUN_0051f540("../crypto/ec/ecdsa_ossl.c",0xda,"ossl_ecdsa_simple_sign_sig");
    FUN_0051f8f0(0x10,0x9f,0);
    goto LAB_004f6d63;
  }
  plVar5 = (long *)FUN_004eac60();
  if (plVar5 == (long *)0x0) {
    FUN_0051f420();
    plVar5 = (long *)0x0;
    FUN_0051f540("../crypto/ec/ecdsa_ossl.c",0xe0,"ossl_ecdsa_simple_sign_sig");
    FUN_0051f8f0(0x10,0xc0100,0);
    goto LAB_004f6d63;
  }
  lVar6 = FUN_004b7690();
  *plVar5 = lVar6;
  lVar6 = FUN_004b7690();
  plVar5[1] = lVar6;
  if ((*plVar5 == 0) || (lVar6 == 0)) {
    FUN_0051f420();
    lVar9 = 0;
    lVar7 = 0;
    FUN_0051f540("../crypto/ec/ecdsa_ossl.c",0xe6,"ossl_ecdsa_simple_sign_sig");
    FUN_0051f8f0(0x10,0xc0100,0);
    local_80 = 0;
  }
  else {
    lVar7 = FUN_004b2a70(*(undefined8 *)(param_5 + 0x58));
    if ((lVar7 == 0) || (local_80 = FUN_004b7690(), local_80 == 0)) {
      FUN_0051f420();
      lVar9 = 0;
      FUN_0051f540("../crypto/ec/ecdsa_ossl.c",0xed,"ossl_ecdsa_simple_sign_sig");
      FUN_0051f8f0(0x10,0xc0100,0);
      local_80 = 0;
    }
    else {
      uVar8 = FUN_004ef7e0(lVar3);
      uVar2 = FUN_004b7bb0(uVar8);
      if ((int)uVar2 < param_2 * 8) {
        local_68 = uVar2 + 0xe;
        if (-1 < (int)(uVar2 + 7)) {
          local_68 = uVar2 + 7;
        }
        local_68 = local_68 >> 3;
        lVar9 = FUN_004b84d0(param_1,local_68,local_80);
        if (lVar9 == 0) goto LAB_004f7010;
        if ((local_68 * 8 <= (int)uVar2) ||
           (iVar1 = FUN_004bc3b0(local_80,local_80,8 - (uVar2 & 7)), iVar1 != 0)) goto LAB_004f6ba3;
        FUN_0051f420();
        uVar8 = 0xfe;
      }
      else {
        lVar9 = FUN_004b84d0(param_1,param_2,local_80);
        local_68 = param_2;
        if (lVar9 != 0) {
LAB_004f6ba3:
          do {
            if (param_3 == 0 || param_4 == 0) {
              iVar1 = FUN_004f6420(param_5,lVar7,&local_48,plVar5,param_1,local_68);
              lVar9 = local_48;
              if (iVar1 == 0) {
                FUN_0051f420();
                FUN_0051f540("../crypto/ec/ecdsa_ossl.c",0x104,"ossl_ecdsa_simple_sign_sig");
                FUN_0051f8f0(0x10,0x8002a,0);
                lVar9 = local_48;
                goto LAB_004f6d3e;
              }
            }
            else {
              lVar10 = FUN_004b8260(*plVar5,param_4);
              lVar9 = param_3;
              if (lVar10 == 0) {
                FUN_0051f420();
                FUN_0051f540("../crypto/ec/ecdsa_ossl.c",0x10b,"ossl_ecdsa_simple_sign_sig");
                FUN_0051f8f0(0x10,0xc0100,0);
                lVar9 = local_48;
                goto LAB_004f6d3e;
              }
            }
            iVar1 = FUN_004b9720(lVar6,*plVar5,*(undefined8 *)(lVar3 + 0x90),lVar7);
            if ((iVar1 == 0) ||
               (iVar1 = FUN_004b9520(lVar6,lVar6,lVar4,*(undefined8 *)(lVar3 + 0x90),lVar7),
               iVar1 == 0)) {
              FUN_0051f420();
              uVar8 = 0x119;
LAB_004f6f61:
              FUN_0051f540("../crypto/ec/ecdsa_ossl.c",uVar8,"ossl_ecdsa_simple_sign_sig");
              FUN_0051f8f0(0x10,0x80003,0);
              lVar9 = local_48;
              goto LAB_004f6d3e;
            }
            iVar1 = FUN_004b8ae0(lVar6,lVar6,local_80,uVar8);
            if (iVar1 == 0) {
              FUN_0051f420();
              uVar8 = 0x11d;
              goto LAB_004f6f61;
            }
            iVar1 = FUN_004b9720(lVar6,lVar6,*(undefined8 *)(lVar3 + 0x90),lVar7);
            if ((iVar1 == 0) ||
               (iVar1 = FUN_004b9650(lVar6,lVar6,lVar9,*(undefined8 *)(lVar3 + 0x90),lVar7),
               iVar1 == 0)) {
              FUN_0051f420();
              uVar8 = 0x126;
              goto LAB_004f6f61;
            }
            iVar1 = FUN_004b7ba0(lVar6);
            lVar9 = local_48;
            if (iVar1 == 0) goto LAB_004f6d49;
          } while ((param_3 == 0) || (param_4 == 0));
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ecdsa_ossl.c",0x130,"ossl_ecdsa_simple_sign_sig");
          FUN_0051f8f0(0x10,0x9d,0);
          lVar9 = local_48;
          goto LAB_004f6d3e;
        }
LAB_004f7010:
        FUN_0051f420();
        uVar8 = 0xf9;
      }
      lVar9 = 0;
      FUN_0051f540("../crypto/ec/ecdsa_ossl.c",uVar8,"ossl_ecdsa_simple_sign_sig");
      FUN_0051f8f0(0x10,0x80003,0);
    }
  }
LAB_004f6d3e:
  FUN_004eace0(plVar5);
  plVar5 = (long *)0x0;
LAB_004f6d49:
  FUN_004b2b50(lVar7);
  FUN_004b7f20(local_80);
  FUN_004b7f20(lVar9);
LAB_004f6d63:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return plVar5;
}

