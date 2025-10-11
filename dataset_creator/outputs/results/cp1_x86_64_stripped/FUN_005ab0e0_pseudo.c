
long FUN_005ab0e0(long param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  int local_a8;
  int local_a4;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  undefined1 local_98 [8];
  ulong local_90;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (long *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0) {
    FUN_0051f420();
    lVar4 = 0;
    FUN_0051f540("../crypto/x509/x_all.c",0x1c5,"X509_digest_sig");
    FUN_0051f8f0(0xb,0xc0102,0);
    goto LAB_005ab207;
  }
  uVar1 = FUN_005b0880(param_1);
  iVar2 = FUN_00424c50(uVar1,&local_a8,&local_a4);
  if (iVar2 == 0) {
    FUN_0051f420();
    lVar4 = 0;
    FUN_0051f540("../crypto/x509/x_all.c",0x1ca,"X509_digest_sig");
    FUN_0051f8f0(0xb,0x90,0);
    goto LAB_005ab207;
  }
  if (local_a8 == 0) {
    if (local_a4 == 0x390) {
      lVar4 = FUN_0042b160(param_1 + 0x88);
      local_90 = 0;
      if (((lVar4 == 0) ||
          (iVar2 = FUN_0042b1b0(lVar4,&local_90,local_98,local_a0,local_9c), iVar2 == 0)) ||
         (local_90 == 0)) {
        FUN_0056a4a0(lVar4);
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/x_all.c",0x1da,"X509_digest_sig");
        FUN_0051f8f0(0xb,0x6f,0);
      }
      else {
        FUN_0056a4a0(lVar4);
        uVar7 = *(undefined8 *)(param_1 + 0x178);
        uVar5 = FUN_0040ab30(local_90);
        lVar3 = FUN_004069d0(*(undefined8 *)(param_1 + 0x170),uVar5,uVar7);
        if (lVar3 != 0) goto LAB_005ab1c0;
      }
    }
    else {
      if (local_a4 == 0) {
        FUN_0051f420();
        uVar7 = 0x1f7;
LAB_005ab2a8:
        lVar4 = 0;
        FUN_0051f540("../crypto/x509/x_all.c",uVar7,"X509_digest_sig");
        FUN_0051f8f0(0xb,0x6f,0);
        goto LAB_005ab207;
      }
      pcVar6 = "SHA512";
      if ((local_a4 != 0x43f) && (pcVar6 = "SHA256", local_a4 == 0x440)) {
        pcVar6 = "SHAKE256";
      }
      lVar3 = FUN_004069d0(*(undefined8 *)(param_1 + 0x170),pcVar6,*(undefined8 *)(param_1 + 0x178))
      ;
      if (lVar3 != 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 1;
        }
        goto LAB_005ab1c0;
      }
    }
    lVar4 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x178);
    uVar5 = FUN_00423b00();
    lVar3 = FUN_004069d0(*(undefined8 *)(param_1 + 0x170),uVar5,uVar7);
    if (lVar3 == 0) {
      uVar7 = FUN_00423b00(local_a8);
      lVar3 = FUN_0040d800(uVar7);
      if (lVar3 == 0) {
        FUN_0051f420();
        uVar7 = 0x1fd;
        goto LAB_005ab2a8;
      }
    }
LAB_005ab1c0:
    iVar2 = FUN_005ab010(param_1,lVar3,local_88,&local_90);
    if ((iVar2 != 0) && (lVar4 = FUN_004a7670(), lVar4 != 0)) {
      iVar2 = thunk_FUN_004a1fa0(lVar4,local_88,local_90 & 0xffffffff);
      if (iVar2 != 0) {
        if (param_2 == (long *)0x0) {
          FUN_00406a50(lVar3);
        }
        else {
          *param_2 = lVar3;
        }
        goto LAB_005ab207;
      }
      thunk_FUN_004a2270(lVar4);
    }
    lVar4 = 0;
    FUN_00406a50(lVar3);
  }
LAB_005ab207:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar4;
}

