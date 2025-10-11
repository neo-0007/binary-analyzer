
long FUN_00612e00(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = FUN_00436480(param_3);
  lVar4 = FUN_004363b0(0,iVar1);
  if (lVar4 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_san.c",0x136,"v2i_issuer_alt");
    FUN_0051f8f0(0x22,0xc0100,0);
    FUN_004360b0(0);
  }
  else {
    iVar7 = 0;
    if (0 < iVar1) {
      do {
        while( true ) {
          lVar5 = FUN_004364a0(param_3,iVar7);
          iVar2 = FUN_0059d800(*(undefined8 *)(lVar5 + 8),"issuer");
          if (((iVar2 == 0) && (*(long *)(lVar5 + 0x10) != 0)) &&
             (iVar2 = thunk_FUN_00712780(*(long *)(lVar5 + 0x10),"copy"), iVar2 == 0)) break;
          lVar5 = FUN_00612de0(param_1,param_2,lVar5);
          if (lVar5 == 0) goto LAB_00612fd8;
          FUN_00435f80(lVar4,lVar5);
LAB_00612e7c:
          iVar7 = iVar7 + 1;
          if (iVar1 == iVar7) {
            return lVar4;
          }
        }
        if (param_2 == (uint *)0x0) {
LAB_00612fa8:
          FUN_0051f420();
          FUN_0051f540("../crypto/x509/v3_san.c",0x15b,"copy_issuer");
          FUN_0051f8f0(0x22,0x7f,0);
LAB_00612fd8:
          FUN_00436430(lVar4,FUN_0060e6f0);
          return 0;
        }
        if ((*param_2 & 1) != 0) goto LAB_00612e7c;
        if (*(long *)(param_2 + 2) == 0) goto LAB_00612fa8;
        iVar2 = FUN_0059f520(*(long *)(param_2 + 2),0x55,0xffffffff);
        if (iVar2 < 0) goto LAB_00612e7c;
        lVar5 = FUN_0059f550(*(undefined8 *)(param_2 + 2),iVar2);
        if ((lVar5 == 0) || (lVar5 = FUN_0060f430(lVar5), lVar5 == 0)) {
          FUN_0051f420();
          FUN_0051f540("../crypto/x509/v3_san.c",0x163,"copy_issuer");
          FUN_0051f8f0(0x22,0x7e,0);
          goto LAB_00612fd8;
        }
        iVar2 = FUN_00436480(lVar5);
        iVar3 = FUN_00435d40(lVar4,iVar2);
        if (iVar3 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/x509/v3_san.c",0x169,"copy_issuer");
          FUN_0051f8f0(0x22,0xc0100,0);
          goto LAB_00612fd8;
        }
        if (0 < iVar2) {
          iVar3 = 0;
          do {
            iVar8 = iVar3 + 1;
            uVar6 = FUN_004364a0(lVar5,iVar3);
            FUN_00435f80(lVar4,uVar6);
            iVar3 = iVar8;
          } while (iVar2 != iVar8);
        }
        iVar7 = iVar7 + 1;
        FUN_004360b0(lVar5);
      } while (iVar1 != iVar7);
    }
  }
  return lVar4;
}

