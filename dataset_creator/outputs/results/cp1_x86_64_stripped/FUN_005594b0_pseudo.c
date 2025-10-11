
undefined4
FUN_005594b0(undefined8 *param_1,uint param_2,uint *param_3,undefined4 *param_4,int *param_5,
            int *param_6)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_2 < 0x10) {
    return 0;
  }
  pcVar2 = (char *)*param_1;
  if (*pcVar2 == '\x06') {
    iVar3 = 1;
    if (*param_6 == 0) {
      FUN_0051f420();
      uVar4 = 0xab;
      goto LAB_0055959a;
    }
  }
  else {
    if (*pcVar2 != '\a') {
      return 0;
    }
    iVar3 = 0;
    if (*param_6 == 1) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pem/pvkfmt.c",0xb3,"ossl_do_blob_header");
      FUN_0051f8f0(9,0x78,0);
      return 0;
    }
  }
  *param_6 = iVar3;
  if (pcVar2[1] != '\x02') {
    FUN_0051f420();
    FUN_0051f540("../crypto/pem/pvkfmt.c",0xbf,"ossl_do_blob_header");
    FUN_0051f8f0(9,0x75,0);
    return 0;
  }
  *param_3 = *(uint *)(pcVar2 + 8);
  *param_4 = *(undefined4 *)(pcVar2 + 0xc);
  uVar1 = *param_3;
  if (uVar1 == 0x32415352) {
    if (*param_6 == 1) {
LAB_00559652:
      FUN_0051f420();
      FUN_0051f540("../crypto/pem/pvkfmt.c",0xd4,"ossl_do_blob_header");
      FUN_0051f8f0(9,0x78,0);
      return 0;
    }
LAB_00559738:
    iVar3 = 0;
    if (*param_5 == 1) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pem/pvkfmt.c",0xeb,"ossl_do_blob_header");
      FUN_0051f8f0(9,0x84,0);
      return 0;
    }
    goto LAB_00559560;
  }
  if (uVar1 < 0x32415353) {
    if ((uVar1 == 0x31415352) || (uVar1 == 0x31535344)) {
      if (*param_6 == 0) {
        FUN_0051f420();
        uVar4 = 0xcc;
LAB_0055959a:
        FUN_0051f540("../crypto/pem/pvkfmt.c",uVar4,"ossl_do_blob_header");
        FUN_0051f8f0(9,0x77,0);
        return 0;
      }
      if (uVar1 == 0x31415352) goto LAB_00559738;
      if (uVar1 != 0x31535344) {
        FUN_0051f420();
        uVar4 = 0xf2;
        goto LAB_00559619;
      }
      goto LAB_0055954f;
    }
  }
  else if (uVar1 == 0x32535344) {
    if (*param_6 == 1) goto LAB_00559652;
LAB_0055954f:
    iVar3 = 1;
    if (*param_5 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pem/pvkfmt.c",0xe3,"ossl_do_blob_header");
      FUN_0051f8f0(9,0x83,0);
      return 0;
    }
LAB_00559560:
    *param_5 = iVar3;
    *param_1 = pcVar2 + 0x10;
    return 1;
  }
  FUN_0051f420();
  uVar4 = 0xda;
LAB_00559619:
  FUN_0051f540("../crypto/pem/pvkfmt.c",uVar4,"ossl_do_blob_header");
  FUN_0051f8f0(9,0x74,0);
  return 0xffffffff;
}

