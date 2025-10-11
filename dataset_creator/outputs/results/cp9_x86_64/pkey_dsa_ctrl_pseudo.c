
int pkey_dsa_ctrl(long param_1,int param_2,uint param_3,undefined8 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  puVar1 = *(uint **)(param_1 + 0x98);
  if (param_2 < 0xe) {
    if (param_2 < 1) {
      return -2;
    }
    switch(param_2) {
    case 1:
      iVar2 = EVP_MD_get_type(param_4);
      if (((((iVar2 == 0x40) || (iVar2 = EVP_MD_get_type(param_4), iVar2 == 0x74)) ||
           ((iVar2 = EVP_MD_get_type(param_4), iVar2 == 0x42 ||
            ((((iVar2 = EVP_MD_get_type(param_4), iVar2 == 0x2a3 ||
               (iVar2 = EVP_MD_get_type(param_4), iVar2 == 0x2a0)) ||
              (iVar2 = EVP_MD_get_type(param_4), iVar2 == 0x2a1)) ||
             ((iVar2 = EVP_MD_get_type(param_4), iVar2 == 0x2a2 ||
              (iVar2 = EVP_MD_get_type(param_4), iVar2 == 0x448)))))))) ||
          (iVar2 = EVP_MD_get_type(param_4), iVar2 == 0x449)) ||
         ((iVar2 = EVP_MD_get_type(param_4), iVar2 == 0x44a ||
          (iVar2 = EVP_MD_get_type(param_4), iVar2 == 1099)))) {
        *(undefined8 **)(puVar1 + 6) = param_4;
        return param_2;
      }
      ERR_new();
      uVar3 = 0xa2;
LAB_004cd67f:
      ERR_set_debug("../crypto/dsa/dsa_pmeth.c",uVar3,"pkey_dsa_ctrl");
      ERR_set_error(10,0x6a,0);
      return 0;
    case 2:
      ERR_new();
      ERR_set_debug("../crypto/dsa/dsa_pmeth.c",0xb2,"pkey_dsa_ctrl");
      ERR_set_error(10,0x96,0);
      return -2;
    case 5:
    case 7:
    case 0xb:
      return 1;
    case 0xd:
      *param_4 = *(undefined8 *)(puVar1 + 6);
      return 1;
    }
  }
  else if (param_2 == 0x1002) {
    if (((param_3 & 0xffffffbf) == 0xa0) || ((param_3 & 0xfffffeff) == 0)) {
      puVar1[1] = param_3;
      return 1;
    }
  }
  else {
    if (param_2 == 0x1003) {
      iVar2 = EVP_MD_get_type(param_4);
      if (((iVar2 == 0x40) || (iVar2 = EVP_MD_get_type(param_4), iVar2 == 0x2a3)) ||
         (iVar2 = EVP_MD_get_type(param_4), iVar2 == 0x2a0)) {
        *(undefined8 **)(puVar1 + 2) = param_4;
        return 1;
      }
      ERR_new();
      uVar3 = 0x90;
      goto LAB_004cd67f;
    }
    if ((param_2 == 0x1001) && (0xff < (int)param_3)) {
      *puVar1 = param_3;
      return 1;
    }
  }
  return -2;
}

