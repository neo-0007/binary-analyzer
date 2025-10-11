
long FUN_0060e210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  iVar6 = 0;
  lVar4 = FUN_0060e1d0();
  if (lVar4 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_crld.c",0x192,"v2i_idp");
    FUN_0051f8f0(0x22,0xc0100,0);
LAB_0060e318:
    FUN_0060e1f0(lVar4);
    lVar4 = 0;
  }
  else {
    for (; iVar3 = FUN_00436480(param_3), iVar6 < iVar3; iVar6 = iVar6 + 1) {
      lVar5 = FUN_004364a0(param_3,iVar6);
      uVar1 = *(undefined8 *)(lVar5 + 8);
      uVar2 = *(undefined8 *)(lVar5 + 0x10);
      iVar3 = FUN_0060db60(lVar4,param_2,lVar5);
      if (iVar3 < 1) {
        if (iVar3 != 0) goto LAB_0060e318;
        iVar3 = thunk_FUN_00712780(uVar1,"onlyuser");
        if (iVar3 == 0) {
          iVar3 = FUN_0059d2f0(lVar5,lVar4 + 8);
        }
        else {
          iVar3 = thunk_FUN_00712780(uVar1,"onlyCA");
          if (iVar3 != 0) {
            iVar3 = thunk_FUN_00712780(uVar1,"onlyAA");
            if (iVar3 == 0) {
              iVar3 = FUN_0059d2f0(lVar5,lVar4 + 0x1c);
            }
            else {
              iVar3 = thunk_FUN_00712780(uVar1,"indirectCRL");
              if (iVar3 != 0) {
                iVar3 = thunk_FUN_00712780(uVar1,"onlysomereasons");
                if (iVar3 == 0) {
                  iVar3 = FUN_0060d4b0(lVar4 + 0x10,uVar2);
                  goto joined_r0x0060e346;
                }
                FUN_0051f420();
                FUN_0051f540("../crypto/x509/v3_crld.c",0x18a,"v2i_idp");
                FUN_0051f8f0(0x22,0x6a,0);
                FUN_0051ef40(4,"name=",*(undefined8 *)(lVar5 + 8),", value=",
                             *(undefined8 *)(lVar5 + 0x10));
                goto LAB_0060e318;
              }
              iVar3 = FUN_0059d2f0(lVar5,lVar4 + 0x18);
            }
            if (iVar3 != 0) goto LAB_0060e2b0;
            goto LAB_0060e318;
          }
          iVar3 = FUN_0059d2f0(lVar5,lVar4 + 0xc);
        }
joined_r0x0060e346:
        if (iVar3 == 0) goto LAB_0060e318;
      }
LAB_0060e2b0:
    }
  }
  return lVar4;
}

