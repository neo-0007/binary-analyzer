
int FUN_00549660(long param_1,ulong param_2,ulong *param_3,undefined8 param_4,int param_5,
                int *param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  long local_58;
  long local_50;
  
  if (*param_6 == 1) {
    lVar4 = *(long *)(param_6 + 2);
    if (lVar4 != 0) {
      uVar3 = *(ulong *)(param_6 + 4);
      goto LAB_005496a1;
    }
LAB_0054976d:
    lVar4 = thunk_FUN_0041cdd0(param_4,"info");
    if (lVar4 == 0) {
LAB_0054978e:
      if (*param_6 == 2) {
        local_58 = FUN_00597e10(*(undefined8 *)(param_6 + 2),param_5);
        local_50 = *(long *)(param_6 + 4);
        if (local_58 == 0) {
          FUN_0051f420();
          uVar9 = 0x110;
          goto LAB_00549a46;
        }
LAB_0054982f:
        if ((param_2 == 0 || param_3 == (ulong *)0x0) || (param_1 == 0)) {
          FUN_0051f420();
          FUN_0051f540("../crypto/passphrase.c",0x80,"do_ui_passphrase");
          uVar9 = 0xc0102;
LAB_005499e4:
          FUN_0051f8f0(0xf,uVar9,0);
          FUN_00596cd0(local_58);
          return 0;
        }
        lVar5 = FUN_00595e60();
        if (lVar5 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/passphrase.c",0x85,"do_ui_passphrase");
          uVar9 = 0xc0100;
          goto LAB_005499e4;
        }
        FUN_00596bf0(lVar5);
        if (local_50 != 0) {
          FUN_005967e0(lVar5,local_50);
        }
        lVar6 = FUN_005965f0(lVar5,"pass phrase",lVar4);
        lVar4 = param_2 + 1;
        if (lVar6 == 0) {
          lVar7 = 0;
          iVar1 = 0;
          FUN_0051f420();
          FUN_0051f540("../crypto/passphrase.c",0x92,"do_ui_passphrase");
          FUN_0051f8f0(0xf,0xc0100,0);
          local_50 = 0;
        }
        else {
          local_50 = FUN_0041aec0(lVar4,"../crypto/passphrase.c",0x97);
          if (local_50 == 0) {
            FUN_0051f420();
            lVar7 = 0;
            iVar1 = 0;
            FUN_0051f540("../crypto/passphrase.c",0x99,"do_ui_passphrase");
            FUN_0051f8f0(0xf,0xc0100,0);
          }
          else {
            iVar1 = FUN_00595e70(lVar5,lVar6,2,local_50,0,param_2 & 0xffffffff);
            if (iVar1 + -1 < 0) {
              FUN_0051f420();
              iVar1 = 0;
              lVar7 = 0;
              FUN_0051f540("../crypto/passphrase.c",0xa1,"do_ui_passphrase");
              FUN_0051f8f0(0xf,0x80028,0);
            }
            else if (param_5 == 0) {
              lVar7 = 0;
LAB_0054990f:
              iVar2 = FUN_005968f0(lVar5);
              if (iVar2 == -2) {
                FUN_0051f420();
                iVar1 = 0;
                FUN_0051f540("../crypto/passphrase.c",0xb8,"do_ui_passphrase");
                FUN_0051f8f0(0xf,0x80109,0);
              }
              else {
                if (iVar2 == -1) {
                  FUN_0051f420();
                  uVar9 = 0xbb;
                }
                else {
                  iVar2 = FUN_00597000(lVar5,iVar1 + -1);
                  if (-1 < iVar2) {
                    iVar1 = 1;
                    *param_3 = (long)iVar2;
                    thunk_FUN_00713a50(param_1,local_50);
                    goto LAB_00549960;
                  }
                  FUN_0051f420();
                  uVar9 = 0xc0;
                }
LAB_00549ad0:
                iVar1 = 0;
                FUN_0051f540("../crypto/passphrase.c",uVar9,"do_ui_passphrase");
                FUN_0051f8f0(0xf,0x80028,0);
              }
            }
            else {
              lVar7 = FUN_0041aec0(lVar4,"../crypto/passphrase.c",0xa7);
              if (lVar7 != 0) {
                iVar2 = FUN_00595fe0(lVar5,lVar6,2,lVar7,0,param_2 & 0xffffffff);
                if (0 < iVar2) goto LAB_0054990f;
                FUN_0051f420();
                uVar9 = 0xb1;
                goto LAB_00549ad0;
              }
              FUN_0051f420();
              iVar1 = 0;
              FUN_0051f540("../crypto/passphrase.c",0xa9,"do_ui_passphrase");
              FUN_0051f8f0(0xf,0xc0100,0);
            }
          }
        }
LAB_00549960:
        FUN_0041aef0(lVar7,lVar4,"../crypto/passphrase.c",0xca);
        FUN_0041aef0(local_50,lVar4,"../crypto/passphrase.c",0xcb);
        FUN_0041ad60(lVar6,"../crypto/passphrase.c",0xcc);
        FUN_00595cd0(lVar5);
        FUN_00596cd0(local_58);
        goto LAB_005496ec;
      }
      if (*param_6 == 4) {
        local_50 = *(long *)(param_6 + 4);
        local_58 = 0;
        if (*(long *)(param_6 + 2) != 0) goto LAB_0054982f;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/passphrase.c",0x119,"ossl_pw_get_passphrase");
      pcVar8 = "No password method specified";
    }
    else {
      if (*(int *)(lVar4 + 8) == 4) {
        lVar4 = *(long *)(lVar4 + 0x10);
        goto LAB_0054978e;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/passphrase.c",0x100,"ossl_pw_get_passphrase");
      pcVar8 = "Prompt info data type incorrect";
    }
    iVar1 = 0;
    FUN_0051f8f0(0xf,0x80106,pcVar8);
  }
  else {
    if (((*(byte *)(param_6 + 6) & 1) != 0) && (lVar4 = *(long *)(param_6 + 8), lVar4 != 0)) {
      uVar3 = *(ulong *)(param_6 + 10);
LAB_005496a1:
      if (uVar3 < param_2) {
        param_2 = uVar3;
      }
      thunk_FUN_00713a50(param_1,lVar4,param_2);
      *param_3 = param_2;
      return 1;
    }
    if (*param_6 != 3) goto LAB_0054976d;
    iVar1 = (**(code **)(param_6 + 2))(param_1,param_2,param_3,param_4,*(undefined8 *)(param_6 + 4))
    ;
LAB_005496ec:
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(byte *)(param_6 + 6) & 1) == 0) {
      return iVar1;
    }
    lVar4 = *(long *)(param_6 + 8);
    uVar3 = *param_3;
    if ((lVar4 == 0) || (*(ulong *)(param_6 + 10) < uVar3)) {
      lVar4 = FUN_0041af40(lVar4,*(ulong *)(param_6 + 10),uVar3 + 1,"../crypto/passphrase.c",0x128);
      if (lVar4 == 0) {
        FUN_004227b0(param_1,*param_3);
        FUN_0051f420();
        uVar9 = 0x12e;
LAB_00549a46:
        FUN_0051f540("../crypto/passphrase.c",uVar9,"ossl_pw_get_passphrase");
        FUN_0051f8f0(0xf,0xc0100,0);
        return 0;
      }
      *(long *)(param_6 + 8) = lVar4;
      uVar3 = *param_3;
    }
    thunk_FUN_00713a50(lVar4,param_1,uVar3);
    *(undefined1 *)(*(long *)(param_6 + 8) + *param_3) = 0;
    *(ulong *)(param_6 + 10) = *param_3;
  }
  return iVar1;
}

