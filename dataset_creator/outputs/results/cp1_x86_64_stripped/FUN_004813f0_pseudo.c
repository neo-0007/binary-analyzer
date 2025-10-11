
undefined4
FUN_004813f0(long param_1,long param_2,ulong *param_3,ulong param_4,undefined8 param_5,ulong param_6
            )

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  uVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = FUN_0056b040(*(undefined8 *)(param_1 + 0x10));
  uVar8 = (ulong)iVar4;
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar4 = FUN_0040ac10();
    uVar10 = (ulong)iVar4;
  }
  iVar4 = FUN_0043b840();
  if (iVar4 != 0) {
    if (param_2 == 0) {
LAB_0048154b:
      uVar5 = 1;
      *param_3 = uVar8;
      goto LAB_004814fb;
    }
    if (param_4 < uVar8) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x213,"rsa_sign");
      FUN_0051f8f0(0x39,0xb3,"is %zu, should be at least %zu",param_4,uVar8);
    }
    else {
      if (uVar10 == 0) {
        iVar4 = FUN_0056b080(param_6 & 0xffffffff,param_5,param_2,*(undefined8 *)(param_1 + 0x10),
                             *(undefined4 *)(param_1 + 0x68));
        uVar8 = (ulong)iVar4;
LAB_00481543:
        if (0 < (int)uVar8) goto LAB_0048154b;
        FUN_0051f420();
        uVar9 = 0x28c;
      }
      else {
        if (param_6 != uVar10) {
          FUN_0051f420();
          uVar5 = 0;
          FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x21a,"rsa_sign");
          FUN_0051f8f0(0x39,0xa6,0);
          goto LAB_004814fb;
        }
        iVar4 = FUN_0040ab70(*(undefined8 *)(param_1 + 0x20),&DAT_007d027f);
        if (iVar4 == 0) {
          iVar4 = *(int *)(param_1 + 0x68);
          uVar5 = 0;
          if (iVar4 != 5) {
            if (iVar4 == 6) {
              iVar4 = *(int *)(param_1 + 0xb4);
              if (iVar4 != -1) {
                iVar6 = *(int *)(param_1 + 0xb0);
                if (iVar6 == -1) {
                  iVar6 = FUN_0040ac10(*(undefined8 *)(param_1 + 0x20));
                  if (iVar6 < iVar4) {
                    FUN_0051f420();
                    FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x259,"rsa_sign"
                                );
                    uVar7 = FUN_0040ac10(*(undefined8 *)(param_1 + 0x20));
                    FUN_0051f8f0(0x39,0xac,
                                 "minimum salt length set to %d, but the digest only gives %d",
                                 *(undefined4 *)(param_1 + 0xb4),uVar7);
                    goto LAB_004814fb;
                  }
                  iVar6 = *(int *)(param_1 + 0xb0);
                }
                if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0xb4))) {
                  FUN_0051f420();
                  FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x265,"rsa_sign");
                  FUN_0051f8f0(0x39,0xac,
                               "minimum salt length set to %d, but theactual salt length is only set to %d"
                               ,*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb0));
                  goto LAB_004814fb;
                }
              }
              iVar4 = FUN_004802c0(param_1);
              if (iVar4 == 0) goto LAB_004814f8;
              iVar4 = FUN_00432d70(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xb8),
                                   param_5,*(undefined8 *)(param_1 + 0x20),
                                   *(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0xb0));
              if (iVar4 != 0) {
                uVar9 = *(undefined8 *)(param_1 + 0x10);
                uVar1 = *(undefined8 *)(param_1 + 0xb8);
                uVar5 = FUN_0056b040(uVar9);
                iVar4 = FUN_0056b080(uVar5,uVar1,param_2,uVar9,3);
                lVar2 = *(long *)(param_1 + 0xb8);
                goto joined_r0x00481838;
              }
              FUN_0051f420();
              uVar9 = 0x276;
            }
            else {
              if (iVar4 != 1) {
                FUN_0051f420();
                FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x27f,"rsa_sign");
                FUN_0051f8f0(0x39,0xa8,"Only X.931, PKCS#1 v1.5 or PSS padding allowed");
                goto LAB_004814fb;
              }
              iVar4 = FUN_00433b20(*(undefined4 *)(param_1 + 0x30),param_5,param_6 & 0xffffffff,
                                   param_2,&local_44,*(undefined8 *)(param_1 + 0x10));
              uVar8 = (ulong)local_44;
              if (0 < iVar4) goto LAB_00481543;
              FUN_0051f420();
              uVar9 = 0x24c;
            }
            uVar5 = 0;
            FUN_0051f540("../providers/implementations/signature/rsa_sig.c",uVar9,"rsa_sign");
            FUN_0051f8f0(0x39,0x80004,0);
            goto LAB_004814fb;
          }
          iVar4 = FUN_0056b040(*(undefined8 *)(param_1 + 0x10));
          if ((ulong)(long)iVar4 < param_6 + 1) {
            FUN_0051f420();
            FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x235,"rsa_sign");
            uVar7 = FUN_0056b040(*(undefined8 *)(param_1 + 0x10));
            FUN_0051f8f0(0x39,0xab,"RSA key size = %d, expected minimum = %d",uVar7,param_6 + 1);
            goto LAB_004814fb;
          }
          iVar4 = FUN_004802c0(param_1);
          if (iVar4 == 0) {
            FUN_0051f420();
            FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x23b,"rsa_sign");
            FUN_0051f8f0(0x39,0xc0100,0);
            uVar5 = 0;
            goto LAB_004814fb;
          }
          thunk_FUN_00713a50(*(undefined8 *)(param_1 + 0xb8),param_5,param_6);
          uVar3 = FUN_00434500(*(undefined4 *)(param_1 + 0x30));
          *(undefined1 *)(*(long *)(param_1 + 0xb8) + param_6) = uVar3;
          iVar4 = FUN_0056b080((int)param_6 + 1,*(undefined8 *)(param_1 + 0xb8),param_2,
                               *(undefined8 *)(param_1 + 0x10),5);
          lVar2 = *(long *)(param_1 + 0xb8);
joined_r0x00481838:
          uVar8 = (ulong)iVar4;
          if (lVar2 != 0) {
            iVar4 = FUN_0056b040(*(undefined8 *)(param_1 + 0x10));
            FUN_004227b0(*(undefined8 *)(param_1 + 0xb8),(long)iVar4);
          }
          goto LAB_00481543;
        }
        if (*(int *)(param_1 + 0x68) != 1) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x223,"rsa_sign");
          FUN_0051f8f0(0x39,0xa8,"only PKCS#1 padding supported with MDC2");
          goto LAB_004814f8;
        }
        iVar4 = FUN_004333e0(0,param_5,param_6 & 0xffffffff,param_2,&local_44,
                             *(undefined8 *)(param_1 + 0x10));
        uVar8 = (ulong)local_44;
        if (0 < iVar4) goto LAB_00481543;
        FUN_0051f420();
        uVar9 = 0x22b;
      }
      FUN_0051f540("../providers/implementations/signature/rsa_sig.c",uVar9,"rsa_sign");
      FUN_0051f8f0(0x39,0x80004,0);
    }
  }
LAB_004814f8:
  uVar5 = 0;
LAB_004814fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

