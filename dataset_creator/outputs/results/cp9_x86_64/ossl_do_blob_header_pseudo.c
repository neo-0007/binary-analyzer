
undefined4
ossl_do_blob_header(undefined8 *param_1,uint param_2,uint *param_3,undefined4 *param_4,int *param_5,
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
      ERR_new();
      uVar4 = 0xab;
      goto LAB_00543e4a;
    }
  }
  else {
    if (*pcVar2 != '\a') {
      return 0;
    }
    iVar3 = 0;
    if (*param_6 == 1) {
      ERR_new();
      ERR_set_debug("../crypto/pem/pvkfmt.c",0xb3,"ossl_do_blob_header");
      ERR_set_error(9,0x78,0);
      return 0;
    }
  }
  *param_6 = iVar3;
  if (pcVar2[1] != '\x02') {
    ERR_new();
    ERR_set_debug("../crypto/pem/pvkfmt.c",0xbf,"ossl_do_blob_header");
    ERR_set_error(9,0x75,0);
    return 0;
  }
  *param_3 = *(uint *)(pcVar2 + 8);
  *param_4 = *(undefined4 *)(pcVar2 + 0xc);
  uVar1 = *param_3;
  if (uVar1 == 0x32415352) {
    if (*param_6 == 1) {
LAB_00543f02:
      ERR_new();
      ERR_set_debug("../crypto/pem/pvkfmt.c",0xd4,"ossl_do_blob_header");
      ERR_set_error(9,0x78,0);
      return 0;
    }
LAB_00543fe8:
    iVar3 = 0;
    if (*param_5 == 1) {
      ERR_new();
      ERR_set_debug("../crypto/pem/pvkfmt.c",0xeb,"ossl_do_blob_header");
      ERR_set_error(9,0x84,0);
      return 0;
    }
    goto LAB_00543e10;
  }
  if (uVar1 < 0x32415353) {
    if ((uVar1 == 0x31415352) || (uVar1 == 0x31535344)) {
      if (*param_6 == 0) {
        ERR_new();
        uVar4 = 0xcc;
LAB_00543e4a:
        ERR_set_debug("../crypto/pem/pvkfmt.c",uVar4,"ossl_do_blob_header");
        ERR_set_error(9,0x77,0);
        return 0;
      }
      if (uVar1 == 0x31415352) goto LAB_00543fe8;
      if (uVar1 != 0x31535344) {
        ERR_new();
        uVar4 = 0xf2;
        goto LAB_00543ec9;
      }
      goto LAB_00543dff;
    }
  }
  else if (uVar1 == 0x32535344) {
    if (*param_6 == 1) goto LAB_00543f02;
LAB_00543dff:
    iVar3 = 1;
    if (*param_5 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/pem/pvkfmt.c",0xe3,"ossl_do_blob_header");
      ERR_set_error(9,0x83,0);
      return 0;
    }
LAB_00543e10:
    *param_5 = iVar3;
    *param_1 = pcVar2 + 0x10;
    return 1;
  }
  ERR_new();
  uVar4 = 0xda;
LAB_00543ec9:
  ERR_set_debug("../crypto/pem/pvkfmt.c",uVar4,"ossl_do_blob_header");
  ERR_set_error(9,0x74,0);
  return 0xffffffff;
}

