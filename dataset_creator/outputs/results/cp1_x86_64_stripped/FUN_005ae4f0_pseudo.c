
undefined8 FUN_005ae4f0(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x_pubkey.c",0x142,"X509_PUBKEY_set");
    FUN_0051f8f0(0xb,0xc0102,0);
    uVar5 = 0;
    goto LAB_005ae59b;
  }
  if (*(long *)(param_2 + 8) == 0) {
    if (*(long *)(param_2 + 0x60) != 0) {
      local_48 = 0;
      local_40 = 0;
      uVar5 = FUN_00518970(param_2,0x86,"DER","SubjectPublicKeyInfo",0);
      iVar3 = FUN_00517380(uVar5,&local_48,&local_40);
      if (iVar3 == 0) {
        FUN_00518590(uVar5);
        FUN_0041ad60(local_48,"../crypto/x509/x_pubkey.c",0x163);
      }
      else {
        local_38 = local_48;
        lVar4 = FUN_005ae210(0,&local_38,local_40);
        FUN_00518590(uVar5);
        FUN_0041ad60(local_48,"../crypto/x509/x_pubkey.c",0x163);
        if (lVar4 != 0) goto LAB_005ae567;
      }
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x_pubkey.c",0x167,"X509_PUBKEY_set");
    FUN_0051f8f0(0xb,0x6f,0);
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_005ae270();
    if (lVar4 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/x_pubkey.c",0x148,"X509_PUBKEY_set");
      FUN_0051f8f0(0xb,0xc0100,0);
    }
    else {
      pcVar1 = *(code **)(*(long *)(param_2 + 8) + 0x28);
      if (pcVar1 == (code *)0x0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/x_pubkey.c",0x151,"X509_PUBKEY_set");
        FUN_0051f8f0(0xb,0x7c,0);
      }
      else {
        iVar3 = (*pcVar1)(lVar4,param_2);
        if (iVar3 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/x509/x_pubkey.c",0x14d,"X509_PUBKEY_set");
          FUN_0051f8f0(0xb,0x7e,0);
        }
        else {
LAB_005ae567:
          FUN_005ae290(*param_1);
          iVar3 = FUN_0040ed80(param_2);
          if (iVar3 != 0) {
            lVar2 = *(long *)(lVar4 + 0x10);
            *param_1 = lVar4;
            if (lVar2 != 0) {
              FUN_0040f4f0();
            }
            *(long *)(lVar4 + 0x10) = param_2;
            uVar5 = 1;
            goto LAB_005ae59b;
          }
          FUN_0051f420();
          FUN_0051f540("../crypto/x509/x_pubkey.c",0x16d,"X509_PUBKEY_set");
          FUN_0051f8f0(0xb,0xc0103,0);
        }
      }
    }
  }
  FUN_005ae290(lVar4);
  uVar5 = 0;
LAB_005ae59b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar5;
}

