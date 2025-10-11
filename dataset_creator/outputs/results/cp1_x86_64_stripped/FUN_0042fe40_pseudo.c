
int FUN_0042fe40(undefined8 param_1,int param_2,char *param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_5 < 0xb) {
    return -1;
  }
  if (param_5 == param_4) {
    cVar1 = *param_3;
    param_3 = param_3 + 1;
    if (cVar1 != '\0') {
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_pk1.c",0x4f,"RSA_padding_check_PKCS1_type_1");
      FUN_0051f8f0(4,0x8a,0);
      return -1;
    }
    param_4 = param_4 + -1;
  }
  else if (param_4 + 1 != param_5) goto LAB_0042ff26;
  pcVar3 = param_3 + 1;
  if (*param_3 == '\x01') {
    param_4 = param_4 + -1;
    if (param_4 < 1) {
      if (param_4 != 0) {
LAB_0042feee:
        FUN_0051f420(param_1,pcVar3);
        FUN_0051f540("../crypto/rsa/rsa_pk1.c",0x6f,"RSA_padding_check_PKCS1_type_1");
        FUN_0051f8f0(4,0x67,0);
        return -1;
      }
    }
    else {
      iVar2 = 0;
      do {
        if (*pcVar3 != -1) {
          if (*pcVar3 != '\0') {
            FUN_0051f420();
            FUN_0051f540("../crypto/rsa/rsa_pk1.c",0x62,"RSA_padding_check_PKCS1_type_1");
            FUN_0051f8f0(4,0x66,0);
            return -1;
          }
          pcVar3 = pcVar3 + 1;
          if (iVar2 != param_4) {
            if (7 < iVar2) {
              param_4 = param_4 - (iVar2 + 1);
              if (param_4 <= param_2) {
                thunk_FUN_00713a50(param_1,pcVar3,param_4);
                return param_4;
              }
              FUN_0051f420(param_1,pcVar3);
              FUN_0051f540("../crypto/rsa/rsa_pk1.c",0x75,"RSA_padding_check_PKCS1_type_1");
              FUN_0051f8f0(4,0x6d,0);
              return -1;
            }
            goto LAB_0042feee;
          }
          break;
        }
        iVar2 = iVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (param_4 != iVar2);
    }
    FUN_0051f420(param_1,pcVar3);
    FUN_0051f540("../crypto/rsa/rsa_pk1.c",0x6a,"RSA_padding_check_PKCS1_type_1");
    FUN_0051f8f0(4,0x71,0);
    return -1;
  }
LAB_0042ff26:
  FUN_0051f420();
  FUN_0051f540("../crypto/rsa/rsa_pk1.c",0x56,"RSA_padding_check_PKCS1_type_1");
  FUN_0051f8f0(4,0x6a,0);
  return -1;
}

