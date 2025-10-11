
long FUN_005a72a0(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0xa8) == 0) && (*(long *)(param_2 + 0xa8) == 0)) {
    lVar1 = 0;
    lVar6 = lVar1;
    if ((*(long *)(param_1 + 0xa0) == 0) || (*(long *)(param_2 + 0xa0) == 0)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/x509_vfy.c",0x7f4,"X509_CRL_diff");
      FUN_0051f8f0(0xb,0x82,0);
    }
    else {
      uVar4 = FUN_005a9850(param_2);
      uVar5 = FUN_005a9850(param_1);
      iVar2 = FUN_0059eab0(uVar5,uVar4);
      if (iVar2 == 0) {
        iVar2 = FUN_005a2c40(param_1,param_2,0x5a);
        if (iVar2 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/x509/x509_vfy.c",0x7ff,"X509_CRL_diff");
          FUN_0051f8f0(0xb,0x6e,0);
        }
        else {
          iVar2 = FUN_005a2c40(param_1,param_2,0x302);
          if (iVar2 == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/x509/x509_vfy.c",0x803,"X509_CRL_diff");
            FUN_0051f8f0(0xb,0x80,0);
          }
          else {
            iVar2 = FUN_0049f320(*(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_1 + 0xa0));
            if (iVar2 < 1) {
              FUN_0051f420();
              FUN_0051f540("../crypto/x509/x509_vfy.c",0x808,"X509_CRL_diff");
              FUN_0051f8f0(0xb,0x84,0);
            }
            else if ((param_3 == 0) ||
                    ((iVar2 = FUN_005ac010(param_1,param_3), 0 < iVar2 &&
                     (iVar2 = FUN_005ac010(param_2,param_3), 0 < iVar2)))) {
              lVar6 = FUN_005ac930(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
              if ((lVar6 != 0) && (iVar2 = FUN_005a96c0(lVar6,1), iVar2 != 0)) {
                uVar4 = FUN_005a9850(param_2);
                iVar2 = FUN_005a9720(lVar6,uVar4);
                if (iVar2 != 0) {
                  uVar4 = FUN_005a9810(param_2);
                  iVar2 = FUN_005a9740(lVar6,uVar4);
                  if (iVar2 != 0) {
                    uVar4 = FUN_005a9820(param_2);
                    iVar2 = FUN_005a9760(lVar6,uVar4);
                    if ((iVar2 != 0) &&
                       (iVar2 = FUN_0059f4e0(lVar6,0x8c,*(undefined8 *)(param_1 + 0xa0),1,0),
                       iVar2 != 0)) {
                      for (iVar2 = 0; iVar3 = FUN_0059f470(param_2), iVar2 < iVar3;
                          iVar2 = iVar2 + 1) {
                        uVar4 = FUN_0059f4b0(param_2,iVar2);
                        iVar3 = FUN_0059f4f0(lVar6,uVar4,0xffffffff);
                        if (iVar3 == 0) goto LAB_005a7530;
                      }
                      uVar4 = FUN_005a9870(param_2);
                      for (iVar2 = 0; iVar3 = FUN_00436480(uVar4), iVar2 < iVar3; iVar2 = iVar2 + 1)
                      {
                        uVar5 = FUN_004364a0(uVar4,iVar2);
                        iVar3 = FUN_005ac040(param_1,&local_48,uVar5);
                        if (iVar3 == 0) {
                          local_48 = FUN_005abe00(uVar5);
                          if (local_48 == 0) goto LAB_005a7530;
                          iVar3 = FUN_005abf80(lVar6,local_48);
                          if (iVar3 == 0) {
                            FUN_005abde0(local_48);
                            goto LAB_005a7530;
                          }
                        }
                      }
                      if (((param_3 == 0) || (param_4 == 0)) ||
                         (iVar2 = FUN_005aa6e0(lVar6,param_3), iVar2 != 0)) goto LAB_005a75a3;
                    }
                  }
                }
              }
LAB_005a7530:
              FUN_0051f420();
              FUN_0051f540("../crypto/x509/x509_vfy.c",0x84a,"X509_CRL_diff");
              FUN_0051f8f0(0xb,0xc0100,0);
              FUN_005abf40(lVar6);
              lVar6 = lVar1;
            }
            else {
              FUN_0051f420();
              FUN_0051f540("../crypto/x509/x509_vfy.c",0x80e,"X509_CRL_diff");
              FUN_0051f8f0(0xb,0x83,0);
            }
          }
        }
      }
      else {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/x509_vfy.c",0x7fa,"X509_CRL_diff");
        FUN_0051f8f0(0xb,0x81,0);
      }
    }
  }
  else {
    FUN_0051f420();
    lVar6 = 0;
    FUN_0051f540("../crypto/x509/x509_vfy.c",0x7ef,"X509_CRL_diff");
    FUN_0051f8f0(0xb,0x7f,0);
  }
LAB_005a75a3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar6;
}

