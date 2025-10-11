
long FUN_004d7e60(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  undefined8 local_58;
  int *local_50;
  undefined8 local_48;
  long local_40;
  
  lVar3 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_004a2cd0(0,local_60,&local_68,&local_48,param_1);
  if (iVar1 == 0) goto LAB_004d7f51;
  FUN_004a8930(0,&local_64,&local_50,local_48);
  lVar2 = FUN_004a76a0(0,local_60,(long)local_68);
  if (((lVar2 == 0) || (*(int *)(lVar2 + 4) == 0x102)) || (local_64 != 0x10)) {
LAB_004d7eea:
    FUN_0051f420();
    lVar3 = 0;
    lVar6 = 0;
    lVar4 = 0;
    lVar5 = 0;
    FUN_0051f540("../crypto/dsa/dsa_backend.c",0xb5,"ossl_dsa_key_from_pkcs8");
    FUN_0051f8f0(10,0x68,0);
LAB_004d7f26:
    FUN_004b7fa0(lVar4);
    FUN_004b7fa0(lVar5);
    FUN_004d8960(lVar3);
    lVar3 = 0;
  }
  else {
    local_58 = *(undefined8 *)(local_50 + 2);
    lVar3 = FUN_004d7be0(0,&local_58,(long)*local_50);
    if (lVar3 == 0) goto LAB_004d7eea;
    lVar4 = FUN_004b7700();
    if (lVar4 == 0) {
LAB_004d80b0:
      FUN_0051f420();
      lVar6 = 0;
      lVar5 = 0;
      FUN_0051f540("../crypto/dsa/dsa_backend.c",0x9c,"ossl_dsa_key_from_pkcs8");
      FUN_0051f8f0(10,0x6d,0);
      goto LAB_004d7f26;
    }
    lVar5 = FUN_0049fa70(lVar2,lVar4);
    if (lVar5 == 0) goto LAB_004d80b0;
    lVar5 = FUN_004b7690();
    if (lVar5 == 0) {
      FUN_0051f420();
      lVar6 = 0;
      FUN_0051f540("../crypto/dsa/dsa_backend.c",0xa1,"ossl_dsa_key_from_pkcs8");
      FUN_0051f8f0(10,0xc0100,0);
      goto LAB_004d7f26;
    }
    lVar6 = FUN_004b2b10();
    if (lVar6 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dsa/dsa_backend.c",0xa5,"ossl_dsa_key_from_pkcs8");
      FUN_0051f8f0(10,0xc0100,0);
      goto LAB_004d7f26;
    }
    uVar7 = FUN_004d8d30(lVar3);
    uVar8 = FUN_004d8d50(lVar3);
    FUN_004b7e70(lVar4,4);
    iVar1 = FUN_004b5a10(lVar5,uVar8,lVar4,uVar7,lVar6);
    if (iVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dsa/dsa_backend.c",0xad,"ossl_dsa_key_from_pkcs8");
      FUN_0051f8f0(10,0x6d,0);
      goto LAB_004d7f26;
    }
    FUN_004d8da0(lVar3,lVar5,lVar4);
  }
  FUN_004b2b50(lVar6);
  FUN_004a2300(lVar2);
LAB_004d7f51:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

