
long PKCS8_encrypt_ex(int param_1,long param_2,undefined8 param_3,undefined4 param_4,
                     undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                     undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  X509_ALGOR *a;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == -1) {
    if (param_2 == 0) {
      ERR_new();
      uVar3 = 0x1b;
LAB_00546c61:
      ERR_set_debug("../crypto/pkcs12/p12_p8e.c",uVar3,"PKCS8_encrypt_ex");
      ERR_set_error(0x23,0xc0102,0);
      return 0;
    }
    param_1 = -1;
  }
  else {
    ERR_set_mark();
    iVar1 = EVP_PBE_find(1,param_1,(int *)0x0,(int *)0x0,(undefined1 **)0x0);
    if (iVar1 == 0) {
      ERR_pop_to_mark();
      a = (X509_ALGOR *)PKCS5_pbe_set_ex(param_1,param_7,param_5,param_6,param_9);
      goto LAB_00546b66;
    }
    ERR_clear_last_mark();
    if (param_2 == 0) {
      ERR_new();
      uVar3 = 0x25;
      goto LAB_00546c61;
    }
  }
  a = (X509_ALGOR *)PKCS5_pbe2_set_iv_ex(param_2,param_7,param_5,param_6,0,param_1,param_9);
LAB_00546b66:
  if (a == (X509_ALGOR *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/pkcs12/p12_p8e.c",0x30,"PKCS8_encrypt_ex");
    ERR_set_error(0x23,0x8000d,0);
    lVar2 = 0;
  }
  else {
    lVar2 = PKCS8_set0_pbe_ex(param_3,param_4,param_8,a,param_9,param_10);
    if (lVar2 == 0) {
      X509_ALGOR_free(a);
    }
  }
  return lVar2;
}

