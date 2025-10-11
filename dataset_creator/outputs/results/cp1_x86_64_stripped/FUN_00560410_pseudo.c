
int FUN_00560410(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long in_FS_OFFSET;
  int local_9c;
  long local_98;
  undefined8 local_90;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = FUN_00561260(param_2);
  uVar5 = FUN_005614d0(uVar4);
  uVar4 = FUN_005614f0(uVar4);
  lVar6 = FUN_00405f40();
  if (lVar6 == 0) {
    FUN_0051f420();
    lVar8 = 0;
    iVar2 = 0;
    FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x40f,"PKCS7_signatureVerify");
    FUN_0051f8f0(0x21,0xc0100,0);
  }
  else {
    iVar2 = FUN_00423da0(*(undefined8 *)(param_2 + 0x18));
    if ((iVar2 == 0x16) || (iVar2 = FUN_00423da0(*(undefined8 *)(param_2 + 0x18)), iVar2 == 0x18)) {
      iVar3 = FUN_00423da0(**(undefined8 **)(param_3 + 0x10));
      if (param_1 != 0) {
        do {
          lVar8 = FUN_004ac3f0(param_1,0x208);
          if (lVar8 == 0) break;
          FUN_004abd40(lVar8,0x78,0,&local_98);
          if (local_98 == 0) {
            FUN_0051f420();
            iVar2 = 0;
            FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x423,"PKCS7_signatureVerify");
            FUN_0051f8f0(0x21,0xc0103,0);
            lVar8 = 0;
            goto LAB_0056056e;
          }
          uVar7 = FUN_0040b020(local_98);
          iVar2 = FUN_0040aaf0(uVar7);
          if (iVar2 == iVar3) {
LAB_005605b0:
            lVar8 = 0;
            iVar2 = FUN_004074f0(lVar6,local_98);
            if (iVar2 == 0) goto LAB_0056056e;
            lVar9 = *(long *)(param_3 + 0x18);
            if ((lVar9 != 0) && (iVar2 = FUN_00436480(lVar9), iVar2 != 0)) {
              local_90 = 0;
              iVar2 = FUN_00406090(lVar6,local_88,&local_9c);
              if (iVar2 == 0) goto LAB_0056056e;
              piVar10 = (int *)FUN_005603d0(lVar9);
              if (piVar10 == (int *)0x0) {
                FUN_0051f420();
                iVar2 = 0;
                FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x443,"PKCS7_signatureVerify");
                FUN_0051f8f0(0x21,0x6c,0);
                lVar8 = 0;
                goto LAB_0056056e;
              }
              if ((*piVar10 != local_9c) ||
                 (iVar2 = thunk_FUN_00713570(*(undefined8 *)(piVar10 + 2),local_88,local_9c),
                 iVar2 != 0)) {
                FUN_0051f420();
                lVar8 = 0;
                iVar2 = -1;
                FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x448,"PKCS7_signatureVerify");
                FUN_0051f8f0(0x21,0x65,0);
                goto LAB_0056056e;
              }
              FUN_0051f000();
              uVar7 = FUN_00423b00(iVar3);
              lVar8 = FUN_004069d0(uVar5,uVar7,uVar4);
              lVar11 = lVar8;
              if (lVar8 == 0) {
                uVar7 = FUN_00423b00(iVar3,0);
                lVar11 = FUN_0040d800(uVar7);
                if (lVar11 != 0) goto LAB_0056079a;
              }
              else {
LAB_0056079a:
                iVar2 = FUN_00407430(lVar6,lVar11,0);
                if (iVar2 != 0) {
                  FUN_0051f050();
                  uVar7 = FUN_0055dda0();
                  iVar2 = FUN_004a6000(lVar9,&local_90,uVar7);
                  if (iVar2 < 1) {
                    FUN_0051f420();
                    iVar2 = -1;
                    FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x45e,"PKCS7_signatureVerify");
                    FUN_0051f8f0(0x21,0x8000d,0);
                  }
                  else {
                    iVar2 = FUN_00405f60(lVar6,local_90,(long)iVar2);
                    if (iVar2 != 0) {
                      FUN_0041ad60(local_90,"../crypto/pkcs7/pk7_doit.c",0x465);
                      goto LAB_005605e2;
                    }
                  }
                  goto LAB_0056056e;
                }
              }
              FUN_0051f1a0();
              iVar2 = 0;
              goto LAB_0056056e;
            }
            lVar8 = 0;
LAB_005605e2:
            puVar1 = *(undefined4 **)(param_3 + 0x28);
            iVar2 = -1;
            lVar9 = FUN_0059ef80(param_4);
            if (lVar9 != 0) {
              iVar2 = 1;
              iVar3 = FUN_005fe6f0(lVar6,*(undefined8 *)(puVar1 + 2),*puVar1,lVar9,uVar5,uVar4);
              if (iVar3 < 1) {
                FUN_0051f420();
                iVar2 = -1;
                FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x471,"PKCS7_signatureVerify");
                FUN_0051f8f0(0x21,0x69,0);
              }
            }
            goto LAB_0056056e;
          }
          uVar7 = FUN_0040b020(local_98);
          iVar2 = FUN_0040abb0(uVar7);
          if (iVar2 == iVar3) goto LAB_005605b0;
          param_1 = FUN_004ac470(lVar8);
        } while (param_1 != 0);
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x41e,"PKCS7_signatureVerify");
      uVar4 = 0x6c;
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x414,"PKCS7_signatureVerify");
      uVar4 = 0x72;
    }
    iVar2 = 0;
    lVar8 = 0;
    FUN_0051f8f0(0x21,uVar4,0);
  }
LAB_0056056e:
  FUN_00406b90(lVar6);
  FUN_00406a50(lVar8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar2;
}

