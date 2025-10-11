
long * FUN_0061e8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar6 = 0;
  plVar3 = (long *)FUN_0061e860();
  if (plVar3 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_ist.c",0x2a,"v2i_issuer_sign_tool");
    FUN_0051f8f0(0x22,0xc0100,0);
  }
  else {
    for (; iVar1 = FUN_00436480(param_3), iVar6 < iVar1; iVar6 = iVar6 + 1) {
      lVar4 = FUN_004364a0(param_3,iVar6);
      if (lVar4 != 0) {
        uVar7 = *(undefined8 *)(lVar4 + 8);
        iVar1 = thunk_FUN_00712780(uVar7,"signTool");
        if (iVar1 == 0) {
          lVar5 = FUN_004a78b0();
          *plVar3 = lVar5;
          if (lVar5 == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/x509/v3_ist.c",0x36,"v2i_issuer_sign_tool");
            uVar7 = 0xc0100;
            goto LAB_0061e9f0;
          }
        }
        else {
          iVar1 = thunk_FUN_00712780(uVar7,"cATool");
          if (iVar1 == 0) {
            lVar5 = FUN_004a78b0();
            plVar3[1] = lVar5;
            if (lVar5 == 0) {
              FUN_0051f420();
              FUN_0051f540("../crypto/x509/v3_ist.c",0x3e,"v2i_issuer_sign_tool");
              uVar7 = 0xc0100;
              goto LAB_0061e9f0;
            }
          }
          else {
            iVar1 = thunk_FUN_00712780(uVar7,"signToolCert");
            if (iVar1 != 0) {
              iVar1 = thunk_FUN_00712780(uVar7,"cAToolCert");
              if (iVar1 != 0) {
                FUN_0051f420();
                FUN_0051f540("../crypto/x509/v3_ist.c",0x54,"v2i_issuer_sign_tool");
                uVar7 = 0x80106;
LAB_0061e9f0:
                FUN_0051f8f0(0x22,uVar7,0);
                FUN_0061e880(plVar3);
                return (long *)0x0;
              }
              lVar5 = FUN_004a78b0();
              plVar3[3] = lVar5;
              if (lVar5 == 0) {
                FUN_0051f420();
                FUN_0051f540("../crypto/x509/v3_ist.c",0x4e,"v2i_issuer_sign_tool");
                uVar7 = 0xc0100;
                goto LAB_0061e9f0;
              }
              uVar7 = *(undefined8 *)(lVar4 + 0x10);
              uVar2 = thunk_FUN_007129d0(uVar7);
              FUN_004a1fa0(lVar5,uVar7,uVar2);
              goto LAB_0061e947;
            }
            lVar5 = FUN_004a78b0();
            plVar3[2] = lVar5;
            if (lVar5 == 0) {
              FUN_0051f420();
              FUN_0051f540("../crypto/x509/v3_ist.c",0x46,"v2i_issuer_sign_tool");
              uVar7 = 0xc0100;
              goto LAB_0061e9f0;
            }
          }
        }
        uVar7 = *(undefined8 *)(lVar4 + 0x10);
        uVar2 = thunk_FUN_007129d0(uVar7);
        FUN_004a1fa0(lVar5,uVar7,uVar2);
      }
LAB_0061e947:
    }
  }
  return plVar3;
}

