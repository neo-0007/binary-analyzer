
undefined4 FUN_00555740(char *param_1,long *param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  
  *param_2 = 0;
  *(undefined1 (*) [16])(param_2 + 1) = (undefined1  [16])0x0;
  if (((param_1 == (char *)0x0) || (*param_1 == '\n')) || (*param_1 == '\0')) {
LAB_00555960:
    uVar9 = 1;
  }
  else {
    iVar3 = thunk_FUN_00712ab0(param_1,"Proc-Type:",10);
    if (iVar3 != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pem/pem_lib.c",0x1f6,"PEM_get_EVP_CIPHER_INFO");
      FUN_0051f8f0(9,0x6b,0);
      return 0;
    }
    lVar5 = thunk_FUN_00712c40(param_1 + 10,&DAT_00806cb5);
    pcVar7 = param_1 + 10 + lVar5;
    uVar9 = 0;
    if (*pcVar7 != '4') {
      return 0;
    }
    if (pcVar7[1] != ',') {
      return 0;
    }
    pcVar7 = pcVar7 + 2;
    lVar5 = thunk_FUN_00712c40(pcVar7,&DAT_00806cb5);
    iVar3 = thunk_FUN_00712ab0(pcVar7 + lVar5,"ENCRYPTED",9);
    if (iVar3 == 0) {
      pcVar7 = pcVar7 + lVar5 + 9;
      lVar5 = thunk_FUN_00712c40(pcVar7,&DAT_00806cb8);
      if (lVar5 != 0) {
        lVar5 = thunk_FUN_00712c40(pcVar7,&DAT_00806cbd);
        pcVar7 = pcVar7 + lVar5;
        if (*pcVar7 != '\n') {
          FUN_0051f420();
          FUN_0051f540("../crypto/pem/pem_lib.c",0x209,"PEM_get_EVP_CIPHER_INFO");
          FUN_0051f8f0(9,0x70,0);
          return 0;
        }
        iVar3 = thunk_FUN_00712ab0(pcVar7 + 1,"DEK-Info:",9);
        if (iVar3 != 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/pem/pem_lib.c",0x212,"PEM_get_EVP_CIPHER_INFO");
          FUN_0051f8f0(9,0x69,0);
          return 0;
        }
        lVar5 = thunk_FUN_00712c40(pcVar7 + 10,&DAT_00806cb5);
        pcVar7 = pcVar7 + 10 + lVar5;
        lVar5 = thunk_FUN_00712880(pcVar7,&DAT_00806cc1);
        pcVar8 = pcVar7 + lVar5;
        cVar2 = *pcVar8;
        *pcVar8 = '\0';
        lVar5 = FUN_0040d740(pcVar7);
        *param_2 = lVar5;
        *pcVar8 = cVar2;
        lVar6 = thunk_FUN_00712c40(pcVar8,&DAT_00806cb5);
        pcVar8 = pcVar8 + lVar6;
        if (lVar5 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/pem/pem_lib.c",0x225,"PEM_get_EVP_CIPHER_INFO");
          FUN_0051f8f0(9,0x72,0);
          return 0;
        }
        iVar3 = FUN_00409910(lVar5);
        if (iVar3 < 1) {
          if ((iVar3 == 0) && (*pcVar8 == ',')) {
            FUN_0051f420();
            FUN_0051f540("../crypto/pem/pem_lib.c",0x22d,"PEM_get_EVP_CIPHER_INFO");
            FUN_0051f8f0(9,0x82,0);
            return 0;
          }
        }
        else {
          if (*pcVar8 != ',') {
            FUN_0051f420();
            FUN_0051f540("../crypto/pem/pem_lib.c",0x22a,"PEM_get_EVP_CIPHER_INFO");
            FUN_0051f8f0(9,0x81,0);
            return 0;
          }
          pcVar8 = pcVar8 + 1;
        }
        iVar3 = FUN_00409910(lVar5);
        if (0 < iVar3) {
          thunk_FUN_00713720(param_2 + 1,0,(long)iVar3);
          lVar5 = 0;
          do {
            iVar4 = FUN_0041c520(pcVar8[lVar5]);
            if (iVar4 < 0) {
              FUN_0051f420();
              FUN_0051f540("../crypto/pem/pem_lib.c",0x243,"load_iv");
              FUN_0051f8f0(9,0x67,0);
              return 0;
            }
            uVar10 = (uint)lVar5;
            lVar5 = lVar5 + 1;
            pbVar1 = (byte *)((long)(param_2 + 1) + (long)((int)uVar10 >> 1));
            *pbVar1 = *pbVar1 | (byte)(iVar4 << ((byte)(~uVar10 << 2) & 4));
          } while ((int)lVar5 < iVar3 * 2);
        }
        goto LAB_00555960;
      }
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/pem/pem_lib.c",0x203,"PEM_get_EVP_CIPHER_INFO");
    FUN_0051f8f0(9,0x6a,0);
  }
  return uVar9;
}

