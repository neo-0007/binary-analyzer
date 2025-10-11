
undefined8
FUN_00430070(undefined8 param_1,undefined2 *param_2,int param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_3 + -10 <= param_5) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_pk1.c",0x85,"ossl_rsa_padding_add_PKCS1_type_2_ex");
    FUN_0051f8f0(4,0x6e,0);
    return 0;
  }
  if (param_5 < 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_pk1.c",0x88,"ossl_rsa_padding_add_PKCS1_type_2_ex");
    FUN_0051f8f0(4,0xb5,0);
    return 0;
  }
  pcVar2 = (char *)(param_2 + 1);
  *param_2 = 0x200;
  iVar3 = (param_3 + -3) - param_5;
  iVar1 = FUN_00429580(param_1,pcVar2,(long)iVar3,0);
  if (iVar1 < 1) {
    return 0;
  }
  pcVar4 = pcVar2;
  if (0 < iVar3) {
    pcVar4 = (char *)((long)param_2 + (ulong)(iVar3 + 2));
    do {
      while (*pcVar2 != '\0') {
        pcVar2 = pcVar2 + 1;
        if (pcVar4 == pcVar2) goto LAB_004300fe;
      }
      do {
        iVar1 = FUN_00429580(param_1,pcVar2,1,0);
        if (iVar1 < 1) {
          return 0;
        }
      } while (*pcVar2 == '\0');
      pcVar2 = pcVar2 + 1;
    } while (pcVar4 != pcVar2);
  }
LAB_004300fe:
  *pcVar4 = '\0';
  thunk_FUN_00713a50(pcVar4 + 1,param_4,(long)param_5);
  return 1;
}

