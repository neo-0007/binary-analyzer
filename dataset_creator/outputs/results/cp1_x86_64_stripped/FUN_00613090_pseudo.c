
long FUN_00613090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 uVar5;
  int iVar6;
  
  iVar1 = FUN_00436480(param_3);
  lVar3 = FUN_004363b0(0,iVar1);
  if (lVar3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_san.c",0x185,"v2i_subject_alt");
    FUN_0051f8f0(0x22,0xc0100,0);
    FUN_004360b0(0);
  }
  else {
    iVar6 = 0;
    if (0 < iVar1) {
      do {
        lVar4 = FUN_004364a0(param_3,iVar6);
        iVar2 = FUN_0059d800(*(undefined8 *)(lVar4 + 8),"email");
        uVar5 = extraout_RDX;
        if ((iVar2 == 0) && (*(long *)(lVar4 + 0x10) != 0)) {
          iVar2 = thunk_FUN_00712780(*(long *)(lVar4 + 0x10),"copy");
          uVar5 = 0;
          if (iVar2 != 0) goto LAB_006130e8;
          iVar2 = FUN_00611d00(param_2,lVar3);
joined_r0x00613187:
          if (iVar2 == 0) {
LAB_00613190:
            FUN_00436430(lVar3,FUN_0060e6f0);
            return 0;
          }
        }
        else {
LAB_006130e8:
          iVar2 = FUN_0059d800(*(undefined8 *)(lVar4 + 8),"email",uVar5);
          if (((iVar2 == 0) && (*(long *)(lVar4 + 0x10) != 0)) &&
             (iVar2 = thunk_FUN_00712780(*(long *)(lVar4 + 0x10),&DAT_0081bdd2), iVar2 == 0)) {
            iVar2 = FUN_00611d00(param_2,lVar3,1);
            goto joined_r0x00613187;
          }
          lVar4 = FUN_00612de0(param_1,param_2,lVar4);
          if (lVar4 == 0) goto LAB_00613190;
          FUN_00435f80(lVar3,lVar4);
        }
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
  }
  return lVar3;
}

