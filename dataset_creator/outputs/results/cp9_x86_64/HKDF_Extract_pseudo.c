
bool HKDF_Extract(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  
  bVar4 = false;
  iVar1 = EVP_MD_get_size(param_2);
  if (-1 < iVar1) {
    if (iVar1 == param_8) {
      iVar1 = EVP_MD_get_size(param_2);
      uVar2 = EVP_MD_get0_name(param_2);
      lVar3 = EVP_Q_mac(param_1,&DAT_007c9964,0,uVar2,0,param_3,param_4,param_5,param_6,param_7,
                        (long)iVar1,0);
      bVar4 = lVar3 != 0;
    }
    else {
      ERR_new();
      ERR_set_debug("../providers/implementations/kdfs/hkdf.c",0x19e,"HKDF_Extract");
      ERR_set_error(0x39,0x8b,0);
    }
  }
  return bVar4;
}

